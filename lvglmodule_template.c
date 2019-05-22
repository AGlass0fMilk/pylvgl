#include "Python.h"
#include "structmember.h"
#undef B0 // Workaround for lvgl Issue 941 https://github.com/littlevgl/lvgl/issues/941
#include "lvgl/lvgl.h"

#if LV_COLOR_DEPTH != 16
#error Only 16 bits color depth is currently supported
#endif


/* Note on the lvgl lock and the GIL:
 *
 * Any attempt to aquire the lock should be with the GIL released. Otherwise,
 * The following situation could occur:
 *
 * Thread 1:                    Thread 2 (lv_poll called)
 *   has the GIL                  has the lvgl lock
 *   waits for lvgl lock          process callback --> aquire GIL
 *
 * This would be a deadlock situation
 */

#define LVGL_LOCK \
    if (lock) { \
        Py_BEGIN_ALLOW_THREADS \
        lock(lock_arg); \
        Py_END_ALLOW_THREADS \
    }

#define LVGL_UNLOCK \
    if (unlock) { unlock(unlock_arg); }
 

/****************************************************************
 * Object struct definitions                                    *
 ****************************************************************/

<<<objects:{structcode}>>>

/****************************************************************
 * Forward declaration of type objects                          *
 ****************************************************************/

PyObject *typesdict = NULL;

<<<objects:
static PyTypeObject pylv_{name}_Type;
>>>

<<<allstructs:
static PyTypeObject pylv_{name}_Type;
>>>

/****************************************************************
 * Helper functons                                              *  
 ****************************************************************/

static void (*lock)(void*) = NULL;
static void* lock_arg = 0;

static void (*unlock)(void*) = NULL;
static void* unlock_arg = 0;

/* 
 * This function itself is not thread-safe
 */
void lv_set_lock_unlock( void (*flock)(void *), void * flock_arg, 
            void (*funlock)(void *), void * funlock_arg)
{
    lock_arg = flock_arg;
    unlock_arg = funlock_arg;
    lock = flock;
    unlock = funlock;
}


static lv_res_t pylv_signal_cb(lv_obj_t * obj, lv_signal_t sign, void * param)
{
    pylv_Obj* py_obj = (*(pylv_Obj**)(lv_obj_get_user_data(obj)));
    if (py_obj) {
        if (sign == LV_SIGNAL_CLEANUP) {
            py_obj->ref = NULL; // mark object as deleted
            
            // remove reference to Python object
            lv_obj_set_user_data(obj, NULL);
	    Py_DECREF(py_obj); 
        }

    }
    return py_obj->orig_signal_cb(obj, sign, param);
}

int check_alive(pylv_Obj* obj) {
    if (!obj->ref) {
        PyErr_SetString(PyExc_RuntimeError, "the underlying C object has been deleted");
        return -1;
    }
    return 0;
}

static void install_signal_cb(pylv_Obj * py_obj) {
    py_obj->orig_signal_cb = lv_obj_get_signal_cb(py_obj->ref);       /*Save to old signal function*/
    lv_obj_set_signal_cb(py_obj->ref, pylv_signal_cb);
}

/* Given an lvgl lv_obj, return the accompanying Python object. If the 
 * accompanying object already exists, it is returned (with ref count increased).
 * If the lv_obj is not yet known to Python, a new Python object is created,
 * with the appropriate type (which is determined using lv_obj_get_type and the
 * typesdict dictionary of lv_obj_type name (string) --> Python Type
 *
 * Returns a new reference
 */

