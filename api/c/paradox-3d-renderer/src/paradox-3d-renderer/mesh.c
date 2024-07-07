#include <paradox-3d-renderer/mesh.h>
#include <paradox-3d-renderer/opengl.h>
#include <paradox-application/gl_config.h>
#include <stddef.h>
#include <stdlib.h>

PARADOX_3D_RENDERER_API paradox_mesh* paradox_create_mesh(
    paradox_vertex* vertices, paradox_uint32_t vertices_count,
    paradox_uint32_t* indices, paradox_uint32_t indices_count,
    paradox_texture* textures, paradox_uint32_t textures_count)
{
    paradox_mesh* mesh = malloc(sizeof(paradox_mesh));
    paradox_init_mesh(mesh, vertices, vertices_count, indices, indices_count, textures, textures_count);
    return mesh;
}

PARADOX_3D_RENDERER_API void paradox_init_mesh(
    paradox_mesh* mesh,
    paradox_vertex* vertices, paradox_uint32_t vertices_count,
    paradox_uint32_t* indices, paradox_uint32_t indices_count,
    paradox_texture* textures, paradox_uint32_t textures_count)
{
    mesh->vertices = vertices;
    mesh->indices = indices;
    mesh->textures = textures;
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        mesh->api.opengl = malloc(sizeof(paradox_mesh_opengl_data));

        glGenVertexArrays(1, &mesh->api.opengl->vao);
        glGenBuffers(1, &mesh->api.opengl->vbo);
        glGenBuffers(1, &mesh->api.opengl->ebo);
    
        glBindVertexArray(mesh->api.opengl->vao);
        glBindBuffer(GL_ARRAY_BUFFER, mesh->api.opengl->vbo);

        glBufferData(GL_ARRAY_BUFFER, vertices_count * sizeof(paradox_vertex), vertices, GL_STATIC_DRAW);  

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mesh->api.opengl->ebo);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices_count * sizeof(paradox_uint32_t), indices, GL_STATIC_DRAW);

        // vertex positions
        glEnableVertexAttribArray(0);	
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(paradox_vertex), (void*)0);
        // vertex normals
        glEnableVertexAttribArray(1);	
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(paradox_vertex), (void*)offsetof(paradox_vertex, normal));
        // vertex texture coords
        glEnableVertexAttribArray(2);	
        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(paradox_vertex), (void*)offsetof(paradox_vertex, tex_coords));

        glBindVertexArray(0);
        break; }
    default: break;
    }
}

PARADOX_3D_RENDERER_API void paradox_clear_mesh(paradox_mesh* mesh)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        free(mesh->api.opengl);
        mesh->api.opengl = NULL;
        break; }
    default: break;
    }

    free(mesh->vertices);
    free(mesh->indices);
    for(paradox_uint32_t i = 0; i < mesh->textures_count; ++i) paradox_clear_texture(&mesh->textures[i]);
    free(mesh->textures);
}

PARADOX_3D_RENDERER_API void paradox_draw_mesh(paradox_mesh* mesh, paradox_shader_program* program)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        // draw mesh
        glBindVertexArray(mesh->api.opengl->vao);
        glDrawElements(GL_TRIANGLES, mesh->indices_count, GL_UNSIGNED_INT, 0);
        glBindVertexArray(0);
        break; }
    default: break;
    }
    
}