cmake_minimum_required(VERSION 3.14)
project(paradox-3d-renderer-c-framework C)

# Use this variable to make the cmakefile once during the call.
set(PARADOX_3D_RENDERER_C_FRAMEWORK_BUILD CACHE INTERNAL ON PARENT_SCOPE)
set(PROJECT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../..")

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

if(LINUX)
    set(CMAKE_C_EXTENSIONS ON)
endif()

file(GLOB_RECURSE C_SRC **.c)

add_library(paradox-3d-renderer SHARED ${C_SRC})
set_target_properties(paradox-3d-renderer PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../paradox-static/$<CONFIG>"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../paradox-static/$<CONFIG>"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../paradox-shared/$<CONFIG>")

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(paradox-3d-renderer PRIVATE -Werror)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(paradox-3d-renderer PRIVATE /WX /wd4996)
endif()

target_compile_definitions(paradox-3d-renderer PRIVATE PARADOX_3D_RENDERER_BUILD_DLL)
target_include_directories(paradox-3d-renderer PUBLIC "./include" "${PROJECT_DIR}/modules/Paradox-Platform/api/c/include")
target_link_directories(paradox-3d-renderer PUBLIC "${PROJECT_DIR}/build/paradox-platform/c_framework/$<CONFIG>")
target_link_libraries(paradox-3d-renderer PUBLIC paradox-platform)