PyObject * pyobj_from_lv(lv_obj_t *obj) {
    pylv_Obj *pyobj;
    lv_obj_type_t objtype;
    const char *objtype_str;
    PyTypeObject *tp = NULL;

    if (!obj) {
        Py_RETURN_NONE;
    }
    
    pyobj = *((pylv_Obj**)lv_obj_get_user_data(obj));
    
    if (!pyobj) {
        // Python object for this lv object does not yet exist. Create a new one
        // Be sure to zero out the memory
        
        lv_obj_get_type(obj, &objtype);
        objtype_str = objtype.type[0];
        if (objtype_str) {
            tp = (PyTypeObject *)PyDict_GetItemString(typesdict, objtype_str); // borrowed reference
        }
        if (!tp) tp = &pylv_obj_Type; // Default to Obj (should not happen; lv_obj_get_type failed or result not found in typesdict)

        pyobj = PyObject_Malloc(tp->tp_basicsize);
        if (!pyobj) return NULL;
        memset(pyobj, 0, tp->tp_basicsize);
        PyObject_Init((PyObject *)pyobj, tp);
        pyobj -> ref = obj;
        lv_obj_set_user_data(obj, pyobj);
        install_signal_cb(pyobj);
        // reference count for pyobj is 1 -- the reference stored in the lvgl object user_data
    }

    Py_INCREF(pyobj); // increase reference count of returned object
    
    return (PyObject *)pyobj;
}

/* Given a pointer to a c struct, return the Python struct object
 * of that struct.
 *
 * This is only possible for struct pointers that already have an
 * associated Python object, i.e. the global ones and those
 * created from Python
 *
 * The module global struct_dict dictionary stores all struct
 * objects known
 */
 
static PyObject* struct_dict;

static PyObject *pystruct_from_lv(void *c_struct) {
    PyObject *ret;
    PyObject *ptr;
    ptr = PyLong_FromVoidPtr(c_struct);
    if (!ptr) return NULL;
    
    ret = PyDict_GetItem(struct_dict, ptr);
    Py_DECREF(ptr);

    if (ret) {
        Py_INCREF(ret); // ret is a borrowed reference; so need to increase ref count
    } else {
        PyErr_SetString(PyExc_RuntimeError, "the returned c struct is unknown to Python");
    }
    return ret;
}


/****************************************************************
 * Custom types: enums                                          *  
 ****************************************************************/

static PyType_Slot enum_slots[] = {
    {0, 0},
};

/* Create a new class which represents an enumeration
 * variadic arguments are char* name, int value, ... , NULL
 * representing the enum values
 */
static PyObject* build_enum(char *name, ...) {

    va_list args;
    va_start(args, name);

    PyType_Spec spec = {
        .name = name,
        .basicsize = sizeof(PyObject),
        .itemsize = 0,
        .flags = Py_TPFLAGS_DEFAULT,
        .slots = enum_slots /* terminated by slot==0. */
    };
    
    PyObject *enum_type = PyType_FromSpec(&spec);
    if (!enum_type) return NULL;
    
    ((PyTypeObject*)enum_type)->tp_new = NULL; // enum objects cannot be instantiated
    
    while(1) {
        char *name = va_arg(args, char*);
        if (!name) break;
        
        PyObject *value;
        value = PyLong_FromLong(va_arg(args, int));
        if (!value) goto error;
        
        PyObject_SetAttrString(enum_type, name, value);
        Py_DECREF(value);
    }

    return enum_type;

error:
    Py_DECREF(enum_type);
    return NULL;

}


/****************************************************************
 * Custom types: structs                                        *  
 ****************************************************************/
typedef struct {
    PyObject_HEAD
    void *data;
    size_t size;
    PyObject *owner; // NULL = reference to global C data, self=allocated @ init, other object=sharing from that object; decref owner when we are deallocated
} StructObject;


static PyObject*
Struct_repr(StructObject *self) {
    return PyUnicode_FromFormat("<%s struct at %p data = %p (%d bytes) owner = %p>", Py_TYPE(self)->tp_name, self, self->data, self->size, self->owner);
}

static void
Struct_dealloc(StructObject *self)
{
    if (self->owner == (PyObject *)self) {
        PyMem_Free(self->data);
    } else {
        Py_XDECREF(self->owner); // owner could be NULL if data is global, in that case this statement has no effect
    }
    Py_TYPE(self)->tp_free((PyObject *) self);
}

// Provide a read-write buffer to the binary data in this struct
static int Struct_getbuffer(PyObject *exporter, Py_buffer *view, int flags) {
    return PyBuffer_FillInfo(view, exporter, ((StructObject*)exporter)->data, ((StructObject*)exporter)->size, 0, flags);
}

static PyBufferProcs Struct_bufferprocs = {
    (getbufferproc)Struct_getbuffer,
    NULL,
};

