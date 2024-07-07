#ifndef PARADOX_SOFTWARE_C_HEADER_3D_RENDERER_SHADER
#define PARADOX_SOFTWARE_C_HEADER_3D_RENDERER_SHADER

#include <paradox-3d-renderer/defines.h>

typedef enum paradox_shader_type_t
{
    PARADOX_VERT_SHADER,
    PARADOX_GEOM_SHADER,
    PARADOX_TESC_SHADER,
    PARADOX_TESE_SHADER,
    PARADOX_FRAG_SHADER,
    PARADOX_COMP_SHADER
} paradox_shader_type_t;

typedef struct paradox_shader
{
    paradox_shader_type_t type;
    paradox_str_t source;
    paradox_uint32_t id;
} paradox_shader;

typedef struct paradox_shader_program
{
    paradox_uint32_t id;
} paradox_shader_program;

PARADOX_3D_RENDERER_API paradox_shader* paradox_create_shader(paradox_shader_type_t type, paradox_str_t source);
PARADOX_3D_RENDERER_API void paradox_init_shader(paradox_shader* shader, paradox_shader_type_t type, paradox_str_t source);
PARADOX_3D_RENDERER_API void paradox_clear_shader(paradox_shader* shader);


PARADOX_3D_RENDERER_API paradox_shader_program* paradox_create_shader_program();
PARADOX_3D_RENDERER_API void paradox_init_shader_program(paradox_shader_program* program);
PARADOX_3D_RENDERER_API void paradox_clear_shader_program(paradox_shader_program* program);

PARADOX_3D_RENDERER_API paradox_uint32_t paradox_link_shader_program(paradox_shader_program* program, paradox_shader* shaders, paradox_uint32_t count);

PARADOX_3D_RENDERER_API void paradox_use_shader_program(paradox_shader_program* program);

PARADOX_3D_RENDERER_API void paradox_set_shader_program_int(paradox_shader_program* program, paradox_str_t location, paradox_int32_t value, paradox_uint32_t count);
PARADOX_3D_RENDERER_API void paradox_set_shader_program_uint(paradox_shader_program* program, paradox_str_t location, paradox_uint32_t value, paradox_uint32_t count);
PARADOX_3D_RENDERER_API void paradox_set_shader_program_float(paradox_shader_program* program, paradox_str_t location, paradox_float32_t value, paradox_uint32_t count);
PARADOX_3D_RENDERER_API void paradox_set_shader_program_double(paradox_shader_program* program, paradox_str_t location, paradox_float64_t value, paradox_uint32_t count);
PARADOX_3D_RENDERER_API void paradox_set_shader_program_vec2(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count);
PARADOX_3D_RENDERER_API void paradox_set_shader_program_vec3(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count);
PARADOX_3D_RENDERER_API void paradox_set_shader_program_vec4(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count);
PARADOX_3D_RENDERER_API void paradox_set_shader_program_mat4(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count);

#endif