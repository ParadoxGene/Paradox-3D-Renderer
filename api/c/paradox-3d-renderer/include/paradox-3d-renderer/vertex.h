#ifndef PARADOX_SOFTWARE_C_HEADER_3D_VERTEX
#define PARADOX_SOFTWARE_C_HEADER_3D_VERTEX

#include <paradox-3d-renderer/defines.h>
typedef struct paradox_vertex {
    paradox_float32_t position[3];
    paradox_float32_t normal[3];
    paradox_float32_t tex_coords[2];
} paradox_vertex;

#endif