// Helper to create struct object for global lvgl variables
// This also adds those Python objects to struct_dict so that they can be
// returned from object calls
static PyObject *
Struct_fromglobal(PyTypeObject *type, void* ptr, size_t size) {
    StructObject *ret = 0;
    PyObject *ptr_long = 0;
    ret = (StructObject*)PyObject_New(StructObject, type);
    if (!ret) return NULL;

    ptr_long = PyLong_FromVoidPtr(ptr);
    
    if (!ptr_long) {
        Py_DECREF(ret);
        return NULL;
    }
    
    if (PyDict_SetItem(struct_dict, ptr_long, (PyObject*) ret)) { // todo: use weak references
        Py_DECREF(ret);
        Py_DECREF(ptr_long);
        return NULL;
    }

    Py_DECREF(ptr_long);

    ret->owner = NULL; // owner = NULL means: global data, do not free
    ret->data = ptr;
    ret->size = size;

    return (PyObject*)ret;


}


// Struct members whose type is unsupported, get / set a 'blob', which stores
// a reference to the data, which can be copied but not accessed otherwise

static PyTypeObject Blob_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "lvgl.blob",
    .tp_doc = "lvgl data blob",
    .tp_basicsize = sizeof(StructObject),
    .tp_itemsize = 0,
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .tp_new = NULL, // cannot be instantiated
    .tp_repr = (reprfunc) Struct_repr,
    .tp_dealloc = (destructor) Struct_dealloc,
    .tp_as_buffer = &Struct_bufferprocs
};



static int long_to_int(PyObject *value, long *v, long min, long max) {
    long r = PyLong_AsLong(value);
    if ((r == -1) && PyErr_Occurred()) return -1;
    if ((r<min) || (r>max)) {
        PyErr_Format(PyExc_ValueError, "value out of range %ld..%ld", min, max);
        return -1;
    }
    *v = r;
    return 0;
}   

/* struct member getter/setter for [u]int(8|16|32)_t */
<<<struct_inttypes:
static PyObject *
struct_get_{type}(StructObject *self, void *closure)
{{
    return PyLong_FromLong(*(({type}_t*)((char*)self->data + (int)closure) ));
}}

static int
struct_set_{type}(StructObject *self, PyObject *value, void *closure)
{{
    long v;
    if (long_to_int(value, &v, {min}, {max})) return -1;
    
    *(({type}_t*)((char*)self->data + (int)closure) ) = v;
    return 0;
}}
>>>

/* struct member getter/setter for type 'struct' for sub-structs and unions */
typedef struct {
  PyTypeObject *type;
  size_t offset;
  size_t size;
} struct_closure_t;

static PyObject *
struct_get_struct(StructObject *self, struct_closure_t *closure) {
    StructObject *ret;    
    ret = (StructObject*)PyObject_New(StructObject, closure->type);
    if (ret) {
        ret->owner = self->owner;
        Py_INCREF(self->owner);
        ret->data = self->data + closure->offset;
        ret->size = closure->size;
    }
    return (PyObject*)ret;

}


/* Generic setter for atrributes which are a struct
 *
 * Setting can be via either an object of the same type, or via a dict,
 * which is passed as a keyword argument dict to a constructor of the struct
 * for the appropriate type
 *
 * NOTE: if setting items via a dict fails, some items may have been set already
 */
static int
struct_set_struct(StructObject *self, PyObject *value, struct_closure_t *closure) {

    PyObject *attr = NULL;
    if (PyDict_Check(value)) {
        // Set attribute sub-items from dictionary items
    
        // get a struct object for the attribute we are setting
        attr = struct_get_struct(self, closure);
        if (!attr) return -1;
        
        // Iterate over the value dictionary
        PyObject *dict_key, *dict_value;
        Py_ssize_t pos = 0;
        
        while (PyDict_Next(value, &pos, &dict_key, &dict_value)) {
            // Set the attribute on the attr attribute
            if (PyObject_SetAttr(attr, dict_key, dict_value)) return -1;
        }  
        
        Py_DECREF(attr);
        return 0;
        
    }
    
    
    int isinstance = PyObject_IsInstance(value, (PyObject *)closure->type);
    
    if (isinstance == -1) return -1; // error
    if (!isinstance) {
        PyErr_Format(PyExc_TypeError, "value should be an instance of '%s' or a dict", closure->type->tp_name);
        return -1;
    }
    if(closure->size != ((StructObject *)value)->size) {
        // Should only happen in case of Blob type; but just check always to be sure
        PyErr_SetString(PyExc_ValueError, "data size mismatch");
        return -1;
    }
    memcpy(self->data + closure->offset, ((StructObject *)value)->data, closure->size);
    
    return 0;
}



