paradox_add_git_library(PARADOX_PLATFORM paradox-platform "main")

paradox_append_git_include(PARADOX_3D_RENDERER "paradox-platform")
paradox_append_src_include(PARADOX_3D_RENDERER "paradox-3d-renderer")
paradox_append_link_lib(PARADOX_3D_RENDERER "paradox-platform")
paradox_add_library(PARADOX_3D_RENDERER paradox-3d-renderer ${PARADOX_3D_RENDERER_DIR})