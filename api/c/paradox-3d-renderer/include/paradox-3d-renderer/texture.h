#ifndef PARADOX_SOFTWARE_C_HEADER_3D_TEXTURE
#define PARADOX_SOFTWARE_C_HEADER_3D_TEXTURE

#include <paradox-3d-renderer/defines.h>

typedef struct paradox_texture {
    paradox_str_t type;
    paradox_uint32_t id;
} paradox_texture;

PARADOX_3D_RENDERER_API paradox_texture* paradox_create_texture();
PARADOX_3D_RENDERER_API void paradox_init_texture(paradox_texture* texture);
PARADOX_3D_RENDERER_API void paradox_clear_texture(paradox_texture* texture);

#endif