<<<structs:

static int
pylv_{name}_init(StructObject *self, PyObject *args, PyObject *kwds) 
{{
    StructObject *copy = NULL;
    // copy is a positional-only argument
    if (!PyArg_ParseTuple(args, "|O!", &pylv_{name}_Type, &copy)) return -1;
    
    self->size = sizeof(lv_{name});
    self->data = PyMem_Malloc(self->size);
    if (!self->data) return -1;
    
    if (copy) {{
        assert(self->size == copy->size); // should be same size, since same type
        memcpy(self->data, copy->data, self->size);
    }} else {{
        memset(self->data, 0, self->size);
    }}
    
    self->owner = (PyObject *)self;

    if (kwds) {{
        // all keyword arguments are attribute-assignments
        PyObject *key, *value;
        Py_ssize_t pos = 0;
        
        while (PyDict_Next(kwds, &pos, &key, &value)) {{
            if (PyObject_SetAttr((PyObject*)self, key, value)) return -1;
        }}   
    }}

    return 0;
}}

{getset}

static PyTypeObject pylv_{name}_Type = {{
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "lvgl.{name}",
    .tp_doc = "lvgl {name}",
    .tp_basicsize = sizeof(StructObject),
    .tp_itemsize = 0,
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .tp_new = PyType_GenericNew,
    .tp_init = (initproc) pylv_{name}_init,
    .tp_dealloc = (destructor) Struct_dealloc,
    .tp_getset = pylv_{name}_getset,
    .tp_repr = (reprfunc) Struct_repr,
    .tp_as_buffer = &Struct_bufferprocs
}};

static int pylv_{name}_arg_converter(PyObject *obj, void* target) {{
    int isinst;
    // TODO: support dictionary as argument; create a new struct object in that case
    isinst = PyObject_IsInstance(obj, (PyObject*)&pylv_{name}_Type);
    if (isinst == 0) {{
        PyErr_Format(PyExc_TypeError, "argument should be of type lv_{name}");
    }}
    if (isinst != 1) {{
        return 0;
    }}
    *(lv_{name} **)target = ((StructObject*)obj) -> data;
    Py_INCREF(obj); // Required since **target now uses the data. TODO: this leaks a reference; also support Py_CLEANUP_SUPPORTED
    return 1;

}}


>>>

<<<substructs:

{getset}

static PyTypeObject pylv_{name}_Type = {{
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "lvgl.{name}",
    .tp_doc = "lvgl {name}",
    .tp_basicsize = sizeof(StructObject),
    .tp_itemsize = 0,
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .tp_new = NULL, // sub structs cannot be instantiated
    .tp_dealloc = (destructor) Struct_dealloc,
    .tp_getset = pylv_{name}_getset,
    .tp_repr = (reprfunc) Struct_repr,
    .tp_as_buffer = &Struct_bufferprocs
}};

>>>


/****************************************************************
 * Custom method implementations                                *
 ****************************************************************/
 
/*
 * lv_obj_get_child and lv_obj_get_child_back are not really Pythonic. This
 * implementation returns a list of children
 */
 
static PyObject*
pylv_obj_get_children(pylv_Obj *self, PyObject *args, PyObject *kwds)
{
    lv_obj_t *child = NULL;
    PyObject *pychild;
    PyObject *ret = PyList_New(0);
    if (!ret) return NULL;
    
    LVGL_LOCK
    
    while (1) {
        child = lv_obj_get_child(self->ref, child);
        if (!child) break;
        pychild = pyobj_from_lv(child);
        
        if (PyList_Append(ret, pychild)) { // PyList_Append increases refcount
            Py_DECREF(ret);
            Py_DECREF(pychild);
            ret = NULL;
            break;
        }
        Py_DECREF(pychild);
    }

    LVGL_UNLOCK
    
    return ret;
}

