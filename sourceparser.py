#from pycparser import c_parser, c_ast, parse_file, CParser


#import pycparser.ply.lex as lex
#import pycparser.ply.cpp

import sys
sys.path.insert(0, '/Users/rob/Projecten/python/pycparser/')

import pycparser
import pycparser.ply.cpp
from pycparser import c_ast, c_generator

import copy
import os
import re
import glob
import collections

class CPP(pycparser.ply.cpp.Preprocessor):
    '''
    This extends the pycparser PLY-based included c preprocessor with 
    these modifications:
      - fix #if evaluation of != 
      - open included source files with utf-8 decoding
      - defined(x) returns "0" or "1" as opposed to "0L" or "1L" which are no
        valid Python 3 expressions
      - define endianness macros
      - skip inclusion of files in CPP.SKIPINCLUDES
    '''
    
    SKIPINCLUDES = ['stdbool.h', 'stdint.h', 'stddef.h', 'string.h', 'stdio.h']
    
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        self.define('__ORDER_LITTLE_ENDIAN__ 0')
        self.define('__ORDER_BIT_ENDIAN__ 1')
        self.define('__BYTE_ORDER__ 1')
    
    def read_include_file(self, filepath):
        if filepath in self.SKIPINCLUDES:
            return ''
        return super().read_include_file(filepath)

ParseResult = collections.namedtuple('ParseResult', 'enums functions declarations typedefs structs objects global_functions defines')

LvglObject = collections.namedtuple('LvglObject', 'name methods ancestor')

def flatten_ast(node):
    yield node
    for name, child in node.children():
        yield from flatten_ast(child)

