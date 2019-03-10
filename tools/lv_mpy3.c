
/*
 * Auto-Generated file, DO NOT EDIT!
 *
 * Command line:
 * gen_mpy.py -X anim -X group -I pycparser/utils/fake_libc_include ../lv_objx/lv_arc.h ../lv_objx/lv_bar.h ../lv_objx/lv_btn.h ../lv_objx/lv_btnm.h ../lv_objx/lv_calendar.h ../lv_objx/lv_cb.h ../lv_objx/lv_chart.h ../lv_objx/lv_cont.h ../lv_objx/lv_ddlist.h ../lv_objx/lv_gauge.h ../lv_objx/lv_imgbtn.h ../lv_objx/lv_img.h ../lv_objx/lv_kb.h ../lv_objx/lv_label.h ../lv_objx/lv_led.h ../lv_objx/lv_line.h ../lv_objx/lv_list.h ../lv_objx/lv_lmeter.h ../lv_objx/lv_mbox.h ../lv_objx/lv_objx_templ.h ../lv_objx/lv_page.h ../lv_objx/lv_preload.h ../lv_objx/lv_roller.h ../lv_objx/lv_slider.h ../lv_objx/lv_sw.h ../lv_objx/lv_tabview.h ../lv_objx/lv_ta.h ../lv_objx/lv_win.h
 *
 * Preprocessing command:
 * gcc -E -std=c99 -I pycparser/utils/fake_libc_include -include ../lv_objx/lv_arc.h -include ../lv_objx/lv_bar.h -include ../lv_objx/lv_btn.h -include ../lv_objx/lv_btnm.h -include ../lv_objx/lv_calendar.h -include ../lv_objx/lv_cb.h -include ../lv_objx/lv_chart.h -include ../lv_objx/lv_cont.h -include ../lv_objx/lv_ddlist.h -include ../lv_objx/lv_gauge.h -include ../lv_objx/lv_imgbtn.h -include ../lv_objx/lv_img.h -include ../lv_objx/lv_kb.h -include ../lv_objx/lv_label.h -include ../lv_objx/lv_led.h -include ../lv_objx/lv_line.h -include ../lv_objx/lv_list.h -include ../lv_objx/lv_lmeter.h -include ../lv_objx/lv_mbox.h -include ../lv_objx/lv_objx_templ.h -include ../lv_objx/lv_page.h -include ../lv_objx/lv_preload.h -include ../lv_objx/lv_roller.h -include ../lv_objx/lv_slider.h -include ../lv_objx/lv_sw.h -include ../lv_objx/lv_tabview.h -include ../lv_objx/lv_ta.h -include ../lv_objx/lv_win.h ../lv_objx/lv_arc.h
 *
 * Generating Objects: obj(None), arc(obj), cont(obj), btn(cont), label(obj), bar(obj), btnm(obj), cb(btn), line(obj), chart(obj), page(cont), ddlist(page), lmeter(obj), gauge(lmeter), img(obj), kb(btnm), led(obj), list(page), mbox(cont), preload(arc), roller(ddlist), slider(bar), sw(slider), win(obj), tabview(obj), ta(page), 
 */

/*
 * Mpy includes
 */

#include <string.h>
#include "py/obj.h"
#include "py/runtime.h"

/*
 * lvgl includes
 */

#include "../lv_objx/lv_arc.h"
#include "../lv_objx/lv_bar.h"
#include "../lv_objx/lv_btn.h"
#include "../lv_objx/lv_btnm.h"
#include "../lv_objx/lv_calendar.h"
#include "../lv_objx/lv_cb.h"
#include "../lv_objx/lv_chart.h"
#include "../lv_objx/lv_cont.h"
#include "../lv_objx/lv_ddlist.h"
#include "../lv_objx/lv_gauge.h"
#include "../lv_objx/lv_imgbtn.h"
#include "../lv_objx/lv_img.h"
#include "../lv_objx/lv_kb.h"
#include "../lv_objx/lv_label.h"
#include "../lv_objx/lv_led.h"
#include "../lv_objx/lv_line.h"
#include "../lv_objx/lv_list.h"
#include "../lv_objx/lv_lmeter.h"
#include "../lv_objx/lv_mbox.h"
#include "../lv_objx/lv_objx_templ.h"
#include "../lv_objx/lv_page.h"
#include "../lv_objx/lv_preload.h"
#include "../lv_objx/lv_roller.h"
#include "../lv_objx/lv_slider.h"
#include "../lv_objx/lv_sw.h"
#include "../lv_objx/lv_tabview.h"
#include "../lv_objx/lv_ta.h"
#include "../lv_objx/lv_win.h"


/*
 * Helper functions
 */

typedef lv_obj_t* (*lv_create)(lv_obj_t * par, const lv_obj_t * copy);

typedef struct mp_lv_obj_t {
    mp_obj_base_t base;
    lv_obj_t *lv_obj;
    mp_obj_t *action;
} mp_lv_obj_t;

STATIC inline lv_obj_t *mp_to_lv(mp_obj_t *mp_obj)
{
    if (mp_obj == NULL || mp_obj == mp_const_none) return NULL;
    mp_lv_obj_t *mp_lv_obj = MP_OBJ_TO_PTR(mp_obj);
    return mp_lv_obj->lv_obj;
}

STATIC inline mp_obj_t *mp_to_lv_action(mp_obj_t *mp_obj)
{
    if (mp_obj == NULL || mp_obj == mp_const_none) return NULL;
    mp_lv_obj_t *mp_lv_obj = MP_OBJ_TO_PTR(mp_obj);
    return mp_lv_obj->action;
}

STATIC inline void set_action(mp_obj_t *mp_obj, mp_obj_t *action)
{
    if (mp_obj == NULL || mp_obj == mp_const_none) return;
    mp_lv_obj_t *mp_lv_obj = MP_OBJ_TO_PTR(mp_obj);
    mp_lv_obj->action = action;
}

STATIC inline const mp_obj_type_t *get_BaseObj_type();

STATIC inline mp_obj_t *lv_to_mp(lv_obj_t *lv_obj)
{
    mp_lv_obj_t *self = lv_obj_get_free_ptr(lv_obj);
    if (!self) 
    {
        self = m_new_obj(mp_lv_obj_t);
        *self = (mp_lv_obj_t){
            .base = {get_BaseObj_type()},
            .lv_obj = lv_obj,
            .action = NULL
        };
    }
    return MP_OBJ_FROM_PTR(self);
}

STATIC mp_obj_t make_new(
    lv_create create,
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    mp_arg_check_num(n_args, n_kw, 1, 2, false);
    mp_lv_obj_t *self = m_new_obj(mp_lv_obj_t);
    lv_obj_t *parent = mp_to_lv(args[0]);
    lv_obj_t *copy = n_args > 1? mp_to_lv(args[1]): NULL;
    *self = (mp_lv_obj_t){
        .base = {type}, 
        .lv_obj = create(parent, copy),
        .action = NULL
    };
    lv_obj_set_free_ptr(self->lv_obj, self);
    return MP_OBJ_FROM_PTR(self);
}

STATIC inline mp_obj_t convert_to_bool(bool b)
{
    return b? mp_const_true: mp_const_false;
}

STATIC inline mp_obj_t convert_to_str(const char *str)
{
    return mp_obj_new_str(str, strlen(str));
}



    
/*
 * lvgl LV_BORDER object definitions
 */

STATIC const mp_rom_map_elem_t LV_BORDER_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(LV_BORDER_NONE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOTTOM), MP_ROM_PTR(MP_ROM_INT(LV_BORDER_BOTTOM)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TOP), MP_ROM_PTR(MP_ROM_INT(LV_BORDER_TOP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LEFT), MP_ROM_PTR(MP_ROM_INT(LV_BORDER_LEFT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_BORDER_RIGHT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FULL), MP_ROM_PTR(MP_ROM_INT(LV_BORDER_FULL)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_BORDER_locals_dict, LV_BORDER_locals_dict_table);

STATIC void LV_BORDER_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_BORDER");
}



STATIC const mp_obj_type_t mp_LV_BORDER_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_BORDER,
    .print = LV_BORDER_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_BORDER_locals_dict,
};
    

    
/*
 * lvgl LV_SHADOW object definitions
 */

STATIC const mp_rom_map_elem_t LV_SHADOW_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOTTOM), MP_ROM_PTR(MP_ROM_INT(LV_SHADOW_BOTTOM)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FULL), MP_ROM_PTR(MP_ROM_INT(LV_SHADOW_FULL)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_SHADOW_locals_dict, LV_SHADOW_locals_dict_table);

STATIC void LV_SHADOW_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_SHADOW");
}



STATIC const mp_obj_type_t mp_LV_SHADOW_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_SHADOW,
    .print = LV_SHADOW_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_SHADOW_locals_dict,
};
    

    
/*
 * lvgl LV_DESIGN object definitions
 */

STATIC const mp_rom_map_elem_t LV_DESIGN_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_DRAW_MAIN), MP_ROM_PTR(MP_ROM_INT(LV_DESIGN_DRAW_MAIN)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DRAW_POST), MP_ROM_PTR(MP_ROM_INT(LV_DESIGN_DRAW_POST)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_COVER_CHK), MP_ROM_PTR(MP_ROM_INT(LV_DESIGN_COVER_CHK)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_DESIGN_locals_dict, LV_DESIGN_locals_dict_table);

STATIC void LV_DESIGN_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_DESIGN");
}



STATIC const mp_obj_type_t mp_LV_DESIGN_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_DESIGN,
    .print = LV_DESIGN_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_DESIGN_locals_dict,
};
    

    
/*
 * lvgl LV_RES object definitions
 */

STATIC const mp_rom_map_elem_t LV_RES_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_INV), MP_ROM_PTR(MP_ROM_INT(LV_RES_INV)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OK), MP_ROM_PTR(MP_ROM_INT(LV_RES_OK)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_RES_locals_dict, LV_RES_locals_dict_table);

STATIC void LV_RES_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_RES");
}



STATIC const mp_obj_type_t mp_LV_RES_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_RES,
    .print = LV_RES_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_RES_locals_dict,
};
    

    
/*
 * lvgl LV_SIGNAL object definitions
 */

STATIC const mp_rom_map_elem_t LV_SIGNAL_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_CLEANUP), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_CLEANUP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CHILD_CHG), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_CHILD_CHG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CORD_CHG), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_CORD_CHG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE_CHG), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_STYLE_CHG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_REFR_EXT_SIZE), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_REFR_EXT_SIZE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_GET_TYPE), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_GET_TYPE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PRESSED), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_PRESSED)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PRESSING), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_PRESSING)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PRESS_LOST), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_PRESS_LOST)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RELEASED), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_RELEASED)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LONG_PRESS), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_LONG_PRESS)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LONG_PRESS_REP), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_LONG_PRESS_REP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DRAG_BEGIN), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_DRAG_BEGIN)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DRAG_END), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_DRAG_END)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FOCUS), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_FOCUS)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DEFOCUS), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_DEFOCUS)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CONTROLL), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_CONTROLL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_GET_EDITABLE), MP_ROM_PTR(MP_ROM_INT(LV_SIGNAL_GET_EDITABLE)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_SIGNAL_locals_dict, LV_SIGNAL_locals_dict_table);

STATIC void LV_SIGNAL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_SIGNAL");
}



STATIC const mp_obj_type_t mp_LV_SIGNAL_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_SIGNAL,
    .print = LV_SIGNAL_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_SIGNAL_locals_dict,
};
    

    
/*
 * lvgl LV_PROTECT object definitions
 */

STATIC const mp_rom_map_elem_t LV_PROTECT_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(LV_PROTECT_NONE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CHILD_CHG), MP_ROM_PTR(MP_ROM_INT(LV_PROTECT_CHILD_CHG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PARENT), MP_ROM_PTR(MP_ROM_INT(LV_PROTECT_PARENT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_POS), MP_ROM_PTR(MP_ROM_INT(LV_PROTECT_POS)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FOLLOW), MP_ROM_PTR(MP_ROM_INT(LV_PROTECT_FOLLOW)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PRESS_LOST), MP_ROM_PTR(MP_ROM_INT(LV_PROTECT_PRESS_LOST)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CLICK_FOCUS), MP_ROM_PTR(MP_ROM_INT(LV_PROTECT_CLICK_FOCUS)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_PROTECT_locals_dict, LV_PROTECT_locals_dict_table);

STATIC void LV_PROTECT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_PROTECT");
}



STATIC const mp_obj_type_t mp_LV_PROTECT_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_PROTECT,
    .print = LV_PROTECT_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_PROTECT_locals_dict,
};
    

    
/*
 * lvgl LV_ALIGN object definitions
 */

STATIC const mp_rom_map_elem_t LV_ALIGN_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_CENTER), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_CENTER)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_TOP_LEFT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_TOP_LEFT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_TOP_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_TOP_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_TOP_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_TOP_RIGHT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_BOTTOM_LEFT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_BOTTOM_LEFT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_BOTTOM_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_BOTTOM_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_BOTTOM_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_BOTTOM_RIGHT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_LEFT_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_LEFT_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN_RIGHT_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_IN_RIGHT_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_TOP_LEFT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_TOP_LEFT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_TOP_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_TOP_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_TOP_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_TOP_RIGHT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_BOTTOM_LEFT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_BOTTOM_LEFT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_BOTTOM_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_BOTTOM_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_BOTTOM_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_BOTTOM_RIGHT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_LEFT_TOP), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_LEFT_TOP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_LEFT_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_LEFT_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_LEFT_BOTTOM), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_LEFT_BOTTOM)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_RIGHT_TOP), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_RIGHT_TOP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_RIGHT_MID), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_RIGHT_MID)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_RIGHT_BOTTOM), MP_ROM_PTR(MP_ROM_INT(LV_ALIGN_OUT_RIGHT_BOTTOM)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_ALIGN_locals_dict, LV_ALIGN_locals_dict_table);

STATIC void LV_ALIGN_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_ALIGN");
}



STATIC const mp_obj_type_t mp_LV_ALIGN_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_ALIGN,
    .print = LV_ALIGN_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_ALIGN_locals_dict,
};
    

    
/*
 * lvgl LV_ANIM object definitions
 */

STATIC const mp_rom_map_elem_t LV_ANIM_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(LV_ANIM_NONE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FLOAT_TOP), MP_ROM_PTR(MP_ROM_INT(LV_ANIM_FLOAT_TOP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FLOAT_LEFT), MP_ROM_PTR(MP_ROM_INT(LV_ANIM_FLOAT_LEFT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FLOAT_BOTTOM), MP_ROM_PTR(MP_ROM_INT(LV_ANIM_FLOAT_BOTTOM)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FLOAT_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_ANIM_FLOAT_RIGHT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_GROW_H), MP_ROM_PTR(MP_ROM_INT(LV_ANIM_GROW_H)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_GROW_V), MP_ROM_PTR(MP_ROM_INT(LV_ANIM_GROW_V)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_ANIM_locals_dict, LV_ANIM_locals_dict_table);

STATIC void LV_ANIM_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_ANIM");
}



STATIC const mp_obj_type_t mp_LV_ANIM_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_ANIM,
    .print = LV_ANIM_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_ANIM_locals_dict,
};
    

    
/*
 * lvgl LV_ARC_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_ARC_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_MAIN), MP_ROM_PTR(MP_ROM_INT(LV_ARC_STYLE_MAIN)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_ARC_STYLE_locals_dict, LV_ARC_STYLE_locals_dict_table);

STATIC void LV_ARC_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_ARC_STYLE");
}



STATIC const mp_obj_type_t mp_LV_ARC_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_ARC_STYLE,
    .print = LV_ARC_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_ARC_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_LAYOUT object definitions
 */

STATIC const mp_rom_map_elem_t LV_LAYOUT_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_OFF), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_OFF)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CENTER), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_CENTER)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_COL_L), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_COL_L)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_COL_M), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_COL_M)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_COL_R), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_COL_R)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ROW_T), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_ROW_T)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ROW_M), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_ROW_M)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ROW_B), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_ROW_B)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PRETTY), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_PRETTY)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_GRID), MP_ROM_PTR(MP_ROM_INT(LV_LAYOUT_GRID)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_LAYOUT_locals_dict, LV_LAYOUT_locals_dict_table);

STATIC void LV_LAYOUT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_LAYOUT");
}



STATIC const mp_obj_type_t mp_LV_LAYOUT_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_LAYOUT,
    .print = LV_LAYOUT_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_LAYOUT_locals_dict,
};
    

    
/*
 * lvgl LV_INDEV_TYPE object definitions
 */

STATIC const mp_rom_map_elem_t LV_INDEV_TYPE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(LV_INDEV_TYPE_NONE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_POINTER), MP_ROM_PTR(MP_ROM_INT(LV_INDEV_TYPE_POINTER)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_KEYPAD), MP_ROM_PTR(MP_ROM_INT(LV_INDEV_TYPE_KEYPAD)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BUTTON), MP_ROM_PTR(MP_ROM_INT(LV_INDEV_TYPE_BUTTON)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ENCODER), MP_ROM_PTR(MP_ROM_INT(LV_INDEV_TYPE_ENCODER)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_INDEV_TYPE_locals_dict, LV_INDEV_TYPE_locals_dict_table);

STATIC void LV_INDEV_TYPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_INDEV_TYPE");
}



STATIC const mp_obj_type_t mp_LV_INDEV_TYPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_INDEV_TYPE,
    .print = LV_INDEV_TYPE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_INDEV_TYPE_locals_dict,
};
    

    
/*
 * lvgl LV_INDEV_STATE object definitions
 */

STATIC const mp_rom_map_elem_t LV_INDEV_STATE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_REL), MP_ROM_PTR(MP_ROM_INT(LV_INDEV_STATE_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PR), MP_ROM_PTR(MP_ROM_INT(LV_INDEV_STATE_PR)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_INDEV_STATE_locals_dict, LV_INDEV_STATE_locals_dict_table);

STATIC void LV_INDEV_STATE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_INDEV_STATE");
}



STATIC const mp_obj_type_t mp_LV_INDEV_STATE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_INDEV_STATE,
    .print = LV_INDEV_STATE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_INDEV_STATE_locals_dict,
};
    

    
/*
 * lvgl LV_BTN_STATE object definitions
 */

STATIC const mp_rom_map_elem_t LV_BTN_STATE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_REL), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STATE_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STATE_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STATE_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STATE_TGL_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INA), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STATE_INA)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_NUM), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STATE_NUM)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_BTN_STATE_locals_dict, LV_BTN_STATE_locals_dict_table);

STATIC void LV_BTN_STATE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_BTN_STATE");
}



STATIC const mp_obj_type_t mp_LV_BTN_STATE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_BTN_STATE,
    .print = LV_BTN_STATE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_BTN_STATE_locals_dict,
};
    

    
/*
 * lvgl LV_BTN_ACTION object definitions
 */

STATIC const mp_rom_map_elem_t LV_BTN_ACTION_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_CLICK), MP_ROM_PTR(MP_ROM_INT(LV_BTN_ACTION_CLICK)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTN_ACTION_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LONG_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTN_ACTION_LONG_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LONG_PR_REPEAT), MP_ROM_PTR(MP_ROM_INT(LV_BTN_ACTION_LONG_PR_REPEAT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_NUM), MP_ROM_PTR(MP_ROM_INT(LV_BTN_ACTION_NUM)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_BTN_ACTION_locals_dict, LV_BTN_ACTION_locals_dict_table);

STATIC void LV_BTN_ACTION_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_BTN_ACTION");
}



STATIC const mp_obj_type_t mp_LV_BTN_ACTION_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_BTN_ACTION,
    .print = LV_BTN_ACTION_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_BTN_ACTION_locals_dict,
};
    

    
/*
 * lvgl LV_BTN_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_BTN_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_REL), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STYLE_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STYLE_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STYLE_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STYLE_TGL_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INA), MP_ROM_PTR(MP_ROM_INT(LV_BTN_STYLE_INA)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_BTN_STYLE_locals_dict, LV_BTN_STYLE_locals_dict_table);

STATIC void LV_BTN_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_BTN_STYLE");
}



STATIC const mp_obj_type_t mp_LV_BTN_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_BTN_STYLE,
    .print = LV_BTN_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_BTN_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_TXT_FLAG object definitions
 */

STATIC const mp_rom_map_elem_t LV_TXT_FLAG_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(LV_TXT_FLAG_NONE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RECOLOR), MP_ROM_PTR(MP_ROM_INT(LV_TXT_FLAG_RECOLOR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_EXPAND), MP_ROM_PTR(MP_ROM_INT(LV_TXT_FLAG_EXPAND)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CENTER), MP_ROM_PTR(MP_ROM_INT(LV_TXT_FLAG_CENTER)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_TXT_FLAG_RIGHT)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_TXT_FLAG_locals_dict, LV_TXT_FLAG_locals_dict_table);

STATIC void LV_TXT_FLAG_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_TXT_FLAG");
}



STATIC const mp_obj_type_t mp_LV_TXT_FLAG_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_TXT_FLAG,
    .print = LV_TXT_FLAG_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_TXT_FLAG_locals_dict,
};
    

    
/*
 * lvgl LV_TXT_CMD_STATE object definitions
 */

STATIC const mp_rom_map_elem_t LV_TXT_CMD_STATE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_WAIT), MP_ROM_PTR(MP_ROM_INT(LV_TXT_CMD_STATE_WAIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PAR), MP_ROM_PTR(MP_ROM_INT(LV_TXT_CMD_STATE_PAR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IN), MP_ROM_PTR(MP_ROM_INT(LV_TXT_CMD_STATE_IN)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_TXT_CMD_STATE_locals_dict, LV_TXT_CMD_STATE_locals_dict_table);

STATIC void LV_TXT_CMD_STATE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_TXT_CMD_STATE");
}



STATIC const mp_obj_type_t mp_LV_TXT_CMD_STATE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_TXT_CMD_STATE,
    .print = LV_TXT_CMD_STATE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_TXT_CMD_STATE_locals_dict,
};
    

    
/*
 * lvgl LV_LABEL_LONG object definitions
 */

STATIC const mp_rom_map_elem_t LV_LABEL_LONG_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_EXPAND), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_LONG_EXPAND)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BREAK), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_LONG_BREAK)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCROLL), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_LONG_SCROLL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DOT), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_LONG_DOT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ROLL), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_LONG_ROLL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CROP), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_LONG_CROP)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_LABEL_LONG_locals_dict, LV_LABEL_LONG_locals_dict_table);

STATIC void LV_LABEL_LONG_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_LABEL_LONG");
}



STATIC const mp_obj_type_t mp_LV_LABEL_LONG_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_LABEL_LONG,
    .print = LV_LABEL_LONG_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_LABEL_LONG_locals_dict,
};
    

    
/*
 * lvgl LV_LABEL_ALIGN object definitions
 */

STATIC const mp_rom_map_elem_t LV_LABEL_ALIGN_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_LEFT), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_ALIGN_LEFT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CENTER), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_ALIGN_CENTER)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RIGHT), MP_ROM_PTR(MP_ROM_INT(LV_LABEL_ALIGN_RIGHT)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_LABEL_ALIGN_locals_dict, LV_LABEL_ALIGN_locals_dict_table);

STATIC void LV_LABEL_ALIGN_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_LABEL_ALIGN");
}



STATIC const mp_obj_type_t mp_LV_LABEL_ALIGN_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_LABEL_ALIGN,
    .print = LV_LABEL_ALIGN_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_LABEL_ALIGN_locals_dict,
};
    

    
/*
 * lvgl LV_BAR_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_BAR_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_BAR_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDIC), MP_ROM_PTR(MP_ROM_INT(LV_BAR_STYLE_INDIC)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_BAR_STYLE_locals_dict, LV_BAR_STYLE_locals_dict_table);

STATIC void LV_BAR_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_BAR_STYLE");
}



STATIC const mp_obj_type_t mp_LV_BAR_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_BAR_STYLE,
    .print = LV_BAR_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_BAR_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_BTNM_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_BTNM_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_BTNM_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_REL), MP_ROM_PTR(MP_ROM_INT(LV_BTNM_STYLE_BTN_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTNM_STYLE_BTN_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_BTNM_STYLE_BTN_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_BTNM_STYLE_BTN_TGL_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_INA), MP_ROM_PTR(MP_ROM_INT(LV_BTNM_STYLE_BTN_INA)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_BTNM_STYLE_locals_dict, LV_BTNM_STYLE_locals_dict_table);

STATIC void LV_BTNM_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_BTNM_STYLE");
}



STATIC const mp_obj_type_t mp_LV_BTNM_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_BTNM_STYLE,
    .print = LV_BTNM_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_BTNM_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_CB_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_CB_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_CB_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOX_REL), MP_ROM_PTR(MP_ROM_INT(LV_CB_STYLE_BOX_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOX_PR), MP_ROM_PTR(MP_ROM_INT(LV_CB_STYLE_BOX_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOX_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_CB_STYLE_BOX_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOX_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_CB_STYLE_BOX_TGL_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOX_INA), MP_ROM_PTR(MP_ROM_INT(LV_CB_STYLE_BOX_INA)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_CB_STYLE_locals_dict, LV_CB_STYLE_locals_dict_table);

STATIC void LV_CB_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_CB_STYLE");
}



STATIC const mp_obj_type_t mp_LV_CB_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_CB_STYLE,
    .print = LV_CB_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_CB_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_CHART_TYPE object definitions
 */

STATIC const mp_rom_map_elem_t LV_CHART_TYPE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_LINE), MP_ROM_PTR(MP_ROM_INT(LV_CHART_TYPE_LINE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_COLUMN), MP_ROM_PTR(MP_ROM_INT(LV_CHART_TYPE_COLUMN)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_POINT), MP_ROM_PTR(MP_ROM_INT(LV_CHART_TYPE_POINT)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_CHART_TYPE_locals_dict, LV_CHART_TYPE_locals_dict_table);

STATIC void LV_CHART_TYPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_CHART_TYPE");
}



STATIC const mp_obj_type_t mp_LV_CHART_TYPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_CHART_TYPE,
    .print = LV_CHART_TYPE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_CHART_TYPE_locals_dict,
};
    

    
/*
 * lvgl LV_SB_MODE object definitions
 */

STATIC const mp_rom_map_elem_t LV_SB_MODE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_OFF), MP_ROM_PTR(MP_ROM_INT(LV_SB_MODE_OFF)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ON), MP_ROM_PTR(MP_ROM_INT(LV_SB_MODE_ON)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DRAG), MP_ROM_PTR(MP_ROM_INT(LV_SB_MODE_DRAG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_AUTO), MP_ROM_PTR(MP_ROM_INT(LV_SB_MODE_AUTO)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_HIDE), MP_ROM_PTR(MP_ROM_INT(LV_SB_MODE_HIDE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_UNHIDE), MP_ROM_PTR(MP_ROM_INT(LV_SB_MODE_UNHIDE)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_SB_MODE_locals_dict, LV_SB_MODE_locals_dict_table);

STATIC void LV_SB_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_SB_MODE");
}



STATIC const mp_obj_type_t mp_LV_SB_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_SB_MODE,
    .print = LV_SB_MODE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_SB_MODE_locals_dict,
};
    

    
/*
 * lvgl LV_PAGE_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_PAGE_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_PAGE_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCRL), MP_ROM_PTR(MP_ROM_INT(LV_PAGE_STYLE_SCRL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SB), MP_ROM_PTR(MP_ROM_INT(LV_PAGE_STYLE_SB)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_PAGE_STYLE_locals_dict, LV_PAGE_STYLE_locals_dict_table);

STATIC void LV_PAGE_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_PAGE_STYLE");
}



STATIC const mp_obj_type_t mp_LV_PAGE_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_PAGE_STYLE,
    .print = LV_PAGE_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_PAGE_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_DDLIST_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_DDLIST_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_DDLIST_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SEL), MP_ROM_PTR(MP_ROM_INT(LV_DDLIST_STYLE_SEL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SB), MP_ROM_PTR(MP_ROM_INT(LV_DDLIST_STYLE_SB)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_DDLIST_STYLE_locals_dict, LV_DDLIST_STYLE_locals_dict_table);

STATIC void LV_DDLIST_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_DDLIST_STYLE");
}



STATIC const mp_obj_type_t mp_LV_DDLIST_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_DDLIST_STYLE,
    .print = LV_DDLIST_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_DDLIST_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_FS_RES object definitions
 */

STATIC const mp_rom_map_elem_t LV_FS_RES_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_OK), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_OK)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_HW_ERR), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_HW_ERR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FS_ERR), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_FS_ERR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_NOT_EX), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_NOT_EX)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FULL), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_FULL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LOCKED), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_LOCKED)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DENIED), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_DENIED)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BUSY), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_BUSY)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TOUT), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_TOUT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_NOT_IMP), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_NOT_IMP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUT_OF_MEM), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_OUT_OF_MEM)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INV_PARAM), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_INV_PARAM)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_UNKNOWN), MP_ROM_PTR(MP_ROM_INT(LV_FS_RES_UNKNOWN)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_FS_RES_locals_dict, LV_FS_RES_locals_dict_table);

STATIC void LV_FS_RES_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_FS_RES");
}



STATIC const mp_obj_type_t mp_LV_FS_RES_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_FS_RES,
    .print = LV_FS_RES_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_FS_RES_locals_dict,
};
    

    
/*
 * lvgl LV_FS_MODE object definitions
 */