static PyObject*
pylv_obj_get_type(pylv_Obj *self, PyObject *args, PyObject *kwds)
{
    lv_obj_type_t result;
    PyObject *list = NULL;
    PyObject *str = NULL;
    
    LVGL_LOCK
    lv_obj_get_type(self->ref, &result);
    LVGL_UNLOCK
    
    list = PyList_New(0);
    
    for(int i=0; i<LV_MAX_ANCESTOR_NUM;i++) {
        if (!result.type[i]) break;

        str = PyUnicode_FromString(result.type[i]);
        if (!str) goto error;
        
        if (PyList_Append(list, str)) goto error; // PyList_Append increases refcount
    }
  
    return list;
    
error:
    Py_XDECREF(list);
    Py_XDECREF(str);  
    return NULL;
}



static PyObject*
pylv_label_get_letter_pos(pylv_Label *self, PyObject *args, PyObject *kwds)
{
    static char *kwlist[] = {"index", NULL};
    int index;
    lv_point_t pos;
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i", kwlist , &index)) return NULL;   
    
    LVGL_LOCK
    lv_label_get_letter_pos(self->ref, index, &pos);
    LVGL_UNLOCK

    return Py_BuildValue("ii", (int) pos.x, (int) pos.y);
}

static PyObject*
pylv_label_get_letter_on(pylv_Label *self, PyObject *args, PyObject *kwds)
{
    static char *kwlist[] = {"pos", NULL};
    int x, y, index;
    lv_point_t pos;
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "(ii)", kwlist , &x, &y)) return NULL;   
    
    pos.x = x;
    pos.y = y;
    
    LVGL_LOCK
    index = lv_label_get_letter_on(self->ref, &pos);
    LVGL_UNLOCK

    return Py_BuildValue("i", index);
}




static PyObject*
pylv_list_add(pylv_List *self, PyObject *args, PyObject *kwds)
{
    static char *kwlist[] = {"img_src", "txt", "rel_action", NULL};
    PyObject *img_src;
    const char *txt;
    PyObject *rel_action;
    PyObject *ret;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OsO", kwlist , &img_src, &txt, &rel_action)) return NULL; 
      
    if ( img_src!=Py_None || rel_action!=Py_None) {
        PyErr_SetString(PyExc_ValueError, "only img_src == None and rel_action == None is currently supported");
        return NULL;
    } 

    LVGL_LOCK
    ret = pyobj_from_lv(lv_list_add(self->ref, NULL, txt, NULL));
    LVGL_UNLOCK
    
    return ret;

}


// lv_list_focus takes lv_obj_t* as first argument, but it is not the list itself!
static PyObject*
pylv_list_focus(pylv_List *self, PyObject *args, PyObject *kwds)
{
    static char *kwlist[] = {"obj", "anim_en", NULL};
    pylv_Btn * obj;
    lv_obj_t *parent;
    int anim_en;
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!p", kwlist , &pylv_btn_Type, &obj, &anim_en)) return NULL;
    
    LVGL_LOCK         
    
    parent = lv_obj_get_parent(obj->ref);
    if (parent) parent = lv_obj_get_parent(parent); // get the obj's parent's parent in a safe way
    
    if (parent != self->ref) {
        if (unlock) unlock(unlock_arg);
        return PyErr_Format(PyExc_RuntimeError, "%R is not a child of %R", obj, self);
    }
    
    lv_list_focus(obj->ref, anim_en);
    
    LVGL_UNLOCK
    Py_RETURN_NONE;
}



/****************************************************************
 * Methods and object definitions                               *
 ****************************************************************/

<<<objects:
static void
pylv_{name}_dealloc(pylv_{pyname} *self) 
{{
    // the accompanying lv_obj holds a reference to the Python object, so
    // dealloc can only take place if the lv_obj has already been deleted using
    // Obj.del_() or .clean() on ints parents. 
    
    if (self->weakreflist != NULL)
        PyObject_ClearWeakRefs((PyObject *) self);

    Py_TYPE(self)->tp_free((PyObject *) self);

}}

