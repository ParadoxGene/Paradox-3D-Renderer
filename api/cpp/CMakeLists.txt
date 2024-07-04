cmake_minimum_required(VERSION 3.14)
project(paradox-3d-renderer-cpp-framework CXX)

# Use this variable to make the cmakefile once during the call.
set(PARADOX_3D_RENDERER_CPP_FRAMEWORK_BUILD CACHE INTERNAL ON PARENT_SCOPE)
set(PROJECT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../..")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(LINUX)
    set(CMAKE_CXX_EXTENSIONS ON)
endif()

file(GLOB_RECURSE CXX_SRC **.cpp)

add_library(paradox-3d-renderer-framework SHARED ${CXX_SRC})
set_target_properties(paradox-3d-renderer-framework PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../paradox-static/$<CONFIG>"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../paradox-static/$<CONFIG>"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../paradox-shared/$<CONFIG>")

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(paradox-3d-renderer-framework PRIVATE -Werror)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(paradox-3d-renderer-framework PRIVATE /WX)
endif()
target_compile_definitions(paradox-3d-renderer-framework PRIVATE PARADOX_3D_RENDERER_BUILD_DLL)
target_include_directories(paradox-3d-renderer-framework PUBLIC "./include" "${PROJECT_DIR}/modules/Paradox-Platform/api/cpp/include")
target_link_directories(paradox-3d-renderer-framework PUBLIC "${PROJECT_DIR}/build/paradox-platform/cpp_framework/$<CONFIG>")
target_link_libraries(paradox-3d-renderer-framework PUBLIC paradox-platform-framework)