STATIC const mp_rom_map_elem_t LV_FS_MODE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_WR), MP_ROM_PTR(MP_ROM_INT(LV_FS_MODE_WR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RD), MP_ROM_PTR(MP_ROM_INT(LV_FS_MODE_RD)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_FS_MODE_locals_dict, LV_FS_MODE_locals_dict_table);

STATIC void LV_FS_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_FS_MODE");
}



STATIC const mp_obj_type_t mp_LV_FS_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_FS_MODE,
    .print = LV_FS_MODE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_FS_MODE_locals_dict,
};
    

    
/*
 * lvgl LV_IMG_SRC object definitions
 */

STATIC const mp_rom_map_elem_t LV_IMG_SRC_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_VARIABLE), MP_ROM_PTR(MP_ROM_INT(LV_IMG_SRC_VARIABLE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FILE), MP_ROM_PTR(MP_ROM_INT(LV_IMG_SRC_FILE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SYMBOL), MP_ROM_PTR(MP_ROM_INT(LV_IMG_SRC_SYMBOL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_UNKNOWN), MP_ROM_PTR(MP_ROM_INT(LV_IMG_SRC_UNKNOWN)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_IMG_SRC_locals_dict, LV_IMG_SRC_locals_dict_table);

STATIC void LV_IMG_SRC_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_IMG_SRC");
}



STATIC const mp_obj_type_t mp_LV_IMG_SRC_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_IMG_SRC,
    .print = LV_IMG_SRC_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_IMG_SRC_locals_dict,
};
    

    
/*
 * lvgl LV_IMG_CF object definitions
 */

STATIC const mp_rom_map_elem_t LV_IMG_CF_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_UNKOWN), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_UNKOWN)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RAW), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_RAW)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RAW_ALPHA), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_RAW_ALPHA)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RAW_CHROMA_KEYED), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_RAW_CHROMA_KEYED)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TRUE_COLOR), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_TRUE_COLOR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TRUE_COLOR_ALPHA), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_TRUE_COLOR_ALPHA)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TRUE_COLOR_CHROMA_KEYED), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_TRUE_COLOR_CHROMA_KEYED)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDEXED_1BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_INDEXED_1BIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDEXED_2BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_INDEXED_2BIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDEXED_4BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_INDEXED_4BIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDEXED_8BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_INDEXED_8BIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ALPHA_1BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_ALPHA_1BIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ALPHA_2BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_ALPHA_2BIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ALPHA_4BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_ALPHA_4BIT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ALPHA_8BIT), MP_ROM_PTR(MP_ROM_INT(LV_IMG_CF_ALPHA_8BIT)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_IMG_CF_locals_dict, LV_IMG_CF_locals_dict_table);

STATIC void LV_IMG_CF_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_IMG_CF");
}



STATIC const mp_obj_type_t mp_LV_IMG_CF_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_IMG_CF,
    .print = LV_IMG_CF_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_IMG_CF_locals_dict,
};
    

    
/*
 * lvgl LV_KB_MODE object definitions
 */

STATIC const mp_rom_map_elem_t LV_KB_MODE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_TEXT), MP_ROM_PTR(MP_ROM_INT(LV_KB_MODE_TEXT)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_NUM), MP_ROM_PTR(MP_ROM_INT(LV_KB_MODE_NUM)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_KB_MODE_locals_dict, LV_KB_MODE_locals_dict_table);

STATIC void LV_KB_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_KB_MODE");
}



STATIC const mp_obj_type_t mp_LV_KB_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_KB_MODE,
    .print = LV_KB_MODE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_KB_MODE_locals_dict,
};
    

    
/*
 * lvgl LV_KB_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_KB_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_KB_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_REL), MP_ROM_PTR(MP_ROM_INT(LV_KB_STYLE_BTN_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_PR), MP_ROM_PTR(MP_ROM_INT(LV_KB_STYLE_BTN_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_KB_STYLE_BTN_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_KB_STYLE_BTN_TGL_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_INA), MP_ROM_PTR(MP_ROM_INT(LV_KB_STYLE_BTN_INA)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_KB_STYLE_locals_dict, LV_KB_STYLE_locals_dict_table);

STATIC void LV_KB_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_KB_STYLE");
}



STATIC const mp_obj_type_t mp_LV_KB_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_KB_STYLE,
    .print = LV_KB_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_KB_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_LIST_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_LIST_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCRL), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_SCRL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SB), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_SB)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_REL), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_BTN_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_PR), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_BTN_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_BTN_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_BTN_TGL_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_INA), MP_ROM_PTR(MP_ROM_INT(LV_LIST_STYLE_BTN_INA)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_LIST_STYLE_locals_dict, LV_LIST_STYLE_locals_dict_table);

STATIC void LV_LIST_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_LIST_STYLE");
}



STATIC const mp_obj_type_t mp_LV_LIST_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_LIST_STYLE,
    .print = LV_LIST_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_LIST_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_MBOX_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_MBOX_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_MBOX_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_BG), MP_ROM_PTR(MP_ROM_INT(LV_MBOX_STYLE_BTN_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_REL), MP_ROM_PTR(MP_ROM_INT(LV_MBOX_STYLE_BTN_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_PR), MP_ROM_PTR(MP_ROM_INT(LV_MBOX_STYLE_BTN_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_MBOX_STYLE_BTN_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_MBOX_STYLE_BTN_TGL_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_INA), MP_ROM_PTR(MP_ROM_INT(LV_MBOX_STYLE_BTN_INA)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_MBOX_STYLE_locals_dict, LV_MBOX_STYLE_locals_dict_table);

STATIC void LV_MBOX_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_MBOX_STYLE");
}



STATIC const mp_obj_type_t mp_LV_MBOX_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_MBOX_STYLE,
    .print = LV_MBOX_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_MBOX_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_PRELOAD_TYPE_SPINNING object definitions
 */

STATIC const mp_rom_map_elem_t LV_PRELOAD_TYPE_SPINNING_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_ARC), MP_ROM_PTR(MP_ROM_INT(LV_PRELOAD_TYPE_SPINNING_ARC)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_PRELOAD_TYPE_SPINNING_locals_dict, LV_PRELOAD_TYPE_SPINNING_locals_dict_table);

STATIC void LV_PRELOAD_TYPE_SPINNING_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_PRELOAD_TYPE_SPINNING");
}



STATIC const mp_obj_type_t mp_LV_PRELOAD_TYPE_SPINNING_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_PRELOAD_TYPE_SPINNING,
    .print = LV_PRELOAD_TYPE_SPINNING_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_PRELOAD_TYPE_SPINNING_locals_dict,
};
    

    
/*
 * lvgl LV_PRELOAD_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_PRELOAD_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_MAIN), MP_ROM_PTR(MP_ROM_INT(LV_PRELOAD_STYLE_MAIN)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_PRELOAD_STYLE_locals_dict, LV_PRELOAD_STYLE_locals_dict_table);

STATIC void LV_PRELOAD_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_PRELOAD_STYLE");
}



STATIC const mp_obj_type_t mp_LV_PRELOAD_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_PRELOAD_STYLE,
    .print = LV_PRELOAD_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_PRELOAD_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_ROLLER_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_ROLLER_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_ROLLER_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SEL), MP_ROM_PTR(MP_ROM_INT(LV_ROLLER_STYLE_SEL)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_ROLLER_STYLE_locals_dict, LV_ROLLER_STYLE_locals_dict_table);

STATIC void LV_ROLLER_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_ROLLER_STYLE");
}



STATIC const mp_obj_type_t mp_LV_ROLLER_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_ROLLER_STYLE,
    .print = LV_ROLLER_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_ROLLER_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_SLIDER_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_SLIDER_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_SLIDER_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDIC), MP_ROM_PTR(MP_ROM_INT(LV_SLIDER_STYLE_INDIC)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_KNOB), MP_ROM_PTR(MP_ROM_INT(LV_SLIDER_STYLE_KNOB)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_SLIDER_STYLE_locals_dict, LV_SLIDER_STYLE_locals_dict_table);

STATIC void LV_SLIDER_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_SLIDER_STYLE");
}



STATIC const mp_obj_type_t mp_LV_SLIDER_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_SLIDER_STYLE,
    .print = LV_SLIDER_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_SLIDER_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_SW_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_SW_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_SW_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDIC), MP_ROM_PTR(MP_ROM_INT(LV_SW_STYLE_INDIC)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_KNOB_OFF), MP_ROM_PTR(MP_ROM_INT(LV_SW_STYLE_KNOB_OFF)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_KNOB_ON), MP_ROM_PTR(MP_ROM_INT(LV_SW_STYLE_KNOB_ON)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_SW_STYLE_locals_dict, LV_SW_STYLE_locals_dict_table);

STATIC void LV_SW_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_SW_STYLE");
}



STATIC const mp_obj_type_t mp_LV_SW_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_SW_STYLE,
    .print = LV_SW_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_SW_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_WIN_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_WIN_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_WIN_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CONTENT_BG), MP_ROM_PTR(MP_ROM_INT(LV_WIN_STYLE_CONTENT_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CONTENT_SCRL), MP_ROM_PTR(MP_ROM_INT(LV_WIN_STYLE_CONTENT_SCRL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SB), MP_ROM_PTR(MP_ROM_INT(LV_WIN_STYLE_SB)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_HEADER), MP_ROM_PTR(MP_ROM_INT(LV_WIN_STYLE_HEADER)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_REL), MP_ROM_PTR(MP_ROM_INT(LV_WIN_STYLE_BTN_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_PR), MP_ROM_PTR(MP_ROM_INT(LV_WIN_STYLE_BTN_PR)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_WIN_STYLE_locals_dict, LV_WIN_STYLE_locals_dict_table);

STATIC void LV_WIN_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_WIN_STYLE");
}



STATIC const mp_obj_type_t mp_LV_WIN_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_WIN_STYLE,
    .print = LV_WIN_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_WIN_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_TABVIEW_BTNS_POS object definitions
 */

STATIC const mp_rom_map_elem_t LV_TABVIEW_BTNS_POS_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_TOP), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_BTNS_POS_TOP)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOTTOM), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_BTNS_POS_BOTTOM)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_TABVIEW_BTNS_POS_locals_dict, LV_TABVIEW_BTNS_POS_locals_dict_table);

STATIC void LV_TABVIEW_BTNS_POS_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_TABVIEW_BTNS_POS");
}



STATIC const mp_obj_type_t mp_LV_TABVIEW_BTNS_POS_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_TABVIEW_BTNS_POS,
    .print = LV_TABVIEW_BTNS_POS_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_TABVIEW_BTNS_POS_locals_dict,
};
    

    
/*
 * lvgl LV_TABVIEW_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_TABVIEW_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDIC), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_STYLE_INDIC)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_BG), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_STYLE_BTN_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_REL), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_STYLE_BTN_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_PR), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_STYLE_BTN_PR)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_REL), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_STYLE_BTN_TGL_REL)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTN_TGL_PR), MP_ROM_PTR(MP_ROM_INT(LV_TABVIEW_STYLE_BTN_TGL_PR)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_TABVIEW_STYLE_locals_dict, LV_TABVIEW_STYLE_locals_dict_table);

STATIC void LV_TABVIEW_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_TABVIEW_STYLE");
}



STATIC const mp_obj_type_t mp_LV_TABVIEW_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_TABVIEW_STYLE,
    .print = LV_TABVIEW_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_TABVIEW_STYLE_locals_dict,
};
    

    
/*
 * lvgl LV_CURSOR object definitions
 */

STATIC const mp_rom_map_elem_t LV_CURSOR_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(LV_CURSOR_NONE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LINE), MP_ROM_PTR(MP_ROM_INT(LV_CURSOR_LINE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BLOCK), MP_ROM_PTR(MP_ROM_INT(LV_CURSOR_BLOCK)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_OUTLINE), MP_ROM_PTR(MP_ROM_INT(LV_CURSOR_OUTLINE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_UNDERLINE), MP_ROM_PTR(MP_ROM_INT(LV_CURSOR_UNDERLINE)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_HIDDEN), MP_ROM_PTR(MP_ROM_INT(LV_CURSOR_HIDDEN)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_CURSOR_locals_dict, LV_CURSOR_locals_dict_table);

STATIC void LV_CURSOR_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_CURSOR");
}



STATIC const mp_obj_type_t mp_LV_CURSOR_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_CURSOR,
    .print = LV_CURSOR_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_CURSOR_locals_dict,
};
    

    
/*
 * lvgl LV_TA_STYLE object definitions
 */

STATIC const mp_rom_map_elem_t LV_TA_STYLE_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_BG), MP_ROM_PTR(MP_ROM_INT(LV_TA_STYLE_BG)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SB), MP_ROM_PTR(MP_ROM_INT(LV_TA_STYLE_SB)) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CURSOR), MP_ROM_PTR(MP_ROM_INT(LV_TA_STYLE_CURSOR)) }
};

STATIC MP_DEFINE_CONST_DICT(LV_TA_STYLE_locals_dict, LV_TA_STYLE_locals_dict_table);

STATIC void LV_TA_STYLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl LV_TA_STYLE");
}



STATIC const mp_obj_type_t mp_LV_TA_STYLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_LV_TA_STYLE,
    .print = LV_TA_STYLE_print,
    
    .locals_dict = (mp_obj_dict_t*)&LV_TA_STYLE_locals_dict,
};
    

/*
 * Function NOT generated:
 * Callback: Can only handle callbaks that return lv_res_t or void
 * int32_t lv_anim_path_t(const struct _lv_anim_t *)
 */
    

/*
 * Function NOT generated:
 * Callback: Missing conversion to void*
 * void lv_anim_fp_t(void *, int32_t)
 */
    

/*
 * Function NOT generated:
 * Callback: Missing conversion to void*
 * void lv_anim_cb_t(void *)
 */
    

/*
 * Function NOT generated:
 * Callback: Can only handle callbaks that return lv_res_t or void
 * bool lv_design_func_t(struct _lv_obj_t *obj, const lv_area_t *mask_p, lv_design_mode_t mode)
 */
    

/*
 * Function NOT generated:
 * Callback: Missing conversion to void*
 * lv_res_t lv_signal_func_t(struct _lv_obj_t *obj, lv_signal_t sign, void *param)
 */
    

/*
 * Callback function lv_action_t
 * lv_res_t lv_action_t(struct _lv_obj_t *obj)
 */

STATIC lv_res_t lv_action_t_callback(struct _lv_obj_t* arg0)
{
    mp_obj_t args[1];
    args[0] = lv_to_mp(arg0);
    mp_obj_t action = mp_to_lv_action(args[0]);
    mp_obj_t arg_list = mp_obj_new_list(1, args);
    bool schedule_result = mp_sched_schedule(action, arg_list);
    return schedule_result? LV_RES_OK: LV_RES_INV;
}


/*
 * Function NOT generated:
 * Callback: Missing conversion to lv_style_t*
 * void lv_group_style_mod_func_t(lv_style_t *)
 */
    

/*
 * Function NOT generated:
 * Callback: Missing conversion to struct _lv_group_t*
 * void lv_group_focus_cb_t(struct _lv_group_t *)
 */
    

/*
 * Callback function lv_btnm_action_t
 * lv_res_t lv_btnm_action_t(lv_obj_t *, const char *txt)
 */

STATIC lv_res_t lv_btnm_action_t_callback(lv_obj_t* arg0, const char* arg1)
{
    mp_obj_t args[2];
    args[0] = lv_to_mp(arg0);
    args[1] = convert_to_str(arg1);
    mp_obj_t action = mp_to_lv_action(args[0]);
    mp_obj_t arg_list = mp_obj_new_list(2, args);
    bool schedule_result = mp_sched_schedule(action, arg_list);
    return schedule_result? LV_RES_OK: LV_RES_INV;
}


/*
 * Function NOT generated:
 * Callback: Missing conversion to const void*
 * lv_res_t lv_img_decoder_info_f_t(const void *src, lv_img_header_t *header)
 */
    

/*
 * Function NOT generated:
 * Callback: Can only handle callbaks that return lv_res_t or void
 * const uint8_t *lv_img_decoder_open_f_t(const void *src, const lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Callback: Missing conversion to uint8_t*
 * lv_res_t lv_img_decoder_read_line_f_t(lv_coord_t x, lv_coord_t y, lv_coord_t len, uint8_t *buf)
 */
    

/*
 * Function NOT generated:
 * Callback: Missing conversion to void
 * void lv_img_decoder_close_f_t(void)
 */
    

/*
 * Callback function lv_tabview_action_t
 * lv_res_t lv_tabview_action_t(lv_obj_t *, uint16_t)
 */

STATIC lv_res_t lv_tabview_action_t_callback(lv_obj_t* arg0, uint16_t arg1)
{
    mp_obj_t args[2];
    args[0] = lv_to_mp(arg0);
    args[1] = mp_obj_new_int_from_uint(arg1);
    mp_obj_t action = mp_to_lv_action(args[0]);
    mp_obj_t arg_list = mp_obj_new_list(2, args);
    bool schedule_result = mp_sched_schedule(action, arg_list);
    return schedule_result? LV_RES_OK: LV_RES_INV;
}


/*
 * lvgl extension definition for:
 * lv_res_t lv_obj_del(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_del(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_res_t res = lv_obj_del(obj);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_del_obj, 1, 1, mp_lv_obj_del);

 

/*
 * lvgl extension definition for:
 * void lv_obj_clean(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_clean(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_obj_clean(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_clean_obj, 1, 1, mp_lv_obj_clean);

 

/*
 * lvgl extension definition for:
 * void lv_obj_invalidate(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_invalidate(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_obj_invalidate(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_invalidate_obj, 1, 1, mp_lv_obj_invalidate);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_parent(lv_obj_t *obj, lv_obj_t *parent)
 */
 
STATIC mp_obj_t mp_lv_obj_set_parent(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_obj_t *parent = mp_to_lv(args[1]);
    lv_obj_set_parent(obj, parent);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_parent_obj, 2, 2, mp_lv_obj_set_parent);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_pos(lv_obj_t *obj, lv_coord_t x, lv_coord_t y)
 */
 
STATIC mp_obj_t mp_lv_obj_set_pos(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t x = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_coord_t y = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_obj_set_pos(obj, x, y);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_pos_obj, 3, 3, mp_lv_obj_set_pos);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_x(lv_obj_t *obj, lv_coord_t x)
 */
 
STATIC mp_obj_t mp_lv_obj_set_x(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t x = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_obj_set_x(obj, x);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_x_obj, 2, 2, mp_lv_obj_set_x);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_y(lv_obj_t *obj, lv_coord_t y)
 */
 
STATIC mp_obj_t mp_lv_obj_set_y(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t y = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_obj_set_y(obj, y);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_y_obj, 2, 2, mp_lv_obj_set_y);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_size(lv_obj_t *obj, lv_coord_t w, lv_coord_t h)
 */
 
STATIC mp_obj_t mp_lv_obj_set_size(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t w = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_coord_t h = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_obj_set_size(obj, w, h);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_size_obj, 3, 3, mp_lv_obj_set_size);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_width(lv_obj_t *obj, lv_coord_t w)
 */
 
STATIC mp_obj_t mp_lv_obj_set_width(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t w = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_obj_set_width(obj, w);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_width_obj, 2, 2, mp_lv_obj_set_width);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_height(lv_obj_t *obj, lv_coord_t h)
 */
 
STATIC mp_obj_t mp_lv_obj_set_height(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t h = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_obj_set_height(obj, h);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_height_obj, 2, 2, mp_lv_obj_set_height);

 

/*
 * lvgl extension definition for:
 * void lv_obj_align(lv_obj_t *obj, const lv_obj_t *base, lv_align_t align, lv_coord_t x_mod, lv_coord_t y_mod)
 */
 