static int
pylv_{name}_init(pylv_{pyname} *self, PyObject *args, PyObject *kwds) 
{{
    static char *kwlist[] = {{"parent", "copy", NULL}};
    pylv_Obj *parent=NULL;
    pylv_{pyname} *copy=NULL;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|O!O!", kwlist, &pylv_obj_Type, &parent, &pylv_{name}_Type, &copy)) {{
        return -1;
    }}   
    
    LVGL_LOCK
    self->ref = lv_{name}_create(parent ? parent->ref : NULL, copy ? copy->ref : NULL);
    lv_obj_set_user_data(self->ref, self);
    Py_INCREF(self); // since reference is stored in lv_obj user data
    install_signal_cb(self);
    LVGL_UNLOCK

    return 0;
}}

{methodscode}

static PyMethodDef pylv_{name}_methods[] = {{
{methodtablecode}    {{NULL}}  /* Sentinel */
}};

static PyTypeObject pylv_{name}_Type = {{
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "lvgl.{pyname}",
    .tp_doc = "lvgl {pyname}",
    .tp_basicsize = sizeof(pylv_{pyname}),
    .tp_itemsize = 0,
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .tp_new = PyType_GenericNew,
    .tp_init = (initproc) pylv_{name}_init,
    .tp_dealloc = (destructor) pylv_{name}_dealloc,
    .tp_methods = pylv_{name}_methods,
    .tp_dictoffset = offsetof(pylv_{pyname}, dict),
    .tp_weaklistoffset = offsetof(pylv_{pyname}, weakreflist),
}};
>>>




/****************************************************************
 * Miscellaneous functions                                      *
 ****************************************************************/

static PyObject *
pylv_scr_act(PyObject *self, PyObject *args) {
    lv_obj_t *scr;
    LVGL_LOCK
    scr = lv_scr_act();
    LVGL_UNLOCK
    return pyobj_from_lv(scr);
}

static PyObject *
pylv_scr_load(PyObject *self, PyObject *args, PyObject *kwds) {
    static char *kwlist[] = {"scr", NULL};
    pylv_Obj *scr;
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!", kwlist, &pylv_obj_Type, &scr)) return NULL;
    LVGL_LOCK
    lv_scr_load(scr->ref);
    LVGL_UNLOCK
    
    Py_RETURN_NONE;
}


static PyObject *
poll(PyObject *self, PyObject *args) {
    LVGL_LOCK
    lv_tick_inc(1);
    lv_task_handler();
    LVGL_UNLOCK
    
    Py_RETURN_NONE;
}


/* TODO: all the framebuffer display driver stuff could be separated (i.e. do not default to it but allow user to register custom frame buffer driver) */

static lv_color_t disp_buf1[1024 * 10];
lv_disp_buf_t disp_buffer;
char framebuffer[LV_HOR_RES_MAX * LV_VER_RES_MAX * 2];


/* disp_flush should copy from the VDB (virtual display buffer to the screen.
 * In our case, we copy to the framebuffer
 */

 
static void disp_flush(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p) {
    char *dest = framebuffer + ((area->y1)*LV_HOR_RES_MAX + area->x1) * 2;
    char *src = (char *) color_p;

    for(int32_t y = area->y1; y<=area->y2; y++) {
        memcpy(dest, src, 2*(area->x2-area->x1+1));
        src += 2*(area->x2-area->x1+1);
        dest += 2*LV_HOR_RES_MAX;
    }
    
    lv_disp_flush_ready(disp_drv);
}

static lv_disp_drv_t display_driver = {0};
static lv_indev_drv_t indev_driver = {0};
static int indev_driver_registered = 0;
static int indev_x, indev_y, indev_state=0;

static bool indev_read(struct _lv_indev_drv_t * indev_drv, lv_indev_data_t *data) {
    data->point.x = indev_x;
    data->point.y = indev_y;
    data->state = indev_state;

    return false;
}


