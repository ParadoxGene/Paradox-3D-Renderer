#include <paradox-3d-renderer/renderer.h>
#include <paradox-3d-renderer/opengl.h>
#include <paradox-application/gl_config.h>

PARADOX_3D_RENDERER_API paradox_float32_t paradox_3d_renderer_clear_color[4];

PARADOX_3D_RENDERER_API void paradox_3d_renderer_init()
{
    for(int i = 0; i < 4; i++) paradox_3d_renderer_clear_color[i] = 0;
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API:
        paradox_opengl_load_functions();
        break;
    default: break;
    }
}
PARADOX_3D_RENDERER_API void paradox_3d_renderer_clear_screen()
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API:
        glClearColor(paradox_3d_renderer_clear_color[0], paradox_3d_renderer_clear_color[1], paradox_3d_renderer_clear_color[2], paradox_3d_renderer_clear_color[3]);
        glClear(GL_COLOR_BUFFER_BIT);
        break;
    }
}
PARADOX_3D_RENDERER_API void paradox_set_3d_renderer_clear_color(paradox_float32_t color[])
{
    for(int i = 0; i < 4; i++) paradox_3d_renderer_clear_color[i] = color[i];
}