STATIC mp_obj_t mp_lv_obj_align(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    const lv_obj_t *base = mp_to_lv(args[1]);
    lv_align_t align = (uint8_t)mp_obj_int_get_checked(args[2]);
    lv_coord_t x_mod = (int16_t)mp_obj_int_get_checked(args[3]);
    lv_coord_t y_mod = (int16_t)mp_obj_int_get_checked(args[4]);
    lv_obj_align(obj, base, align, x_mod, y_mod);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_align_obj, 5, 5, mp_lv_obj_align);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_obj_set_style(lv_obj_t *obj, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * void lv_obj_refresh_style(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_refresh_style(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_obj_refresh_style(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_refresh_style_obj, 1, 1, mp_lv_obj_refresh_style);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_obj_report_style_mod(lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * void lv_obj_set_hidden(lv_obj_t *obj, bool en)
 */
 
STATIC mp_obj_t mp_lv_obj_set_hidden(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_obj_set_hidden(obj, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_hidden_obj, 2, 2, mp_lv_obj_set_hidden);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_click(lv_obj_t *obj, bool en)
 */
 
STATIC mp_obj_t mp_lv_obj_set_click(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_obj_set_click(obj, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_click_obj, 2, 2, mp_lv_obj_set_click);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_top(lv_obj_t *obj, bool en)
 */
 
STATIC mp_obj_t mp_lv_obj_set_top(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_obj_set_top(obj, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_top_obj, 2, 2, mp_lv_obj_set_top);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_drag(lv_obj_t *obj, bool en)
 */
 
STATIC mp_obj_t mp_lv_obj_set_drag(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_obj_set_drag(obj, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_drag_obj, 2, 2, mp_lv_obj_set_drag);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_drag_throw(lv_obj_t *obj, bool en)
 */
 
STATIC mp_obj_t mp_lv_obj_set_drag_throw(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_obj_set_drag_throw(obj, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_drag_throw_obj, 2, 2, mp_lv_obj_set_drag_throw);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_drag_parent(lv_obj_t *obj, bool en)
 */
 
STATIC mp_obj_t mp_lv_obj_set_drag_parent(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_obj_set_drag_parent(obj, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_drag_parent_obj, 2, 2, mp_lv_obj_set_drag_parent);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_opa_scale_enable(lv_obj_t *obj, bool en)
 */
 
STATIC mp_obj_t mp_lv_obj_set_opa_scale_enable(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_obj_set_opa_scale_enable(obj, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_opa_scale_enable_obj, 2, 2, mp_lv_obj_set_opa_scale_enable);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_opa_scale(lv_obj_t *obj, lv_opa_t opa_scale)
 */
 
STATIC mp_obj_t mp_lv_obj_set_opa_scale(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_opa_t opa_scale = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_obj_set_opa_scale(obj, opa_scale);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_opa_scale_obj, 2, 2, mp_lv_obj_set_opa_scale);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_protect(lv_obj_t *obj, uint8_t prot)
 */
 
STATIC mp_obj_t mp_lv_obj_set_protect(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    uint8_t prot = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_obj_set_protect(obj, prot);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_protect_obj, 2, 2, mp_lv_obj_set_protect);

 

/*
 * lvgl extension definition for:
 * void lv_obj_clear_protect(lv_obj_t *obj, uint8_t prot)
 */
 
STATIC mp_obj_t mp_lv_obj_clear_protect(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    uint8_t prot = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_obj_clear_protect(obj, prot);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_clear_protect_obj, 2, 2, mp_lv_obj_clear_protect);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_signal_func_t
 * void lv_obj_set_signal_func(lv_obj_t *obj, lv_signal_func_t fp)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_design_func_t
 * void lv_obj_set_design_func(lv_obj_t *obj, lv_design_func_t fp)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_obj_allocate_ext_attr(lv_obj_t *obj, uint16_t ext_size)
 */
    

/*
 * lvgl extension definition for:
 * void lv_obj_refresh_ext_size(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_refresh_ext_size(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_obj_refresh_ext_size(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_refresh_ext_size_obj, 1, 1, mp_lv_obj_refresh_ext_size);

 

/*
 * lvgl extension definition for:
 * void lv_obj_set_free_num(lv_obj_t *obj, uint32_t free_num)
 */
 
STATIC mp_obj_t mp_lv_obj_set_free_num(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    uint32_t free_num = (uint32_t)mp_obj_int_get_checked(args[1]);
    lv_obj_set_free_num(obj, free_num);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_set_free_num_obj, 2, 2, mp_lv_obj_set_free_num);

 

/*
 * Function NOT generated:
 * Missing conversion to void*
 * void lv_obj_set_free_ptr(lv_obj_t *obj, void *free_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to void cb(lv_obj_t *)*
 * void lv_obj_animate(lv_obj_t *obj, lv_anim_builtin_t type, uint16_t time, uint16_t delay, void (*cb)(lv_obj_t *))
 */
    

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_obj_get_screen(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_screen(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_obj_t* res = lv_obj_get_screen(obj);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_screen_obj, 1, 1, mp_lv_obj_get_screen);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_obj_get_parent(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_parent(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_obj_t* res = lv_obj_get_parent(obj);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_parent_obj, 1, 1, mp_lv_obj_get_parent);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_obj_get_child(const lv_obj_t *obj, const lv_obj_t *child)
 */
 
STATIC mp_obj_t mp_lv_obj_get_child(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    const lv_obj_t *child = mp_to_lv(args[1]);
    lv_obj_t* res = lv_obj_get_child(obj, child);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_child_obj, 2, 2, mp_lv_obj_get_child);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_obj_get_child_back(const lv_obj_t *obj, const lv_obj_t *child)
 */
 
STATIC mp_obj_t mp_lv_obj_get_child_back(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    const lv_obj_t *child = mp_to_lv(args[1]);
    lv_obj_t* res = lv_obj_get_child_back(obj, child);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_child_back_obj, 2, 2, mp_lv_obj_get_child_back);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_obj_count_children(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_count_children(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    uint16_t res = lv_obj_count_children(obj);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_count_children_obj, 1, 1, mp_lv_obj_count_children);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * void lv_obj_get_coords(const lv_obj_t *obj, lv_area_t *cords_p)
 */
    

/*
 * lvgl extension definition for:
 * lv_coord_t lv_obj_get_x(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_x(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t res = lv_obj_get_x(obj);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_x_obj, 1, 1, mp_lv_obj_get_x);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_obj_get_y(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_y(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t res = lv_obj_get_y(obj);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_y_obj, 1, 1, mp_lv_obj_get_y);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_obj_get_width(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_width(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t res = lv_obj_get_width(obj);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_width_obj, 1, 1, mp_lv_obj_get_width);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_obj_get_height(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_height(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t res = lv_obj_get_height(obj);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_height_obj, 1, 1, mp_lv_obj_get_height);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_obj_get_ext_size(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_ext_size(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_coord_t res = lv_obj_get_ext_size(obj);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_ext_size_obj, 1, 1, mp_lv_obj_get_ext_size);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_obj_get_style(const lv_obj_t *obj)
 */
    

/*
 * lvgl extension definition for:
 * bool lv_obj_get_hidden(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_hidden(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    bool res = lv_obj_get_hidden(obj);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_hidden_obj, 1, 1, mp_lv_obj_get_hidden);

 

/*
 * lvgl extension definition for:
 * bool lv_obj_get_click(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_click(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    bool res = lv_obj_get_click(obj);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_click_obj, 1, 1, mp_lv_obj_get_click);

 

/*
 * lvgl extension definition for:
 * bool lv_obj_get_top(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_top(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    bool res = lv_obj_get_top(obj);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_top_obj, 1, 1, mp_lv_obj_get_top);

 

/*
 * lvgl extension definition for:
 * bool lv_obj_get_drag(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_drag(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    bool res = lv_obj_get_drag(obj);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_drag_obj, 1, 1, mp_lv_obj_get_drag);

 

/*
 * lvgl extension definition for:
 * bool lv_obj_get_drag_throw(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_drag_throw(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    bool res = lv_obj_get_drag_throw(obj);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_drag_throw_obj, 1, 1, mp_lv_obj_get_drag_throw);

 

/*
 * lvgl extension definition for:
 * bool lv_obj_get_drag_parent(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_drag_parent(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    bool res = lv_obj_get_drag_parent(obj);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_drag_parent_obj, 1, 1, mp_lv_obj_get_drag_parent);

 

/*
 * lvgl extension definition for:
 * lv_opa_t lv_obj_get_opa_scale(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_opa_scale(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    lv_opa_t res = lv_obj_get_opa_scale(obj);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_opa_scale_obj, 1, 1, mp_lv_obj_get_opa_scale);

 

/*
 * lvgl extension definition for:
 * uint8_t lv_obj_get_protect(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_protect(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    uint8_t res = lv_obj_get_protect(obj);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_protect_obj, 1, 1, mp_lv_obj_get_protect);

 

/*
 * lvgl extension definition for:
 * bool lv_obj_is_protected(const lv_obj_t *obj, uint8_t prot)
 */
 
STATIC mp_obj_t mp_lv_obj_is_protected(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    uint8_t prot = (uint8_t)mp_obj_int_get_checked(args[1]);
    bool res = lv_obj_is_protected(obj, prot);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_is_protected_obj, 2, 2, mp_lv_obj_is_protected);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_signal_func_t
 * lv_signal_func_t lv_obj_get_signal_func(const lv_obj_t *obj)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_design_func_t
 * lv_design_func_t lv_obj_get_design_func(const lv_obj_t *obj)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_obj_get_ext_attr(const lv_obj_t *obj)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_obj_type_t*
 * void lv_obj_get_type(lv_obj_t *obj, lv_obj_type_t *buf)
 */
    

/*
 * lvgl extension definition for:
 * uint32_t lv_obj_get_free_num(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_get_free_num(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    uint32_t res = lv_obj_get_free_num(obj);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_get_free_num_obj, 1, 1, mp_lv_obj_get_free_num);

 

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_obj_get_free_ptr(const lv_obj_t *obj)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_obj_get_group(const lv_obj_t *obj)
 */
    

/*
 * lvgl extension definition for:
 * bool lv_obj_is_focused(const lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_obj_is_focused(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *obj = mp_to_lv(args[0]);
    bool res = lv_obj_is_focused(obj);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_obj_is_focused_obj, 1, 1, mp_lv_obj_is_focused);

 

    
/*
 * lvgl obj object definitions
 */

STATIC const mp_rom_map_elem_t obj_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) }
};

STATIC MP_DEFINE_CONST_DICT(obj_locals_dict, obj_locals_dict_table);

STATIC void obj_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl obj");
}


STATIC mp_obj_t obj_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_obj_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_obj_type = {
    { &mp_type_type },
    .name = MP_QSTR_obj,
    .print = obj_print,
    .make_new = obj_make_new,
    .locals_dict = (mp_obj_dict_t*)&obj_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * void lv_arc_set_angles(lv_obj_t *arc, uint16_t start, uint16_t end)
 */
 
STATIC mp_obj_t mp_lv_arc_set_angles(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *arc = mp_to_lv(args[0]);
    uint16_t start = (uint16_t)mp_obj_int_get_checked(args[1]);
    uint16_t end = (uint16_t)mp_obj_int_get_checked(args[2]);
    lv_arc_set_angles(arc, start, end);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_arc_set_angles_obj, 3, 3, mp_lv_arc_set_angles);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_arc_set_style(lv_obj_t *arc, lv_arc_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * uint16_t lv_arc_get_angle_start(lv_obj_t *arc)
 */
 
STATIC mp_obj_t mp_lv_arc_get_angle_start(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *arc = mp_to_lv(args[0]);
    uint16_t res = lv_arc_get_angle_start(arc);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_arc_get_angle_start_obj, 1, 1, mp_lv_arc_get_angle_start);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_arc_get_angle_end(lv_obj_t *arc)
 */
 
STATIC mp_obj_t mp_lv_arc_get_angle_end(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *arc = mp_to_lv(args[0]);
    uint16_t res = lv_arc_get_angle_end(arc);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_arc_get_angle_end_obj, 1, 1, mp_lv_arc_get_angle_end);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_arc_get_style(const lv_obj_t *arc, lv_arc_style_t type)
 */
    

    
/*
 * lvgl arc object definitions
 */

STATIC const mp_rom_map_elem_t arc_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_angles), MP_ROM_PTR(&mp_lv_arc_set_angles_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_angle_start), MP_ROM_PTR(&mp_lv_arc_get_angle_start_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_angle_end), MP_ROM_PTR(&mp_lv_arc_get_angle_end_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_ARC_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(arc_locals_dict, arc_locals_dict_table);

STATIC void arc_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl arc");
}


STATIC mp_obj_t arc_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_arc_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_arc_type = {
    { &mp_type_type },
    .name = MP_QSTR_arc,
    .print = arc_print,
    .make_new = arc_make_new,
    .locals_dict = (mp_obj_dict_t*)&arc_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_cont_set_style(lv_obj_t *cont, lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_cont_get_style(const lv_obj_t *cont)
 */
    

/*
 * lvgl extension definition for:
 * void lv_cont_set_layout(lv_obj_t *cont, lv_layout_t layout)
 */
 
STATIC mp_obj_t mp_lv_cont_set_layout(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cont = mp_to_lv(args[0]);
    lv_layout_t layout = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_cont_set_layout(cont, layout);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cont_set_layout_obj, 2, 2, mp_lv_cont_set_layout);

 

/*
 * lvgl extension definition for:
 * void lv_cont_set_fit(lv_obj_t *cont, bool hor_en, bool ver_en)
 */
 
STATIC mp_obj_t mp_lv_cont_set_fit(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cont = mp_to_lv(args[0]);
    bool hor_en = mp_obj_is_true(args[1]);
    bool ver_en = mp_obj_is_true(args[2]);
    lv_cont_set_fit(cont, hor_en, ver_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cont_set_fit_obj, 3, 3, mp_lv_cont_set_fit);

 

/*
 * lvgl extension definition for:
 * lv_layout_t lv_cont_get_layout(const lv_obj_t *cont)
 */
 
STATIC mp_obj_t mp_lv_cont_get_layout(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *cont = mp_to_lv(args[0]);
    lv_layout_t res = lv_cont_get_layout(cont);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cont_get_layout_obj, 1, 1, mp_lv_cont_get_layout);

 

/*
 * lvgl extension definition for:
 * bool lv_cont_get_hor_fit(const lv_obj_t *cont)
 */
 
STATIC mp_obj_t mp_lv_cont_get_hor_fit(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *cont = mp_to_lv(args[0]);
    bool res = lv_cont_get_hor_fit(cont);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cont_get_hor_fit_obj, 1, 1, mp_lv_cont_get_hor_fit);

 

/*
 * lvgl extension definition for:
 * bool lv_cont_get_ver_fit(const lv_obj_t *cont)
 */
 
STATIC mp_obj_t mp_lv_cont_get_ver_fit(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *cont = mp_to_lv(args[0]);
    bool res = lv_cont_get_ver_fit(cont);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cont_get_ver_fit_obj, 1, 1, mp_lv_cont_get_ver_fit);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_cont_get_fit_width(lv_obj_t *cont)
 */
 
STATIC mp_obj_t mp_lv_cont_get_fit_width(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cont = mp_to_lv(args[0]);
    lv_coord_t res = lv_cont_get_fit_width(cont);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cont_get_fit_width_obj, 1, 1, mp_lv_cont_get_fit_width);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_cont_get_fit_height(lv_obj_t *cont)
 */
 
STATIC mp_obj_t mp_lv_cont_get_fit_height(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cont = mp_to_lv(args[0]);
    lv_coord_t res = lv_cont_get_fit_height(cont);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cont_get_fit_height_obj, 1, 1, mp_lv_cont_get_fit_height);

 

    
/*
 * lvgl cont object definitions
 */

STATIC const mp_rom_map_elem_t cont_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) }
};

STATIC MP_DEFINE_CONST_DICT(cont_locals_dict, cont_locals_dict_table);

STATIC void cont_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl cont");
}


STATIC mp_obj_t cont_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_cont_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_cont_type = {
    { &mp_type_type },
    .name = MP_QSTR_cont,
    .print = cont_print,
    .make_new = cont_make_new,
    .locals_dict = (mp_obj_dict_t*)&cont_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_btn_set_layout(lv_obj_t *btn, lv_layout_t layout)
 */
 
STATIC mp_obj_t mp_lv_btn_set_layout(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    lv_layout_t layout = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_btn_set_layout(btn, layout);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_layout_obj, 2, 2, mp_lv_btn_set_layout);

 

/*
 * lvgl extension definition for:
 * inline static void lv_btn_set_fit(lv_obj_t *btn, bool hor_en, bool ver_en)
 */
 
STATIC mp_obj_t mp_lv_btn_set_fit(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    bool hor_en = mp_obj_is_true(args[1]);
    bool ver_en = mp_obj_is_true(args[2]);
    lv_btn_set_fit(btn, hor_en, ver_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_fit_obj, 3, 3, mp_lv_btn_set_fit);

 

/*
 * lvgl extension definition for:
 * inline static lv_layout_t lv_btn_get_layout(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_layout(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    lv_layout_t res = lv_btn_get_layout(btn);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_layout_obj, 1, 1, mp_lv_btn_get_layout);

 

/*
 * lvgl extension definition for:
 * inline static bool lv_btn_get_hor_fit(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_hor_fit(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    bool res = lv_btn_get_hor_fit(btn);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_hor_fit_obj, 1, 1, mp_lv_btn_get_hor_fit);

 

/*
 * lvgl extension definition for:
 * inline static bool lv_btn_get_ver_fit(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_ver_fit(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    bool res = lv_btn_get_ver_fit(btn);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_ver_fit_obj, 1, 1, mp_lv_btn_get_ver_fit);

 

/*
 * lvgl extension definition for:
 * void lv_btn_set_toggle(lv_obj_t *btn, bool tgl)
 */
 
STATIC mp_obj_t mp_lv_btn_set_toggle(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    bool tgl = mp_obj_is_true(args[1]);
    lv_btn_set_toggle(btn, tgl);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_toggle_obj, 2, 2, mp_lv_btn_set_toggle);

 

/*
 * lvgl extension definition for:
 * void lv_btn_set_state(lv_obj_t *btn, lv_btn_state_t state)
 */
 
STATIC mp_obj_t mp_lv_btn_set_state(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    lv_btn_state_t state = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_btn_set_state(btn, state);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_state_obj, 2, 2, mp_lv_btn_set_state);

 

/*
 * lvgl extension definition for:
 * void lv_btn_toggle(lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_toggle(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    lv_btn_toggle(btn);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_toggle_obj, 1, 1, mp_lv_btn_toggle);

 

/*
 * lvgl extension definition for:
 * void lv_btn_set_action(lv_obj_t *btn, lv_btn_action_t type, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_btn_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    lv_btn_action_t type = (uint8_t)mp_obj_int_get_checked(args[1]);
    set_action(args[0], args[2]);
    lv_action_t action = &lv_action_t_callback;
    lv_btn_set_action(btn, type, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_action_obj, 3, 3, mp_lv_btn_set_action);

 

/*
 * lvgl extension definition for:
 * void lv_btn_set_ink_in_time(lv_obj_t *btn, uint16_t time)
 */
 
STATIC mp_obj_t mp_lv_btn_set_ink_in_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    uint16_t time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_btn_set_ink_in_time(btn, time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_ink_in_time_obj, 2, 2, mp_lv_btn_set_ink_in_time);

 

/*
 * lvgl extension definition for:
 * void lv_btn_set_ink_wait_time(lv_obj_t *btn, uint16_t time)
 */
 
STATIC mp_obj_t mp_lv_btn_set_ink_wait_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    uint16_t time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_btn_set_ink_wait_time(btn, time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_ink_wait_time_obj, 2, 2, mp_lv_btn_set_ink_wait_time);

 

/*
 * lvgl extension definition for:
 * void lv_btn_set_ink_out_time(lv_obj_t *btn, uint16_t time)
 */
 
STATIC mp_obj_t mp_lv_btn_set_ink_out_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    uint16_t time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_btn_set_ink_out_time(btn, time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_set_ink_out_time_obj, 2, 2, mp_lv_btn_set_ink_out_time);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_btn_set_style(lv_obj_t *btn, lv_btn_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * lv_btn_state_t lv_btn_get_state(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_state(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    lv_btn_state_t res = lv_btn_get_state(btn);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_state_obj, 1, 1, mp_lv_btn_get_state);

 

/*
 * lvgl extension definition for:
 * bool lv_btn_get_toggle(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_toggle(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    bool res = lv_btn_get_toggle(btn);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_toggle_obj, 1, 1, mp_lv_btn_get_toggle);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * lv_action_t lv_btn_get_action(const lv_obj_t *btn, lv_btn_action_t type)
 */
    

/*
 * lvgl extension definition for:
 * uint16_t lv_btn_get_ink_in_time(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_ink_in_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    uint16_t res = lv_btn_get_ink_in_time(btn);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_ink_in_time_obj, 1, 1, mp_lv_btn_get_ink_in_time);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_btn_get_ink_wait_time(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_ink_wait_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    uint16_t res = lv_btn_get_ink_wait_time(btn);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_ink_wait_time_obj, 1, 1, mp_lv_btn_get_ink_wait_time);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_btn_get_ink_out_time(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_btn_get_ink_out_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    uint16_t res = lv_btn_get_ink_out_time(btn);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btn_get_ink_out_time_obj, 1, 1, mp_lv_btn_get_ink_out_time);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_btn_get_style(const lv_obj_t *btn, lv_btn_style_t type)
 */
    

    
/*
 * lvgl btn object definitions
 */

STATIC const mp_rom_map_elem_t btn_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_btn_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_btn_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_btn_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_btn_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_btn_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_toggle), MP_ROM_PTR(&mp_lv_btn_set_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_state), MP_ROM_PTR(&mp_lv_btn_set_state_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_toggle), MP_ROM_PTR(&mp_lv_btn_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_btn_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ink_in_time), MP_ROM_PTR(&mp_lv_btn_set_ink_in_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ink_wait_time), MP_ROM_PTR(&mp_lv_btn_set_ink_wait_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ink_out_time), MP_ROM_PTR(&mp_lv_btn_set_ink_out_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_state), MP_ROM_PTR(&mp_lv_btn_get_state_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_toggle), MP_ROM_PTR(&mp_lv_btn_get_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ink_in_time), MP_ROM_PTR(&mp_lv_btn_get_ink_in_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ink_wait_time), MP_ROM_PTR(&mp_lv_btn_get_ink_wait_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ink_out_time), MP_ROM_PTR(&mp_lv_btn_get_ink_out_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STATE), MP_ROM_PTR(&mp_LV_BTN_STATE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ACTION), MP_ROM_PTR(&mp_LV_BTN_ACTION_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_BTN_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(btn_locals_dict, btn_locals_dict_table);

STATIC void btn_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl btn");
}


STATIC mp_obj_t btn_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_btn_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_btn_type = {
    { &mp_type_type },
    .name = MP_QSTR_btn,
    .print = btn_print,
    .make_new = btn_make_new,
    .locals_dict = (mp_obj_dict_t*)&btn_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_label_set_style(lv_obj_t *label, lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_label_get_style(const lv_obj_t *label)
 */
    

/*
 * lvgl extension definition for:
 * void lv_label_set_text(lv_obj_t *label, const char *text)
 */
 
STATIC mp_obj_t mp_lv_label_set_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    const char *text = mp_obj_str_get_str(args[1]);
    lv_label_set_text(label, text);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_text_obj, 2, 2, mp_lv_label_set_text);

 

/*
 * lvgl extension definition for:
 * void lv_label_set_array_text(lv_obj_t *label, const char *array, uint16_t size)
 */
 
STATIC mp_obj_t mp_lv_label_set_array_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    const char *array = mp_obj_str_get_str(args[1]);
    uint16_t size = (uint16_t)mp_obj_int_get_checked(args[2]);
    lv_label_set_array_text(label, array, size);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_array_text_obj, 3, 3, mp_lv_label_set_array_text);

 

/*
 * lvgl extension definition for:
 * void lv_label_set_static_text(lv_obj_t *label, const char *text)
 */
 
STATIC mp_obj_t mp_lv_label_set_static_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    const char *text = mp_obj_str_get_str(args[1]);
    lv_label_set_static_text(label, text);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_static_text_obj, 2, 2, mp_lv_label_set_static_text);

 

/*
 * lvgl extension definition for:
 * void lv_label_set_long_mode(lv_obj_t *label, lv_label_long_mode_t long_mode)
 */
 
STATIC mp_obj_t mp_lv_label_set_long_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    lv_label_long_mode_t long_mode = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_label_set_long_mode(label, long_mode);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_long_mode_obj, 2, 2, mp_lv_label_set_long_mode);

 

/*
 * lvgl extension definition for:
 * void lv_label_set_align(lv_obj_t *label, lv_label_align_t align)
 */
 
STATIC mp_obj_t mp_lv_label_set_align(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    lv_label_align_t align = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_label_set_align(label, align);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_align_obj, 2, 2, mp_lv_label_set_align);

 

/*
 * lvgl extension definition for:
 * void lv_label_set_recolor(lv_obj_t *label, bool recolor_en)
 */
 
STATIC mp_obj_t mp_lv_label_set_recolor(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    bool recolor_en = mp_obj_is_true(args[1]);
    lv_label_set_recolor(label, recolor_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_recolor_obj, 2, 2, mp_lv_label_set_recolor);

 

/*
 * lvgl extension definition for:
 * void lv_label_set_body_draw(lv_obj_t *label, bool body_en)
 */
 
STATIC mp_obj_t mp_lv_label_set_body_draw(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    bool body_en = mp_obj_is_true(args[1]);
    lv_label_set_body_draw(label, body_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_body_draw_obj, 2, 2, mp_lv_label_set_body_draw);

 

/*
 * lvgl extension definition for:
 * void lv_label_set_anim_speed(lv_obj_t *label, uint16_t anim_speed)
 */
 
STATIC mp_obj_t mp_lv_label_set_anim_speed(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    uint16_t anim_speed = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_label_set_anim_speed(label, anim_speed);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_set_anim_speed_obj, 2, 2, mp_lv_label_set_anim_speed);

 

/*
 * lvgl extension definition for:
 * char *lv_label_get_text(const lv_obj_t *label)
 */
 
STATIC mp_obj_t mp_lv_label_get_text(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *label = mp_to_lv(args[0]);
    char* res = lv_label_get_text(label);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_get_text_obj, 1, 1, mp_lv_label_get_text);

 

/*
 * lvgl extension definition for:
 * lv_label_long_mode_t lv_label_get_long_mode(const lv_obj_t *label)
 */
 
STATIC mp_obj_t mp_lv_label_get_long_mode(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *label = mp_to_lv(args[0]);
    lv_label_long_mode_t res = lv_label_get_long_mode(label);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_get_long_mode_obj, 1, 1, mp_lv_label_get_long_mode);

 

/*
 * lvgl extension definition for:
 * lv_label_align_t lv_label_get_align(const lv_obj_t *label)
 */
 
STATIC mp_obj_t mp_lv_label_get_align(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *label = mp_to_lv(args[0]);
    lv_label_align_t res = lv_label_get_align(label);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_get_align_obj, 1, 1, mp_lv_label_get_align);

 

/*
 * lvgl extension definition for:
 * bool lv_label_get_recolor(const lv_obj_t *label)
 */
 
STATIC mp_obj_t mp_lv_label_get_recolor(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *label = mp_to_lv(args[0]);
    bool res = lv_label_get_recolor(label);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_get_recolor_obj, 1, 1, mp_lv_label_get_recolor);

 

/*
 * lvgl extension definition for:
 * bool lv_label_get_body_draw(const lv_obj_t *label)
 */
 
STATIC mp_obj_t mp_lv_label_get_body_draw(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *label = mp_to_lv(args[0]);
    bool res = lv_label_get_body_draw(label);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_get_body_draw_obj, 1, 1, mp_lv_label_get_body_draw);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_label_get_anim_speed(const lv_obj_t *label)
 */
 
STATIC mp_obj_t mp_lv_label_get_anim_speed(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *label = mp_to_lv(args[0]);
    uint16_t res = lv_label_get_anim_speed(label);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_get_anim_speed_obj, 1, 1, mp_lv_label_get_anim_speed);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_point_t*
 * void lv_label_get_letter_pos(const lv_obj_t *label, uint16_t index, lv_point_t *pos)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_point_t*
 * uint16_t lv_label_get_letter_on(const lv_obj_t *label, lv_point_t *pos)
 */
    

/*
 * lvgl extension definition for:
 * void lv_label_ins_text(lv_obj_t *label, uint32_t pos, const char *txt)
 */
 
STATIC mp_obj_t mp_lv_label_ins_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    uint32_t pos = (uint32_t)mp_obj_int_get_checked(args[1]);
    const char *txt = mp_obj_str_get_str(args[2]);
    lv_label_ins_text(label, pos, txt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_ins_text_obj, 3, 3, mp_lv_label_ins_text);

 

/*
 * lvgl extension definition for:
 * void lv_label_cut_text(lv_obj_t *label, uint32_t pos, uint32_t cnt)
 */
 
STATIC mp_obj_t mp_lv_label_cut_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *label = mp_to_lv(args[0]);
    uint32_t pos = (uint32_t)mp_obj_int_get_checked(args[1]);
    uint32_t cnt = (uint32_t)mp_obj_int_get_checked(args[2]);
    lv_label_cut_text(label, pos, cnt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_label_cut_text_obj, 3, 3, mp_lv_label_cut_text);

 

    
/*
 * lvgl label object definitions
 */

STATIC const mp_rom_map_elem_t label_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_text), MP_ROM_PTR(&mp_lv_label_set_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_array_text), MP_ROM_PTR(&mp_lv_label_set_array_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_static_text), MP_ROM_PTR(&mp_lv_label_set_static_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_long_mode), MP_ROM_PTR(&mp_lv_label_set_long_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_align), MP_ROM_PTR(&mp_lv_label_set_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_recolor), MP_ROM_PTR(&mp_lv_label_set_recolor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_body_draw), MP_ROM_PTR(&mp_lv_label_set_body_draw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_anim_speed), MP_ROM_PTR(&mp_lv_label_set_anim_speed_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_text), MP_ROM_PTR(&mp_lv_label_get_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_long_mode), MP_ROM_PTR(&mp_lv_label_get_long_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_align), MP_ROM_PTR(&mp_lv_label_get_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_recolor), MP_ROM_PTR(&mp_lv_label_get_recolor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_body_draw), MP_ROM_PTR(&mp_lv_label_get_body_draw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_anim_speed), MP_ROM_PTR(&mp_lv_label_get_anim_speed_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ins_text), MP_ROM_PTR(&mp_lv_label_ins_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_cut_text), MP_ROM_PTR(&mp_lv_label_cut_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LONG), MP_ROM_PTR(&mp_LV_LABEL_LONG_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ALIGN), MP_ROM_PTR(&mp_LV_LABEL_ALIGN_type) }
};

STATIC MP_DEFINE_CONST_DICT(label_locals_dict, label_locals_dict_table);

STATIC void label_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl label");
}


STATIC mp_obj_t label_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_label_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_label_type = {
    { &mp_type_type },
    .name = MP_QSTR_label,
    .print = label_print,
    .make_new = label_make_new,
    .locals_dict = (mp_obj_dict_t*)&label_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * void lv_bar_set_value(lv_obj_t *bar, int16_t value)
 */
 
STATIC mp_obj_t mp_lv_bar_set_value(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *bar = mp_to_lv(args[0]);
    int16_t value = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_bar_set_value(bar, value);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_bar_set_value_obj, 2, 2, mp_lv_bar_set_value);

 

/*
 * lvgl extension definition for:
 * void lv_bar_set_value_anim(lv_obj_t *bar, int16_t value, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_bar_set_value_anim(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *bar = mp_to_lv(args[0]);
    int16_t value = (int16_t)mp_obj_int_get_checked(args[1]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[2]);
    lv_bar_set_value_anim(bar, value, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_bar_set_value_anim_obj, 3, 3, mp_lv_bar_set_value_anim);

 

/*
 * lvgl extension definition for:
 * void lv_bar_set_range(lv_obj_t *bar, int16_t min, int16_t max)
 */
 
STATIC mp_obj_t mp_lv_bar_set_range(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *bar = mp_to_lv(args[0]);
    int16_t min = (int16_t)mp_obj_int_get_checked(args[1]);
    int16_t max = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_bar_set_range(bar, min, max);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_bar_set_range_obj, 3, 3, mp_lv_bar_set_range);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_bar_set_style(lv_obj_t *bar, lv_bar_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * int16_t lv_bar_get_value(const lv_obj_t *bar)
 */
 
STATIC mp_obj_t mp_lv_bar_get_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *bar = mp_to_lv(args[0]);
    int16_t res = lv_bar_get_value(bar);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_bar_get_value_obj, 1, 1, mp_lv_bar_get_value);

 

/*
 * lvgl extension definition for:
 * int16_t lv_bar_get_min_value(const lv_obj_t *bar)
 */
 
STATIC mp_obj_t mp_lv_bar_get_min_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *bar = mp_to_lv(args[0]);
    int16_t res = lv_bar_get_min_value(bar);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_bar_get_min_value_obj, 1, 1, mp_lv_bar_get_min_value);

 

/*
 * lvgl extension definition for:
 * int16_t lv_bar_get_max_value(const lv_obj_t *bar)
 */
 
STATIC mp_obj_t mp_lv_bar_get_max_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *bar = mp_to_lv(args[0]);
    int16_t res = lv_bar_get_max_value(bar);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_bar_get_max_value_obj, 1, 1, mp_lv_bar_get_max_value);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_bar_get_style(const lv_obj_t *bar, lv_bar_style_t type)
 */
    

    
/*
 * lvgl bar object definitions
 */

STATIC const mp_rom_map_elem_t bar_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_bar_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value_anim), MP_ROM_PTR(&mp_lv_bar_set_value_anim_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_bar_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_bar_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_bar_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_bar_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_BAR_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(bar_locals_dict, bar_locals_dict_table);

STATIC void bar_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl bar");
}


STATIC mp_obj_t bar_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_bar_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_bar_type = {
    { &mp_type_type },
    .name = MP_QSTR_bar,
    .print = bar_print,
    .make_new = bar_make_new,
    .locals_dict = (mp_obj_dict_t*)&bar_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to const char**
 * void lv_btnm_set_map(lv_obj_t *btnm, const char **map)
 */
    

/*
 * lvgl extension definition for:
 * void lv_btnm_set_action(lv_obj_t *btnm, lv_btnm_action_t action)
 */
 
STATIC mp_obj_t mp_lv_btnm_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btnm = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_btnm_action_t action = &lv_btnm_action_t_callback;
    lv_btnm_set_action(btnm, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btnm_set_action_obj, 2, 2, mp_lv_btnm_set_action);

 

/*
 * lvgl extension definition for:
 * void lv_btnm_set_toggle(lv_obj_t *btnm, bool en, uint16_t id)
 */
 
STATIC mp_obj_t mp_lv_btnm_set_toggle(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btnm = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    uint16_t id = (uint16_t)mp_obj_int_get_checked(args[2]);
    lv_btnm_set_toggle(btnm, en, id);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btnm_set_toggle_obj, 3, 3, mp_lv_btnm_set_toggle);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_btnm_set_style(lv_obj_t *btnm, lv_btnm_style_t type, lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from const char**
 * const char **lv_btnm_get_map(const lv_obj_t *btnm)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_btnm_action_t
 * lv_btnm_action_t lv_btnm_get_action(const lv_obj_t *btnm)
 */
    

/*
 * lvgl extension definition for:
 * uint16_t lv_btnm_get_toggled(const lv_obj_t *btnm)
 */
 
STATIC mp_obj_t mp_lv_btnm_get_toggled(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btnm = mp_to_lv(args[0]);
    uint16_t res = lv_btnm_get_toggled(btnm);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_btnm_get_toggled_obj, 1, 1, mp_lv_btnm_get_toggled);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_btnm_get_style(const lv_obj_t *btnm, lv_btnm_style_t type)
 */
    

    
/*
 * lvgl btnm object definitions
 */

STATIC const mp_rom_map_elem_t btnm_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_btnm_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_toggle), MP_ROM_PTR(&mp_lv_btnm_set_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_toggled), MP_ROM_PTR(&mp_lv_btnm_get_toggled_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_BTNM_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(btnm_locals_dict, btnm_locals_dict_table);

STATIC void btnm_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl btnm");
}


STATIC mp_obj_t btnm_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_btnm_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_btnm_type = {
    { &mp_type_type },
    .name = MP_QSTR_btnm,
    .print = btnm_print,
    .make_new = btnm_make_new,
    .locals_dict = (mp_obj_dict_t*)&btnm_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_cb_set_checked(lv_obj_t *cb, bool checked)
 */
 
STATIC mp_obj_t mp_lv_cb_set_checked(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cb = mp_to_lv(args[0]);
    bool checked = mp_obj_is_true(args[1]);
    lv_cb_set_checked(cb, checked);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cb_set_checked_obj, 2, 2, mp_lv_cb_set_checked);

 

/*
 * lvgl extension definition for:
 * inline static void lv_cb_set_inactive(lv_obj_t *cb)
 */
 
STATIC mp_obj_t mp_lv_cb_set_inactive(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cb = mp_to_lv(args[0]);
    lv_cb_set_inactive(cb);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cb_set_inactive_obj, 1, 1, mp_lv_cb_set_inactive);

 

/*
 * lvgl extension definition for:
 * inline static void lv_cb_set_action(lv_obj_t *cb, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_cb_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cb = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_cb_set_action(cb, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cb_set_action_obj, 2, 2, mp_lv_cb_set_action);

 

/*
 * lvgl extension definition for:
 * inline static bool lv_cb_is_checked(const lv_obj_t *cb)
 */
 
STATIC mp_obj_t mp_lv_cb_is_checked(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *cb = mp_to_lv(args[0]);
    bool res = lv_cb_is_checked(cb);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cb_is_checked_obj, 1, 1, mp_lv_cb_is_checked);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * inline static lv_action_t lv_cb_get_action(const lv_obj_t *cb)
 */
    

/*
 * lvgl extension definition for:
 * void lv_cb_set_text(lv_obj_t *cb, const char *txt)
 */
 
STATIC mp_obj_t mp_lv_cb_set_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *cb = mp_to_lv(args[0]);
    const char *txt = mp_obj_str_get_str(args[1]);
    lv_cb_set_text(cb, txt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cb_set_text_obj, 2, 2, mp_lv_cb_set_text);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_cb_set_style(lv_obj_t *cb, lv_cb_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * const char *lv_cb_get_text(const lv_obj_t *cb)
 */
 
STATIC mp_obj_t mp_lv_cb_get_text(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *cb = mp_to_lv(args[0]);
    const char* res = lv_cb_get_text(cb);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_cb_get_text_obj, 1, 1, mp_lv_cb_get_text);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_cb_get_style(const lv_obj_t *cb, lv_cb_style_t type)
 */
    

    
/*
 * lvgl cb object definitions
 */

STATIC const mp_rom_map_elem_t cb_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_checked), MP_ROM_PTR(&mp_lv_cb_set_checked_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_inactive), MP_ROM_PTR(&mp_lv_cb_set_inactive_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_cb_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_checked), MP_ROM_PTR(&mp_lv_cb_is_checked_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_text), MP_ROM_PTR(&mp_lv_cb_set_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_text), MP_ROM_PTR(&mp_lv_cb_get_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_btn_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_btn_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_btn_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_btn_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_btn_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_toggle), MP_ROM_PTR(&mp_lv_btn_set_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_state), MP_ROM_PTR(&mp_lv_btn_set_state_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_toggle), MP_ROM_PTR(&mp_lv_btn_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_btn_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ink_in_time), MP_ROM_PTR(&mp_lv_btn_set_ink_in_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ink_wait_time), MP_ROM_PTR(&mp_lv_btn_set_ink_wait_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ink_out_time), MP_ROM_PTR(&mp_lv_btn_set_ink_out_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_state), MP_ROM_PTR(&mp_lv_btn_get_state_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_toggle), MP_ROM_PTR(&mp_lv_btn_get_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ink_in_time), MP_ROM_PTR(&mp_lv_btn_get_ink_in_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ink_wait_time), MP_ROM_PTR(&mp_lv_btn_get_ink_wait_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ink_out_time), MP_ROM_PTR(&mp_lv_btn_get_ink_out_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STATE), MP_ROM_PTR(&mp_LV_BTN_STATE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ACTION), MP_ROM_PTR(&mp_LV_BTN_ACTION_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_BTN_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_CB_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(cb_locals_dict, cb_locals_dict_table);

STATIC void cb_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl cb");
}


STATIC mp_obj_t cb_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_cb_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_cb_type = {
    { &mp_type_type },
    .name = MP_QSTR_cb,
    .print = cb_print,
    .make_new = cb_make_new,
    .locals_dict = (mp_obj_dict_t*)&cb_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_line_set_style(lv_obj_t *line, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * inline static void lv_line_set_upscale(lv_obj_t *line, bool upcale)
 */
 
STATIC mp_obj_t mp_lv_line_set_upscale(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *line = mp_to_lv(args[0]);
    bool upcale = mp_obj_is_true(args[1]);
    lv_line_set_upscale(line, upcale);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_line_set_upscale_obj, 2, 2, mp_lv_line_set_upscale);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_line_get_style(const lv_obj_t *line)
 */
    

/*
 * lvgl extension definition for:
 * inline static bool lv_line_get_upscale(const lv_obj_t *line)
 */
 
STATIC mp_obj_t mp_lv_line_get_upscale(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *line = mp_to_lv(args[0]);
    bool res = lv_line_get_upscale(line);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_line_get_upscale_obj, 1, 1, mp_lv_line_get_upscale);

 

/*
 * Function NOT generated:
 * Missing conversion to const lv_point_t*
 * void lv_line_set_points(lv_obj_t *line, const lv_point_t *point_a, uint16_t point_num)
 */
    

/*
 * lvgl extension definition for:
 * void lv_line_set_auto_size(lv_obj_t *line, bool autosize_en)
 */
 
STATIC mp_obj_t mp_lv_line_set_auto_size(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *line = mp_to_lv(args[0]);
    bool autosize_en = mp_obj_is_true(args[1]);
    lv_line_set_auto_size(line, autosize_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_line_set_auto_size_obj, 2, 2, mp_lv_line_set_auto_size);

 

/*
 * lvgl extension definition for:
 * void lv_line_set_y_invert(lv_obj_t *line, bool yinv_en)
 */
 
STATIC mp_obj_t mp_lv_line_set_y_invert(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *line = mp_to_lv(args[0]);
    bool yinv_en = mp_obj_is_true(args[1]);
    lv_line_set_y_invert(line, yinv_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_line_set_y_invert_obj, 2, 2, mp_lv_line_set_y_invert);

 

/*
 * lvgl extension definition for:
 * bool lv_line_get_auto_size(const lv_obj_t *line)
 */
 
STATIC mp_obj_t mp_lv_line_get_auto_size(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *line = mp_to_lv(args[0]);
    bool res = lv_line_get_auto_size(line);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_line_get_auto_size_obj, 1, 1, mp_lv_line_get_auto_size);

 

/*
 * lvgl extension definition for:
 * bool lv_line_get_y_inv(const lv_obj_t *line)
 */
 
STATIC mp_obj_t mp_lv_line_get_y_inv(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *line = mp_to_lv(args[0]);
    bool res = lv_line_get_y_inv(line);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_line_get_y_inv_obj, 1, 1, mp_lv_line_get_y_inv);

 

    
/*
 * lvgl line object definitions
 */

STATIC const mp_rom_map_elem_t line_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_upscale), MP_ROM_PTR(&mp_lv_line_set_upscale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_upscale), MP_ROM_PTR(&mp_lv_line_get_upscale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_auto_size), MP_ROM_PTR(&mp_lv_line_set_auto_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y_invert), MP_ROM_PTR(&mp_lv_line_set_y_invert_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_auto_size), MP_ROM_PTR(&mp_lv_line_get_auto_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y_inv), MP_ROM_PTR(&mp_lv_line_get_y_inv_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) }
};

STATIC MP_DEFINE_CONST_DICT(line_locals_dict, line_locals_dict_table);

STATIC void line_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl line");
}


STATIC mp_obj_t line_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_line_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_line_type = {
    { &mp_type_type },
    .name = MP_QSTR_line,
    .print = line_print,
    .make_new = line_make_new,
    .locals_dict = (mp_obj_dict_t*)&line_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_chart_set_style(lv_obj_t *chart, lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_chart_get_style(const lv_obj_t *chart)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_chart_series_t*
 * lv_chart_series_t *lv_chart_add_series(lv_obj_t *chart, lv_color_t color)
 */
    

/*
 * lvgl extension definition for:
 * void lv_chart_set_div_line_count(lv_obj_t *chart, uint8_t hdiv, uint8_t vdiv)
 */
 
STATIC mp_obj_t mp_lv_chart_set_div_line_count(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    uint8_t hdiv = (uint8_t)mp_obj_int_get_checked(args[1]);
    uint8_t vdiv = (uint8_t)mp_obj_int_get_checked(args[2]);
    lv_chart_set_div_line_count(chart, hdiv, vdiv);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_set_div_line_count_obj, 3, 3, mp_lv_chart_set_div_line_count);

 

/*
 * lvgl extension definition for:
 * void lv_chart_set_range(lv_obj_t *chart, lv_coord_t ymin, lv_coord_t ymax)
 */
 
STATIC mp_obj_t mp_lv_chart_set_range(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    lv_coord_t ymin = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_coord_t ymax = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_chart_set_range(chart, ymin, ymax);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_set_range_obj, 3, 3, mp_lv_chart_set_range);

 

/*
 * lvgl extension definition for:
 * void lv_chart_set_type(lv_obj_t *chart, lv_chart_type_t type)
 */
 
STATIC mp_obj_t mp_lv_chart_set_type(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    lv_chart_type_t type = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_chart_set_type(chart, type);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_set_type_obj, 2, 2, mp_lv_chart_set_type);

 

/*
 * lvgl extension definition for:
 * void lv_chart_set_point_count(lv_obj_t *chart, uint16_t point_cnt)
 */
 
STATIC mp_obj_t mp_lv_chart_set_point_count(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    uint16_t point_cnt = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_chart_set_point_count(chart, point_cnt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_set_point_count_obj, 2, 2, mp_lv_chart_set_point_count);

 

/*
 * lvgl extension definition for:
 * void lv_chart_set_series_opa(lv_obj_t *chart, lv_opa_t opa)
 */
 
STATIC mp_obj_t mp_lv_chart_set_series_opa(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    lv_opa_t opa = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_chart_set_series_opa(chart, opa);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_set_series_opa_obj, 2, 2, mp_lv_chart_set_series_opa);

 

/*
 * lvgl extension definition for:
 * void lv_chart_set_series_width(lv_obj_t *chart, lv_coord_t width)
 */
 
STATIC mp_obj_t mp_lv_chart_set_series_width(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    lv_coord_t width = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_chart_set_series_width(chart, width);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_set_series_width_obj, 2, 2, mp_lv_chart_set_series_width);

 

/*
 * lvgl extension definition for:
 * void lv_chart_set_series_darking(lv_obj_t *chart, lv_opa_t dark_eff)
 */
 
STATIC mp_obj_t mp_lv_chart_set_series_darking(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    lv_opa_t dark_eff = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_chart_set_series_darking(chart, dark_eff);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_set_series_darking_obj, 2, 2, mp_lv_chart_set_series_darking);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_chart_series_t*
 * void lv_chart_init_points(lv_obj_t *chart, lv_chart_series_t *ser, lv_coord_t y)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_chart_series_t*
 * void lv_chart_set_points(lv_obj_t *chart, lv_chart_series_t *ser, lv_coord_t *y_array)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_chart_series_t*
 * void lv_chart_set_next(lv_obj_t *chart, lv_chart_series_t *ser, lv_coord_t y)
 */
    

/*
 * lvgl extension definition for:
 * lv_chart_type_t lv_chart_get_type(const lv_obj_t *chart)
 */
 
STATIC mp_obj_t mp_lv_chart_get_type(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *chart = mp_to_lv(args[0]);
    lv_chart_type_t res = lv_chart_get_type(chart);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_get_type_obj, 1, 1, mp_lv_chart_get_type);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_chart_get_point_cnt(const lv_obj_t *chart)
 */
 
STATIC mp_obj_t mp_lv_chart_get_point_cnt(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *chart = mp_to_lv(args[0]);
    uint16_t res = lv_chart_get_point_cnt(chart);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_get_point_cnt_obj, 1, 1, mp_lv_chart_get_point_cnt);

 

/*
 * lvgl extension definition for:
 * lv_opa_t lv_chart_get_series_opa(const lv_obj_t *chart)
 */
 
STATIC mp_obj_t mp_lv_chart_get_series_opa(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *chart = mp_to_lv(args[0]);
    lv_opa_t res = lv_chart_get_series_opa(chart);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_get_series_opa_obj, 1, 1, mp_lv_chart_get_series_opa);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_chart_get_series_width(const lv_obj_t *chart)
 */
 
STATIC mp_obj_t mp_lv_chart_get_series_width(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *chart = mp_to_lv(args[0]);
    lv_coord_t res = lv_chart_get_series_width(chart);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_get_series_width_obj, 1, 1, mp_lv_chart_get_series_width);

 

/*
 * lvgl extension definition for:
 * lv_opa_t lv_chart_get_series_darking(const lv_obj_t *chart)
 */
 
STATIC mp_obj_t mp_lv_chart_get_series_darking(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *chart = mp_to_lv(args[0]);
    lv_opa_t res = lv_chart_get_series_darking(chart);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_get_series_darking_obj, 1, 1, mp_lv_chart_get_series_darking);

 

/*
 * lvgl extension definition for:
 * void lv_chart_refresh(lv_obj_t *chart)
 */
 
STATIC mp_obj_t mp_lv_chart_refresh(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *chart = mp_to_lv(args[0]);
    lv_chart_refresh(chart);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_chart_refresh_obj, 1, 1, mp_lv_chart_refresh);

 

    
/*
 * lvgl chart object definitions
 */

STATIC const mp_rom_map_elem_t chart_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_div_line_count), MP_ROM_PTR(&mp_lv_chart_set_div_line_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_chart_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_type), MP_ROM_PTR(&mp_lv_chart_set_type_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_point_count), MP_ROM_PTR(&mp_lv_chart_set_point_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_series_opa), MP_ROM_PTR(&mp_lv_chart_set_series_opa_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_series_width), MP_ROM_PTR(&mp_lv_chart_set_series_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_series_darking), MP_ROM_PTR(&mp_lv_chart_set_series_darking_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_type), MP_ROM_PTR(&mp_lv_chart_get_type_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_point_cnt), MP_ROM_PTR(&mp_lv_chart_get_point_cnt_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_series_opa), MP_ROM_PTR(&mp_lv_chart_get_series_opa_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_series_width), MP_ROM_PTR(&mp_lv_chart_get_series_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_series_darking), MP_ROM_PTR(&mp_lv_chart_get_series_darking_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh), MP_ROM_PTR(&mp_lv_chart_refresh_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TYPE), MP_ROM_PTR(&mp_LV_CHART_TYPE_type) }
};

STATIC MP_DEFINE_CONST_DICT(chart_locals_dict, chart_locals_dict_table);

STATIC void chart_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl chart");
}


STATIC mp_obj_t chart_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_chart_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_chart_type = {
    { &mp_type_type },
    .name = MP_QSTR_chart,
    .print = chart_print,
    .make_new = chart_make_new,
    .locals_dict = (mp_obj_dict_t*)&chart_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_page_set_scrl_fit(lv_obj_t *page, bool hor_en, bool ver_en)
 */
 
STATIC mp_obj_t mp_lv_page_set_scrl_fit(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    bool hor_en = mp_obj_is_true(args[1]);
    bool ver_en = mp_obj_is_true(args[2]);
    lv_page_set_scrl_fit(page, hor_en, ver_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_scrl_fit_obj, 3, 3, mp_lv_page_set_scrl_fit);

 

/*
 * lvgl extension definition for:
 * inline static void lv_page_set_scrl_width(lv_obj_t *page, lv_coord_t w)
 */
 
STATIC mp_obj_t mp_lv_page_set_scrl_width(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t w = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_page_set_scrl_width(page, w);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_scrl_width_obj, 2, 2, mp_lv_page_set_scrl_width);

 

/*
 * lvgl extension definition for:
 * inline static void lv_page_set_scrl_height(lv_obj_t *page, lv_coord_t h)
 */
 
STATIC mp_obj_t mp_lv_page_set_scrl_height(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t h = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_page_set_scrl_height(page, h);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_scrl_height_obj, 2, 2, mp_lv_page_set_scrl_height);

 

/*
 * lvgl extension definition for:
 * inline static void lv_page_set_scrl_layout(lv_obj_t *page, lv_layout_t layout)
 */
 
STATIC mp_obj_t mp_lv_page_set_scrl_layout(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_layout_t layout = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_page_set_scrl_layout(page, layout);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_scrl_layout_obj, 2, 2, mp_lv_page_set_scrl_layout);

 

/*
 * lvgl extension definition for:
 * inline static lv_coord_t lv_page_get_scrl_width(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_scrl_width(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t res = lv_page_get_scrl_width(page);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_scrl_width_obj, 1, 1, mp_lv_page_get_scrl_width);

 

/*
 * lvgl extension definition for:
 * inline static lv_coord_t lv_page_get_scrl_height(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_scrl_height(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t res = lv_page_get_scrl_height(page);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_scrl_height_obj, 1, 1, mp_lv_page_get_scrl_height);

 

/*
 * lvgl extension definition for:
 * inline static lv_layout_t lv_page_get_scrl_layout(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_scrl_layout(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    lv_layout_t res = lv_page_get_scrl_layout(page);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_scrl_layout_obj, 1, 1, mp_lv_page_get_scrl_layout);

 

/*
 * lvgl extension definition for:
 * inline static bool lv_page_get_scrl_hor_fit(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_scrl_hor_fit(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    bool res = lv_page_get_scrl_hor_fit(page);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_scrl_hor_fit_obj, 1, 1, mp_lv_page_get_scrl_hor_fit);

 

/*
 * lvgl extension definition for:
 * inline static bool lv_page_get_scrl_fit_ver(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_scrl_fit_ver(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    bool res = lv_page_get_scrl_fit_ver(page);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_scrl_fit_ver_obj, 1, 1, mp_lv_page_get_scrl_fit_ver);

 

/*
 * lvgl extension definition for:
 * void lv_page_clean(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_page_clean(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_page_clean(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_clean_obj, 1, 1, mp_lv_page_clean);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * lv_action_t lv_page_get_pr_action(lv_obj_t *page)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * lv_action_t lv_page_get_rel_action(lv_obj_t *page)
 */
    

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_page_get_scrl(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_scrl(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    lv_obj_t* res = lv_page_get_scrl(page);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_scrl_obj, 1, 1, mp_lv_page_get_scrl);

 

/*
 * lvgl extension definition for:
 * void lv_page_set_rel_action(lv_obj_t *page, lv_action_t rel_action)
 */
 
STATIC mp_obj_t mp_lv_page_set_rel_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t rel_action = &lv_action_t_callback;
    lv_page_set_rel_action(page, rel_action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_rel_action_obj, 2, 2, mp_lv_page_set_rel_action);

 

/*
 * lvgl extension definition for:
 * void lv_page_set_pr_action(lv_obj_t *page, lv_action_t pr_action)
 */
 
STATIC mp_obj_t mp_lv_page_set_pr_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t pr_action = &lv_action_t_callback;
    lv_page_set_pr_action(page, pr_action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_pr_action_obj, 2, 2, mp_lv_page_set_pr_action);

 

/*
 * lvgl extension definition for:
 * void lv_page_set_sb_mode(lv_obj_t *page, lv_sb_mode_t sb_mode)
 */
 
STATIC mp_obj_t mp_lv_page_set_sb_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_sb_mode_t sb_mode = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_page_set_sb_mode(page, sb_mode);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_sb_mode_obj, 2, 2, mp_lv_page_set_sb_mode);

 

/*
 * lvgl extension definition for:
 * void lv_page_set_arrow_scroll(lv_obj_t *page, bool en)
 */
 
STATIC mp_obj_t mp_lv_page_set_arrow_scroll(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_page_set_arrow_scroll(page, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_set_arrow_scroll_obj, 2, 2, mp_lv_page_set_arrow_scroll);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_page_set_style(lv_obj_t *page, lv_page_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * lv_sb_mode_t lv_page_get_sb_mode(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_sb_mode(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    lv_sb_mode_t res = lv_page_get_sb_mode(page);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_sb_mode_obj, 1, 1, mp_lv_page_get_sb_mode);

 

/*
 * lvgl extension definition for:
 * bool lv_page_get_arrow_scroll(const lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_arrow_scroll(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *page = mp_to_lv(args[0]);
    bool res = lv_page_get_arrow_scroll(page);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_arrow_scroll_obj, 1, 1, mp_lv_page_get_arrow_scroll);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_page_get_fit_width(lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_fit_width(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t res = lv_page_get_fit_width(page);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_fit_width_obj, 1, 1, mp_lv_page_get_fit_width);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_page_get_fit_height(lv_obj_t *page)
 */
 
STATIC mp_obj_t mp_lv_page_get_fit_height(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t res = lv_page_get_fit_height(page);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_get_fit_height_obj, 1, 1, mp_lv_page_get_fit_height);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_page_get_style(const lv_obj_t *page, lv_page_style_t type)
 */
    

/*
 * lvgl extension definition for:
 * void lv_page_glue_obj(lv_obj_t *obj, bool glue)
 */
 
STATIC mp_obj_t mp_lv_page_glue_obj(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    bool glue = mp_obj_is_true(args[1]);
    lv_page_glue_obj(obj, glue);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_glue_obj_obj, 2, 2, mp_lv_page_glue_obj);

 

/*
 * lvgl extension definition for:
 * void lv_page_focus(lv_obj_t *page, const lv_obj_t *obj, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_page_focus(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    const lv_obj_t *obj = mp_to_lv(args[1]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[2]);
    lv_page_focus(page, obj, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_focus_obj, 3, 3, mp_lv_page_focus);

 

/*
 * lvgl extension definition for:
 * void lv_page_scroll_hor(lv_obj_t *page, lv_coord_t dist)
 */
 
STATIC mp_obj_t mp_lv_page_scroll_hor(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t dist = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_page_scroll_hor(page, dist);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_scroll_hor_obj, 2, 2, mp_lv_page_scroll_hor);

 

/*
 * lvgl extension definition for:
 * void lv_page_scroll_ver(lv_obj_t *page, lv_coord_t dist)
 */
 
STATIC mp_obj_t mp_lv_page_scroll_ver(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *page = mp_to_lv(args[0]);
    lv_coord_t dist = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_page_scroll_ver(page, dist);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_page_scroll_ver_obj, 2, 2, mp_lv_page_scroll_ver);

 

    
/*
 * lvgl page object definitions
 */

STATIC const mp_rom_map_elem_t page_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_fit), MP_ROM_PTR(&mp_lv_page_set_scrl_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_width), MP_ROM_PTR(&mp_lv_page_set_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_height), MP_ROM_PTR(&mp_lv_page_set_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_layout), MP_ROM_PTR(&mp_lv_page_set_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_width), MP_ROM_PTR(&mp_lv_page_get_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_height), MP_ROM_PTR(&mp_lv_page_get_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_layout), MP_ROM_PTR(&mp_lv_page_get_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_hor_fit), MP_ROM_PTR(&mp_lv_page_get_scrl_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_fit_ver), MP_ROM_PTR(&mp_lv_page_get_scrl_fit_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_page_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl), MP_ROM_PTR(&mp_lv_page_get_scrl_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_rel_action), MP_ROM_PTR(&mp_lv_page_set_rel_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pr_action), MP_ROM_PTR(&mp_lv_page_set_pr_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_page_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_arrow_scroll), MP_ROM_PTR(&mp_lv_page_set_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_page_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_arrow_scroll), MP_ROM_PTR(&mp_lv_page_get_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_page_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_page_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_glue_obj), MP_ROM_PTR(&mp_lv_page_glue_obj_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_focus), MP_ROM_PTR(&mp_lv_page_focus_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_hor), MP_ROM_PTR(&mp_lv_page_scroll_hor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_ver), MP_ROM_PTR(&mp_lv_page_scroll_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_PAGE_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(page_locals_dict, page_locals_dict_table);

STATIC void page_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl page");
}


STATIC mp_obj_t page_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_page_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_page_type = {
    { &mp_type_type },
    .name = MP_QSTR_page,
    .print = page_print,
    .make_new = page_make_new,
    .locals_dict = (mp_obj_dict_t*)&page_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_ddlist_set_sb_mode(lv_obj_t *ddlist, lv_sb_mode_t mode)
 */
 
STATIC mp_obj_t mp_lv_ddlist_set_sb_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    lv_sb_mode_t mode = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_ddlist_set_sb_mode(ddlist, mode);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_set_sb_mode_obj, 2, 2, mp_lv_ddlist_set_sb_mode);

 

/*
 * lvgl extension definition for:
 * inline static lv_sb_mode_t lv_ddlist_get_sb_mode(const lv_obj_t *ddlist)
 */
 
STATIC mp_obj_t mp_lv_ddlist_get_sb_mode(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ddlist = mp_to_lv(args[0]);
    lv_sb_mode_t res = lv_ddlist_get_sb_mode(ddlist);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_get_sb_mode_obj, 1, 1, mp_lv_ddlist_get_sb_mode);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_set_options(lv_obj_t *ddlist, const char *options)
 */
 
STATIC mp_obj_t mp_lv_ddlist_set_options(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    const char *options = mp_obj_str_get_str(args[1]);
    lv_ddlist_set_options(ddlist, options);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_set_options_obj, 2, 2, mp_lv_ddlist_set_options);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_set_selected(lv_obj_t *ddlist, uint16_t sel_opt)
 */
 
STATIC mp_obj_t mp_lv_ddlist_set_selected(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    uint16_t sel_opt = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_ddlist_set_selected(ddlist, sel_opt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_set_selected_obj, 2, 2, mp_lv_ddlist_set_selected);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_set_action(lv_obj_t *ddlist, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_ddlist_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_ddlist_set_action(ddlist, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_set_action_obj, 2, 2, mp_lv_ddlist_set_action);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_set_fix_height(lv_obj_t *ddlist, lv_coord_t h)
 */
 
STATIC mp_obj_t mp_lv_ddlist_set_fix_height(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    lv_coord_t h = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_ddlist_set_fix_height(ddlist, h);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_set_fix_height_obj, 2, 2, mp_lv_ddlist_set_fix_height);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_set_hor_fit(lv_obj_t *ddlist, bool fit_en)
 */
 
STATIC mp_obj_t mp_lv_ddlist_set_hor_fit(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    bool fit_en = mp_obj_is_true(args[1]);
    lv_ddlist_set_hor_fit(ddlist, fit_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_set_hor_fit_obj, 2, 2, mp_lv_ddlist_set_hor_fit);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_set_anim_time(lv_obj_t *ddlist, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_ddlist_set_anim_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_ddlist_set_anim_time(ddlist, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_set_anim_time_obj, 2, 2, mp_lv_ddlist_set_anim_time);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_ddlist_set_style(lv_obj_t *ddlist, lv_ddlist_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * const char *lv_ddlist_get_options(const lv_obj_t *ddlist)
 */
 
STATIC mp_obj_t mp_lv_ddlist_get_options(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ddlist = mp_to_lv(args[0]);
    const char* res = lv_ddlist_get_options(ddlist);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_get_options_obj, 1, 1, mp_lv_ddlist_get_options);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_ddlist_get_selected(const lv_obj_t *ddlist)
 */
 
STATIC mp_obj_t mp_lv_ddlist_get_selected(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ddlist = mp_to_lv(args[0]);
    uint16_t res = lv_ddlist_get_selected(ddlist);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_get_selected_obj, 1, 1, mp_lv_ddlist_get_selected);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_get_selected_str(const lv_obj_t *ddlist, char *buf)
 */
 
STATIC mp_obj_t mp_lv_ddlist_get_selected_str(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ddlist = mp_to_lv(args[0]);
    char *buf = (char*)mp_obj_str_get_str(args[1]);
    lv_ddlist_get_selected_str(ddlist, buf);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_get_selected_str_obj, 2, 2, mp_lv_ddlist_get_selected_str);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * lv_action_t lv_ddlist_get_action(const lv_obj_t *ddlist)
 */
    

/*
 * lvgl extension definition for:
 * lv_coord_t lv_ddlist_get_fix_height(const lv_obj_t *ddlist)
 */
 
STATIC mp_obj_t mp_lv_ddlist_get_fix_height(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ddlist = mp_to_lv(args[0]);
    lv_coord_t res = lv_ddlist_get_fix_height(ddlist);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_get_fix_height_obj, 1, 1, mp_lv_ddlist_get_fix_height);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_ddlist_get_anim_time(const lv_obj_t *ddlist)
 */
 
STATIC mp_obj_t mp_lv_ddlist_get_anim_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ddlist = mp_to_lv(args[0]);
    uint16_t res = lv_ddlist_get_anim_time(ddlist);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_get_anim_time_obj, 1, 1, mp_lv_ddlist_get_anim_time);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_ddlist_get_style(const lv_obj_t *ddlist, lv_ddlist_style_t type)
 */
    

/*
 * lvgl extension definition for:
 * void lv_ddlist_open(lv_obj_t *ddlist, bool anim)
 */
 
STATIC mp_obj_t mp_lv_ddlist_open(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    bool anim = mp_obj_is_true(args[1]);
    lv_ddlist_open(ddlist, anim);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_open_obj, 2, 2, mp_lv_ddlist_open);

 

/*
 * lvgl extension definition for:
 * void lv_ddlist_close(lv_obj_t *ddlist, bool anim)
 */
 
STATIC mp_obj_t mp_lv_ddlist_close(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ddlist = mp_to_lv(args[0]);
    bool anim = mp_obj_is_true(args[1]);
    lv_ddlist_close(ddlist, anim);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ddlist_close_obj, 2, 2, mp_lv_ddlist_close);

 

    
/*
 * lvgl ddlist object definitions
 */

STATIC const mp_rom_map_elem_t ddlist_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_ddlist_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_ddlist_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_options), MP_ROM_PTR(&mp_lv_ddlist_set_options_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_selected), MP_ROM_PTR(&mp_lv_ddlist_set_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_ddlist_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fix_height), MP_ROM_PTR(&mp_lv_ddlist_set_fix_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hor_fit), MP_ROM_PTR(&mp_lv_ddlist_set_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_anim_time), MP_ROM_PTR(&mp_lv_ddlist_set_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_options), MP_ROM_PTR(&mp_lv_ddlist_get_options_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_selected), MP_ROM_PTR(&mp_lv_ddlist_get_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_selected_str), MP_ROM_PTR(&mp_lv_ddlist_get_selected_str_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fix_height), MP_ROM_PTR(&mp_lv_ddlist_get_fix_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_anim_time), MP_ROM_PTR(&mp_lv_ddlist_get_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_open), MP_ROM_PTR(&mp_lv_ddlist_open_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_close), MP_ROM_PTR(&mp_lv_ddlist_close_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_fit), MP_ROM_PTR(&mp_lv_page_set_scrl_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_width), MP_ROM_PTR(&mp_lv_page_set_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_height), MP_ROM_PTR(&mp_lv_page_set_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_layout), MP_ROM_PTR(&mp_lv_page_set_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_width), MP_ROM_PTR(&mp_lv_page_get_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_height), MP_ROM_PTR(&mp_lv_page_get_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_layout), MP_ROM_PTR(&mp_lv_page_get_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_hor_fit), MP_ROM_PTR(&mp_lv_page_get_scrl_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_fit_ver), MP_ROM_PTR(&mp_lv_page_get_scrl_fit_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_page_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl), MP_ROM_PTR(&mp_lv_page_get_scrl_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_rel_action), MP_ROM_PTR(&mp_lv_page_set_rel_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pr_action), MP_ROM_PTR(&mp_lv_page_set_pr_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_page_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_arrow_scroll), MP_ROM_PTR(&mp_lv_page_set_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_page_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_arrow_scroll), MP_ROM_PTR(&mp_lv_page_get_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_page_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_page_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_glue_obj), MP_ROM_PTR(&mp_lv_page_glue_obj_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_focus), MP_ROM_PTR(&mp_lv_page_focus_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_hor), MP_ROM_PTR(&mp_lv_page_scroll_hor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_ver), MP_ROM_PTR(&mp_lv_page_scroll_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_PAGE_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_DDLIST_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(ddlist_locals_dict, ddlist_locals_dict_table);

STATIC void ddlist_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl ddlist");
}


STATIC mp_obj_t ddlist_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_ddlist_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_ddlist_type = {
    { &mp_type_type },
    .name = MP_QSTR_ddlist,
    .print = ddlist_print,
    .make_new = ddlist_make_new,
    .locals_dict = (mp_obj_dict_t*)&ddlist_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_lmeter_set_style(lv_obj_t *lmeter, lv_style_t *bg)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_lmeter_get_style(const lv_obj_t *lmeter)
 */
    

/*
 * lvgl extension definition for:
 * void lv_lmeter_set_value(lv_obj_t *lmeter, int16_t value)
 */
 
STATIC mp_obj_t mp_lv_lmeter_set_value(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *lmeter = mp_to_lv(args[0]);
    int16_t value = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_lmeter_set_value(lmeter, value);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_set_value_obj, 2, 2, mp_lv_lmeter_set_value);

 

/*
 * lvgl extension definition for:
 * void lv_lmeter_set_range(lv_obj_t *lmeter, int16_t min, int16_t max)
 */
 
STATIC mp_obj_t mp_lv_lmeter_set_range(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *lmeter = mp_to_lv(args[0]);
    int16_t min = (int16_t)mp_obj_int_get_checked(args[1]);
    int16_t max = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_lmeter_set_range(lmeter, min, max);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_set_range_obj, 3, 3, mp_lv_lmeter_set_range);

 

/*
 * lvgl extension definition for:
 * void lv_lmeter_set_scale(lv_obj_t *lmeter, uint16_t angle, uint8_t line_cnt)
 */
 
STATIC mp_obj_t mp_lv_lmeter_set_scale(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *lmeter = mp_to_lv(args[0]);
    uint16_t angle = (uint16_t)mp_obj_int_get_checked(args[1]);
    uint8_t line_cnt = (uint8_t)mp_obj_int_get_checked(args[2]);
    lv_lmeter_set_scale(lmeter, angle, line_cnt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_set_scale_obj, 3, 3, mp_lv_lmeter_set_scale);

 

/*
 * lvgl extension definition for:
 * int16_t lv_lmeter_get_value(const lv_obj_t *lmeter)
 */
 
STATIC mp_obj_t mp_lv_lmeter_get_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *lmeter = mp_to_lv(args[0]);
    int16_t res = lv_lmeter_get_value(lmeter);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_get_value_obj, 1, 1, mp_lv_lmeter_get_value);

 

/*
 * lvgl extension definition for:
 * int16_t lv_lmeter_get_min_value(const lv_obj_t *lmeter)
 */
 
STATIC mp_obj_t mp_lv_lmeter_get_min_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *lmeter = mp_to_lv(args[0]);
    int16_t res = lv_lmeter_get_min_value(lmeter);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_get_min_value_obj, 1, 1, mp_lv_lmeter_get_min_value);

 

/*
 * lvgl extension definition for:
 * int16_t lv_lmeter_get_max_value(const lv_obj_t *lmeter)
 */
 
STATIC mp_obj_t mp_lv_lmeter_get_max_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *lmeter = mp_to_lv(args[0]);
    int16_t res = lv_lmeter_get_max_value(lmeter);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_get_max_value_obj, 1, 1, mp_lv_lmeter_get_max_value);

 

/*
 * lvgl extension definition for:
 * uint8_t lv_lmeter_get_line_count(const lv_obj_t *lmeter)
 */
 
STATIC mp_obj_t mp_lv_lmeter_get_line_count(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *lmeter = mp_to_lv(args[0]);
    uint8_t res = lv_lmeter_get_line_count(lmeter);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_get_line_count_obj, 1, 1, mp_lv_lmeter_get_line_count);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_lmeter_get_scale_angle(const lv_obj_t *lmeter)
 */
 
STATIC mp_obj_t mp_lv_lmeter_get_scale_angle(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *lmeter = mp_to_lv(args[0]);
    uint16_t res = lv_lmeter_get_scale_angle(lmeter);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_lmeter_get_scale_angle_obj, 1, 1, mp_lv_lmeter_get_scale_angle);

 

    
/*
 * lvgl lmeter object definitions
 */

STATIC const mp_rom_map_elem_t lmeter_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_lmeter_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_lmeter_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scale), MP_ROM_PTR(&mp_lv_lmeter_set_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_lmeter_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_lmeter_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_lmeter_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_line_count), MP_ROM_PTR(&mp_lv_lmeter_get_line_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scale_angle), MP_ROM_PTR(&mp_lv_lmeter_get_scale_angle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) }
};

STATIC MP_DEFINE_CONST_DICT(lmeter_locals_dict, lmeter_locals_dict_table);

STATIC void lmeter_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl lmeter");
}


STATIC mp_obj_t lmeter_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_lmeter_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_lmeter_type = {
    { &mp_type_type },
    .name = MP_QSTR_lmeter,
    .print = lmeter_print,
    .make_new = lmeter_make_new,
    .locals_dict = (mp_obj_dict_t*)&lmeter_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_gauge_set_range(lv_obj_t *gauge, int16_t min, int16_t max)
 */
 
STATIC mp_obj_t mp_lv_gauge_set_range(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *gauge = mp_to_lv(args[0]);
    int16_t min = (int16_t)mp_obj_int_get_checked(args[1]);
    int16_t max = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_gauge_set_range(gauge, min, max);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_set_range_obj, 3, 3, mp_lv_gauge_set_range);

 

/*
 * lvgl extension definition for:
 * inline static void lv_gauge_set_critical_value(lv_obj_t *gauge, int16_t value)
 */
 
STATIC mp_obj_t mp_lv_gauge_set_critical_value(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *gauge = mp_to_lv(args[0]);
    int16_t value = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_gauge_set_critical_value(gauge, value);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_set_critical_value_obj, 2, 2, mp_lv_gauge_set_critical_value);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_gauge_set_style(lv_obj_t *gauge, lv_style_t *bg)
 */
    

/*
 * lvgl extension definition for:
 * inline static int16_t lv_gauge_get_min_value(const lv_obj_t *lmeter)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_min_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *lmeter = mp_to_lv(args[0]);
    int16_t res = lv_gauge_get_min_value(lmeter);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_min_value_obj, 1, 1, mp_lv_gauge_get_min_value);

 

/*
 * lvgl extension definition for:
 * inline static int16_t lv_gauge_get_max_value(const lv_obj_t *lmeter)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_max_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *lmeter = mp_to_lv(args[0]);
    int16_t res = lv_gauge_get_max_value(lmeter);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_max_value_obj, 1, 1, mp_lv_gauge_get_max_value);

 

/*
 * lvgl extension definition for:
 * inline static int16_t lv_gauge_get_critical_value(const lv_obj_t *gauge)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_critical_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *gauge = mp_to_lv(args[0]);
    int16_t res = lv_gauge_get_critical_value(gauge);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_critical_value_obj, 1, 1, mp_lv_gauge_get_critical_value);

 

/*
 * lvgl extension definition for:
 * inline static uint8_t lv_gauge_get_line_count(const lv_obj_t *gauge)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_line_count(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *gauge = mp_to_lv(args[0]);
    uint8_t res = lv_gauge_get_line_count(gauge);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_line_count_obj, 1, 1, mp_lv_gauge_get_line_count);

 

/*
 * lvgl extension definition for:
 * inline static uint16_t lv_gauge_get_scale_angle(const lv_obj_t *gauge)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_scale_angle(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *gauge = mp_to_lv(args[0]);
    uint16_t res = lv_gauge_get_scale_angle(gauge);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_scale_angle_obj, 1, 1, mp_lv_gauge_get_scale_angle);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_gauge_get_style(const lv_obj_t *gauge)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_color_t*
 * void lv_gauge_set_needle_count(lv_obj_t *gauge, uint8_t needle_cnt, const lv_color_t *colors)
 */
    

/*
 * lvgl extension definition for:
 * void lv_gauge_set_value(lv_obj_t *gauge, uint8_t needle_id, int16_t value)
 */
 
STATIC mp_obj_t mp_lv_gauge_set_value(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *gauge = mp_to_lv(args[0]);
    uint8_t needle_id = (uint8_t)mp_obj_int_get_checked(args[1]);
    int16_t value = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_gauge_set_value(gauge, needle_id, value);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_set_value_obj, 3, 3, mp_lv_gauge_set_value);

 

/*
 * lvgl extension definition for:
 * void lv_gauge_set_scale(lv_obj_t *gauge, uint16_t angle, uint8_t line_cnt, uint8_t label_cnt)
 */
 
STATIC mp_obj_t mp_lv_gauge_set_scale(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *gauge = mp_to_lv(args[0]);
    uint16_t angle = (uint16_t)mp_obj_int_get_checked(args[1]);
    uint8_t line_cnt = (uint8_t)mp_obj_int_get_checked(args[2]);
    uint8_t label_cnt = (uint8_t)mp_obj_int_get_checked(args[3]);
    lv_gauge_set_scale(gauge, angle, line_cnt, label_cnt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_set_scale_obj, 4, 4, mp_lv_gauge_set_scale);

 

/*
 * lvgl extension definition for:
 * int16_t lv_gauge_get_value(const lv_obj_t *gauge, uint8_t needle)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *gauge = mp_to_lv(args[0]);
    uint8_t needle = (uint8_t)mp_obj_int_get_checked(args[1]);
    int16_t res = lv_gauge_get_value(gauge, needle);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_value_obj, 2, 2, mp_lv_gauge_get_value);

 

/*
 * lvgl extension definition for:
 * uint8_t lv_gauge_get_needle_count(const lv_obj_t *gauge)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_needle_count(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *gauge = mp_to_lv(args[0]);
    uint8_t res = lv_gauge_get_needle_count(gauge);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_needle_count_obj, 1, 1, mp_lv_gauge_get_needle_count);

 

/*
 * lvgl extension definition for:
 * uint8_t lv_gauge_get_label_count(const lv_obj_t *gauge)
 */
 
STATIC mp_obj_t mp_lv_gauge_get_label_count(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *gauge = mp_to_lv(args[0]);
    uint8_t res = lv_gauge_get_label_count(gauge);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_gauge_get_label_count_obj, 1, 1, mp_lv_gauge_get_label_count);

 

    
/*
 * lvgl gauge object definitions
 */

STATIC const mp_rom_map_elem_t gauge_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_gauge_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_critical_value), MP_ROM_PTR(&mp_lv_gauge_set_critical_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_gauge_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_gauge_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_critical_value), MP_ROM_PTR(&mp_lv_gauge_get_critical_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_line_count), MP_ROM_PTR(&mp_lv_gauge_get_line_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scale_angle), MP_ROM_PTR(&mp_lv_gauge_get_scale_angle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_gauge_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scale), MP_ROM_PTR(&mp_lv_gauge_set_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_gauge_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_needle_count), MP_ROM_PTR(&mp_lv_gauge_get_needle_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_label_count), MP_ROM_PTR(&mp_lv_gauge_get_label_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_lmeter_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_lmeter_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scale), MP_ROM_PTR(&mp_lv_lmeter_set_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_lmeter_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_lmeter_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_lmeter_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_line_count), MP_ROM_PTR(&mp_lv_lmeter_get_line_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scale_angle), MP_ROM_PTR(&mp_lv_lmeter_get_scale_angle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) }
};

STATIC MP_DEFINE_CONST_DICT(gauge_locals_dict, gauge_locals_dict_table);

STATIC void gauge_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl gauge");
}


STATIC mp_obj_t gauge_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_gauge_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_gauge_type = {
    { &mp_type_type },
    .name = MP_QSTR_gauge,
    .print = gauge_print,
    .make_new = gauge_make_new,
    .locals_dict = (mp_obj_dict_t*)&gauge_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_img_set_file(lv_obj_t *img, const char *fn)
 */
 
STATIC mp_obj_t mp_lv_img_set_file(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *img = mp_to_lv(args[0]);
    const char *fn = mp_obj_str_get_str(args[1]);
    lv_img_set_file(img, fn);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_set_file_obj, 2, 2, mp_lv_img_set_file);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_img_set_style(lv_obj_t *img, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * inline static void lv_img_set_upscale(lv_obj_t *img, bool upcale)
 */
 
STATIC mp_obj_t mp_lv_img_set_upscale(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *img = mp_to_lv(args[0]);
    bool upcale = mp_obj_is_true(args[1]);
    lv_img_set_upscale(img, upcale);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_set_upscale_obj, 2, 2, mp_lv_img_set_upscale);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_img_get_style(const lv_obj_t *img)
 */
    

/*
 * lvgl extension definition for:
 * inline static bool lv_img_get_upscale(const lv_obj_t *img)
 */
 
STATIC mp_obj_t mp_lv_img_get_upscale(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *img = mp_to_lv(args[0]);
    bool res = lv_img_get_upscale(img);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_get_upscale_obj, 1, 1, mp_lv_img_get_upscale);

 

/*
 * Function NOT generated:
 * Missing conversion to const void*
 * lv_img_src_t lv_img_src_get_type(const void *src)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_img_decoder_info_f_t
 * void lv_img_decoder_set_custom(lv_img_decoder_info_f_t info_fp, lv_img_decoder_open_f_t open_fp, lv_img_decoder_read_line_f_t read_fp, lv_img_decoder_close_f_t close_fp)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_img_header_t*
 * lv_res_t lv_img_dsc_get_info(const char *src, lv_img_header_t *header)
 */
    

/*
 * lvgl extension definition for:
 * uint8_t lv_img_color_format_get_px_size(lv_img_cf_t cf)
 */
 
STATIC mp_obj_t mp_lv_img_color_format_get_px_size(size_t n_args, const mp_obj_t *args)
{
    lv_img_cf_t cf = (uint8_t)mp_obj_int_get_checked(args[0]);
    uint8_t res = lv_img_color_format_get_px_size(cf);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_color_format_get_px_size_obj, 1, 1, mp_lv_img_color_format_get_px_size);

 

/*
 * lvgl extension definition for:
 * bool lv_img_color_format_is_chroma_keyed(lv_img_cf_t cf)
 */
 
STATIC mp_obj_t mp_lv_img_color_format_is_chroma_keyed(size_t n_args, const mp_obj_t *args)
{
    lv_img_cf_t cf = (uint8_t)mp_obj_int_get_checked(args[0]);
    bool res = lv_img_color_format_is_chroma_keyed(cf);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_color_format_is_chroma_keyed_obj, 1, 1, mp_lv_img_color_format_is_chroma_keyed);

 

/*
 * lvgl extension definition for:
 * bool lv_img_color_format_has_alpha(lv_img_cf_t cf)
 */
 
STATIC mp_obj_t mp_lv_img_color_format_has_alpha(size_t n_args, const mp_obj_t *args)
{
    lv_img_cf_t cf = (uint8_t)mp_obj_int_get_checked(args[0]);
    bool res = lv_img_color_format_has_alpha(cf);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_color_format_has_alpha_obj, 1, 1, mp_lv_img_color_format_has_alpha);

 

/*
 * Function NOT generated:
 * Missing conversion to const void*
 * void lv_img_set_src(lv_obj_t *img, const void *src_img)
 */
    

/*
 * lvgl extension definition for:
 * void lv_img_set_auto_size(lv_obj_t *img, bool autosize_en)
 */
 
STATIC mp_obj_t mp_lv_img_set_auto_size(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *img = mp_to_lv(args[0]);
    bool autosize_en = mp_obj_is_true(args[1]);
    lv_img_set_auto_size(img, autosize_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_set_auto_size_obj, 2, 2, mp_lv_img_set_auto_size);

 

/*
 * Function NOT generated:
 * Missing convertion from const void*
 * const void *lv_img_get_src(lv_obj_t *img)
 */
    

/*
 * lvgl extension definition for:
 * const char *lv_img_get_file_name(const lv_obj_t *img)
 */
 
STATIC mp_obj_t mp_lv_img_get_file_name(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *img = mp_to_lv(args[0]);
    const char* res = lv_img_get_file_name(img);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_get_file_name_obj, 1, 1, mp_lv_img_get_file_name);

 

/*
 * lvgl extension definition for:
 * bool lv_img_get_auto_size(const lv_obj_t *img)
 */
 
STATIC mp_obj_t mp_lv_img_get_auto_size(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *img = mp_to_lv(args[0]);
    bool res = lv_img_get_auto_size(img);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_img_get_auto_size_obj, 1, 1, mp_lv_img_get_auto_size);

 

    
/*
 * lvgl img object definitions
 */

STATIC const mp_rom_map_elem_t img_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_file), MP_ROM_PTR(&mp_lv_img_set_file_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_upscale), MP_ROM_PTR(&mp_lv_img_set_upscale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_upscale), MP_ROM_PTR(&mp_lv_img_get_upscale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_color_format_get_px_size), MP_ROM_PTR(&mp_lv_img_color_format_get_px_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_color_format_is_chroma_keyed), MP_ROM_PTR(&mp_lv_img_color_format_is_chroma_keyed_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_color_format_has_alpha), MP_ROM_PTR(&mp_lv_img_color_format_has_alpha_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_auto_size), MP_ROM_PTR(&mp_lv_img_set_auto_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_file_name), MP_ROM_PTR(&mp_lv_img_get_file_name_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_auto_size), MP_ROM_PTR(&mp_lv_img_get_auto_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SRC), MP_ROM_PTR(&mp_LV_IMG_SRC_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CF), MP_ROM_PTR(&mp_LV_IMG_CF_type) }
};

STATIC MP_DEFINE_CONST_DICT(img_locals_dict, img_locals_dict_table);

STATIC void img_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl img");
}


STATIC mp_obj_t img_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_img_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_img_type = {
    { &mp_type_type },
    .name = MP_QSTR_img,
    .print = img_print,
    .make_new = img_make_new,
    .locals_dict = (mp_obj_dict_t*)&img_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to const char**
 * inline static void lv_kb_set_map(lv_obj_t *kb, const char **map)
 */
    

/*
 * lvgl extension definition for:
 * void lv_kb_set_ta(lv_obj_t *kb, lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_kb_set_ta(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *kb = mp_to_lv(args[0]);
    lv_obj_t *ta = mp_to_lv(args[1]);
    lv_kb_set_ta(kb, ta);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_set_ta_obj, 2, 2, mp_lv_kb_set_ta);

 

/*
 * lvgl extension definition for:
 * void lv_kb_set_mode(lv_obj_t *kb, lv_kb_mode_t mode)
 */
 
STATIC mp_obj_t mp_lv_kb_set_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *kb = mp_to_lv(args[0]);
    lv_kb_mode_t mode = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_kb_set_mode(kb, mode);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_set_mode_obj, 2, 2, mp_lv_kb_set_mode);

 

/*
 * lvgl extension definition for:
 * void lv_kb_set_cursor_manage(lv_obj_t *kb, bool en)
 */
 
STATIC mp_obj_t mp_lv_kb_set_cursor_manage(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *kb = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_kb_set_cursor_manage(kb, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_set_cursor_manage_obj, 2, 2, mp_lv_kb_set_cursor_manage);

 

/*
 * lvgl extension definition for:
 * void lv_kb_set_ok_action(lv_obj_t *kb, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_kb_set_ok_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *kb = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_kb_set_ok_action(kb, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_set_ok_action_obj, 2, 2, mp_lv_kb_set_ok_action);

 

/*
 * lvgl extension definition for:
 * void lv_kb_set_hide_action(lv_obj_t *kb, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_kb_set_hide_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *kb = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_kb_set_hide_action(kb, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_set_hide_action_obj, 2, 2, mp_lv_kb_set_hide_action);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_kb_set_style(lv_obj_t *kb, lv_kb_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_kb_get_ta(const lv_obj_t *kb)
 */
 
STATIC mp_obj_t mp_lv_kb_get_ta(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *kb = mp_to_lv(args[0]);
    lv_obj_t* res = lv_kb_get_ta(kb);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_get_ta_obj, 1, 1, mp_lv_kb_get_ta);

 

/*
 * lvgl extension definition for:
 * lv_kb_mode_t lv_kb_get_mode(const lv_obj_t *kb)
 */
 
STATIC mp_obj_t mp_lv_kb_get_mode(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *kb = mp_to_lv(args[0]);
    lv_kb_mode_t res = lv_kb_get_mode(kb);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_get_mode_obj, 1, 1, mp_lv_kb_get_mode);

 

/*
 * lvgl extension definition for:
 * bool lv_kb_get_cursor_manage(const lv_obj_t *kb)
 */
 
STATIC mp_obj_t mp_lv_kb_get_cursor_manage(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *kb = mp_to_lv(args[0]);
    bool res = lv_kb_get_cursor_manage(kb);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_kb_get_cursor_manage_obj, 1, 1, mp_lv_kb_get_cursor_manage);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * lv_action_t lv_kb_get_ok_action(const lv_obj_t *kb)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * lv_action_t lv_kb_get_hide_action(const lv_obj_t *kb)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_kb_get_style(const lv_obj_t *kb, lv_kb_style_t type)
 */
    

    
/*
 * lvgl kb object definitions
 */

STATIC const mp_rom_map_elem_t kb_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ta), MP_ROM_PTR(&mp_lv_kb_set_ta_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_mode), MP_ROM_PTR(&mp_lv_kb_set_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_cursor_manage), MP_ROM_PTR(&mp_lv_kb_set_cursor_manage_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_ok_action), MP_ROM_PTR(&mp_lv_kb_set_ok_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hide_action), MP_ROM_PTR(&mp_lv_kb_set_hide_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ta), MP_ROM_PTR(&mp_lv_kb_get_ta_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_mode), MP_ROM_PTR(&mp_lv_kb_get_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_cursor_manage), MP_ROM_PTR(&mp_lv_kb_get_cursor_manage_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_btnm_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_toggle), MP_ROM_PTR(&mp_lv_btnm_set_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_toggled), MP_ROM_PTR(&mp_lv_btnm_get_toggled_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_BTNM_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MODE), MP_ROM_PTR(&mp_LV_KB_MODE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_KB_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(kb_locals_dict, kb_locals_dict_table);

STATIC void kb_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl kb");
}


STATIC mp_obj_t kb_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_kb_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_kb_type = {
    { &mp_type_type },
    .name = MP_QSTR_kb,
    .print = kb_print,
    .make_new = kb_make_new,
    .locals_dict = (mp_obj_dict_t*)&kb_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * inline static void lv_led_set_style(lv_obj_t *led, lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * inline static lv_style_t *lv_led_get_style(const lv_obj_t *led)
 */
    

/*
 * lvgl extension definition for:
 * void lv_led_set_bright(lv_obj_t *led, uint8_t bright)
 */
 
STATIC mp_obj_t mp_lv_led_set_bright(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *led = mp_to_lv(args[0]);
    uint8_t bright = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_led_set_bright(led, bright);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_led_set_bright_obj, 2, 2, mp_lv_led_set_bright);

 

/*
 * lvgl extension definition for:
 * void lv_led_on(lv_obj_t *led)
 */
 
STATIC mp_obj_t mp_lv_led_on(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *led = mp_to_lv(args[0]);
    lv_led_on(led);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_led_on_obj, 1, 1, mp_lv_led_on);

 

/*
 * lvgl extension definition for:
 * void lv_led_off(lv_obj_t *led)
 */
 
STATIC mp_obj_t mp_lv_led_off(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *led = mp_to_lv(args[0]);
    lv_led_off(led);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_led_off_obj, 1, 1, mp_lv_led_off);

 

/*
 * lvgl extension definition for:
 * void lv_led_toggle(lv_obj_t *led)
 */
 
STATIC mp_obj_t mp_lv_led_toggle(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *led = mp_to_lv(args[0]);
    lv_led_toggle(led);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_led_toggle_obj, 1, 1, mp_lv_led_toggle);

 

/*
 * lvgl extension definition for:
 * uint8_t lv_led_get_bright(const lv_obj_t *led)
 */
 
STATIC mp_obj_t mp_lv_led_get_bright(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *led = mp_to_lv(args[0]);
    uint8_t res = lv_led_get_bright(led);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_led_get_bright_obj, 1, 1, mp_lv_led_get_bright);

 

    
/*
 * lvgl led object definitions
 */

STATIC const mp_rom_map_elem_t led_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_bright), MP_ROM_PTR(&mp_lv_led_set_bright_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_on), MP_ROM_PTR(&mp_lv_led_on_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_off), MP_ROM_PTR(&mp_lv_led_off_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_toggle), MP_ROM_PTR(&mp_lv_led_toggle_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_bright), MP_ROM_PTR(&mp_lv_led_get_bright_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) }
};

STATIC MP_DEFINE_CONST_DICT(led_locals_dict, led_locals_dict_table);

STATIC void led_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl led");
}


STATIC mp_obj_t led_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_led_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_led_type = {
    { &mp_type_type },
    .name = MP_QSTR_led,
    .print = led_print,
    .make_new = led_make_new,
    .locals_dict = (mp_obj_dict_t*)&led_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_list_set_sb_mode(lv_obj_t *list, lv_sb_mode_t mode)
 */
 
STATIC mp_obj_t mp_lv_list_set_sb_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *list = mp_to_lv(args[0]);
    lv_sb_mode_t mode = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_list_set_sb_mode(list, mode);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_set_sb_mode_obj, 2, 2, mp_lv_list_set_sb_mode);

 

/*
 * lvgl extension definition for:
 * inline static lv_sb_mode_t lv_list_get_sb_mode(const lv_obj_t *list)
 */
 
STATIC mp_obj_t mp_lv_list_get_sb_mode(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *list = mp_to_lv(args[0]);
    lv_sb_mode_t res = lv_list_get_sb_mode(list);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_sb_mode_obj, 1, 1, mp_lv_list_get_sb_mode);

 

/*
 * lvgl extension definition for:
 * void lv_list_clean(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_list_clean(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_list_clean(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_clean_obj, 1, 1, mp_lv_list_clean);

 

/*
 * Function NOT generated:
 * Missing conversion to const void*
 * lv_obj_t *lv_list_add(lv_obj_t *list, const void *img_src, const char *txt, lv_action_t rel_action)
 */
    

/*
 * lvgl extension definition for:
 * void lv_list_set_btn_selected(lv_obj_t *list, lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_list_set_btn_selected(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *list = mp_to_lv(args[0]);
    lv_obj_t *btn = mp_to_lv(args[1]);
    lv_list_set_btn_selected(list, btn);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_set_btn_selected_obj, 2, 2, mp_lv_list_set_btn_selected);

 

/*
 * lvgl extension definition for:
 * void lv_list_set_anim_time(lv_obj_t *list, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_list_set_anim_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *list = mp_to_lv(args[0]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_list_set_anim_time(list, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_set_anim_time_obj, 2, 2, mp_lv_list_set_anim_time);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_list_set_style(lv_obj_t *list, lv_list_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * const char *lv_list_get_btn_text(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_list_get_btn_text(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    const char* res = lv_list_get_btn_text(btn);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_btn_text_obj, 1, 1, mp_lv_list_get_btn_text);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_list_get_btn_label(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_list_get_btn_label(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    lv_obj_t* res = lv_list_get_btn_label(btn);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_btn_label_obj, 1, 1, mp_lv_list_get_btn_label);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_list_get_btn_img(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_list_get_btn_img(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    lv_obj_t* res = lv_list_get_btn_img(btn);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_btn_img_obj, 1, 1, mp_lv_list_get_btn_img);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_list_get_prev_btn(const lv_obj_t *list, lv_obj_t *prev_btn)
 */
 
STATIC mp_obj_t mp_lv_list_get_prev_btn(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *list = mp_to_lv(args[0]);
    lv_obj_t *prev_btn = mp_to_lv(args[1]);
    lv_obj_t* res = lv_list_get_prev_btn(list, prev_btn);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_prev_btn_obj, 2, 2, mp_lv_list_get_prev_btn);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_list_get_next_btn(const lv_obj_t *list, lv_obj_t *prev_btn)
 */
 
STATIC mp_obj_t mp_lv_list_get_next_btn(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *list = mp_to_lv(args[0]);
    lv_obj_t *prev_btn = mp_to_lv(args[1]);
    lv_obj_t* res = lv_list_get_next_btn(list, prev_btn);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_next_btn_obj, 2, 2, mp_lv_list_get_next_btn);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_list_get_btn_selected(const lv_obj_t *list)
 */
 
STATIC mp_obj_t mp_lv_list_get_btn_selected(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *list = mp_to_lv(args[0]);
    lv_obj_t* res = lv_list_get_btn_selected(list);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_btn_selected_obj, 1, 1, mp_lv_list_get_btn_selected);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_list_get_anim_time(const lv_obj_t *list)
 */
 
STATIC mp_obj_t mp_lv_list_get_anim_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *list = mp_to_lv(args[0]);
    uint16_t res = lv_list_get_anim_time(list);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_get_anim_time_obj, 1, 1, mp_lv_list_get_anim_time);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_list_get_style(const lv_obj_t *list, lv_list_style_t type)
 */
    

/*
 * lvgl extension definition for:
 * void lv_list_up(const lv_obj_t *list)
 */
 
STATIC mp_obj_t mp_lv_list_up(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *list = mp_to_lv(args[0]);
    lv_list_up(list);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_up_obj, 1, 1, mp_lv_list_up);

 

/*
 * lvgl extension definition for:
 * void lv_list_down(const lv_obj_t *list)
 */
 
STATIC mp_obj_t mp_lv_list_down(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *list = mp_to_lv(args[0]);
    lv_list_down(list);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_down_obj, 1, 1, mp_lv_list_down);

 

/*
 * lvgl extension definition for:
 * void lv_list_focus(const lv_obj_t *btn, bool anim_en)
 */
 
STATIC mp_obj_t mp_lv_list_focus(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    bool anim_en = mp_obj_is_true(args[1]);
    lv_list_focus(btn, anim_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_list_focus_obj, 2, 2, mp_lv_list_focus);

 

    
/*
 * lvgl list object definitions
 */

STATIC const mp_rom_map_elem_t list_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_list_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_list_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_list_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_btn_selected), MP_ROM_PTR(&mp_lv_list_set_btn_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_anim_time), MP_ROM_PTR(&mp_lv_list_set_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_btn_text), MP_ROM_PTR(&mp_lv_list_get_btn_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_btn_label), MP_ROM_PTR(&mp_lv_list_get_btn_label_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_btn_img), MP_ROM_PTR(&mp_lv_list_get_btn_img_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_prev_btn), MP_ROM_PTR(&mp_lv_list_get_prev_btn_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_next_btn), MP_ROM_PTR(&mp_lv_list_get_next_btn_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_btn_selected), MP_ROM_PTR(&mp_lv_list_get_btn_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_anim_time), MP_ROM_PTR(&mp_lv_list_get_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_up), MP_ROM_PTR(&mp_lv_list_up_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_down), MP_ROM_PTR(&mp_lv_list_down_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_focus), MP_ROM_PTR(&mp_lv_list_focus_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_fit), MP_ROM_PTR(&mp_lv_page_set_scrl_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_width), MP_ROM_PTR(&mp_lv_page_set_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_height), MP_ROM_PTR(&mp_lv_page_set_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_layout), MP_ROM_PTR(&mp_lv_page_set_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_width), MP_ROM_PTR(&mp_lv_page_get_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_height), MP_ROM_PTR(&mp_lv_page_get_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_layout), MP_ROM_PTR(&mp_lv_page_get_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_hor_fit), MP_ROM_PTR(&mp_lv_page_get_scrl_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_fit_ver), MP_ROM_PTR(&mp_lv_page_get_scrl_fit_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_page_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl), MP_ROM_PTR(&mp_lv_page_get_scrl_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_rel_action), MP_ROM_PTR(&mp_lv_page_set_rel_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pr_action), MP_ROM_PTR(&mp_lv_page_set_pr_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_page_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_arrow_scroll), MP_ROM_PTR(&mp_lv_page_set_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_page_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_arrow_scroll), MP_ROM_PTR(&mp_lv_page_get_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_page_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_page_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_glue_obj), MP_ROM_PTR(&mp_lv_page_glue_obj_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_focus), MP_ROM_PTR(&mp_lv_page_focus_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_hor), MP_ROM_PTR(&mp_lv_page_scroll_hor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_ver), MP_ROM_PTR(&mp_lv_page_scroll_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_PAGE_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_LIST_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(list_locals_dict, list_locals_dict_table);

STATIC void list_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl list");
}


STATIC mp_obj_t list_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_list_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_list_type = {
    { &mp_type_type },
    .name = MP_QSTR_list,
    .print = list_print,
    .make_new = list_make_new,
    .locals_dict = (mp_obj_dict_t*)&list_locals_dict,
};
    

/*
 * Function NOT generated:
 * Missing conversion to const char**
 * void lv_mbox_add_btns(lv_obj_t *mbox, const char **btn_map, lv_btnm_action_t action)
 */
    

/*
 * lvgl extension definition for:
 * void lv_mbox_set_text(lv_obj_t *mbox, const char *txt)
 */
 
STATIC mp_obj_t mp_lv_mbox_set_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *mbox = mp_to_lv(args[0]);
    const char *txt = mp_obj_str_get_str(args[1]);
    lv_mbox_set_text(mbox, txt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_set_text_obj, 2, 2, mp_lv_mbox_set_text);

 

/*
 * lvgl extension definition for:
 * void lv_mbox_set_action(lv_obj_t *mbox, lv_btnm_action_t action)
 */
 
STATIC mp_obj_t mp_lv_mbox_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *mbox = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_btnm_action_t action = &lv_btnm_action_t_callback;
    lv_mbox_set_action(mbox, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_set_action_obj, 2, 2, mp_lv_mbox_set_action);

 

/*
 * lvgl extension definition for:
 * void lv_mbox_set_anim_time(lv_obj_t *mbox, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_mbox_set_anim_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *mbox = mp_to_lv(args[0]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_mbox_set_anim_time(mbox, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_set_anim_time_obj, 2, 2, mp_lv_mbox_set_anim_time);

 

/*
 * lvgl extension definition for:
 * void lv_mbox_start_auto_close(lv_obj_t *mbox, uint16_t delay)
 */
 
STATIC mp_obj_t mp_lv_mbox_start_auto_close(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *mbox = mp_to_lv(args[0]);
    uint16_t delay = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_mbox_start_auto_close(mbox, delay);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_start_auto_close_obj, 2, 2, mp_lv_mbox_start_auto_close);

 

/*
 * lvgl extension definition for:
 * void lv_mbox_stop_auto_close(lv_obj_t *mbox)
 */
 
STATIC mp_obj_t mp_lv_mbox_stop_auto_close(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *mbox = mp_to_lv(args[0]);
    lv_mbox_stop_auto_close(mbox);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_stop_auto_close_obj, 1, 1, mp_lv_mbox_stop_auto_close);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_mbox_set_style(lv_obj_t *mbox, lv_mbox_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * const char *lv_mbox_get_text(const lv_obj_t *mbox)
 */
 
STATIC mp_obj_t mp_lv_mbox_get_text(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *mbox = mp_to_lv(args[0]);
    const char* res = lv_mbox_get_text(mbox);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_get_text_obj, 1, 1, mp_lv_mbox_get_text);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_mbox_get_from_btn(const lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_mbox_get_from_btn(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *btn = mp_to_lv(args[0]);
    lv_obj_t* res = lv_mbox_get_from_btn(btn);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_get_from_btn_obj, 1, 1, mp_lv_mbox_get_from_btn);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_mbox_get_anim_time(const lv_obj_t *mbox)
 */
 
STATIC mp_obj_t mp_lv_mbox_get_anim_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *mbox = mp_to_lv(args[0]);
    uint16_t res = lv_mbox_get_anim_time(mbox);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mbox_get_anim_time_obj, 1, 1, mp_lv_mbox_get_anim_time);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_mbox_get_style(const lv_obj_t *mbox, lv_mbox_style_t type)
 */
    

    
/*
 * lvgl mbox object definitions
 */

STATIC const mp_rom_map_elem_t mbox_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_text), MP_ROM_PTR(&mp_lv_mbox_set_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_mbox_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_anim_time), MP_ROM_PTR(&mp_lv_mbox_set_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_start_auto_close), MP_ROM_PTR(&mp_lv_mbox_start_auto_close_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_stop_auto_close), MP_ROM_PTR(&mp_lv_mbox_stop_auto_close_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_text), MP_ROM_PTR(&mp_lv_mbox_get_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_from_btn), MP_ROM_PTR(&mp_lv_mbox_get_from_btn_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_anim_time), MP_ROM_PTR(&mp_lv_mbox_get_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_MBOX_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(mbox_locals_dict, mbox_locals_dict_table);

STATIC void mbox_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl mbox");
}


STATIC mp_obj_t mbox_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_mbox_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_mbox_type = {
    { &mp_type_type },
    .name = MP_QSTR_mbox,
    .print = mbox_print,
    .make_new = mbox_make_new,
    .locals_dict = (mp_obj_dict_t*)&mbox_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * void lv_preload_set_arc_length(lv_obj_t *preload, uint16_t deg)
 */
 
STATIC mp_obj_t mp_lv_preload_set_arc_length(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *preload = mp_to_lv(args[0]);
    uint16_t deg = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_preload_set_arc_length(preload, deg);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_preload_set_arc_length_obj, 2, 2, mp_lv_preload_set_arc_length);

 

/*
 * lvgl extension definition for:
 * void lv_preload_set_spin_time(lv_obj_t *preload, uint16_t time)
 */
 
STATIC mp_obj_t mp_lv_preload_set_spin_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *preload = mp_to_lv(args[0]);
    uint16_t time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_preload_set_spin_time(preload, time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_preload_set_spin_time_obj, 2, 2, mp_lv_preload_set_spin_time);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_preload_set_style(lv_obj_t *preload, lv_preload_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * uint16_t lv_preload_get_arc_length(const lv_obj_t *preload)
 */
 
STATIC mp_obj_t mp_lv_preload_get_arc_length(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *preload = mp_to_lv(args[0]);
    uint16_t res = lv_preload_get_arc_length(preload);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_preload_get_arc_length_obj, 1, 1, mp_lv_preload_get_arc_length);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_preload_get_spin_time(const lv_obj_t *preload)
 */
 
STATIC mp_obj_t mp_lv_preload_get_spin_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *preload = mp_to_lv(args[0]);
    uint16_t res = lv_preload_get_spin_time(preload);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_preload_get_spin_time_obj, 1, 1, mp_lv_preload_get_spin_time);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_preload_get_style(const lv_obj_t *preload, lv_preload_style_t type)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to void*
 * void lv_preload_spinner_animation(void *ptr, int32_t val)
 */
    

    
/*
 * lvgl preload object definitions
 */

STATIC const mp_rom_map_elem_t preload_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_arc_length), MP_ROM_PTR(&mp_lv_preload_set_arc_length_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_spin_time), MP_ROM_PTR(&mp_lv_preload_set_spin_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_arc_length), MP_ROM_PTR(&mp_lv_preload_get_arc_length_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_spin_time), MP_ROM_PTR(&mp_lv_preload_get_spin_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_angles), MP_ROM_PTR(&mp_lv_arc_set_angles_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_angle_start), MP_ROM_PTR(&mp_lv_arc_get_angle_start_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_angle_end), MP_ROM_PTR(&mp_lv_arc_get_angle_end_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_ARC_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TYPE_SPINNING), MP_ROM_PTR(&mp_LV_PRELOAD_TYPE_SPINNING_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_PRELOAD_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(preload_locals_dict, preload_locals_dict_table);

STATIC void preload_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl preload");
}


STATIC mp_obj_t preload_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_preload_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_preload_type = {
    { &mp_type_type },
    .name = MP_QSTR_preload,
    .print = preload_print,
    .make_new = preload_make_new,
    .locals_dict = (mp_obj_dict_t*)&preload_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_roller_set_options(lv_obj_t *roller, const char *options)
 */
 
STATIC mp_obj_t mp_lv_roller_set_options(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *roller = mp_to_lv(args[0]);
    const char *options = mp_obj_str_get_str(args[1]);
    lv_roller_set_options(roller, options);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_set_options_obj, 2, 2, mp_lv_roller_set_options);

 

/*
 * lvgl extension definition for:
 * inline static void lv_roller_set_action(lv_obj_t *roller, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_roller_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *roller = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_roller_set_action(roller, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_set_action_obj, 2, 2, mp_lv_roller_set_action);

 

/*
 * lvgl extension definition for:
 * inline static void lv_roller_set_hor_fit(lv_obj_t *roller, bool fit_en)
 */
 
STATIC mp_obj_t mp_lv_roller_set_hor_fit(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *roller = mp_to_lv(args[0]);
    bool fit_en = mp_obj_is_true(args[1]);
    lv_roller_set_hor_fit(roller, fit_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_set_hor_fit_obj, 2, 2, mp_lv_roller_set_hor_fit);

 

/*
 * lvgl extension definition for:
 * inline static void lv_roller_set_anim_time(lv_obj_t *roller, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_roller_set_anim_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *roller = mp_to_lv(args[0]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_roller_set_anim_time(roller, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_set_anim_time_obj, 2, 2, mp_lv_roller_set_anim_time);

 

/*
 * lvgl extension definition for:
 * inline static const char *lv_roller_get_options(const lv_obj_t *roller)
 */
 
STATIC mp_obj_t mp_lv_roller_get_options(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *roller = mp_to_lv(args[0]);
    const char* res = lv_roller_get_options(roller);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_get_options_obj, 1, 1, mp_lv_roller_get_options);

 

/*
 * lvgl extension definition for:
 * inline static uint16_t lv_roller_get_selected(const lv_obj_t *roller)
 */
 
STATIC mp_obj_t mp_lv_roller_get_selected(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *roller = mp_to_lv(args[0]);
    uint16_t res = lv_roller_get_selected(roller);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_get_selected_obj, 1, 1, mp_lv_roller_get_selected);

 

/*
 * lvgl extension definition for:
 * inline static void lv_roller_get_selected_str(const lv_obj_t *roller, char *buf)
 */
 
STATIC mp_obj_t mp_lv_roller_get_selected_str(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *roller = mp_to_lv(args[0]);
    char *buf = (char*)mp_obj_str_get_str(args[1]);
    lv_roller_get_selected_str(roller, buf);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_get_selected_str_obj, 2, 2, mp_lv_roller_get_selected_str);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * inline static lv_action_t lv_roller_get_action(const lv_obj_t *roller)
 */
    

/*
 * lvgl extension definition for:
 * inline static uint16_t lv_roller_get_anim_time(const lv_obj_t *roller)
 */
 
STATIC mp_obj_t mp_lv_roller_get_anim_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *roller = mp_to_lv(args[0]);
    uint16_t res = lv_roller_get_anim_time(roller);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_get_anim_time_obj, 1, 1, mp_lv_roller_get_anim_time);

 

/*
 * lvgl extension definition for:
 * void lv_roller_set_selected(lv_obj_t *roller, uint16_t sel_opt, bool anim_en)
 */
 
STATIC mp_obj_t mp_lv_roller_set_selected(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *roller = mp_to_lv(args[0]);
    uint16_t sel_opt = (uint16_t)mp_obj_int_get_checked(args[1]);
    bool anim_en = mp_obj_is_true(args[2]);
    lv_roller_set_selected(roller, sel_opt, anim_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_set_selected_obj, 3, 3, mp_lv_roller_set_selected);

 

/*
 * lvgl extension definition for:
 * void lv_roller_set_visible_row_count(lv_obj_t *roller, uint8_t row_cnt)
 */
 
STATIC mp_obj_t mp_lv_roller_set_visible_row_count(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *roller = mp_to_lv(args[0]);
    uint8_t row_cnt = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_roller_set_visible_row_count(roller, row_cnt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_set_visible_row_count_obj, 2, 2, mp_lv_roller_set_visible_row_count);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_roller_set_style(lv_obj_t *roller, lv_roller_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * bool lv_roller_get_hor_fit(const lv_obj_t *roller)
 */
 
STATIC mp_obj_t mp_lv_roller_get_hor_fit(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *roller = mp_to_lv(args[0]);
    bool res = lv_roller_get_hor_fit(roller);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_roller_get_hor_fit_obj, 1, 1, mp_lv_roller_get_hor_fit);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_roller_get_style(const lv_obj_t *roller, lv_roller_style_t type)
 */
    

    
/*
 * lvgl roller object definitions
 */

STATIC const mp_rom_map_elem_t roller_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_options), MP_ROM_PTR(&mp_lv_roller_set_options_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_roller_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hor_fit), MP_ROM_PTR(&mp_lv_roller_set_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_anim_time), MP_ROM_PTR(&mp_lv_roller_set_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_options), MP_ROM_PTR(&mp_lv_roller_get_options_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_selected), MP_ROM_PTR(&mp_lv_roller_get_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_selected_str), MP_ROM_PTR(&mp_lv_roller_get_selected_str_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_anim_time), MP_ROM_PTR(&mp_lv_roller_get_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_selected), MP_ROM_PTR(&mp_lv_roller_set_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_visible_row_count), MP_ROM_PTR(&mp_lv_roller_set_visible_row_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_roller_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_ddlist_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_ddlist_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_options), MP_ROM_PTR(&mp_lv_ddlist_set_options_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_selected), MP_ROM_PTR(&mp_lv_ddlist_set_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_ddlist_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fix_height), MP_ROM_PTR(&mp_lv_ddlist_set_fix_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hor_fit), MP_ROM_PTR(&mp_lv_ddlist_set_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_anim_time), MP_ROM_PTR(&mp_lv_ddlist_set_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_options), MP_ROM_PTR(&mp_lv_ddlist_get_options_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_selected), MP_ROM_PTR(&mp_lv_ddlist_get_selected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_selected_str), MP_ROM_PTR(&mp_lv_ddlist_get_selected_str_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fix_height), MP_ROM_PTR(&mp_lv_ddlist_get_fix_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_anim_time), MP_ROM_PTR(&mp_lv_ddlist_get_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_open), MP_ROM_PTR(&mp_lv_ddlist_open_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_close), MP_ROM_PTR(&mp_lv_ddlist_close_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_fit), MP_ROM_PTR(&mp_lv_page_set_scrl_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_width), MP_ROM_PTR(&mp_lv_page_set_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_height), MP_ROM_PTR(&mp_lv_page_set_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_layout), MP_ROM_PTR(&mp_lv_page_set_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_width), MP_ROM_PTR(&mp_lv_page_get_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_height), MP_ROM_PTR(&mp_lv_page_get_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_layout), MP_ROM_PTR(&mp_lv_page_get_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_hor_fit), MP_ROM_PTR(&mp_lv_page_get_scrl_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_fit_ver), MP_ROM_PTR(&mp_lv_page_get_scrl_fit_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_page_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl), MP_ROM_PTR(&mp_lv_page_get_scrl_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_rel_action), MP_ROM_PTR(&mp_lv_page_set_rel_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pr_action), MP_ROM_PTR(&mp_lv_page_set_pr_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_page_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_arrow_scroll), MP_ROM_PTR(&mp_lv_page_set_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_page_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_arrow_scroll), MP_ROM_PTR(&mp_lv_page_get_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_page_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_page_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_glue_obj), MP_ROM_PTR(&mp_lv_page_glue_obj_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_focus), MP_ROM_PTR(&mp_lv_page_focus_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_hor), MP_ROM_PTR(&mp_lv_page_scroll_hor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_ver), MP_ROM_PTR(&mp_lv_page_scroll_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_PAGE_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_DDLIST_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_ROLLER_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(roller_locals_dict, roller_locals_dict_table);

STATIC void roller_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl roller");
}


STATIC mp_obj_t roller_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_roller_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_roller_type = {
    { &mp_type_type },
    .name = MP_QSTR_roller,
    .print = roller_print,
    .make_new = roller_make_new,
    .locals_dict = (mp_obj_dict_t*)&roller_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_slider_set_value(lv_obj_t *slider, int16_t value)
 */
 
STATIC mp_obj_t mp_lv_slider_set_value(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *slider = mp_to_lv(args[0]);
    int16_t value = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_slider_set_value(slider, value);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_set_value_obj, 2, 2, mp_lv_slider_set_value);

 

/*
 * lvgl extension definition for:
 * inline static void lv_slider_set_value_anim(lv_obj_t *slider, int16_t value, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_slider_set_value_anim(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *slider = mp_to_lv(args[0]);
    int16_t value = (int16_t)mp_obj_int_get_checked(args[1]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[2]);
    lv_slider_set_value_anim(slider, value, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_set_value_anim_obj, 3, 3, mp_lv_slider_set_value_anim);

 

/*
 * lvgl extension definition for:
 * inline static void lv_slider_set_range(lv_obj_t *slider, int16_t min, int16_t max)
 */
 
STATIC mp_obj_t mp_lv_slider_set_range(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *slider = mp_to_lv(args[0]);
    int16_t min = (int16_t)mp_obj_int_get_checked(args[1]);
    int16_t max = (int16_t)mp_obj_int_get_checked(args[2]);
    lv_slider_set_range(slider, min, max);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_set_range_obj, 3, 3, mp_lv_slider_set_range);

 

/*
 * lvgl extension definition for:
 * inline static int16_t lv_slider_get_min_value(const lv_obj_t *slider)
 */
 
STATIC mp_obj_t mp_lv_slider_get_min_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *slider = mp_to_lv(args[0]);
    int16_t res = lv_slider_get_min_value(slider);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_get_min_value_obj, 1, 1, mp_lv_slider_get_min_value);

 

/*
 * lvgl extension definition for:
 * inline static int16_t lv_slider_get_max_value(const lv_obj_t *slider)
 */
 
STATIC mp_obj_t mp_lv_slider_get_max_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *slider = mp_to_lv(args[0]);
    int16_t res = lv_slider_get_max_value(slider);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_get_max_value_obj, 1, 1, mp_lv_slider_get_max_value);

 

/*
 * lvgl extension definition for:
 * void lv_slider_set_action(lv_obj_t *slider, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_slider_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *slider = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_slider_set_action(slider, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_set_action_obj, 2, 2, mp_lv_slider_set_action);

 

/*
 * lvgl extension definition for:
 * void lv_slider_set_knob_in(lv_obj_t *slider, bool in)
 */
 
STATIC mp_obj_t mp_lv_slider_set_knob_in(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *slider = mp_to_lv(args[0]);
    bool in = mp_obj_is_true(args[1]);
    lv_slider_set_knob_in(slider, in);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_set_knob_in_obj, 2, 2, mp_lv_slider_set_knob_in);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_slider_set_style(lv_obj_t *slider, lv_slider_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * int16_t lv_slider_get_value(const lv_obj_t *slider)
 */
 
STATIC mp_obj_t mp_lv_slider_get_value(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *slider = mp_to_lv(args[0]);
    int16_t res = lv_slider_get_value(slider);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_get_value_obj, 1, 1, mp_lv_slider_get_value);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * lv_action_t lv_slider_get_action(const lv_obj_t *slider)
 */
    

/*
 * lvgl extension definition for:
 * bool lv_slider_is_dragged(const lv_obj_t *slider)
 */
 
STATIC mp_obj_t mp_lv_slider_is_dragged(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *slider = mp_to_lv(args[0]);
    bool res = lv_slider_is_dragged(slider);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_is_dragged_obj, 1, 1, mp_lv_slider_is_dragged);

 

/*
 * lvgl extension definition for:
 * bool lv_slider_get_knob_in(const lv_obj_t *slider)
 */
 
STATIC mp_obj_t mp_lv_slider_get_knob_in(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *slider = mp_to_lv(args[0]);
    bool res = lv_slider_get_knob_in(slider);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_slider_get_knob_in_obj, 1, 1, mp_lv_slider_get_knob_in);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_slider_get_style(const lv_obj_t *slider, lv_slider_style_t type)
 */
    

    
/*
 * lvgl slider object definitions
 */

STATIC const mp_rom_map_elem_t slider_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_slider_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value_anim), MP_ROM_PTR(&mp_lv_slider_set_value_anim_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_slider_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_slider_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_slider_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_slider_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_knob_in), MP_ROM_PTR(&mp_lv_slider_set_knob_in_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_slider_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_dragged), MP_ROM_PTR(&mp_lv_slider_is_dragged_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_knob_in), MP_ROM_PTR(&mp_lv_slider_get_knob_in_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_bar_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value_anim), MP_ROM_PTR(&mp_lv_bar_set_value_anim_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_bar_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_bar_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_bar_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_bar_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_BAR_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_SLIDER_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(slider_locals_dict, slider_locals_dict_table);

STATIC void slider_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl slider");
}


STATIC mp_obj_t slider_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_slider_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_slider_type = {
    { &mp_type_type },
    .name = MP_QSTR_slider,
    .print = slider_print,
    .make_new = slider_make_new,
    .locals_dict = (mp_obj_dict_t*)&slider_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_sw_set_action(lv_obj_t *sw, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_sw_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *sw = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_sw_set_action(sw, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_sw_set_action_obj, 2, 2, mp_lv_sw_set_action);

 

/*
 * lvgl extension definition for:
 * inline static bool lv_sw_get_state(const lv_obj_t *sw)
 */
 
STATIC mp_obj_t mp_lv_sw_get_state(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *sw = mp_to_lv(args[0]);
    bool res = lv_sw_get_state(sw);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_sw_get_state_obj, 1, 1, mp_lv_sw_get_state);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * inline static lv_action_t lv_sw_get_action(const lv_obj_t *slider)
 */
    

/*
 * lvgl extension definition for:
 * void lv_sw_on(lv_obj_t *sw)
 */
 
STATIC mp_obj_t mp_lv_sw_on(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *sw = mp_to_lv(args[0]);
    lv_sw_on(sw);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_sw_on_obj, 1, 1, mp_lv_sw_on);

 

/*
 * lvgl extension definition for:
 * void lv_sw_off(lv_obj_t *sw)
 */
 
STATIC mp_obj_t mp_lv_sw_off(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *sw = mp_to_lv(args[0]);
    lv_sw_off(sw);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_sw_off_obj, 1, 1, mp_lv_sw_off);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_sw_set_style(lv_obj_t *sw, lv_sw_style_t type, lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_sw_get_style(const lv_obj_t *sw, lv_sw_style_t type)
 */
    

    
/*
 * lvgl sw object definitions
 */

STATIC const mp_rom_map_elem_t sw_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_sw_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_state), MP_ROM_PTR(&mp_lv_sw_get_state_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_on), MP_ROM_PTR(&mp_lv_sw_on_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_off), MP_ROM_PTR(&mp_lv_sw_off_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_slider_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value_anim), MP_ROM_PTR(&mp_lv_slider_set_value_anim_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_slider_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_slider_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_slider_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_slider_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_knob_in), MP_ROM_PTR(&mp_lv_slider_set_knob_in_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_slider_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_dragged), MP_ROM_PTR(&mp_lv_slider_is_dragged_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_knob_in), MP_ROM_PTR(&mp_lv_slider_get_knob_in_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value), MP_ROM_PTR(&mp_lv_bar_set_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_value_anim), MP_ROM_PTR(&mp_lv_bar_set_value_anim_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_range), MP_ROM_PTR(&mp_lv_bar_set_range_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_value), MP_ROM_PTR(&mp_lv_bar_get_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_min_value), MP_ROM_PTR(&mp_lv_bar_get_min_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_value), MP_ROM_PTR(&mp_lv_bar_get_max_value_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_BAR_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_SLIDER_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_SW_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(sw_locals_dict, sw_locals_dict_table);

STATIC void sw_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl sw");
}


STATIC mp_obj_t sw_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_sw_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_sw_type = {
    { &mp_type_type },
    .name = MP_QSTR_sw,
    .print = sw_print,
    .make_new = sw_make_new,
    .locals_dict = (mp_obj_dict_t*)&sw_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_win_scroll_hor(lv_obj_t *win, lv_coord_t dist)
 */
 
STATIC mp_obj_t mp_lv_win_scroll_hor(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_coord_t dist = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_win_scroll_hor(win, dist);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_scroll_hor_obj, 2, 2, mp_lv_win_scroll_hor);

 

/*
 * lvgl extension definition for:
 * inline static void lv_win_scroll_ver(lv_obj_t *win, lv_coord_t dist)
 */
 
STATIC mp_obj_t mp_lv_win_scroll_ver(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_coord_t dist = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_win_scroll_ver(win, dist);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_scroll_ver_obj, 2, 2, mp_lv_win_scroll_ver);

 

/*
 * lvgl extension definition for:
 * void lv_win_clean(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_win_clean(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_win_clean(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_clean_obj, 1, 1, mp_lv_win_clean);

 

/*
 * Function NOT generated:
 * Missing conversion to const void*
 * lv_obj_t *lv_win_add_btn(lv_obj_t *win, const void *img_src, lv_action_t rel_action)
 */
    

/*
 * lvgl extension definition for:
 * lv_res_t lv_win_close_action(lv_obj_t *btn)
 */
 
STATIC mp_obj_t mp_lv_win_close_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *btn = mp_to_lv(args[0]);
    lv_res_t res = lv_win_close_action(btn);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_close_action_obj, 1, 1, mp_lv_win_close_action);

 

/*
 * lvgl extension definition for:
 * void lv_win_set_title(lv_obj_t *win, const char *title)
 */
 
STATIC mp_obj_t mp_lv_win_set_title(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    const char *title = mp_obj_str_get_str(args[1]);
    lv_win_set_title(win, title);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_set_title_obj, 2, 2, mp_lv_win_set_title);

 

/*
 * lvgl extension definition for:
 * void lv_win_set_btn_size(lv_obj_t *win, lv_coord_t size)
 */
 
STATIC mp_obj_t mp_lv_win_set_btn_size(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_coord_t size = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_win_set_btn_size(win, size);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_set_btn_size_obj, 2, 2, mp_lv_win_set_btn_size);

 

/*
 * lvgl extension definition for:
 * void lv_win_set_layout(lv_obj_t *win, lv_layout_t layout)
 */
 
STATIC mp_obj_t mp_lv_win_set_layout(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_layout_t layout = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_win_set_layout(win, layout);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_set_layout_obj, 2, 2, mp_lv_win_set_layout);

 

/*
 * lvgl extension definition for:
 * void lv_win_set_sb_mode(lv_obj_t *win, lv_sb_mode_t sb_mode)
 */
 
STATIC mp_obj_t mp_lv_win_set_sb_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_sb_mode_t sb_mode = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_win_set_sb_mode(win, sb_mode);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_set_sb_mode_obj, 2, 2, mp_lv_win_set_sb_mode);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_win_set_style(lv_obj_t *win, lv_win_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * const char *lv_win_get_title(const lv_obj_t *win)
 */
 
STATIC mp_obj_t mp_lv_win_get_title(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *win = mp_to_lv(args[0]);
    const char* res = lv_win_get_title(win);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_get_title_obj, 1, 1, mp_lv_win_get_title);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_win_get_content(const lv_obj_t *win)
 */
 
STATIC mp_obj_t mp_lv_win_get_content(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *win = mp_to_lv(args[0]);
    lv_obj_t* res = lv_win_get_content(win);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_get_content_obj, 1, 1, mp_lv_win_get_content);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_win_get_btn_size(const lv_obj_t *win)
 */
 
STATIC mp_obj_t mp_lv_win_get_btn_size(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *win = mp_to_lv(args[0]);
    lv_coord_t res = lv_win_get_btn_size(win);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_get_btn_size_obj, 1, 1, mp_lv_win_get_btn_size);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_win_get_from_btn(const lv_obj_t *ctrl_btn)
 */
 
STATIC mp_obj_t mp_lv_win_get_from_btn(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ctrl_btn = mp_to_lv(args[0]);
    lv_obj_t* res = lv_win_get_from_btn(ctrl_btn);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_get_from_btn_obj, 1, 1, mp_lv_win_get_from_btn);

 

/*
 * lvgl extension definition for:
 * lv_layout_t lv_win_get_layout(lv_obj_t *win)
 */
 
STATIC mp_obj_t mp_lv_win_get_layout(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_layout_t res = lv_win_get_layout(win);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_get_layout_obj, 1, 1, mp_lv_win_get_layout);

 

/*
 * lvgl extension definition for:
 * lv_sb_mode_t lv_win_get_sb_mode(lv_obj_t *win)
 */
 
STATIC mp_obj_t mp_lv_win_get_sb_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_sb_mode_t res = lv_win_get_sb_mode(win);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_get_sb_mode_obj, 1, 1, mp_lv_win_get_sb_mode);

 

/*
 * lvgl extension definition for:
 * lv_coord_t lv_win_get_width(lv_obj_t *win)
 */
 
STATIC mp_obj_t mp_lv_win_get_width(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_coord_t res = lv_win_get_width(win);
    return mp_obj_new_int(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_get_width_obj, 1, 1, mp_lv_win_get_width);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_win_get_style(const lv_obj_t *win, lv_win_style_t type)
 */
    

/*
 * lvgl extension definition for:
 * void lv_win_focus(lv_obj_t *win, lv_obj_t *obj, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_win_focus(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *win = mp_to_lv(args[0]);
    lv_obj_t *obj = mp_to_lv(args[1]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[2]);
    lv_win_focus(win, obj, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_win_focus_obj, 3, 3, mp_lv_win_focus);

 

    
/*
 * lvgl win object definitions
 */

STATIC const mp_rom_map_elem_t win_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_hor), MP_ROM_PTR(&mp_lv_win_scroll_hor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_ver), MP_ROM_PTR(&mp_lv_win_scroll_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_win_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_close_action), MP_ROM_PTR(&mp_lv_win_close_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_title), MP_ROM_PTR(&mp_lv_win_set_title_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_btn_size), MP_ROM_PTR(&mp_lv_win_set_btn_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_win_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_win_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_title), MP_ROM_PTR(&mp_lv_win_get_title_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_content), MP_ROM_PTR(&mp_lv_win_get_content_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_btn_size), MP_ROM_PTR(&mp_lv_win_get_btn_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_from_btn), MP_ROM_PTR(&mp_lv_win_get_from_btn_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_win_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_win_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_win_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_focus), MP_ROM_PTR(&mp_lv_win_focus_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_WIN_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(win_locals_dict, win_locals_dict_table);

STATIC void win_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl win");
}


STATIC mp_obj_t win_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_win_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_win_type = {
    { &mp_type_type },
    .name = MP_QSTR_win,
    .print = win_print,
    .make_new = win_make_new,
    .locals_dict = (mp_obj_dict_t*)&win_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * void lv_tabview_clean(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_tabview_clean(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_tabview_clean(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_clean_obj, 1, 1, mp_lv_tabview_clean);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_tabview_add_tab(lv_obj_t *tabview, const char *name)
 */
 
STATIC mp_obj_t mp_lv_tabview_add_tab(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *tabview = mp_to_lv(args[0]);
    const char *name = mp_obj_str_get_str(args[1]);
    lv_obj_t* res = lv_tabview_add_tab(tabview, name);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_add_tab_obj, 2, 2, mp_lv_tabview_add_tab);

 

/*
 * lvgl extension definition for:
 * void lv_tabview_set_tab_act(lv_obj_t *tabview, uint16_t id, bool anim_en)
 */
 
STATIC mp_obj_t mp_lv_tabview_set_tab_act(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *tabview = mp_to_lv(args[0]);
    uint16_t id = (uint16_t)mp_obj_int_get_checked(args[1]);
    bool anim_en = mp_obj_is_true(args[2]);
    lv_tabview_set_tab_act(tabview, id, anim_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_set_tab_act_obj, 3, 3, mp_lv_tabview_set_tab_act);

 

/*
 * lvgl extension definition for:
 * void lv_tabview_set_tab_load_action(lv_obj_t *tabview, lv_tabview_action_t action)
 */
 
STATIC mp_obj_t mp_lv_tabview_set_tab_load_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *tabview = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_tabview_action_t action = &lv_tabview_action_t_callback;
    lv_tabview_set_tab_load_action(tabview, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_set_tab_load_action_obj, 2, 2, mp_lv_tabview_set_tab_load_action);

 

/*
 * lvgl extension definition for:
 * void lv_tabview_set_sliding(lv_obj_t *tabview, bool en)
 */
 
STATIC mp_obj_t mp_lv_tabview_set_sliding(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *tabview = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_tabview_set_sliding(tabview, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_set_sliding_obj, 2, 2, mp_lv_tabview_set_sliding);

 

/*
 * lvgl extension definition for:
 * void lv_tabview_set_anim_time(lv_obj_t *tabview, uint16_t anim_time)
 */
 
STATIC mp_obj_t mp_lv_tabview_set_anim_time(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *tabview = mp_to_lv(args[0]);
    uint16_t anim_time = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_tabview_set_anim_time(tabview, anim_time);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_set_anim_time_obj, 2, 2, mp_lv_tabview_set_anim_time);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_tabview_set_style(lv_obj_t *tabview, lv_tabview_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * void lv_tabview_set_btns_pos(lv_obj_t *tabview, lv_tabview_btns_pos_t btns_pos)
 */
 
STATIC mp_obj_t mp_lv_tabview_set_btns_pos(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *tabview = mp_to_lv(args[0]);
    lv_tabview_btns_pos_t btns_pos = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_tabview_set_btns_pos(tabview, btns_pos);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_set_btns_pos_obj, 2, 2, mp_lv_tabview_set_btns_pos);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_tabview_get_tab_act(const lv_obj_t *tabview)
 */
 
STATIC mp_obj_t mp_lv_tabview_get_tab_act(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *tabview = mp_to_lv(args[0]);
    uint16_t res = lv_tabview_get_tab_act(tabview);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_get_tab_act_obj, 1, 1, mp_lv_tabview_get_tab_act);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_tabview_get_tab_count(const lv_obj_t *tabview)
 */
 
STATIC mp_obj_t mp_lv_tabview_get_tab_count(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *tabview = mp_to_lv(args[0]);
    uint16_t res = lv_tabview_get_tab_count(tabview);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_get_tab_count_obj, 1, 1, mp_lv_tabview_get_tab_count);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_tabview_get_tab(const lv_obj_t *tabview, uint16_t id)
 */
 
STATIC mp_obj_t mp_lv_tabview_get_tab(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *tabview = mp_to_lv(args[0]);
    uint16_t id = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_obj_t* res = lv_tabview_get_tab(tabview, id);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_get_tab_obj, 2, 2, mp_lv_tabview_get_tab);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_tabview_action_t
 * lv_tabview_action_t lv_tabview_get_tab_load_action(const lv_obj_t *tabview)
 */
    

/*
 * lvgl extension definition for:
 * bool lv_tabview_get_sliding(const lv_obj_t *tabview)
 */
 
STATIC mp_obj_t mp_lv_tabview_get_sliding(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *tabview = mp_to_lv(args[0]);
    bool res = lv_tabview_get_sliding(tabview);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_get_sliding_obj, 1, 1, mp_lv_tabview_get_sliding);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_tabview_get_anim_time(const lv_obj_t *tabview)
 */
 
STATIC mp_obj_t mp_lv_tabview_get_anim_time(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *tabview = mp_to_lv(args[0]);
    uint16_t res = lv_tabview_get_anim_time(tabview);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_get_anim_time_obj, 1, 1, mp_lv_tabview_get_anim_time);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_tabview_get_style(const lv_obj_t *tabview, lv_tabview_style_t type)
 */
    

/*
 * lvgl extension definition for:
 * lv_tabview_btns_pos_t lv_tabview_get_btns_pos(const lv_obj_t *tabview)
 */
 
STATIC mp_obj_t mp_lv_tabview_get_btns_pos(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *tabview = mp_to_lv(args[0]);
    lv_tabview_btns_pos_t res = lv_tabview_get_btns_pos(tabview);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tabview_get_btns_pos_obj, 1, 1, mp_lv_tabview_get_btns_pos);

 

    
/*
 * lvgl tabview object definitions
 */

STATIC const mp_rom_map_elem_t tabview_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_tabview_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_add_tab), MP_ROM_PTR(&mp_lv_tabview_add_tab_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_tab_act), MP_ROM_PTR(&mp_lv_tabview_set_tab_act_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_tab_load_action), MP_ROM_PTR(&mp_lv_tabview_set_tab_load_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sliding), MP_ROM_PTR(&mp_lv_tabview_set_sliding_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_anim_time), MP_ROM_PTR(&mp_lv_tabview_set_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_btns_pos), MP_ROM_PTR(&mp_lv_tabview_set_btns_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_tab_act), MP_ROM_PTR(&mp_lv_tabview_get_tab_act_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_tab_count), MP_ROM_PTR(&mp_lv_tabview_get_tab_count_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_tab), MP_ROM_PTR(&mp_lv_tabview_get_tab_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sliding), MP_ROM_PTR(&mp_lv_tabview_get_sliding_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_anim_time), MP_ROM_PTR(&mp_lv_tabview_get_anim_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_btns_pos), MP_ROM_PTR(&mp_lv_tabview_get_btns_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BTNS_POS), MP_ROM_PTR(&mp_LV_TABVIEW_BTNS_POS_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_TABVIEW_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(tabview_locals_dict, tabview_locals_dict_table);

STATIC void tabview_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl tabview");
}


STATIC mp_obj_t tabview_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_tabview_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_tabview_type = {
    { &mp_type_type },
    .name = MP_QSTR_tabview,
    .print = tabview_print,
    .make_new = tabview_make_new,
    .locals_dict = (mp_obj_dict_t*)&tabview_locals_dict,
};
    

/*
 * lvgl extension definition for:
 * inline static void lv_ta_set_action(lv_obj_t *ta, lv_action_t action)
 */
 
STATIC mp_obj_t mp_lv_ta_set_action(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    set_action(args[0], args[1]);
    lv_action_t action = &lv_action_t_callback;
    lv_ta_set_action(ta, action);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_action_obj, 2, 2, mp_lv_ta_set_action);

 

/*
 * lvgl extension definition for:
 * inline static void lv_ta_set_sb_mode(lv_obj_t *ta, lv_sb_mode_t mode)
 */
 
STATIC mp_obj_t mp_lv_ta_set_sb_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_sb_mode_t mode = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_ta_set_sb_mode(ta, mode);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_sb_mode_obj, 2, 2, mp_lv_ta_set_sb_mode);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_action_t
 * inline static lv_action_t lv_ta_get_action(lv_obj_t *ta)
 */
    

/*
 * lvgl extension definition for:
 * inline static lv_sb_mode_t lv_ta_get_sb_mode(const lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_sb_mode(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ta = mp_to_lv(args[0]);
    lv_sb_mode_t res = lv_ta_get_sb_mode(ta);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_sb_mode_obj, 1, 1, mp_lv_ta_get_sb_mode);

 

/*
 * lvgl extension definition for:
 * void lv_ta_add_char(lv_obj_t *ta, uint32_t c)
 */
 
STATIC mp_obj_t mp_lv_ta_add_char(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    uint32_t c = (uint32_t)mp_obj_int_get_checked(args[1]);
    lv_ta_add_char(ta, c);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_add_char_obj, 2, 2, mp_lv_ta_add_char);

 

/*
 * lvgl extension definition for:
 * void lv_ta_add_text(lv_obj_t *ta, const char *txt)
 */
 
STATIC mp_obj_t mp_lv_ta_add_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    const char *txt = mp_obj_str_get_str(args[1]);
    lv_ta_add_text(ta, txt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_add_text_obj, 2, 2, mp_lv_ta_add_text);

 

/*
 * lvgl extension definition for:
 * void lv_ta_del_char(lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_del_char(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_ta_del_char(ta);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_del_char_obj, 1, 1, mp_lv_ta_del_char);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_text(lv_obj_t *ta, const char *txt)
 */
 
STATIC mp_obj_t mp_lv_ta_set_text(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    const char *txt = mp_obj_str_get_str(args[1]);
    lv_ta_set_text(ta, txt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_text_obj, 2, 2, mp_lv_ta_set_text);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_cursor_pos(lv_obj_t *ta, int16_t pos)
 */
 
STATIC mp_obj_t mp_lv_ta_set_cursor_pos(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    int16_t pos = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_ta_set_cursor_pos(ta, pos);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_cursor_pos_obj, 2, 2, mp_lv_ta_set_cursor_pos);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_cursor_type(lv_obj_t *ta, lv_cursor_type_t cur_type)
 */
 
STATIC mp_obj_t mp_lv_ta_set_cursor_type(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_cursor_type_t cur_type = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_ta_set_cursor_type(ta, cur_type);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_cursor_type_obj, 2, 2, mp_lv_ta_set_cursor_type);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_pwd_mode(lv_obj_t *ta, bool pwd_en)
 */
 
STATIC mp_obj_t mp_lv_ta_set_pwd_mode(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    bool pwd_en = mp_obj_is_true(args[1]);
    lv_ta_set_pwd_mode(ta, pwd_en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_pwd_mode_obj, 2, 2, mp_lv_ta_set_pwd_mode);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_one_line(lv_obj_t *ta, bool en)
 */
 
STATIC mp_obj_t mp_lv_ta_set_one_line(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    bool en = mp_obj_is_true(args[1]);
    lv_ta_set_one_line(ta, en);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_one_line_obj, 2, 2, mp_lv_ta_set_one_line);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_text_align(lv_obj_t *ta, lv_label_align_t align)
 */
 
STATIC mp_obj_t mp_lv_ta_set_text_align(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_label_align_t align = (uint8_t)mp_obj_int_get_checked(args[1]);
    lv_ta_set_text_align(ta, align);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_text_align_obj, 2, 2, mp_lv_ta_set_text_align);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_accepted_chars(lv_obj_t *ta, const char *list)
 */
 
STATIC mp_obj_t mp_lv_ta_set_accepted_chars(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    const char *list = mp_obj_str_get_str(args[1]);
    lv_ta_set_accepted_chars(ta, list);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_accepted_chars_obj, 2, 2, mp_lv_ta_set_accepted_chars);

 

/*
 * lvgl extension definition for:
 * void lv_ta_set_max_length(lv_obj_t *ta, uint16_t num)
 */
 
STATIC mp_obj_t mp_lv_ta_set_max_length(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    uint16_t num = (uint16_t)mp_obj_int_get_checked(args[1]);
    lv_ta_set_max_length(ta, num);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_set_max_length_obj, 2, 2, mp_lv_ta_set_max_length);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_ta_set_style(lv_obj_t *ta, lv_ta_style_t type, lv_style_t *style)
 */
    

/*
 * lvgl extension definition for:
 * const char *lv_ta_get_text(const lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_text(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ta = mp_to_lv(args[0]);
    const char* res = lv_ta_get_text(ta);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_text_obj, 1, 1, mp_lv_ta_get_text);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_ta_get_label(const lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_label(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ta = mp_to_lv(args[0]);
    lv_obj_t* res = lv_ta_get_label(ta);
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_label_obj, 1, 1, mp_lv_ta_get_label);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_ta_get_cursor_pos(const lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_cursor_pos(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ta = mp_to_lv(args[0]);
    uint16_t res = lv_ta_get_cursor_pos(ta);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_cursor_pos_obj, 1, 1, mp_lv_ta_get_cursor_pos);

 

/*
 * lvgl extension definition for:
 * lv_cursor_type_t lv_ta_get_cursor_type(const lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_cursor_type(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ta = mp_to_lv(args[0]);
    lv_cursor_type_t res = lv_ta_get_cursor_type(ta);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_cursor_type_obj, 1, 1, mp_lv_ta_get_cursor_type);

 

/*
 * lvgl extension definition for:
 * bool lv_ta_get_pwd_mode(const lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_pwd_mode(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ta = mp_to_lv(args[0]);
    bool res = lv_ta_get_pwd_mode(ta);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_pwd_mode_obj, 1, 1, mp_lv_ta_get_pwd_mode);

 

/*
 * lvgl extension definition for:
 * bool lv_ta_get_one_line(const lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_one_line(size_t n_args, const mp_obj_t *args)
{
    const lv_obj_t *ta = mp_to_lv(args[0]);
    bool res = lv_ta_get_one_line(ta);
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_one_line_obj, 1, 1, mp_lv_ta_get_one_line);

 

/*
 * lvgl extension definition for:
 * const char *lv_ta_get_accepted_chars(lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_accepted_chars(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    const char* res = lv_ta_get_accepted_chars(ta);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_accepted_chars_obj, 1, 1, mp_lv_ta_get_accepted_chars);

 

/*
 * lvgl extension definition for:
 * uint16_t lv_ta_get_max_length(lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_get_max_length(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    uint16_t res = lv_ta_get_max_length(ta);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_get_max_length_obj, 1, 1, mp_lv_ta_get_max_length);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_ta_get_style(const lv_obj_t *ta, lv_ta_style_t type)
 */
    

/*
 * lvgl extension definition for:
 * void lv_ta_cursor_right(lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_cursor_right(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_ta_cursor_right(ta);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_cursor_right_obj, 1, 1, mp_lv_ta_cursor_right);

 

/*
 * lvgl extension definition for:
 * void lv_ta_cursor_left(lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_cursor_left(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_ta_cursor_left(ta);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_cursor_left_obj, 1, 1, mp_lv_ta_cursor_left);

 

/*
 * lvgl extension definition for:
 * void lv_ta_cursor_down(lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_cursor_down(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_ta_cursor_down(ta);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_cursor_down_obj, 1, 1, mp_lv_ta_cursor_down);

 

/*
 * lvgl extension definition for:
 * void lv_ta_cursor_up(lv_obj_t *ta)
 */
 
STATIC mp_obj_t mp_lv_ta_cursor_up(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *ta = mp_to_lv(args[0]);
    lv_ta_cursor_up(ta);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_ta_cursor_up_obj, 1, 1, mp_lv_ta_cursor_up);

 

    
/*
 * lvgl ta object definitions
 */

STATIC const mp_rom_map_elem_t ta_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_action), MP_ROM_PTR(&mp_lv_ta_set_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_ta_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_ta_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_add_char), MP_ROM_PTR(&mp_lv_ta_add_char_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_add_text), MP_ROM_PTR(&mp_lv_ta_add_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del_char), MP_ROM_PTR(&mp_lv_ta_del_char_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_text), MP_ROM_PTR(&mp_lv_ta_set_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_cursor_pos), MP_ROM_PTR(&mp_lv_ta_set_cursor_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_cursor_type), MP_ROM_PTR(&mp_lv_ta_set_cursor_type_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pwd_mode), MP_ROM_PTR(&mp_lv_ta_set_pwd_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_one_line), MP_ROM_PTR(&mp_lv_ta_set_one_line_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_text_align), MP_ROM_PTR(&mp_lv_ta_set_text_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_accepted_chars), MP_ROM_PTR(&mp_lv_ta_set_accepted_chars_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_max_length), MP_ROM_PTR(&mp_lv_ta_set_max_length_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_text), MP_ROM_PTR(&mp_lv_ta_get_text_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_label), MP_ROM_PTR(&mp_lv_ta_get_label_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_cursor_pos), MP_ROM_PTR(&mp_lv_ta_get_cursor_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_cursor_type), MP_ROM_PTR(&mp_lv_ta_get_cursor_type_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_pwd_mode), MP_ROM_PTR(&mp_lv_ta_get_pwd_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_one_line), MP_ROM_PTR(&mp_lv_ta_get_one_line_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_accepted_chars), MP_ROM_PTR(&mp_lv_ta_get_accepted_chars_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_max_length), MP_ROM_PTR(&mp_lv_ta_get_max_length_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_cursor_right), MP_ROM_PTR(&mp_lv_ta_cursor_right_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_cursor_left), MP_ROM_PTR(&mp_lv_ta_cursor_left_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_cursor_down), MP_ROM_PTR(&mp_lv_ta_cursor_down_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_cursor_up), MP_ROM_PTR(&mp_lv_ta_cursor_up_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_fit), MP_ROM_PTR(&mp_lv_page_set_scrl_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_width), MP_ROM_PTR(&mp_lv_page_set_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_height), MP_ROM_PTR(&mp_lv_page_set_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_scrl_layout), MP_ROM_PTR(&mp_lv_page_set_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_width), MP_ROM_PTR(&mp_lv_page_get_scrl_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_height), MP_ROM_PTR(&mp_lv_page_get_scrl_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_layout), MP_ROM_PTR(&mp_lv_page_get_scrl_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_hor_fit), MP_ROM_PTR(&mp_lv_page_get_scrl_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl_fit_ver), MP_ROM_PTR(&mp_lv_page_get_scrl_fit_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_page_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_scrl), MP_ROM_PTR(&mp_lv_page_get_scrl_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_rel_action), MP_ROM_PTR(&mp_lv_page_set_rel_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pr_action), MP_ROM_PTR(&mp_lv_page_set_pr_action_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_sb_mode), MP_ROM_PTR(&mp_lv_page_set_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_arrow_scroll), MP_ROM_PTR(&mp_lv_page_set_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_sb_mode), MP_ROM_PTR(&mp_lv_page_get_sb_mode_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_arrow_scroll), MP_ROM_PTR(&mp_lv_page_get_arrow_scroll_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_page_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_page_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_glue_obj), MP_ROM_PTR(&mp_lv_page_glue_obj_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_focus), MP_ROM_PTR(&mp_lv_page_focus_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_hor), MP_ROM_PTR(&mp_lv_page_scroll_hor_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scroll_ver), MP_ROM_PTR(&mp_lv_page_scroll_ver_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_layout), MP_ROM_PTR(&mp_lv_cont_set_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_fit), MP_ROM_PTR(&mp_lv_cont_set_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_layout), MP_ROM_PTR(&mp_lv_cont_get_layout_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hor_fit), MP_ROM_PTR(&mp_lv_cont_get_hor_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ver_fit), MP_ROM_PTR(&mp_lv_cont_get_ver_fit_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_width), MP_ROM_PTR(&mp_lv_cont_get_fit_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_fit_height), MP_ROM_PTR(&mp_lv_cont_get_fit_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_del), MP_ROM_PTR(&mp_lv_obj_del_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clean), MP_ROM_PTR(&mp_lv_obj_clean_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_invalidate), MP_ROM_PTR(&mp_lv_obj_invalidate_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_parent), MP_ROM_PTR(&mp_lv_obj_set_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_pos), MP_ROM_PTR(&mp_lv_obj_set_pos_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_x), MP_ROM_PTR(&mp_lv_obj_set_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_y), MP_ROM_PTR(&mp_lv_obj_set_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_size), MP_ROM_PTR(&mp_lv_obj_set_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_width), MP_ROM_PTR(&mp_lv_obj_set_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_height), MP_ROM_PTR(&mp_lv_obj_set_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_align), MP_ROM_PTR(&mp_lv_obj_align_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_style), MP_ROM_PTR(&mp_lv_obj_refresh_style_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_hidden), MP_ROM_PTR(&mp_lv_obj_set_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_click), MP_ROM_PTR(&mp_lv_obj_set_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_top), MP_ROM_PTR(&mp_lv_obj_set_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag), MP_ROM_PTR(&mp_lv_obj_set_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_throw), MP_ROM_PTR(&mp_lv_obj_set_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_drag_parent), MP_ROM_PTR(&mp_lv_obj_set_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale_enable), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_opa_scale), MP_ROM_PTR(&mp_lv_obj_set_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_protect), MP_ROM_PTR(&mp_lv_obj_set_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clear_protect), MP_ROM_PTR(&mp_lv_obj_clear_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_refresh_ext_size), MP_ROM_PTR(&mp_lv_obj_refresh_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_free_num), MP_ROM_PTR(&mp_lv_obj_set_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_screen), MP_ROM_PTR(&mp_lv_obj_get_screen_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_parent), MP_ROM_PTR(&mp_lv_obj_get_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child), MP_ROM_PTR(&mp_lv_obj_get_child_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_child_back), MP_ROM_PTR(&mp_lv_obj_get_child_back_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_count_children), MP_ROM_PTR(&mp_lv_obj_count_children_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), MP_ROM_PTR(&mp_lv_obj_get_x_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), MP_ROM_PTR(&mp_lv_obj_get_y_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&mp_lv_obj_get_width_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&mp_lv_obj_get_height_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_ext_size), MP_ROM_PTR(&mp_lv_obj_get_ext_size_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_hidden), MP_ROM_PTR(&mp_lv_obj_get_hidden_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_click), MP_ROM_PTR(&mp_lv_obj_get_click_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_top), MP_ROM_PTR(&mp_lv_obj_get_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag), MP_ROM_PTR(&mp_lv_obj_get_drag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_throw), MP_ROM_PTR(&mp_lv_obj_get_drag_throw_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_drag_parent), MP_ROM_PTR(&mp_lv_obj_get_drag_parent_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_opa_scale), MP_ROM_PTR(&mp_lv_obj_get_opa_scale_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_protect), MP_ROM_PTR(&mp_lv_obj_get_protect_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_protected), MP_ROM_PTR(&mp_lv_obj_is_protected_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_free_num), MP_ROM_PTR(&mp_lv_obj_get_free_num_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_focused), MP_ROM_PTR(&mp_lv_obj_is_focused_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_PAGE_STYLE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STYLE), MP_ROM_PTR(&mp_LV_TA_STYLE_type) }
};

STATIC MP_DEFINE_CONST_DICT(ta_locals_dict, ta_locals_dict_table);

STATIC void ta_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "lvgl ta");
}


STATIC mp_obj_t ta_make_new(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    return make_new(&lv_ta_create, type, n_args, n_kw, args);           
}


STATIC const mp_obj_type_t mp_ta_type = {
    { &mp_type_type },
    .name = MP_QSTR_ta,
    .print = ta_print,
    .make_new = ta_make_new,
    .locals_dict = (mp_obj_dict_t*)&ta_locals_dict,
};
    

STATIC inline const mp_obj_type_t *get_BaseObj_type()
{
    return &mp_obj_type;
}


/* 
 *
 * Global Module Functions
 *
 */


/*
 * Function NOT generated:
 * Missing conversion to lv_color_t
 * inline static uint8_t lv_color_to1(lv_color_t color)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t
 * inline static uint8_t lv_color_to8(lv_color_t color)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t
 * inline static uint16_t lv_color_to16(lv_color_t color)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t
 * inline static uint32_t lv_color_to32(lv_color_t color)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_color_t
 * inline static lv_color_t lv_color_mix(lv_color_t c1, lv_color_t c2, uint8_t mix)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t
 * inline static uint8_t lv_color_brightness(lv_color_t color)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * inline static void lv_area_copy(lv_area_t *dest, const lv_area_t *src)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * inline static lv_coord_t lv_area_get_width(const lv_area_t *area_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * inline static lv_coord_t lv_area_get_height(const lv_area_t *area_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * inline static uint8_t lv_font_get_height(const lv_font_t *font_p)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_color_t
 * lv_color_t lv_color_hsv_to_rgb(uint16_t h, uint8_t s, uint8_t v)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_color_hsv_t
 * lv_color_hsv_t lv_color_rgb_to_hsv(uint8_t r, uint8_t g, uint8_t b)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * void lv_area_set(lv_area_t *area_p, lv_coord_t x1, lv_coord_t y1, lv_coord_t x2, lv_coord_t y2)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * void lv_area_set_width(lv_area_t *area_p, lv_coord_t w)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * void lv_area_set_height(lv_area_t *area_p, lv_coord_t h)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * void lv_area_set_pos(lv_area_t *area_p, lv_coord_t x, lv_coord_t y)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * uint32_t lv_area_get_size(const lv_area_t *area_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * bool lv_area_intersect(lv_area_t *res_p, const lv_area_t *a1_p, const lv_area_t *a2_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_area_t*
 * void lv_area_join(lv_area_t *a_res_p, const lv_area_t *a1_p, const lv_area_t *a2_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * bool lv_area_is_point_on(const lv_area_t *a_p, const lv_point_t *p_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * bool lv_area_is_on(const lv_area_t *a1_p, const lv_area_t *a2_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * bool lv_area_is_in(const lv_area_t *ain_p, const lv_area_t *aholder_p)
 */
    

/*
 * lvgl extension definition for:
 * void lv_font_init(void)
 */
 
STATIC mp_obj_t mp_lv_font_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_font_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_font_init_obj, 0, 0, mp_lv_font_init);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_font_t*
 * void lv_font_add(lv_font_t *child, lv_font_t *parent)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * bool lv_font_is_monospace(const lv_font_t *font_p, uint32_t letter)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from const uint8_t*
 * const uint8_t *lv_font_get_bitmap(const lv_font_t *font_p, uint32_t letter)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * uint8_t lv_font_get_width(const lv_font_t *font_p, uint32_t letter)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * uint8_t lv_font_get_real_width(const lv_font_t *font_p, uint32_t letter)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * uint8_t lv_font_get_bpp(const lv_font_t *font, uint32_t letter)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from const uint8_t*
 * const uint8_t *lv_font_get_bitmap_continuous(const lv_font_t *font, uint32_t unicode_letter)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from const uint8_t*
 * const uint8_t *lv_font_get_bitmap_sparse(const lv_font_t *font, uint32_t unicode_letter)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * int16_t lv_font_get_width_continuous(const lv_font_t *font, uint32_t unicode_letter)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * int16_t lv_font_get_width_sparse(const lv_font_t *font, uint32_t unicode_letter)
 */
    

/*
 * lvgl extension definition for:
 * void lv_font_builtin_init(void)
 */
 
STATIC mp_obj_t mp_lv_font_builtin_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_font_builtin_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_font_builtin_init_obj, 0, 0, mp_lv_font_builtin_init);

 

/*
 * lvgl extension definition for:
 * void lv_anim_init(void)
 */
 
STATIC mp_obj_t mp_lv_anim_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_anim_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_anim_init_obj, 0, 0, mp_lv_anim_init);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_anim_t*
 * void lv_anim_create(lv_anim_t *anim_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to void*
 * bool lv_anim_del(void *var, lv_anim_fp_t fp)
 */
    

/*
 * lvgl extension definition for:
 * uint16_t lv_anim_speed_to_time(uint16_t speed, int32_t start, int32_t end)
 */
 
STATIC mp_obj_t mp_lv_anim_speed_to_time(size_t n_args, const mp_obj_t *args)
{
    uint16_t speed = (uint16_t)mp_obj_int_get_checked(args[0]);
    int32_t start = (int32_t)mp_obj_int_get_checked(args[1]);
    int32_t end = (int32_t)mp_obj_int_get_checked(args[2]);
    uint16_t res = lv_anim_speed_to_time(speed, start, end);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_anim_speed_to_time_obj, 3, 3, mp_lv_anim_speed_to_time);

 

/*
 * Function NOT generated:
 * Missing conversion to const lv_anim_t*
 * int32_t lv_anim_path_linear(const lv_anim_t *a)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_anim_t*
 * int32_t lv_anim_path_ease_in_out(const lv_anim_t *a)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_anim_t*
 * int32_t lv_anim_path_step(const lv_anim_t *a)
 */
    

/*
 * lvgl extension definition for:
 * void lv_style_init(void)
 */
 
STATIC mp_obj_t mp_lv_style_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_style_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_style_init_obj, 0, 0, mp_lv_style_init);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_style_t*
 * void lv_style_copy(lv_style_t *dest, const lv_style_t *src)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_style_t*
 * void lv_style_mix(const lv_style_t *start, const lv_style_t *end, lv_style_t *res, uint16_t ratio)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_style_anim_create(lv_style_anim_t *anim)
 */
    

/*
 * lvgl extension definition for:
 * void lv_mem_init(void)
 */
 
STATIC mp_obj_t mp_lv_mem_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_mem_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mem_init_obj, 0, 0, mp_lv_mem_init);

 

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_mem_alloc(uint32_t size)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const void*
 * void lv_mem_free(const void *data)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_mem_realloc(void *data_p, uint32_t new_size)
 */
    

/*
 * lvgl extension definition for:
 * void lv_mem_defrag(void)
 */
 
STATIC mp_obj_t mp_lv_mem_defrag(size_t n_args, const mp_obj_t *args)
{
    
    lv_mem_defrag();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_mem_defrag_obj, 0, 0, mp_lv_mem_defrag);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_mem_monitor_t*
 * void lv_mem_monitor(lv_mem_monitor_t *mon_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const void*
 * uint32_t lv_mem_get_size(const void *data)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_ll_t*
 * void lv_ll_init(lv_ll_t *ll_p, uint32_t node_size)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_ll_ins_head(lv_ll_t *ll_p)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_ll_ins_prev(lv_ll_t *ll_p, void *n_act)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_ll_ins_tail(lv_ll_t *ll_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_ll_t*
 * void lv_ll_rem(lv_ll_t *ll_p, void *node_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_ll_t*
 * void lv_ll_clear(lv_ll_t *ll_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_ll_t*
 * void lv_ll_chg_list(lv_ll_t *ll_ori_p, lv_ll_t *ll_new_p, void *node)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_ll_get_head(const lv_ll_t *ll_p)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_ll_get_tail(const lv_ll_t *ll_p)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_ll_get_next(const lv_ll_t *ll_p, const void *n_act)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from void*
 * void *lv_ll_get_prev(const lv_ll_t *ll_p, const void *n_act)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_ll_t*
 * void lv_ll_move_before(lv_ll_t *ll_p, void *n_act, void *n_after)
 */
    

/*
 * lvgl extension definition for:
 * void lv_init(void)
 */
 
STATIC mp_obj_t mp_lv_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_init_obj, 0, 0, mp_lv_init);

 

/*
 * lvgl extension definition for:
 * void lv_scr_load(lv_obj_t *scr)
 */
 
STATIC mp_obj_t mp_lv_scr_load(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *scr = mp_to_lv(args[0]);
    lv_scr_load(scr);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_scr_load_obj, 1, 1, mp_lv_scr_load);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_scr_act(void)
 */
 
STATIC mp_obj_t mp_lv_scr_act(size_t n_args, const mp_obj_t *args)
{
    
    lv_obj_t* res = lv_scr_act();
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_scr_act_obj, 0, 0, mp_lv_scr_act);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_layer_top(void)
 */
 
STATIC mp_obj_t mp_lv_layer_top(size_t n_args, const mp_obj_t *args)
{
    
    lv_obj_t* res = lv_layer_top();
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_layer_top_obj, 0, 0, mp_lv_layer_top);

 

/*
 * lvgl extension definition for:
 * lv_obj_t *lv_layer_sys(void)
 */
 
STATIC mp_obj_t mp_lv_layer_sys(size_t n_args, const mp_obj_t *args)
{
    
    lv_obj_t* res = lv_layer_sys();
    return lv_to_mp(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_layer_sys_obj, 0, 0, mp_lv_layer_sys);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_disp_drv_t*
 * void lv_disp_drv_init(lv_disp_drv_t *driver)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_disp_t*
 * lv_disp_t *lv_disp_drv_register(lv_disp_drv_t *driver)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_disp_t*
 * void lv_disp_set_active(lv_disp_t *disp)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_disp_t*
 * lv_disp_t *lv_disp_get_active(void)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_disp_t*
 * lv_disp_t *lv_disp_next(lv_disp_t *disp)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t*
 * void lv_disp_flush(int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t *color_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t
 * void lv_disp_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t color)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_color_t*
 * void lv_disp_map(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t *color_map)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t*
 * void lv_disp_mem_blend(lv_color_t *dest, const lv_color_t *src, uint32_t length, lv_opa_t opa)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_color_t*
 * void lv_disp_mem_fill(lv_color_t *dest, uint32_t length, lv_color_t color)
 */
    

/*
 * lvgl extension definition for:
 * bool lv_disp_is_mem_blend_supported(void)
 */
 
STATIC mp_obj_t mp_lv_disp_is_mem_blend_supported(size_t n_args, const mp_obj_t *args)
{
    
    bool res = lv_disp_is_mem_blend_supported();
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_disp_is_mem_blend_supported_obj, 0, 0, mp_lv_disp_is_mem_blend_supported);

 

/*
 * lvgl extension definition for:
 * bool lv_disp_is_mem_fill_supported(void)
 */
 
STATIC mp_obj_t mp_lv_disp_is_mem_fill_supported(size_t n_args, const mp_obj_t *args)
{
    
    bool res = lv_disp_is_mem_fill_supported();
    return convert_to_bool(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_disp_is_mem_fill_supported_obj, 0, 0, mp_lv_disp_is_mem_fill_supported);

 

/*
 * lvgl extension definition for:
 * void lv_tick_inc(uint32_t tick_period)
 */
 
STATIC mp_obj_t mp_lv_tick_inc(size_t n_args, const mp_obj_t *args)
{
    uint32_t tick_period = (uint32_t)mp_obj_int_get_checked(args[0]);
    lv_tick_inc(tick_period);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tick_inc_obj, 1, 1, mp_lv_tick_inc);

 

/*
 * lvgl extension definition for:
 * uint32_t lv_tick_get(void)
 */
 
STATIC mp_obj_t mp_lv_tick_get(size_t n_args, const mp_obj_t *args)
{
    
    uint32_t res = lv_tick_get();
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tick_get_obj, 0, 0, mp_lv_tick_get);

 

/*
 * lvgl extension definition for:
 * uint32_t lv_tick_elaps(uint32_t prev_tick)
 */
 
STATIC mp_obj_t mp_lv_tick_elaps(size_t n_args, const mp_obj_t *args)
{
    uint32_t prev_tick = (uint32_t)mp_obj_int_get_checked(args[0]);
    uint32_t res = lv_tick_elaps(prev_tick);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_tick_elaps_obj, 1, 1, mp_lv_tick_elaps);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_drv_t*
 * void lv_indev_drv_init(lv_indev_drv_t *driver)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_indev_t*
 * lv_indev_t *lv_indev_drv_register(lv_indev_drv_t *driver)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_indev_t*
 * lv_indev_t *lv_indev_next(lv_indev_t *indev)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_t*
 * bool lv_indev_read(lv_indev_t *indev, lv_indev_data_t *data)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_group_t*
 * lv_group_t *lv_group_create(void)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_del(lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_add_obj(lv_group_t *group, lv_obj_t *obj)
 */
    

/*
 * lvgl extension definition for:
 * void lv_group_remove_obj(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_group_remove_obj(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_group_remove_obj(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_group_remove_obj_obj, 1, 1, mp_lv_group_remove_obj);

 

/*
 * lvgl extension definition for:
 * void lv_group_focus_obj(lv_obj_t *obj)
 */
 
STATIC mp_obj_t mp_lv_group_focus_obj(size_t n_args, const mp_obj_t *args)
{
    lv_obj_t *obj = mp_to_lv(args[0]);
    lv_group_focus_obj(obj);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_group_focus_obj_obj, 1, 1, mp_lv_group_focus_obj);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_focus_next(lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_focus_prev(lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_focus_freeze(lv_group_t *group, bool en)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_send_data(lv_group_t *group, uint32_t c)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_set_style_mod_cb(lv_group_t *group, lv_group_style_mod_func_t style_mod_func)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_set_style_mod_edit_cb(lv_group_t *group, lv_group_style_mod_func_t style_mod_func)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_set_focus_cb(lv_group_t *group, lv_group_focus_cb_t focus_cb)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_set_editing(lv_group_t *group, bool edit)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_group_t*
 * void lv_group_set_click_focus(lv_group_t *group, bool en)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_style_t*
 * lv_style_t *lv_group_mod_style(lv_group_t *group, const lv_style_t *style)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_group_t*
 * lv_obj_t *lv_group_get_focused(const lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_group_style_mod_func_t
 * lv_group_style_mod_func_t lv_group_get_style_mod_cb(const lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_group_style_mod_func_t
 * lv_group_style_mod_func_t lv_group_get_style_mod_edit_cb(const lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing convertion from lv_group_focus_cb_t
 * lv_group_focus_cb_t lv_group_get_focus_cb(const lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_group_t*
 * bool lv_group_get_editing(const lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_group_t*
 * bool lv_group_get_click_focus(const lv_group_t *group)
 */
    

/*
 * lvgl extension definition for:
 * void lv_indev_init(void)
 */
 
STATIC mp_obj_t mp_lv_indev_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_indev_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_indev_init_obj, 0, 0, mp_lv_indev_init);

 

/*
 * Function NOT generated:
 * Missing convertion from lv_indev_t*
 * lv_indev_t *lv_indev_get_act(void)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_indev_t*
 * lv_hal_indev_type_t lv_indev_get_type(const lv_indev_t *indev)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_t*
 * void lv_indev_reset(lv_indev_t *indev)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_t*
 * void lv_indev_reset_lpr(lv_indev_t *indev)
 */
    

/*
 * lvgl extension definition for:
 * void lv_indev_enable(lv_hal_indev_type_t type, bool enable)
 */
 
STATIC mp_obj_t mp_lv_indev_enable(size_t n_args, const mp_obj_t *args)
{
    lv_hal_indev_type_t type = (uint8_t)mp_obj_int_get_checked(args[0]);
    bool enable = mp_obj_is_true(args[1]);
    lv_indev_enable(type, enable);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_indev_enable_obj, 2, 2, mp_lv_indev_enable);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_t*
 * void lv_indev_set_cursor(lv_indev_t *indev, lv_obj_t *cur_obj)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_t*
 * void lv_indev_set_group(lv_indev_t *indev, lv_group_t *group)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_t*
 * void lv_indev_set_button_points(lv_indev_t *indev, lv_point_t *points)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_indev_t*
 * void lv_indev_get_point(const lv_indev_t *indev, lv_point_t *point)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_indev_t*
 * uint32_t lv_indev_get_key(const lv_indev_t *indev)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_indev_t*
 * bool lv_indev_is_dragging(const lv_indev_t *indev)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_indev_t*
 * void lv_indev_get_vect(const lv_indev_t *indev, lv_point_t *point)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_indev_t*
 * uint32_t lv_indev_get_inactive_time(const lv_indev_t *indev)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_indev_t*
 * void lv_indev_wait_release(lv_indev_t *indev)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_point_t*
 * void lv_txt_get_size(lv_point_t *size_res, const char *text, const lv_font_t *font, lv_coord_t letter_space, lv_coord_t line_space, lv_coord_t max_width, lv_txt_flag_t flag)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * uint16_t lv_txt_get_next_line(const char *txt, const lv_font_t *font_p, lv_coord_t letter_space, lv_coord_t max_l, lv_txt_flag_t flag)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_font_t*
 * lv_coord_t lv_txt_get_width(const char *txt, uint16_t length, const lv_font_t *font, lv_coord_t letter_space, lv_txt_flag_t flag)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_txt_cmd_state_t*
 * bool lv_txt_is_cmd(lv_txt_cmd_state_t *state, uint32_t c)
 */
    

/*
 * lvgl extension definition for:
 * void lv_txt_ins(char *txt_buf, uint32_t pos, const char *ins_txt)
 */
 
STATIC mp_obj_t mp_lv_txt_ins(size_t n_args, const mp_obj_t *args)
{
    char *txt_buf = (char*)mp_obj_str_get_str(args[0]);
    uint32_t pos = (uint32_t)mp_obj_int_get_checked(args[1]);
    const char *ins_txt = mp_obj_str_get_str(args[2]);
    lv_txt_ins(txt_buf, pos, ins_txt);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_txt_ins_obj, 3, 3, mp_lv_txt_ins);

 

/*
 * lvgl extension definition for:
 * void lv_txt_cut(char *txt, uint32_t pos, uint32_t len)
 */
 
STATIC mp_obj_t mp_lv_txt_cut(size_t n_args, const mp_obj_t *args)
{
    char *txt = (char*)mp_obj_str_get_str(args[0]);
    uint32_t pos = (uint32_t)mp_obj_int_get_checked(args[1]);
    uint32_t len = (uint32_t)mp_obj_int_get_checked(args[2]);
    lv_txt_cut(txt, pos, len);
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_txt_cut_obj, 3, 3, mp_lv_txt_cut);

 

/*
 * lvgl extension definition for:
 * void lv_fs_init(void)
 */
 
STATIC mp_obj_t mp_lv_fs_init(size_t n_args, const mp_obj_t *args)
{
    
    lv_fs_init();
    return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_fs_init_obj, 0, 0, mp_lv_fs_init);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_drv_t*
 * void lv_fs_add_drv(lv_fs_drv_t *drv_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_open(lv_fs_file_t *file_p, const char *path, lv_fs_mode_t mode)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_close(lv_fs_file_t *file_p)
 */
    

/*
 * lvgl extension definition for:
 * lv_fs_res_t lv_fs_remove(const char *path)
 */
 
STATIC mp_obj_t mp_lv_fs_remove(size_t n_args, const mp_obj_t *args)
{
    const char *path = mp_obj_str_get_str(args[0]);
    lv_fs_res_t res = lv_fs_remove(path);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_fs_remove_obj, 1, 1, mp_lv_fs_remove);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_read(lv_fs_file_t *file_p, void *buf, uint32_t btr, uint32_t *br)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_write(lv_fs_file_t *file_p, const void *buf, uint32_t btw, uint32_t *bw)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_seek(lv_fs_file_t *file_p, uint32_t pos)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_tell(lv_fs_file_t *file_p, uint32_t *pos)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_trunc(lv_fs_file_t *file_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_file_t*
 * lv_fs_res_t lv_fs_size(lv_fs_file_t *file_p, uint32_t *size)
 */
    

/*
 * lvgl extension definition for:
 * lv_fs_res_t lv_fs_rename(const char *oldname, const char *newname)
 */
 
STATIC mp_obj_t mp_lv_fs_rename(size_t n_args, const mp_obj_t *args)
{
    const char *oldname = mp_obj_str_get_str(args[0]);
    const char *newname = mp_obj_str_get_str(args[1]);
    lv_fs_res_t res = lv_fs_rename(oldname, newname);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_fs_rename_obj, 2, 2, mp_lv_fs_rename);

 

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_dir_t*
 * lv_fs_res_t lv_fs_dir_open(lv_fs_dir_t *rddir_p, const char *path)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_dir_t*
 * lv_fs_res_t lv_fs_dir_read(lv_fs_dir_t *rddir_p, char *fn)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to lv_fs_dir_t*
 * lv_fs_res_t lv_fs_dir_close(lv_fs_dir_t *rddir_p)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to char
 * lv_fs_res_t lv_fs_free(char letter, uint32_t *total_p, uint32_t *free_p)
 */
    

/*
 * lvgl extension definition for:
 * char *lv_fs_get_letters(char *buf)
 */
 
STATIC mp_obj_t mp_lv_fs_get_letters(size_t n_args, const mp_obj_t *args)
{
    char *buf = (char*)mp_obj_str_get_str(args[0]);
    char* res = lv_fs_get_letters(buf);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_fs_get_letters_obj, 1, 1, mp_lv_fs_get_letters);

 

/*
 * lvgl extension definition for:
 * const char *lv_fs_get_ext(const char *fn)
 */
 
STATIC mp_obj_t mp_lv_fs_get_ext(size_t n_args, const mp_obj_t *args)
{
    const char *fn = mp_obj_str_get_str(args[0]);
    const char* res = lv_fs_get_ext(fn);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_fs_get_ext_obj, 1, 1, mp_lv_fs_get_ext);

 

/*
 * lvgl extension definition for:
 * char *lv_fs_up(char *path)
 */
 
STATIC mp_obj_t mp_lv_fs_up(size_t n_args, const mp_obj_t *args)
{
    char *path = (char*)mp_obj_str_get_str(args[0]);
    char* res = lv_fs_up(path);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_fs_up_obj, 1, 1, mp_lv_fs_up);

 

/*
 * lvgl extension definition for:
 * const char *lv_fs_get_last(const char *path)
 */
 
STATIC mp_obj_t mp_lv_fs_get_last(size_t n_args, const mp_obj_t *args)
{
    const char *path = mp_obj_str_get_str(args[0]);
    const char* res = lv_fs_get_last(path);
    return convert_to_str(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_fs_get_last_obj, 1, 1, mp_lv_fs_get_last);

 

/*
 * lvgl extension definition for:
 * lv_opa_t lv_draw_aa_get_opa(lv_coord_t seg, lv_coord_t px_id, lv_opa_t base_opa)
 */
 
STATIC mp_obj_t mp_lv_draw_aa_get_opa(size_t n_args, const mp_obj_t *args)
{
    lv_coord_t seg = (int16_t)mp_obj_int_get_checked(args[0]);
    lv_coord_t px_id = (int16_t)mp_obj_int_get_checked(args[1]);
    lv_opa_t base_opa = (uint8_t)mp_obj_int_get_checked(args[2]);
    lv_opa_t res = lv_draw_aa_get_opa(seg, px_id, base_opa);
    return mp_obj_new_int_from_uint(res);
}

MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_draw_aa_get_opa_obj, 3, 3, mp_lv_draw_aa_get_opa);

 

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * void lv_draw_aa_ver_seg(lv_coord_t x, lv_coord_t y, lv_coord_t length, const lv_area_t *mask, lv_color_t color, lv_opa_t opa)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * void lv_draw_aa_hor_seg(lv_coord_t x, lv_coord_t y, lv_coord_t length, const lv_area_t *mask, lv_color_t color, lv_opa_t opa)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * void lv_draw_rect(const lv_area_t *coords, const lv_area_t *mask, const lv_style_t *style, lv_opa_t opa_scale)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * void lv_draw_label(const lv_area_t *coords, const lv_area_t *mask, const lv_style_t *style, lv_opa_t opa_scale, const char *txt, lv_txt_flag_t flag, lv_point_t *offset)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_area_t*
 * void lv_draw_img(const lv_area_t *coords, const lv_area_t *mask, const void *src, const lv_style_t *style, lv_opa_t opa_scale)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_point_t*
 * void lv_draw_line(const lv_point_t *point1, const lv_point_t *point2, const lv_area_t *mask, const lv_style_t *style, lv_opa_t opa_scale)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to const lv_point_t*
 * void lv_draw_triangle(const lv_point_t *points, const lv_area_t *mask, lv_color_t color)
 */
    


/*
 * lvgl module definitions
 * User should implement lv_mp_init. Display can be initialized there, if needed.
 */

extern void lv_mp_init();

STATIC mp_obj_t _lv_mp_init()
{
    lv_mp_init();
    return mp_const_none;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_0(lv_mp_init_obj, _lv_mp_init);

STATIC const mp_rom_map_elem_t lvgl_globals_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR___name__), MP_OBJ_NEW_QSTR(MP_QSTR_lvgl) },
    { MP_OBJ_NEW_QSTR(MP_QSTR___init__), MP_ROM_PTR(&lv_mp_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_obj), MP_ROM_PTR(&mp_obj_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_arc), MP_ROM_PTR(&mp_arc_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_cont), MP_ROM_PTR(&mp_cont_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_btn), MP_ROM_PTR(&mp_btn_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_label), MP_ROM_PTR(&mp_label_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_bar), MP_ROM_PTR(&mp_bar_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_btnm), MP_ROM_PTR(&mp_btnm_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_cb), MP_ROM_PTR(&mp_cb_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_line), MP_ROM_PTR(&mp_line_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_chart), MP_ROM_PTR(&mp_chart_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_page), MP_ROM_PTR(&mp_page_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ddlist), MP_ROM_PTR(&mp_ddlist_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_lmeter), MP_ROM_PTR(&mp_lmeter_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_gauge), MP_ROM_PTR(&mp_gauge_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_img), MP_ROM_PTR(&mp_img_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_kb), MP_ROM_PTR(&mp_kb_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_led), MP_ROM_PTR(&mp_led_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_list), MP_ROM_PTR(&mp_list_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_mbox), MP_ROM_PTR(&mp_mbox_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_preload), MP_ROM_PTR(&mp_preload_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_roller), MP_ROM_PTR(&mp_roller_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_slider), MP_ROM_PTR(&mp_slider_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_sw), MP_ROM_PTR(&mp_sw_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_win), MP_ROM_PTR(&mp_win_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_tabview), MP_ROM_PTR(&mp_tabview_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ta), MP_ROM_PTR(&mp_ta_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_font_init), MP_ROM_PTR(&mp_lv_font_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_font_builtin_init), MP_ROM_PTR(&mp_lv_font_builtin_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_anim_init), MP_ROM_PTR(&mp_lv_anim_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_anim_speed_to_time), MP_ROM_PTR(&mp_lv_anim_speed_to_time_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_style_init), MP_ROM_PTR(&mp_lv_style_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_mem_init), MP_ROM_PTR(&mp_lv_mem_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_mem_defrag), MP_ROM_PTR(&mp_lv_mem_defrag_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_init), MP_ROM_PTR(&mp_lv_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scr_load), MP_ROM_PTR(&mp_lv_scr_load_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_scr_act), MP_ROM_PTR(&mp_lv_scr_act_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_layer_top), MP_ROM_PTR(&mp_lv_layer_top_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_layer_sys), MP_ROM_PTR(&mp_lv_layer_sys_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_disp_is_mem_blend_supported), MP_ROM_PTR(&mp_lv_disp_is_mem_blend_supported_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_disp_is_mem_fill_supported), MP_ROM_PTR(&mp_lv_disp_is_mem_fill_supported_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_tick_inc), MP_ROM_PTR(&mp_lv_tick_inc_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_tick_get), MP_ROM_PTR(&mp_lv_tick_get_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_tick_elaps), MP_ROM_PTR(&mp_lv_tick_elaps_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_group_remove_obj), MP_ROM_PTR(&mp_lv_group_remove_obj_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_group_focus_obj), MP_ROM_PTR(&mp_lv_group_focus_obj_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_indev_init), MP_ROM_PTR(&mp_lv_indev_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_indev_enable), MP_ROM_PTR(&mp_lv_indev_enable_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_txt_ins), MP_ROM_PTR(&mp_lv_txt_ins_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_txt_cut), MP_ROM_PTR(&mp_lv_txt_cut_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_fs_init), MP_ROM_PTR(&mp_lv_fs_init_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_fs_remove), MP_ROM_PTR(&mp_lv_fs_remove_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_fs_rename), MP_ROM_PTR(&mp_lv_fs_rename_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_fs_get_letters), MP_ROM_PTR(&mp_lv_fs_get_letters_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_fs_get_ext), MP_ROM_PTR(&mp_lv_fs_get_ext_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_fs_up), MP_ROM_PTR(&mp_lv_fs_up_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_fs_get_last), MP_ROM_PTR(&mp_lv_fs_get_last_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_draw_aa_get_opa), MP_ROM_PTR(&mp_lv_draw_aa_get_opa_obj) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BORDER), MP_ROM_PTR(&mp_LV_BORDER_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SHADOW), MP_ROM_PTR(&mp_LV_SHADOW_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DESIGN), MP_ROM_PTR(&mp_LV_DESIGN_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RES), MP_ROM_PTR(&mp_LV_RES_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SIGNAL), MP_ROM_PTR(&mp_LV_SIGNAL_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PROTECT), MP_ROM_PTR(&mp_LV_PROTECT_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ALIGN), MP_ROM_PTR(&mp_LV_ALIGN_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ANIM), MP_ROM_PTR(&mp_LV_ANIM_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LAYOUT), MP_ROM_PTR(&mp_LV_LAYOUT_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDEV_TYPE), MP_ROM_PTR(&mp_LV_INDEV_TYPE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_INDEV_STATE), MP_ROM_PTR(&mp_LV_INDEV_STATE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TXT_FLAG), MP_ROM_PTR(&mp_LV_TXT_FLAG_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TXT_CMD_STATE), MP_ROM_PTR(&mp_LV_TXT_CMD_STATE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SB_MODE), MP_ROM_PTR(&mp_LV_SB_MODE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FS_RES), MP_ROM_PTR(&mp_LV_FS_RES_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_FS_MODE), MP_ROM_PTR(&mp_LV_FS_MODE_type) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CURSOR), MP_ROM_PTR(&mp_LV_CURSOR_type) },
};


STATIC MP_DEFINE_CONST_DICT (
    mp_module_lvgl_globals,
    lvgl_globals_table
);

const mp_obj_module_t mp_module_lvgl = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&mp_module_lvgl_globals
};