static PyObject *
send_mouse_event(PyObject *self, PyObject *args, PyObject *kwds) {
    static char *kwlist[] = {"x", "y", "pressed", NULL};
    int x=0, y=0, pressed=0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "iip", kwlist, &x, &y, &pressed)) {
        return NULL;
    }
    
    if (!indev_driver_registered) {
        lv_indev_drv_init(&indev_driver);
        indev_driver.type = LV_INDEV_TYPE_POINTER;
        indev_driver.read_cb = indev_read;
        lv_indev_drv_register(&indev_driver);
        indev_driver_registered = 1;
    }
    indev_x = x;
    indev_y = y;
    indev_state = pressed ? LV_INDEV_STATE_PR : LV_INDEV_STATE_REL;
    
    Py_RETURN_NONE;
}


/****************************************************************
 *  Module global stuff                                         *
 ****************************************************************/


static PyMethodDef lvglMethods[] = {
    {"scr_act",  pylv_scr_act, METH_NOARGS, NULL},
    {"scr_load", (PyCFunction)pylv_scr_load, METH_VARARGS | METH_KEYWORDS, NULL},
    {"poll", poll, METH_NOARGS, NULL},
    {"send_mouse_event", (PyCFunction)send_mouse_event, METH_VARARGS | METH_KEYWORDS, NULL},
//    {"report_style_mod", (PyCFunction)report_style_mod, METH_VARARGS | METH_KEYWORDS, NULL},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};



static struct PyModuleDef lvglmodule = {
    PyModuleDef_HEAD_INIT,
    "lvgl",   /* name of module */
    NULL, /* module documentation, may be NULL */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    lvglMethods
};

static PyObject*
Obj_repr(pylv_Obj *self) {
    return PyUnicode_FromFormat("<%s object at %p referencing %p>", Py_TYPE(self)->tp_name, self, self->ref);
}


PyMODINIT_FUNC
PyInit_lvgl(void) {

    PyObject *module = NULL;
    
    module = PyModule_Create(&lvglmodule);
    if (!module) goto error;
    
    pylv_obj_Type.tp_repr = (reprfunc) Obj_repr;   
    
<<<objects:
    pylv_{name}_Type.tp_base = {base};
    if (PyType_Ready(&pylv_{name}_Type) < 0) return NULL;
>>>

    if (PyType_Ready(&Blob_Type) < 0) return NULL;
<<<allstructs:
    if (PyType_Ready(&pylv_{name}_Type) < 0) return NULL;
>>>

    struct_dict = PyDict_New();
    if (!struct_dict) return NULL;
    //TODO: remove
    PyModule_AddObject(module, "_structs_", struct_dict);

<<<objects:
    Py_INCREF(&pylv_{name}_Type);
    PyModule_AddObject(module, "{pyname}", (PyObject *) &pylv_{name}_Type); 
>>>

<<<structs:
    Py_INCREF(&pylv_{name}_Type);
    PyModule_AddObject(module, "{name}", (PyObject *) &pylv_{name}_Type); 
>>>

    
<<ENUM_ASSIGNMENTS>>

<<SYMBOL_ASSIGNMENTS>>

<<GLOBALS_ASSIGNMENTS>>

    // refcount for typesdict is initally 1; it is used by pyobj_from_lv
    // refcounts to py{name}_Type objects are incremented due to "O" format
    typesdict = Py_BuildValue("{<<<objects:sO>>>}"<<<objects:,
        "lv_{name}", &pylv_{name}_Type>>>);
    
    PyModule_AddObject(module, "framebuffer", PyMemoryView_FromMemory(framebuffer, LV_HOR_RES_MAX * LV_VER_RES_MAX * 2, PyBUF_READ));
    PyModule_AddObject(module, "HOR_RES", PyLong_FromLong(LV_HOR_RES_MAX));
    PyModule_AddObject(module, "VER_RES", PyLong_FromLong(LV_VER_RES_MAX));


    lv_disp_drv_init(&display_driver);
    display_driver.hor_res = LV_HOR_RES_MAX;
    display_driver.ver_res = LV_VER_RES_MAX;
    
    display_driver.flush_cb = disp_flush;
    
    lv_disp_buf_init(&disp_buffer,disp_buf1, NULL, sizeof(disp_buf1)/sizeof(lv_color_t));
    display_driver.buffer = &disp_buffer;

    lv_init();
    
    lv_disp_drv_register(&display_driver);

    return module;
    
error:
    Py_XDECREF(module);
    return NULL;
}

