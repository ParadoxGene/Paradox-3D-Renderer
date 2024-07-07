#include <paradox-3d-renderer/shader.h>
#include <paradox-3d-renderer/opengl.h>
#include <paradox-application/gl_config.h>
#include <stdlib.h>

PARADOX_3D_RENDERER_API paradox_shader* paradox_create_shader(paradox_shader_type_t type, paradox_str_t source)
{
    paradox_shader* shader = malloc(sizeof(paradox_shader));
    shader->type = type;
    shader->source = source;
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        switch(type)
        {
        case PARADOX_VERT_SHADER: {
            shader->id = glCreateShader(GL_VERTEX_SHADER);
            break; }
        case PARADOX_FRAG_SHADER: {
            shader->id = glCreateShader(GL_FRAGMENT_SHADER);
            break; }
        case PARADOX_GEOM_SHADER: {
            shader->id = glCreateShader(GL_GEOMETRY_SHADER);
            break; }
        case PARADOX_TESC_SHADER: {
            shader->id = glCreateShader(GL_TESS_CONTROL_SHADER);
            break; }
        case PARADOX_TESE_SHADER: {
            shader->id = glCreateShader(GL_TESS_EVALUATION_SHADER);
            break; }
        case PARADOX_COMP_SHADER: {
            shader->id = glCreateShader(GL_COMPUTE_SHADER);
            break; }
        }
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_destroy_shader(paradox_shader* shader)
{
    if(shader) switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glDeleteShader(shader->id);
        break; }
    }
    free(shader);
}

PARADOX_3D_RENDERER_API paradox_shader_program* paradox_create_shader_program()
{
    paradox_shader_program* program = malloc(sizeof(paradox_shader_program));
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        program->id = glCreateProgram();
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_destroy_shader_program(paradox_shader_program* program)
{
    if(program) switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glDeleteProgram(program->id);
        break; }
    }
    free(program);
}

PARADOX_3D_RENDERER_API paradox_uint32_t paradox_link_shader_program(paradox_shader_program* program, paradox_shader* shaders, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        GLint success;
        GLchar info_log[512];
        
        for(paradox_uint32_t i = 0; i < count; ++i)
        {
            paradox_shader shader = shaders[i];
            glShaderSource(shader.id, 1, &shader.source, NULL);
            glCompileShader(shader.id);

            glGetShaderiv(shader.id, GL_COMPILE_STATUS, &success);
            if(success == GL_FALSE)
            {
                glGetShaderInfoLog(shader.id, 512, NULL, info_log);
                fprintf(stderr, "ERROR::SHADER::COMPILATION_FAILED\n%s\n", info_log);
            }

            glAttachShader(program->id, shader.id);
        }

        glLinkProgram(program->id);

        for(paradox_uint32_t i = 0; i < count; ++i)
        {
            paradox_shader shader = shaders[i];
            glDetachShader(program->id, shader.id);
        }
  
        glGetProgramiv(program->id, GL_LINK_STATUS, &success);
        if(success == GL_FALSE)
        {
            glGetProgramInfoLog(program->id, 512, NULL, info_log);
            fprintf(stderr, "ERROR::SHADER::PROGRAM::LINKING_FAILED\n%s\n", info_log);
        }
        break; }
    }
}

PARADOX_3D_RENDERER_API void paradox_use_shader_program(paradox_shader_program* program)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUseProgram(program->id);
        break; }
    }
}

PARADOX_3D_RENDERER_API void paradox_set_shader_program_int(paradox_shader_program* program, paradox_str_t location, paradox_int32_t value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniform1iv(glGetUniformLocation(program->id, location), count, &value);
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_set_shader_program_uint(paradox_shader_program* program, paradox_str_t location, paradox_uint32_t value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniform1uiv(glGetUniformLocation(program->id, location), count, &value);
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_set_shader_program_float(paradox_shader_program* program, paradox_str_t location, paradox_float32_t value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniform1fv(glGetUniformLocation(program->id, location), count, &value);
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_set_shader_program_double(paradox_shader_program* program, paradox_str_t location, paradox_float64_t value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniform1dv(glGetUniformLocation(program->id, location), count, &value);
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_set_shader_program_vec2(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniform2fv(glGetUniformLocation(program->id, location), count, value);
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_set_shader_program_vec3(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniform3fv(glGetUniformLocation(program->id, location), count, value);
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_set_shader_program_vec4(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniform4fv(glGetUniformLocation(program->id, location), count, value);
        break; }
    }
}
PARADOX_3D_RENDERER_API void paradox_set_shader_program_mat4(paradox_shader_program* program, paradox_str_t location, paradox_float32_t* value, paradox_uint32_t count)
{
    switch(paradox_gl_api_mode())
    {
    case PARADOX_OPENGL_API: {
        glUniformMatrix4fv(glGetUniformLocation(program->id, location), count, GL_TRUE, value);
        break; }
    }
}
