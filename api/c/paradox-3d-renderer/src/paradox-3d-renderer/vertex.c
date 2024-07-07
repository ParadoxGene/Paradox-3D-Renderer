#include <paradox-3d-renderer/vertex.h>

PARADOX_3D_RENDERER_API void paradox_set_vertex_position(paradox_vertex* vertex, paradox_float32_t position[])
{
    vertex->position[0] = position[0];
    vertex->position[1] = position[1];
    vertex->position[2] = position[2];
}
PARADOX_3D_RENDERER_API void paradox_set_vertex_normal(paradox_vertex* vertex, paradox_float32_t normal[])
{
    vertex->normal[0] = normal[0];
    vertex->normal[1] = normal[1];
    vertex->normal[2] = normal[2];
}
PARADOX_3D_RENDERER_API void paradox_set_vertex_tex_coords(paradox_vertex* vertex, paradox_float32_t tex_coords[])
{
    vertex->tex_coords[0] = tex_coords[0];
    vertex->tex_coords[1] = tex_coords[1];
}