#ifndef PARADOX_SOFTWARE_C_HEADER_3D_MESH
#define PARADOX_SOFTWARE_C_HEADER_3D_MESH

#include <paradox-3d-renderer/vertex.h>
#include <paradox-3d-renderer/texture.h>
#include <paradox-3d-renderer/shader.h>

typedef struct paradox_mesh_opengl_data
{
    paradox_uint32_t vao;
    paradox_uint32_t vbo;
    paradox_uint32_t ebo;
} paradox_mesh_opengl_data;

typedef union paradox_mesh_api_data
{
    paradox_mesh_opengl_data* opengl;
} paradox_mesh_api_data;

typedef struct paradox_mesh
{
    paradox_vertex* vertices;
    paradox_uint32_t vertices_count;

    paradox_uint32_t* indices;
    paradox_uint32_t indices_count;

    paradox_texture* textures;
    paradox_uint32_t textures_count;

    paradox_mesh_api_data api;
} paradox_mesh;

PARADOX_3D_RENDERER_API paradox_mesh* paradox_create_mesh(
    paradox_vertex* vertices, paradox_uint32_t vertices_count,
    paradox_uint32_t* indices, paradox_uint32_t indices_count,
    paradox_texture* textures, paradox_uint32_t textures_count);
PARADOX_3D_RENDERER_API void paradox_init_mesh(
    paradox_mesh* mesh,
    paradox_vertex* vertices, paradox_uint32_t vertices_count,
    paradox_uint32_t* indices, paradox_uint32_t indices_count,
    paradox_texture* textures, paradox_uint32_t textures_count);
PARADOX_3D_RENDERER_API void paradox_clear_mesh(paradox_mesh* mesh);

PARADOX_3D_RENDERER_API void paradox_draw_mesh(paradox_mesh* mesh, paradox_shader_program* program);

#endif