class LvglSourceParser:
    TYPEDEFS = {
        'uint8_t' : 'unsigned int',
        'int8_t' : 'int',
        'uint16_t' : 'unsigned int',
        'int16_t' :'int',
        'uint32_t' : 'unsigned int',
        'int32_t':  'int',
        'bool': '_Bool'
    }

    def __init__(self):
        self.lexer = pycparser.ply.lex.lex(module = pycparser.ply.cpp)

    def parse_file(self, filename):
        
        # Parse with Python C-preprocessor
        with open(filename, 'r', encoding='utf-8') as file:
            input = file.read()
    
        cpp = CPP(self.lexer)
                
        cpp.add_path(os.path.dirname(filename))
        
        typedefs = ''.join(f'typedef {type} {name};\n' for name, type in self.TYPEDEFS.items())
        
        cpp.parse(typedefs + input,filename)
        
        preprocessed = ''
        
        while True:
            tok = cpp.token()
            if not tok: break
            #print(tok.value, end='')
            preprocessed += tok.value
    
        # All macros which are used in the C-source will have been expanded,
        # unused macros are not. Expand them all for consistency
        for macro in cpp.macros.values():
            cpp.expand_macros(macro.value)
        
        # Convert the macro tokens to a string
        defines = {
            name: ''.join(tok.value for tok in macro.value)
            for name, macro in cpp.macros.items()
        
            }
    
        return pycparser.CParser().parse(preprocessed, filename), defines
    
    @staticmethod
    def enum_to_dict(enum_node):
        value = 0
        enum = collections.OrderedDict()
        for enumitem in enum_node.values.enumerators:
            if enumitem.value is not None:
                v = enumitem.value.value
                if v.lower().startswith('0x'):
                    value = int(v[2:], 16)
                else:
                    value = int(v)
            enum[enumitem.name] = value
            value += 1
        return enum
        
    def parse_sources(self, path, extended_files = False):
        '''
        Parse all lvgl sources which are required for generating the bindings
        
        returns: ParseResult (collections.namedtuple) with the following fields:
            enums: dict of enum name -> pycparser.c_ast.FuncDef object
            functions: dict of enum name -> value
            objects: dict of object name -> LvglObject object
            defines: dict of name -> string representation of evaluated #define
        
        '''
        enums = collections.OrderedDict()
        functions = collections.OrderedDict()
        defines = collections.OrderedDict()
        declarations = collections.OrderedDict()
        structs = collections.OrderedDict()
        typedefs = collections.OrderedDict()
        
        filenames = [f for f in glob.glob(os.path.join(path, 'lv_objx/*.c')) if not f.endswith('lv_objx_templ.c')]
        
        filenames.insert(0, os.path.join(path, 'lv_core/lv_obj.c'))
        
        if extended_files:
            # TODO: remove these, are here for lv_mpy equivalence:
            filenames.append(os.path.join(path, 'lv_draw/lv_draw.c')) 
            filenames.append(os.path.join(path, 'lv_draw/lv_draw_img.c'))
            filenames.append(os.path.join(path, 'lv_draw/lv_draw_rect.c'))
            filenames.append(os.path.join(path, 'lv_draw/lv_draw_label.c'))
            filenames.append(os.path.join(path, 'lv_draw/lv_draw_triangle.c'))
            filenames.append(os.path.join(path, 'lv_draw/lv_draw_line.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_color.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_area.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_anim.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_font.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_txt.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_fs.c'))
            filenames.append(os.path.join(path, 'lv_core/lv_style.c'))
            filenames.append(os.path.join(path, 'lv_core/lv_group.c'))
            filenames.append(os.path.join(path, 'lv_core/lv_indev.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_mem.c'))
            filenames.append(os.path.join(path, 'lv_misc/lv_ll.c'))
            filenames.append(os.path.join(path, 'lv_fonts/lv_font_builtin.c'))
            filenames.append(os.path.join(path, 'lv_hal/lv_hal_disp.c'))        
            filenames.append(os.path.join(path, 'lv_hal/lv_hal_tick.c'))        
            filenames.append(os.path.join(path, 'lv_hal/lv_hal_indev.c'))

        for filename in filenames:
            print('Parsing', filename)
            ast, filedefines = self.parse_file(filename)
            
            defines.update(filedefines)
            
            previous_item = None
            # TODO: this whole filtering of items could be done in the bindings generator to allow for extending bindings generator without changing the sourceparser
            for item in ast.ext:
                if isinstance(item, c_ast.FuncDef):
                    # C function
                    
                    # Skip static functions, but not static inline functions
                    if (not 'static' in item.decl.storage) or ('inline' in item.decl.funcspec):
                        functions[item.decl.name] = item

                        
                elif isinstance(item, c_ast.Typedef) and not item.name in self.TYPEDEFS:
                    # Do not register typedefs which are defined in self.TYPEDEFS, these are
                    # to be treated as basic types by the bindings generators
                    typedefs[item.name] = item
                    
                    if isinstance(item.type.type, c_ast.Enum):
                        # Earlier versions of lvgl use typedef enum { ... } lv_enum_name_t
                        
                        
                        enums[item.name] = self.enum_to_dict(item.type.type)
                        
                    elif isinstance(item.type, c_ast.TypeDecl) and isinstance(item.type.type, c_ast.Struct):
                        # typedef struct { ... } lv_struct_name_t;
                        structs[item.type.declname] = item.type.type
                        
                    elif (isinstance(item.type, c_ast.TypeDecl) and isinstance(item.type.type, c_ast.IdentifierType) and 
                            isinstance(previous_item, c_ast.Decl) and isinstance(previous_item.type, c_ast.Enum)):
                        
                        # typedef lv_enum_t ...; directly after an enum definition
                        # newer lvgl uses this to define enum variables as uint8_t

                        enums[item.name] = self.enum_to_dict(previous_item.type)
                                               
                        
                elif isinstance(item, c_ast.Decl) and isinstance(item.type, c_ast.TypeDecl):
                    declarations[item.type.declname] = item.type

                previous_item = item
        
        
        objects, global_functions = self.determine_objects(functions)
        
        
        return ParseResult(enums, functions, declarations, typedefs, structs, objects, global_functions, defines)

    @staticmethod
    def determine_ancestor(create_function):
        
        # Get the name of the first argument to the create function
        firstargument = create_function.decl.type.args.params[0].name
        
        results = []
        
        for node in flatten_ast(create_function):
            if isinstance(node, c_ast.FuncCall) and isinstance(node.name, c_ast.ID):
                name = node.name.name
                match = re.match('lv_([A-Za-z0-9]+)_create$', name)
                
                # A _create function is called, with the same first argument as our _create
                if match and node.args:
                    arg = node.args.exprs[0]
                    if isinstance(arg, c_ast.ID) and arg.name == firstargument:
                        results.append(match.group(1))
            
        # assert at most 1 match; return None in case of no match
        assert len(results) <= 1
        
        return results[0] if results else None
    
    @classmethod
    def determine_objects(cls, functions):
        # Stage 1: find all objects and the name of their ancestor
        objects = {}
        for function_name, function in functions.items():
            match =  re.match(r'lv_([a-zA-Z0-9]+)_create$', function_name)
            # TODO: the 'not in' condition may be removed if we do not use lv_anim.c / lv_group.c
            if match and function_name not in ['lv_anim_create', 'lv_group_create']: # lv_anim and lv_group are not objects
                name = match.group(1)
                objects[name] = cls.determine_ancestor(function)
    
        # Stage 2: sort objects, such that each object comes after its ancestors
        sortedobjects = collections.OrderedDict(obj = None)
        objects.pop('obj')
        while objects:
            remaining = list(objects.items())
            reordered = False
            for obj, anch in remaining:
                if anch in sortedobjects:
                    sortedobjects[obj] = anch
                    objects.pop(obj)
                    reordered = True
            
            if not reordered:
                raise RuntimeError('No ancestor defined for:', remaining)
        
        # Stage 3: Create LvglObject items
        objects = collections.OrderedDict()
        for name, ancestorname in sortedobjects.items():
            ancestor = None if ancestorname is None else objects[ancestorname]
            objects[name] = LvglObject(name, collections.OrderedDict(), ancestor)
    
        # Stage 4: Assign methods to objects; those who do not belong to an
        #    object go into global_functions
        global_functions = collections.OrderedDict()
        for function_name, function in functions.items():
            match =  re.match(r'lv_([a-zA-Z0-9]+)_([a-zA-Z0-9_]+)$', function_name)
            
            name, method = match.groups() if match else (None, None)
            
            if name in objects:
                if method != 'create':
                    objects[name].methods[method] = function
            else:
                global_functions[function_name] = function
                
        return objects, global_functions

if __name__ == 'x__main__':
    result = LvglSourceParser().parse_sources('lvgl')

    def type_repr(x):
        ptrs = ''
        while isinstance(x, c_ast.PtrDecl):
            x = x.type
            ptrs += '*'
        if isinstance(x, c_ast.FuncDecl):
            return f'<function{ptrs}>'
        assert isinstance(x, c_ast.TypeDecl)
        return ' '.join(x.type.names) + ptrs 

    print ('##################################')
    print ('#            OBJECTS             #')
    print ('##################################')
    for object in result.objects.values():
        print (f'{object.name}({object.ancestor.name if object.ancestor else ""})')
        for methodname, method in object.methods.items():
            args = ','.join(
                type_repr(param.type)+ ' ' + param.name 
                for param in method.decl.type.args.params)
            
            print(f'  {methodname}({args})')

    print ('##################################')
    print ('#             ENUMS              #')
    print ('##################################')

    for name, value in result.enums.items():
        print (name, '=', value)

    print ('##################################')
    print ('#            DEFINES             #')
    print ('##################################')

    for name, value in result.defines.items():
        print (name, '=', value)
