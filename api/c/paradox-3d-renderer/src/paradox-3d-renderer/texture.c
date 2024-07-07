#include <paradox-3d-renderer/texture.h>
#include <paradox-3d-renderer/opengl.h>
#include <paradox-application/gl_config.h>
#include <stdlib.h>

PARADOX_3D_RENDERER_API paradox_texture* paradox_create_texture()
{
    paradox_texture* texture = malloc(sizeof(paradox_texture));
    paradox_init_texture(texture);
    return texture;
}
PARADOX_3D_RENDERER_API void paradox_init_texture(paradox_texture* texture)
{
    texture->id = 0;
    texture->type = "";
}
PARADOX_3D_RENDERER_API void paradox_clear_texture(paradox_texture* texture)
{
    texture->id = 0;
    texture->type = "";
}