#ifndef PARADOX_SOFTWARE_C_HEADER_3D_RENDERER
#define PARADOX_SOFTWARE_C_HEADER_3D_RENDERER

#include <paradox-3d-renderer/defines.h>
#if defined(PARADOX_DESKTOP_BUILD)
    #include <paradox-desktop/defines.h>
#endif

PARADOX_3D_RENDERER_API void paradox_3d_renderer_init();
PARADOX_3D_RENDERER_API void paradox_3d_renderer_clear_screen();
PARADOX_3D_RENDERER_API void paradox_set_3d_renderer_clear_color(paradox_float32_t color[]);

#endif