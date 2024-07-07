#ifndef PARADOX_SOFTWARE_C_HEADER_3D_VERTEX
#define PARADOX_SOFTWARE_C_HEADER_3D_VERTEX

#include <paradox-3d-renderer/defines.h>
typedef struct paradox_vertex {
    paradox_float32_t position[3];
    paradox_float32_t normal[3];
    paradox_float32_t tex_coords[2];
} paradox_vertex;

PARADOX_3D_RENDERER_API void paradox_set_vertex_position(paradox_vertex* vertex, paradox_float32_t position[]);
PARADOX_3D_RENDERER_API void paradox_set_vertex_normal(paradox_vertex* vertex, paradox_float32_t normal[]);
PARADOX_3D_RENDERER_API void paradox_set_vertex_tex_coords(paradox_vertex* vertex, paradox_float32_t tex_coords[]);

#endif