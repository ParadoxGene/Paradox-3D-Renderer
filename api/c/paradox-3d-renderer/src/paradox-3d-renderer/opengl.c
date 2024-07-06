#include <paradox-3d-renderer/opengl.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

GLAPI void APIENTRY paradox_opengl_load_function(paradox_str_t name, void** function_ptr)
{
    *function_ptr = (void*)glfwGetProcAddress(name);
    if(*function_ptr == NULL)
    {
        printf("Failed to load the OpenGL function: %s\n", name);
    }
}

GLAPI void (*glCullFace_ptr)(GLenum) = NULL;
GLAPI void (*glFrontFace_ptr)(GLenum) = NULL;
GLAPI void (*glHint_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glLineWidth_ptr)(GLfloat) = NULL;
GLAPI void (*glPointSize_ptr)(GLfloat) = NULL;
GLAPI void (*glPolygonMode_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glScissor_ptr)(GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glTexParameterf_ptr)(GLenum, GLenum, GLfloat) = NULL;
GLAPI void (*glTexParameterfv_ptr)(GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glTexParameteri_ptr)(GLenum, GLenum, GLint) = NULL;
GLAPI void (*glTexParameteriv_ptr)(GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glTexImage1D_ptr)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTexImage2D_ptr)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glDrawBuffer_ptr)(GLenum) = NULL;
GLAPI void (*glClear_ptr)(GLbitfield) = NULL;
GLAPI void (*glClearColor_ptr)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glClearStencil_ptr)(GLint) = NULL;
GLAPI void (*glClearDepth_ptr)(GLdouble) = NULL;
GLAPI void (*glStencilMask_ptr)(GLuint) = NULL;
GLAPI void (*glColorMask_ptr)(GLboolean, GLboolean, GLboolean, GLboolean) = NULL;
GLAPI void (*glDepthMask_ptr)(GLboolean) = NULL;
GLAPI void (*glDisable_ptr)(GLenum) = NULL;
GLAPI void (*glEnable_ptr)(GLenum) = NULL;
GLAPI void (*glFinish_ptr)() = NULL;
GLAPI void (*glFlush_ptr)() = NULL;
GLAPI void (*glBlendFunc_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glLogicOp_ptr)(GLenum) = NULL;
GLAPI void (*glStencilFunc_ptr)(GLenum, GLint, GLuint) = NULL;
GLAPI void (*glStencilOp_ptr)(GLenum, GLenum, GLenum) = NULL;
GLAPI void (*glDepthFunc_ptr)(GLenum) = NULL;
GLAPI void (*glPixelStoref_ptr)(GLenum, GLfloat) = NULL;
GLAPI void (*glPixelStorei_ptr)(GLenum, GLint) = NULL;
GLAPI void (*glReadBuffer_ptr)(GLenum) = NULL;
GLAPI void (*glReadPixels_ptr)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *) = NULL;
GLAPI void (*glGetBooleanv_ptr)(GLenum, GLboolean *) = NULL;
GLAPI void (*glGetDoublev_ptr)(GLenum, GLdouble *) = NULL;
GLAPI GLenum (*glGetError_ptr)() = NULL;
GLAPI void (*glGetFloatv_ptr)(GLenum, GLfloat *) = NULL;
GLAPI void (*glGetIntegerv_ptr)(GLenum, GLint *) = NULL;
GLAPI const GLubyte * (*glGetString_ptr)(GLenum) = NULL;
GLAPI void (*glGetTexImage_ptr)(GLenum, GLint, GLenum, GLenum, void *) = NULL;
GLAPI void (*glGetTexParameterfv_ptr)(GLenum, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetTexParameteriv_ptr)(GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetTexLevelParameterfv_ptr)(GLenum, GLint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetTexLevelParameteriv_ptr)(GLenum, GLint, GLenum, GLint *) = NULL;
GLAPI GLboolean (*glIsEnabled_ptr)(GLenum) = NULL;
GLAPI void (*glDepthRange_ptr)(GLdouble, GLdouble) = NULL;
GLAPI void (*glViewport_ptr)(GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glDrawArrays_ptr)(GLenum, GLint, GLsizei) = NULL;
GLAPI void (*glDrawElements_ptr)(GLenum, GLsizei, GLenum, const void *) = NULL;
GLAPI void (*glGetPointerv_ptr)(GLenum, void **) = NULL;
GLAPI void (*glPolygonOffset_ptr)(GLfloat, GLfloat) = NULL;
GLAPI void (*glCopyTexImage1D_ptr)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = NULL;
GLAPI void (*glCopyTexImage2D_ptr)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = NULL;
GLAPI void (*glCopyTexSubImage1D_ptr)(GLenum, GLint, GLint, GLint, GLint, GLsizei) = NULL;
GLAPI void (*glCopyTexSubImage2D_ptr)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glTexSubImage1D_ptr)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTexSubImage2D_ptr)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glBindTexture_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDeleteTextures_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI void (*glGenTextures_ptr)(GLsizei, GLuint *) = NULL;
GLAPI GLboolean (*glIsTexture_ptr)(GLuint) = NULL;
GLAPI void (*glDrawRangeElements_ptr)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *) = NULL;
GLAPI void (*glTexImage3D_ptr)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTexSubImage3D_ptr)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glCopyTexSubImage3D_ptr)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glActiveTexture_ptr)(GLenum) = NULL;
GLAPI void (*glSampleCoverage_ptr)(GLfloat, GLboolean) = NULL;
GLAPI void (*glCompressedTexImage3D_ptr)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTexImage2D_ptr)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTexImage1D_ptr)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTexSubImage3D_ptr)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTexSubImage2D_ptr)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTexSubImage1D_ptr)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glGetCompressedTexImage_ptr)(GLenum, GLint, void *) = NULL;
GLAPI void (*glBlendFuncSeparate_ptr)(GLenum, GLenum, GLenum, GLenum) = NULL;
GLAPI void (*glMultiDrawArrays_ptr)(GLenum, const GLint *, const GLsizei *, GLsizei) = NULL;
GLAPI void (*glMultiDrawElements_ptr)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei) = NULL;
GLAPI void (*glPointParameterf_ptr)(GLenum, GLfloat) = NULL;
GLAPI void (*glPointParameterfv_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glPointParameteri_ptr)(GLenum, GLint) = NULL;
GLAPI void (*glPointParameteriv_ptr)(GLenum, const GLint *) = NULL;
GLAPI void (*glBlendColor_ptr)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glBlendEquation_ptr)(GLenum) = NULL;
GLAPI void (*glGenQueries_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glDeleteQueries_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI GLboolean (*glIsQuery_ptr)(GLuint) = NULL;
GLAPI void (*glBeginQuery_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glEndQuery_ptr)(GLenum) = NULL;
GLAPI void (*glGetQueryiv_ptr)(GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetQueryObjectiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetQueryObjectuiv_ptr)(GLuint, GLenum, GLuint *) = NULL;
GLAPI void (*glBindBuffer_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDeleteBuffers_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI void (*glGenBuffers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI GLboolean (*glIsBuffer_ptr)(GLuint) = NULL;
GLAPI void (*glBufferData_ptr)(GLenum, GLsizeiptr, const void *, GLenum) = NULL;
GLAPI void (*glBufferSubData_ptr)(GLenum, GLintptr, GLsizeiptr, const void *) = NULL;
GLAPI void (*glGetBufferSubData_ptr)(GLenum, GLintptr, GLsizeiptr, void *) = NULL;
GLAPI void * (*glMapBuffer_ptr)(GLenum, GLenum) = NULL;
GLAPI GLboolean (*glUnmapBuffer_ptr)(GLenum) = NULL;
GLAPI void (*glGetBufferParameteriv_ptr)(GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetBufferPointerv_ptr)(GLenum, GLenum, void **) = NULL;
GLAPI void (*glBlendEquationSeparate_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glDrawBuffers_ptr)(GLsizei, const GLenum *) = NULL;
GLAPI void (*glStencilOpSeparate_ptr)(GLenum, GLenum, GLenum, GLenum) = NULL;
GLAPI void (*glStencilFuncSeparate_ptr)(GLenum, GLenum, GLint, GLuint) = NULL;
GLAPI void (*glStencilMaskSeparate_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glAttachShader_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glBindAttribLocation_ptr)(GLuint, GLuint, const GLchar *) = NULL;
GLAPI void (*glCompileShader_ptr)(GLuint) = NULL;
GLAPI GLuint (*glCreateProgram_ptr)() = NULL;
GLAPI GLuint (*glCreateShader_ptr)(GLenum) = NULL;
GLAPI void (*glDeleteProgram_ptr)(GLuint) = NULL;
GLAPI void (*glDeleteShader_ptr)(GLuint) = NULL;
GLAPI void (*glDetachShader_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glDisableVertexAttribArray_ptr)(GLuint) = NULL;
GLAPI void (*glEnableVertexAttribArray_ptr)(GLuint) = NULL;
GLAPI void (*glGetActiveAttrib_ptr)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *) = NULL;
GLAPI void (*glGetActiveUniform_ptr)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *) = NULL;
GLAPI void (*glGetAttachedShaders_ptr)(GLuint, GLsizei, GLsizei *, GLuint *) = NULL;
GLAPI GLint (*glGetAttribLocation_ptr)(GLuint, const GLchar *) = NULL;
GLAPI void (*glGetProgramiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetProgramInfoLog_ptr)(GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glGetShaderiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetShaderInfoLog_ptr)(GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glGetShaderSource_ptr)(GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI GLint (*glGetUniformLocation_ptr)(GLuint, const GLchar *) = NULL;
GLAPI void (*glGetUniformfv_ptr)(GLuint, GLint, GLfloat *) = NULL;
GLAPI void (*glGetUniformiv_ptr)(GLuint, GLint, GLint *) = NULL;
GLAPI void (*glGetVertexAttribdv_ptr)(GLuint, GLenum, GLdouble *) = NULL;
GLAPI void (*glGetVertexAttribfv_ptr)(GLuint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetVertexAttribiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetVertexAttribPointerv_ptr)(GLuint, GLenum, void **) = NULL;
GLAPI GLboolean (*glIsProgram_ptr)(GLuint) = NULL;
GLAPI GLboolean (*glIsShader_ptr)(GLuint) = NULL;
GLAPI void (*glLinkProgram_ptr)(GLuint) = NULL;
GLAPI void (*glShaderSource_ptr)(GLuint, GLsizei, const GLchar *const*, const GLint *) = NULL;
GLAPI void (*glUseProgram_ptr)(GLuint) = NULL;
GLAPI void (*glUniform1f_ptr)(GLint, GLfloat) = NULL;
GLAPI void (*glUniform2f_ptr)(GLint, GLfloat, GLfloat) = NULL;
GLAPI void (*glUniform3f_ptr)(GLint, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glUniform4f_ptr)(GLint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glUniform1i_ptr)(GLint, GLint) = NULL;
GLAPI void (*glUniform2i_ptr)(GLint, GLint, GLint) = NULL;
GLAPI void (*glUniform3i_ptr)(GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glUniform4i_ptr)(GLint, GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glUniform1fv_ptr)(GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glUniform2fv_ptr)(GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glUniform3fv_ptr)(GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glUniform4fv_ptr)(GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glUniform1iv_ptr)(GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glUniform2iv_ptr)(GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glUniform3iv_ptr)(GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glUniform4iv_ptr)(GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glUniformMatrix2fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glUniformMatrix3fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glUniformMatrix4fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glValidateProgram_ptr)(GLuint) = NULL;
GLAPI void (*glVertexAttrib1d_ptr)(GLuint, GLdouble) = NULL;
GLAPI void (*glVertexAttrib1dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttrib1f_ptr)(GLuint, GLfloat) = NULL;
GLAPI void (*glVertexAttrib1fv_ptr)(GLuint, const GLfloat *) = NULL;
GLAPI void (*glVertexAttrib1s_ptr)(GLuint, GLshort) = NULL;
GLAPI void (*glVertexAttrib1sv_ptr)(GLuint, const GLshort *) = NULL;
GLAPI void (*glVertexAttrib2d_ptr)(GLuint, GLdouble, GLdouble) = NULL;
GLAPI void (*glVertexAttrib2dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttrib2f_ptr)(GLuint, GLfloat, GLfloat) = NULL;
GLAPI void (*glVertexAttrib2fv_ptr)(GLuint, const GLfloat *) = NULL;
GLAPI void (*glVertexAttrib2s_ptr)(GLuint, GLshort, GLshort) = NULL;
GLAPI void (*glVertexAttrib2sv_ptr)(GLuint, const GLshort *) = NULL;
GLAPI void (*glVertexAttrib3d_ptr)(GLuint, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glVertexAttrib3dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttrib3f_ptr)(GLuint, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glVertexAttrib3fv_ptr)(GLuint, const GLfloat *) = NULL;
GLAPI void (*glVertexAttrib3s_ptr)(GLuint, GLshort, GLshort, GLshort) = NULL;
GLAPI void (*glVertexAttrib3sv_ptr)(GLuint, const GLshort *) = NULL;
GLAPI void (*glVertexAttrib4Nbv_ptr)(GLuint, const GLbyte *) = NULL;
GLAPI void (*glVertexAttrib4Niv_ptr)(GLuint, const GLint *) = NULL;
GLAPI void (*glVertexAttrib4Nsv_ptr)(GLuint, const GLshort *) = NULL;
GLAPI void (*glVertexAttrib4Nub_ptr)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte) = NULL;
GLAPI void (*glVertexAttrib4Nubv_ptr)(GLuint, const GLubyte *) = NULL;
GLAPI void (*glVertexAttrib4Nuiv_ptr)(GLuint, const GLuint *) = NULL;
GLAPI void (*glVertexAttrib4Nusv_ptr)(GLuint, const GLushort *) = NULL;
GLAPI void (*glVertexAttrib4bv_ptr)(GLuint, const GLbyte *) = NULL;
GLAPI void (*glVertexAttrib4d_ptr)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glVertexAttrib4dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttrib4f_ptr)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glVertexAttrib4fv_ptr)(GLuint, const GLfloat *) = NULL;
GLAPI void (*glVertexAttrib4iv_ptr)(GLuint, const GLint *) = NULL;
GLAPI void (*glVertexAttrib4s_ptr)(GLuint, GLshort, GLshort, GLshort, GLshort) = NULL;
GLAPI void (*glVertexAttrib4sv_ptr)(GLuint, const GLshort *) = NULL;
GLAPI void (*glVertexAttrib4ubv_ptr)(GLuint, const GLubyte *) = NULL;
GLAPI void (*glVertexAttrib4uiv_ptr)(GLuint, const GLuint *) = NULL;
GLAPI void (*glVertexAttrib4usv_ptr)(GLuint, const GLushort *) = NULL;
GLAPI void (*glVertexAttribPointer_ptr)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *) = NULL;
GLAPI void (*glUniformMatrix2x3fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glUniformMatrix3x2fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glUniformMatrix2x4fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glUniformMatrix4x2fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glUniformMatrix3x4fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glUniformMatrix4x3fv_ptr)(GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glColorMaski_ptr)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean) = NULL;
GLAPI void (*glGetBooleani_v_ptr)(GLenum, GLuint, GLboolean *) = NULL;
GLAPI void (*glGetIntegeri_v_ptr)(GLenum, GLuint, GLint *) = NULL;
GLAPI void (*glEnablei_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDisablei_ptr)(GLenum, GLuint) = NULL;
GLAPI GLboolean (*glIsEnabledi_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glBeginTransformFeedback_ptr)(GLenum) = NULL;
GLAPI void (*glEndTransformFeedback_ptr)() = NULL;
GLAPI void (*glBindBufferRange_ptr)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glBindBufferBase_ptr)(GLenum, GLuint, GLuint) = NULL;
GLAPI void (*glTransformFeedbackVaryings_ptr)(GLuint, GLsizei, const GLchar *const*, GLenum) = NULL;
GLAPI void (*glGetTransformFeedbackVarying_ptr)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *) = NULL;
GLAPI void (*glClampColor_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glBeginConditionalRender_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glEndConditionalRender_ptr)() = NULL;
GLAPI void (*glVertexAttribIPointer_ptr)(GLuint, GLint, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glGetVertexAttribIiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetVertexAttribIuiv_ptr)(GLuint, GLenum, GLuint *) = NULL;
GLAPI void (*glVertexAttribI1i_ptr)(GLuint, GLint) = NULL;
GLAPI void (*glVertexAttribI2i_ptr)(GLuint, GLint, GLint) = NULL;
GLAPI void (*glVertexAttribI3i_ptr)(GLuint, GLint, GLint, GLint) = NULL;
GLAPI void (*glVertexAttribI4i_ptr)(GLuint, GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glVertexAttribI1ui_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glVertexAttribI2ui_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glVertexAttribI3ui_ptr)(GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glVertexAttribI4ui_ptr)(GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glVertexAttribI1iv_ptr)(GLuint, const GLint *) = NULL;
GLAPI void (*glVertexAttribI2iv_ptr)(GLuint, const GLint *) = NULL;
GLAPI void (*glVertexAttribI3iv_ptr)(GLuint, const GLint *) = NULL;
GLAPI void (*glVertexAttribI4iv_ptr)(GLuint, const GLint *) = NULL;
GLAPI void (*glVertexAttribI1uiv_ptr)(GLuint, const GLuint *) = NULL;
GLAPI void (*glVertexAttribI2uiv_ptr)(GLuint, const GLuint *) = NULL;
GLAPI void (*glVertexAttribI3uiv_ptr)(GLuint, const GLuint *) = NULL;
GLAPI void (*glVertexAttribI4uiv_ptr)(GLuint, const GLuint *) = NULL;
GLAPI void (*glVertexAttribI4bv_ptr)(GLuint, const GLbyte *) = NULL;
GLAPI void (*glVertexAttribI4sv_ptr)(GLuint, const GLshort *) = NULL;
GLAPI void (*glVertexAttribI4ubv_ptr)(GLuint, const GLubyte *) = NULL;
GLAPI void (*glVertexAttribI4usv_ptr)(GLuint, const GLushort *) = NULL;
GLAPI void (*glGetUniformuiv_ptr)(GLuint, GLint, GLuint *) = NULL;
GLAPI void (*glBindFragDataLocation_ptr)(GLuint, GLuint, const GLchar *) = NULL;
GLAPI GLint (*glGetFragDataLocation_ptr)(GLuint, const GLchar *) = NULL;
GLAPI void (*glUniform1ui_ptr)(GLint, GLuint) = NULL;
GLAPI void (*glUniform2ui_ptr)(GLint, GLuint, GLuint) = NULL;
GLAPI void (*glUniform3ui_ptr)(GLint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glUniform4ui_ptr)(GLint, GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glUniform1uiv_ptr)(GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glUniform2uiv_ptr)(GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glUniform3uiv_ptr)(GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glUniform4uiv_ptr)(GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glTexParameterIiv_ptr)(GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glTexParameterIuiv_ptr)(GLenum, GLenum, const GLuint *) = NULL;
GLAPI void (*glGetTexParameterIiv_ptr)(GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetTexParameterIuiv_ptr)(GLenum, GLenum, GLuint *) = NULL;
GLAPI void (*glClearBufferiv_ptr)(GLenum, GLint, const GLint *) = NULL;
GLAPI void (*glClearBufferuiv_ptr)(GLenum, GLint, const GLuint *) = NULL;
GLAPI void (*glClearBufferfv_ptr)(GLenum, GLint, const GLfloat *) = NULL;
GLAPI void (*glClearBufferfi_ptr)(GLenum, GLint, GLfloat, GLint) = NULL;
GLAPI const GLubyte * (*glGetStringi_ptr)(GLenum, GLuint) = NULL;
GLAPI GLboolean (*glIsRenderbuffer_ptr)(GLuint) = NULL;
GLAPI void (*glBindRenderbuffer_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDeleteRenderbuffers_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI void (*glGenRenderbuffers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glRenderbufferStorage_ptr)(GLenum, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glGetRenderbufferParameteriv_ptr)(GLenum, GLenum, GLint *) = NULL;
GLAPI GLboolean (*glIsFramebuffer_ptr)(GLuint) = NULL;
GLAPI void (*glBindFramebuffer_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDeleteFramebuffers_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI void (*glGenFramebuffers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI GLenum (*glCheckFramebufferStatus_ptr)(GLenum) = NULL;
GLAPI void (*glFramebufferTexture1D_ptr)(GLenum, GLenum, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glFramebufferTexture2D_ptr)(GLenum, GLenum, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glFramebufferTexture3D_ptr)(GLenum, GLenum, GLenum, GLuint, GLint, GLint) = NULL;
GLAPI void (*glFramebufferRenderbuffer_ptr)(GLenum, GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glGetFramebufferAttachmentParameteriv_ptr)(GLenum, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGenerateMipmap_ptr)(GLenum) = NULL;
GLAPI void (*glBlitFramebuffer_ptr)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) = NULL;
GLAPI void (*glRenderbufferStorageMultisample_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glFramebufferTextureLayer_ptr)(GLenum, GLenum, GLuint, GLint, GLint) = NULL;
GLAPI void * (*glMapBufferRange_ptr)(GLenum, GLintptr, GLsizeiptr, GLbitfield) = NULL;
GLAPI void (*glFlushMappedBufferRange_ptr)(GLenum, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glBindVertexArray_ptr)(GLuint) = NULL;
GLAPI void (*glDeleteVertexArrays_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI void (*glGenVertexArrays_ptr)(GLsizei, GLuint *) = NULL;
GLAPI GLboolean (*glIsVertexArray_ptr)(GLuint) = NULL;
GLAPI void (*glDrawArraysInstanced_ptr)(GLenum, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glDrawElementsInstanced_ptr)(GLenum, GLsizei, GLenum, const void *, GLsizei) = NULL;
GLAPI void (*glTexBuffer_ptr)(GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glPrimitiveRestartIndex_ptr)(GLuint) = NULL;
GLAPI void (*glCopyBufferSubData_ptr)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glGetUniformIndices_ptr)(GLuint, GLsizei, const GLchar *const*, GLuint *) = NULL;
GLAPI void (*glGetActiveUniformsiv_ptr)(GLuint, GLsizei, const GLuint *, GLenum, GLint *) = NULL;
GLAPI void (*glGetActiveUniformName_ptr)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI GLuint (*glGetUniformBlockIndex_ptr)(GLuint, const GLchar *) = NULL;
GLAPI void (*glGetActiveUniformBlockiv_ptr)(GLuint, GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetActiveUniformBlockName_ptr)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glUniformBlockBinding_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glDrawElementsBaseVertex_ptr)(GLenum, GLsizei, GLenum, const void *, GLint) = NULL;
GLAPI void (*glDrawRangeElementsBaseVertex_ptr)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint) = NULL;
GLAPI void (*glDrawElementsInstancedBaseVertex_ptr)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint) = NULL;
GLAPI void (*glMultiDrawElementsBaseVertex_ptr)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *) = NULL;
GLAPI void (*glProvokingVertex_ptr)(GLenum) = NULL;
GLAPI GLsync (*glFenceSync_ptr)(GLenum, GLbitfield) = NULL;
GLAPI GLboolean (*glIsSync_ptr)(GLsync) = NULL;
GLAPI void (*glDeleteSync_ptr)(GLsync) = NULL;
GLAPI GLenum (*glClientWaitSync_ptr)(GLsync, GLbitfield, GLuint64) = NULL;
GLAPI void (*glWaitSync_ptr)(GLsync, GLbitfield, GLuint64) = NULL;
GLAPI void (*glGetInteger64v_ptr)(GLenum, GLint64 *) = NULL;
GLAPI void (*glGetSynciv_ptr)(GLsync, GLenum, GLsizei, GLsizei *, GLint *) = NULL;
GLAPI void (*glGetInteger64i_v_ptr)(GLenum, GLuint, GLint64 *) = NULL;
GLAPI void (*glGetBufferParameteri64v_ptr)(GLenum, GLenum, GLint64 *) = NULL;
GLAPI void (*glFramebufferTexture_ptr)(GLenum, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glTexImage2DMultisample_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glTexImage3DMultisample_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glGetMultisamplefv_ptr)(GLenum, GLuint, GLfloat *) = NULL;
GLAPI void (*glSampleMaski_ptr)(GLuint, GLbitfield) = NULL;
GLAPI void (*glBindFragDataLocationIndexed_ptr)(GLuint, GLuint, GLuint, const GLchar *) = NULL;
GLAPI GLint (*glGetFragDataIndex_ptr)(GLuint, const GLchar *) = NULL;
GLAPI void (*glGenSamplers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glDeleteSamplers_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI GLboolean (*glIsSampler_ptr)(GLuint) = NULL;
GLAPI void (*glBindSampler_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glSamplerParameteri_ptr)(GLuint, GLenum, GLint) = NULL;
GLAPI void (*glSamplerParameteriv_ptr)(GLuint, GLenum, const GLint *) = NULL;
GLAPI void (*glSamplerParameterf_ptr)(GLuint, GLenum, GLfloat) = NULL;
GLAPI void (*glSamplerParameterfv_ptr)(GLuint, GLenum, const GLfloat *) = NULL;
GLAPI void (*glSamplerParameterIiv_ptr)(GLuint, GLenum, const GLint *) = NULL;
GLAPI void (*glSamplerParameterIuiv_ptr)(GLuint, GLenum, const GLuint *) = NULL;
GLAPI void (*glGetSamplerParameteriv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetSamplerParameterIiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetSamplerParameterfv_ptr)(GLuint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetSamplerParameterIuiv_ptr)(GLuint, GLenum, GLuint *) = NULL;
GLAPI void (*glQueryCounter_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glGetQueryObjecti64v_ptr)(GLuint, GLenum, GLint64 *) = NULL;
GLAPI void (*glGetQueryObjectui64v_ptr)(GLuint, GLenum, GLuint64 *) = NULL;
GLAPI void (*glVertexAttribDivisor_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glVertexAttribP1ui_ptr)(GLuint, GLenum, GLboolean, GLuint) = NULL;
GLAPI void (*glVertexAttribP1uiv_ptr)(GLuint, GLenum, GLboolean, const GLuint *) = NULL;
GLAPI void (*glVertexAttribP2ui_ptr)(GLuint, GLenum, GLboolean, GLuint) = NULL;
GLAPI void (*glVertexAttribP2uiv_ptr)(GLuint, GLenum, GLboolean, const GLuint *) = NULL;
GLAPI void (*glVertexAttribP3ui_ptr)(GLuint, GLenum, GLboolean, GLuint) = NULL;
GLAPI void (*glVertexAttribP3uiv_ptr)(GLuint, GLenum, GLboolean, const GLuint *) = NULL;
GLAPI void (*glVertexAttribP4ui_ptr)(GLuint, GLenum, GLboolean, GLuint) = NULL;
GLAPI void (*glVertexAttribP4uiv_ptr)(GLuint, GLenum, GLboolean, const GLuint *) = NULL;
GLAPI void (*glMinSampleShading_ptr)(GLfloat) = NULL;
GLAPI void (*glBlendEquationi_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glBlendEquationSeparatei_ptr)(GLuint, GLenum, GLenum) = NULL;
GLAPI void (*glBlendFunci_ptr)(GLuint, GLenum, GLenum) = NULL;
GLAPI void (*glBlendFuncSeparatei_ptr)(GLuint, GLenum, GLenum, GLenum, GLenum) = NULL;
GLAPI void (*glDrawArraysIndirect_ptr)(GLenum, const void *) = NULL;
GLAPI void (*glDrawElementsIndirect_ptr)(GLenum, GLenum, const void *) = NULL;
GLAPI void (*glUniform1d_ptr)(GLint, GLdouble) = NULL;
GLAPI void (*glUniform2d_ptr)(GLint, GLdouble, GLdouble) = NULL;
GLAPI void (*glUniform3d_ptr)(GLint, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glUniform4d_ptr)(GLint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glUniform1dv_ptr)(GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glUniform2dv_ptr)(GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glUniform3dv_ptr)(GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glUniform4dv_ptr)(GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix2dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix3dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix4dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix2x3dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix2x4dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix3x2dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix3x4dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix4x2dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glUniformMatrix4x3dv_ptr)(GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glGetUniformdv_ptr)(GLuint, GLint, GLdouble *) = NULL;
GLAPI GLint (*glGetSubroutineUniformLocation_ptr)(GLuint, GLenum, const GLchar *) = NULL;
GLAPI GLuint (*glGetSubroutineIndex_ptr)(GLuint, GLenum, const GLchar *) = NULL;
GLAPI void (*glGetActiveSubroutineUniformiv_ptr)(GLuint, GLenum, GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetActiveSubroutineUniformName_ptr)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glGetActiveSubroutineName_ptr)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glUniformSubroutinesuiv_ptr)(GLenum, GLsizei, const GLuint *) = NULL;
GLAPI void (*glGetUniformSubroutineuiv_ptr)(GLenum, GLint, GLuint *) = NULL;
GLAPI void (*glGetProgramStageiv_ptr)(GLuint, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glPatchParameteri_ptr)(GLenum, GLint) = NULL;
GLAPI void (*glPatchParameterfv_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glBindTransformFeedback_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDeleteTransformFeedbacks_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI void (*glGenTransformFeedbacks_ptr)(GLsizei, GLuint *) = NULL;
GLAPI GLboolean (*glIsTransformFeedback_ptr)(GLuint) = NULL;
GLAPI void (*glPauseTransformFeedback_ptr)() = NULL;
GLAPI void (*glResumeTransformFeedback_ptr)() = NULL;
GLAPI void (*glDrawTransformFeedback_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDrawTransformFeedbackStream_ptr)(GLenum, GLuint, GLuint) = NULL;
GLAPI void (*glBeginQueryIndexed_ptr)(GLenum, GLuint, GLuint) = NULL;
GLAPI void (*glEndQueryIndexed_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glGetQueryIndexediv_ptr)(GLenum, GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glReleaseShaderCompiler_ptr)() = NULL;
GLAPI void (*glShaderBinary_ptr)(GLsizei, const GLuint *, GLenum, const void *, GLsizei) = NULL;
GLAPI void (*glGetShaderPrecisionFormat_ptr)(GLenum, GLenum, GLint *, GLint *) = NULL;
GLAPI void (*glDepthRangef_ptr)(GLfloat, GLfloat) = NULL;
GLAPI void (*glClearDepthf_ptr)(GLfloat) = NULL;
GLAPI void (*glGetProgramBinary_ptr)(GLuint, GLsizei, GLsizei *, GLenum *, void *) = NULL;
GLAPI void (*glProgramBinary_ptr)(GLuint, GLenum, const void *, GLsizei) = NULL;
GLAPI void (*glProgramParameteri_ptr)(GLuint, GLenum, GLint) = NULL;
GLAPI void (*glUseProgramStages_ptr)(GLuint, GLbitfield, GLuint) = NULL;
GLAPI void (*glActiveShaderProgram_ptr)(GLuint, GLuint) = NULL;
GLAPI GLuint (*glCreateShaderProgramv_ptr)(GLenum, GLsizei, const GLchar *const*) = NULL;
GLAPI void (*glBindProgramPipeline_ptr)(GLuint) = NULL;
GLAPI void (*glDeleteProgramPipelines_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI void (*glGenProgramPipelines_ptr)(GLsizei, GLuint *) = NULL;
GLAPI GLboolean (*glIsProgramPipeline_ptr)(GLuint) = NULL;
GLAPI void (*glGetProgramPipelineiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glProgramUniform1i_ptr)(GLuint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform1iv_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniform1f_ptr)(GLuint, GLint, GLfloat) = NULL;
GLAPI void (*glProgramUniform1fv_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform1d_ptr)(GLuint, GLint, GLdouble) = NULL;
GLAPI void (*glProgramUniform1dv_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniform1ui_ptr)(GLuint, GLint, GLuint) = NULL;
GLAPI void (*glProgramUniform1uiv_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glProgramUniform2i_ptr)(GLuint, GLint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform2iv_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniform2f_ptr)(GLuint, GLint, GLfloat, GLfloat) = NULL;
GLAPI void (*glProgramUniform2fv_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform2d_ptr)(GLuint, GLint, GLdouble, GLdouble) = NULL;
GLAPI void (*glProgramUniform2dv_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniform2ui_ptr)(GLuint, GLint, GLuint, GLuint) = NULL;
GLAPI void (*glProgramUniform2uiv_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glProgramUniform3i_ptr)(GLuint, GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform3iv_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniform3f_ptr)(GLuint, GLint, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glProgramUniform3fv_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform3d_ptr)(GLuint, GLint, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glProgramUniform3dv_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniform3ui_ptr)(GLuint, GLint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glProgramUniform3uiv_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glProgramUniform4i_ptr)(GLuint, GLint, GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform4iv_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniform4f_ptr)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glProgramUniform4fv_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform4d_ptr)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glProgramUniform4dv_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniform4ui_ptr)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glProgramUniform4uiv_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glProgramUniformMatrix2fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix3fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix4fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix2dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix3dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix4dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix2x3fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix3x2fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix2x4fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix4x2fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix3x4fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix4x3fv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix2x3dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix3x2dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix2x4dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix4x2dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix3x4dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix4x3dv_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glValidateProgramPipeline_ptr)(GLuint) = NULL;
GLAPI void (*glGetProgramPipelineInfoLog_ptr)(GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glVertexAttribL1d_ptr)(GLuint, GLdouble) = NULL;
GLAPI void (*glVertexAttribL2d_ptr)(GLuint, GLdouble, GLdouble) = NULL;
GLAPI void (*glVertexAttribL3d_ptr)(GLuint, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glVertexAttribL4d_ptr)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glVertexAttribL1dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttribL2dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttribL3dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttribL4dv_ptr)(GLuint, const GLdouble *) = NULL;
GLAPI void (*glVertexAttribLPointer_ptr)(GLuint, GLint, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glGetVertexAttribLdv_ptr)(GLuint, GLenum, GLdouble *) = NULL;
GLAPI void (*glViewportArrayv_ptr)(GLuint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glViewportIndexedf_ptr)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glViewportIndexedfv_ptr)(GLuint, const GLfloat *) = NULL;
GLAPI void (*glScissorArrayv_ptr)(GLuint, GLsizei, const GLint *) = NULL;
GLAPI void (*glScissorIndexed_ptr)(GLuint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glScissorIndexedv_ptr)(GLuint, const GLint *) = NULL;
GLAPI void (*glDepthRangeArrayv_ptr)(GLuint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glDepthRangeIndexed_ptr)(GLuint, GLdouble, GLdouble) = NULL;
GLAPI void (*glGetFloati_v_ptr)(GLenum, GLuint, GLfloat *) = NULL;
GLAPI void (*glGetDoublei_v_ptr)(GLenum, GLuint, GLdouble *) = NULL;
GLAPI void (*glDrawArraysInstancedBaseInstance_ptr)(GLenum, GLint, GLsizei, GLsizei, GLuint) = NULL;
GLAPI void (*glDrawElementsInstancedBaseInstance_ptr)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint) = NULL;
GLAPI void (*glDrawElementsInstancedBaseVertexBaseInstance_ptr)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint) = NULL;
GLAPI void (*glGetInternalformativ_ptr)(GLenum, GLenum, GLenum, GLsizei, GLint *) = NULL;
GLAPI void (*glGetActiveAtomicCounterBufferiv_ptr)(GLuint, GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glBindImageTexture_ptr)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum) = NULL;
GLAPI void (*glMemoryBarrier_ptr)(GLbitfield) = NULL;
GLAPI void (*glTexStorage1D_ptr)(GLenum, GLsizei, GLenum, GLsizei) = NULL;
GLAPI void (*glTexStorage2D_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glTexStorage3D_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = NULL;
GLAPI void (*glDrawTransformFeedbackInstanced_ptr)(GLenum, GLuint, GLsizei) = NULL;
GLAPI void (*glDrawTransformFeedbackStreamInstanced_ptr)(GLenum, GLuint, GLuint, GLsizei) = NULL;
GLAPI void (*glClearBufferData_ptr)(GLenum, GLenum, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glClearBufferSubData_ptr)(GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glDispatchCompute_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glDispatchComputeIndirect_ptr)(GLintptr) = NULL;
GLAPI void (*glCopyImageSubData_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) = NULL;
GLAPI void (*glFramebufferParameteri_ptr)(GLenum, GLenum, GLint) = NULL;
GLAPI void (*glGetFramebufferParameteriv_ptr)(GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetInternalformati64v_ptr)(GLenum, GLenum, GLenum, GLsizei, GLint64 *) = NULL;
GLAPI void (*glInvalidateTexSubImage_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) = NULL;
GLAPI void (*glInvalidateTexImage_ptr)(GLuint, GLint) = NULL;
GLAPI void (*glInvalidateBufferSubData_ptr)(GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glInvalidateBufferData_ptr)(GLuint) = NULL;
GLAPI void (*glInvalidateFramebuffer_ptr)(GLenum, GLsizei, const GLenum *) = NULL;
GLAPI void (*glInvalidateSubFramebuffer_ptr)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glMultiDrawArraysIndirect_ptr)(GLenum, const void *, GLsizei, GLsizei) = NULL;
GLAPI void (*glMultiDrawElementsIndirect_ptr)(GLenum, GLenum, const void *, GLsizei, GLsizei) = NULL;
GLAPI void (*glGetProgramInterfaceiv_ptr)(GLuint, GLenum, GLenum, GLint *) = NULL;
GLAPI GLuint (*glGetProgramResourceIndex_ptr)(GLuint, GLenum, const GLchar *) = NULL;
GLAPI void (*glGetProgramResourceName_ptr)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glGetProgramResourceiv_ptr)(GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *) = NULL;
GLAPI GLint (*glGetProgramResourceLocation_ptr)(GLuint, GLenum, const GLchar *) = NULL;
GLAPI GLint (*glGetProgramResourceLocationIndex_ptr)(GLuint, GLenum, const GLchar *) = NULL;
GLAPI void (*glShaderStorageBlockBinding_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glTexBufferRange_ptr)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glTexStorage2DMultisample_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glTexStorage3DMultisample_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glTextureView_ptr)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glBindVertexBuffer_ptr)(GLuint, GLuint, GLintptr, GLsizei) = NULL;
GLAPI void (*glVertexAttribFormat_ptr)(GLuint, GLint, GLenum, GLboolean, GLuint) = NULL;
GLAPI void (*glVertexAttribIFormat_ptr)(GLuint, GLint, GLenum, GLuint) = NULL;
GLAPI void (*glVertexAttribLFormat_ptr)(GLuint, GLint, GLenum, GLuint) = NULL;
GLAPI void (*glVertexAttribBinding_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glVertexBindingDivisor_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glDebugMessageControl_ptr)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean) = NULL;
GLAPI void (*glDebugMessageInsert_ptr)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *) = NULL;
GLAPI void (*glDebugMessageCallback_ptr)(GLDEBUGPROC, const void *) = NULL;
GLAPI GLuint (*glGetDebugMessageLog_ptr)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *) = NULL;
GLAPI void (*glPushDebugGroup_ptr)(GLenum, GLuint, GLsizei, const GLchar *) = NULL;
GLAPI void (*glPopDebugGroup_ptr)() = NULL;
GLAPI void (*glObjectLabel_ptr)(GLenum, GLuint, GLsizei, const GLchar *) = NULL;
GLAPI void (*glGetObjectLabel_ptr)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glObjectPtrLabel_ptr)(const void *, GLsizei, const GLchar *) = NULL;
GLAPI void (*glGetObjectPtrLabel_ptr)(const void *, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glBufferStorage_ptr)(GLenum, GLsizeiptr, const void *, GLbitfield) = NULL;
GLAPI void (*glClearTexImage_ptr)(GLuint, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glClearTexSubImage_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glBindBuffersBase_ptr)(GLenum, GLuint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glBindBuffersRange_ptr)(GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *) = NULL;
GLAPI void (*glBindTextures_ptr)(GLuint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glBindSamplers_ptr)(GLuint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glBindImageTextures_ptr)(GLuint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glBindVertexBuffers_ptr)(GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *) = NULL;
GLAPI void (*glClipControl_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glCreateTransformFeedbacks_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glTransformFeedbackBufferBase_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glTransformFeedbackBufferRange_ptr)(GLuint, GLuint, GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glGetTransformFeedbackiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetTransformFeedbacki_v_ptr)(GLuint, GLenum, GLuint, GLint *) = NULL;
GLAPI void (*glGetTransformFeedbacki64_v_ptr)(GLuint, GLenum, GLuint, GLint64 *) = NULL;
GLAPI void (*glCreateBuffers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glNamedBufferStorage_ptr)(GLuint, GLsizeiptr, const void *, GLbitfield) = NULL;
GLAPI void (*glNamedBufferData_ptr)(GLuint, GLsizeiptr, const void *, GLenum) = NULL;
GLAPI void (*glNamedBufferSubData_ptr)(GLuint, GLintptr, GLsizeiptr, const void *) = NULL;
GLAPI void (*glCopyNamedBufferSubData_ptr)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glClearNamedBufferData_ptr)(GLuint, GLenum, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glClearNamedBufferSubData_ptr)(GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *) = NULL;
GLAPI void * (*glMapNamedBuffer_ptr)(GLuint, GLenum) = NULL;
GLAPI void * (*glMapNamedBufferRange_ptr)(GLuint, GLintptr, GLsizeiptr, GLbitfield) = NULL;
GLAPI GLboolean (*glUnmapNamedBuffer_ptr)(GLuint) = NULL;
GLAPI void (*glFlushMappedNamedBufferRange_ptr)(GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glGetNamedBufferParameteriv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetNamedBufferParameteri64v_ptr)(GLuint, GLenum, GLint64 *) = NULL;
GLAPI void (*glGetNamedBufferPointerv_ptr)(GLuint, GLenum, void **) = NULL;
GLAPI void (*glGetNamedBufferSubData_ptr)(GLuint, GLintptr, GLsizeiptr, void *) = NULL;
GLAPI void (*glCreateFramebuffers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glNamedFramebufferRenderbuffer_ptr)(GLuint, GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glNamedFramebufferParameteri_ptr)(GLuint, GLenum, GLint) = NULL;
GLAPI void (*glNamedFramebufferTexture_ptr)(GLuint, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glNamedFramebufferTextureLayer_ptr)(GLuint, GLenum, GLuint, GLint, GLint) = NULL;
GLAPI void (*glNamedFramebufferDrawBuffer_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glNamedFramebufferDrawBuffers_ptr)(GLuint, GLsizei, const GLenum *) = NULL;
GLAPI void (*glNamedFramebufferReadBuffer_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glInvalidateNamedFramebufferData_ptr)(GLuint, GLsizei, const GLenum *) = NULL;
GLAPI void (*glInvalidateNamedFramebufferSubData_ptr)(GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glClearNamedFramebufferiv_ptr)(GLuint, GLenum, GLint, const GLint *) = NULL;
GLAPI void (*glClearNamedFramebufferuiv_ptr)(GLuint, GLenum, GLint, const GLuint *) = NULL;
GLAPI void (*glClearNamedFramebufferfv_ptr)(GLuint, GLenum, GLint, const GLfloat *) = NULL;
GLAPI void (*glClearNamedFramebufferfi_ptr)(GLuint, GLenum, GLint, GLfloat, GLint) = NULL;
GLAPI void (*glBlitNamedFramebuffer_ptr)(GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) = NULL;
GLAPI GLenum (*glCheckNamedFramebufferStatus_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glGetNamedFramebufferParameteriv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetNamedFramebufferAttachmentParameteriv_ptr)(GLuint, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glCreateRenderbuffers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glNamedRenderbufferStorage_ptr)(GLuint, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glNamedRenderbufferStorageMultisample_ptr)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glGetNamedRenderbufferParameteriv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glCreateTextures_ptr)(GLenum, GLsizei, GLuint *) = NULL;
GLAPI void (*glTextureBuffer_ptr)(GLuint, GLenum, GLuint) = NULL;
GLAPI void (*glTextureBufferRange_ptr)(GLuint, GLenum, GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glTextureStorage1D_ptr)(GLuint, GLsizei, GLenum, GLsizei) = NULL;
GLAPI void (*glTextureStorage2D_ptr)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glTextureStorage3D_ptr)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = NULL;
GLAPI void (*glTextureStorage2DMultisample_ptr)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glTextureStorage3DMultisample_ptr)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glTextureSubImage1D_ptr)(GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTextureSubImage2D_ptr)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTextureSubImage3D_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glCompressedTextureSubImage1D_ptr)(GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTextureSubImage2D_ptr)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTextureSubImage3D_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCopyTextureSubImage1D_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei) = NULL;
GLAPI void (*glCopyTextureSubImage2D_ptr)(GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glCopyTextureSubImage3D_ptr)(GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glTextureParameterf_ptr)(GLuint, GLenum, GLfloat) = NULL;
GLAPI void (*glTextureParameterfv_ptr)(GLuint, GLenum, const GLfloat *) = NULL;
GLAPI void (*glTextureParameteri_ptr)(GLuint, GLenum, GLint) = NULL;
GLAPI void (*glTextureParameterIiv_ptr)(GLuint, GLenum, const GLint *) = NULL;
GLAPI void (*glTextureParameterIuiv_ptr)(GLuint, GLenum, const GLuint *) = NULL;
GLAPI void (*glTextureParameteriv_ptr)(GLuint, GLenum, const GLint *) = NULL;
GLAPI void (*glGenerateTextureMipmap_ptr)(GLuint) = NULL;
GLAPI void (*glBindTextureUnit_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glGetTextureImage_ptr)(GLuint, GLint, GLenum, GLenum, GLsizei, void *) = NULL;
GLAPI void (*glGetCompressedTextureImage_ptr)(GLuint, GLint, GLsizei, void *) = NULL;
GLAPI void (*glGetTextureLevelParameterfv_ptr)(GLuint, GLint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetTextureLevelParameteriv_ptr)(GLuint, GLint, GLenum, GLint *) = NULL;
GLAPI void (*glGetTextureParameterfv_ptr)(GLuint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetTextureParameterIiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetTextureParameterIuiv_ptr)(GLuint, GLenum, GLuint *) = NULL;
GLAPI void (*glGetTextureParameteriv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glCreateVertexArrays_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glDisableVertexArrayAttrib_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glEnableVertexArrayAttrib_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glVertexArrayElementBuffer_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glVertexArrayVertexBuffer_ptr)(GLuint, GLuint, GLuint, GLintptr, GLsizei) = NULL;
GLAPI void (*glVertexArrayVertexBuffers_ptr)(GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *) = NULL;
GLAPI void (*glVertexArrayAttribBinding_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glVertexArrayAttribFormat_ptr)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint) = NULL;
GLAPI void (*glVertexArrayAttribIFormat_ptr)(GLuint, GLuint, GLint, GLenum, GLuint) = NULL;
GLAPI void (*glVertexArrayAttribLFormat_ptr)(GLuint, GLuint, GLint, GLenum, GLuint) = NULL;
GLAPI void (*glVertexArrayBindingDivisor_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glGetVertexArrayiv_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetVertexArrayIndexediv_ptr)(GLuint, GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetVertexArrayIndexed64iv_ptr)(GLuint, GLuint, GLenum, GLint64 *) = NULL;
GLAPI void (*glCreateSamplers_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glCreateProgramPipelines_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glCreateQueries_ptr)(GLenum, GLsizei, GLuint *) = NULL;
GLAPI void (*glGetQueryBufferObjecti64v_ptr)(GLuint, GLuint, GLenum, GLintptr) = NULL;
GLAPI void (*glGetQueryBufferObjectiv_ptr)(GLuint, GLuint, GLenum, GLintptr) = NULL;
GLAPI void (*glGetQueryBufferObjectui64v_ptr)(GLuint, GLuint, GLenum, GLintptr) = NULL;
GLAPI void (*glGetQueryBufferObjectuiv_ptr)(GLuint, GLuint, GLenum, GLintptr) = NULL;
GLAPI void (*glMemoryBarrierByRegion_ptr)(GLbitfield) = NULL;
GLAPI void (*glGetTextureSubImage_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *) = NULL;
GLAPI void (*glGetCompressedTextureSubImage_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, void *) = NULL;
GLAPI GLenum (*glGetGraphicsResetStatus_ptr)() = NULL;
GLAPI void (*glGetnCompressedTexImage_ptr)(GLenum, GLint, GLsizei, void *) = NULL;
GLAPI void (*glGetnTexImage_ptr)(GLenum, GLint, GLenum, GLenum, GLsizei, void *) = NULL;
GLAPI void (*glGetnUniformdv_ptr)(GLuint, GLint, GLsizei, GLdouble *) = NULL;
GLAPI void (*glGetnUniformfv_ptr)(GLuint, GLint, GLsizei, GLfloat *) = NULL;
GLAPI void (*glGetnUniformiv_ptr)(GLuint, GLint, GLsizei, GLint *) = NULL;
GLAPI void (*glGetnUniformuiv_ptr)(GLuint, GLint, GLsizei, GLuint *) = NULL;
GLAPI void (*glReadnPixels_ptr)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *) = NULL;
GLAPI void (*glTextureBarrier_ptr)() = NULL;
GLAPI void (*glSpecializeShader_ptr)(GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *) = NULL;
GLAPI void (*glMultiDrawArraysIndirectCount_ptr)(GLenum, const void *, GLintptr, GLsizei, GLsizei) = NULL;
GLAPI void (*glMultiDrawElementsIndirectCount_ptr)(GLenum, GLenum, const void *, GLintptr, GLsizei, GLsizei) = NULL;
GLAPI void (*glPolygonOffsetClamp_ptr)(GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glPrimitiveBoundingBoxARB_ptr)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI GLuint64 (*glGetTextureHandleARB_ptr)(GLuint) = NULL;
GLAPI GLuint64 (*glGetTextureSamplerHandleARB_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glMakeTextureHandleResidentARB_ptr)(GLuint64) = NULL;
GLAPI void (*glMakeTextureHandleNonResidentARB_ptr)(GLuint64) = NULL;
GLAPI GLuint64 (*glGetImageHandleARB_ptr)(GLuint, GLint, GLboolean, GLint, GLenum) = NULL;
GLAPI void (*glMakeImageHandleResidentARB_ptr)(GLuint64, GLenum) = NULL;
GLAPI void (*glMakeImageHandleNonResidentARB_ptr)(GLuint64) = NULL;
GLAPI void (*glUniformHandleui64ARB_ptr)(GLint, GLuint64) = NULL;
GLAPI void (*glUniformHandleui64vARB_ptr)(GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glProgramUniformHandleui64ARB_ptr)(GLuint, GLint, GLuint64) = NULL;
GLAPI void (*glProgramUniformHandleui64vARB_ptr)(GLuint, GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI GLboolean (*glIsTextureHandleResidentARB_ptr)(GLuint64) = NULL;
GLAPI GLboolean (*glIsImageHandleResidentARB_ptr)(GLuint64) = NULL;
GLAPI void (*glVertexAttribL1ui64ARB_ptr)(GLuint, GLuint64EXT) = NULL;
GLAPI void (*glVertexAttribL1ui64vARB_ptr)(GLuint, const GLuint64EXT *) = NULL;
GLAPI void (*glGetVertexAttribLui64vARB_ptr)(GLuint, GLenum, GLuint64EXT *) = NULL;
GLAPI GLsync (*glCreateSyncFromCLeventARB_ptr)(struct _cl_context *, struct _cl_event *, GLbitfield) = NULL;
GLAPI void (*glDispatchComputeGroupSizeARB_ptr)(GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glDebugMessageControlARB_ptr)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean) = NULL;
GLAPI void (*glDebugMessageInsertARB_ptr)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *) = NULL;
GLAPI void (*glDebugMessageCallbackARB_ptr)(GLDEBUGPROCARB, const void *) = NULL;
GLAPI GLuint (*glGetDebugMessageLogARB_ptr)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *) = NULL;
GLAPI void (*glBlendEquationiARB_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glBlendEquationSeparateiARB_ptr)(GLuint, GLenum, GLenum) = NULL;
GLAPI void (*glBlendFunciARB_ptr)(GLuint, GLenum, GLenum) = NULL;
GLAPI void (*glBlendFuncSeparateiARB_ptr)(GLuint, GLenum, GLenum, GLenum, GLenum) = NULL;
GLAPI void (*glDrawArraysInstancedARB_ptr)(GLenum, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glDrawElementsInstancedARB_ptr)(GLenum, GLsizei, GLenum, const void *, GLsizei) = NULL;
GLAPI void (*glProgramParameteriARB_ptr)(GLuint, GLenum, GLint) = NULL;
GLAPI void (*glFramebufferTextureARB_ptr)(GLenum, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glFramebufferTextureLayerARB_ptr)(GLenum, GLenum, GLuint, GLint, GLint) = NULL;
GLAPI void (*glFramebufferTextureFaceARB_ptr)(GLenum, GLenum, GLuint, GLint, GLenum) = NULL;
GLAPI void (*glSpecializeShaderARB_ptr)(GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *) = NULL;
GLAPI void (*glUniform1i64ARB_ptr)(GLint, GLint64) = NULL;
GLAPI void (*glUniform2i64ARB_ptr)(GLint, GLint64, GLint64) = NULL;
GLAPI void (*glUniform3i64ARB_ptr)(GLint, GLint64, GLint64, GLint64) = NULL;
GLAPI void (*glUniform4i64ARB_ptr)(GLint, GLint64, GLint64, GLint64, GLint64) = NULL;
GLAPI void (*glUniform1i64vARB_ptr)(GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glUniform2i64vARB_ptr)(GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glUniform3i64vARB_ptr)(GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glUniform4i64vARB_ptr)(GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glUniform1ui64ARB_ptr)(GLint, GLuint64) = NULL;
GLAPI void (*glUniform2ui64ARB_ptr)(GLint, GLuint64, GLuint64) = NULL;
GLAPI void (*glUniform3ui64ARB_ptr)(GLint, GLuint64, GLuint64, GLuint64) = NULL;
GLAPI void (*glUniform4ui64ARB_ptr)(GLint, GLuint64, GLuint64, GLuint64, GLuint64) = NULL;
GLAPI void (*glUniform1ui64vARB_ptr)(GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glUniform2ui64vARB_ptr)(GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glUniform3ui64vARB_ptr)(GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glUniform4ui64vARB_ptr)(GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glGetUniformi64vARB_ptr)(GLuint, GLint, GLint64 *) = NULL;
GLAPI void (*glGetUniformui64vARB_ptr)(GLuint, GLint, GLuint64 *) = NULL;
GLAPI void (*glGetnUniformi64vARB_ptr)(GLuint, GLint, GLsizei, GLint64 *) = NULL;
GLAPI void (*glGetnUniformui64vARB_ptr)(GLuint, GLint, GLsizei, GLuint64 *) = NULL;
GLAPI void (*glProgramUniform1i64ARB_ptr)(GLuint, GLint, GLint64) = NULL;
GLAPI void (*glProgramUniform2i64ARB_ptr)(GLuint, GLint, GLint64, GLint64) = NULL;
GLAPI void (*glProgramUniform3i64ARB_ptr)(GLuint, GLint, GLint64, GLint64, GLint64) = NULL;
GLAPI void (*glProgramUniform4i64ARB_ptr)(GLuint, GLint, GLint64, GLint64, GLint64, GLint64) = NULL;
GLAPI void (*glProgramUniform1i64vARB_ptr)(GLuint, GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glProgramUniform2i64vARB_ptr)(GLuint, GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glProgramUniform3i64vARB_ptr)(GLuint, GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glProgramUniform4i64vARB_ptr)(GLuint, GLint, GLsizei, const GLint64 *) = NULL;
GLAPI void (*glProgramUniform1ui64ARB_ptr)(GLuint, GLint, GLuint64) = NULL;
GLAPI void (*glProgramUniform2ui64ARB_ptr)(GLuint, GLint, GLuint64, GLuint64) = NULL;
GLAPI void (*glProgramUniform3ui64ARB_ptr)(GLuint, GLint, GLuint64, GLuint64, GLuint64) = NULL;
GLAPI void (*glProgramUniform4ui64ARB_ptr)(GLuint, GLint, GLuint64, GLuint64, GLuint64, GLuint64) = NULL;
GLAPI void (*glProgramUniform1ui64vARB_ptr)(GLuint, GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glProgramUniform2ui64vARB_ptr)(GLuint, GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glProgramUniform3ui64vARB_ptr)(GLuint, GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glProgramUniform4ui64vARB_ptr)(GLuint, GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glMultiDrawArraysIndirectCountARB_ptr)(GLenum, const void *, GLintptr, GLsizei, GLsizei) = NULL;
GLAPI void (*glMultiDrawElementsIndirectCountARB_ptr)(GLenum, GLenum, const void *, GLintptr, GLsizei, GLsizei) = NULL;
GLAPI void (*glVertexAttribDivisorARB_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glMaxShaderCompilerThreadsARB_ptr)(GLuint) = NULL;
GLAPI GLenum (*glGetGraphicsResetStatusARB_ptr)() = NULL;
GLAPI void (*glGetnTexImageARB_ptr)(GLenum, GLint, GLenum, GLenum, GLsizei, void *) = NULL;
GLAPI void (*glReadnPixelsARB_ptr)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *) = NULL;
GLAPI void (*glGetnCompressedTexImageARB_ptr)(GLenum, GLint, GLsizei, void *) = NULL;
GLAPI void (*glGetnUniformfvARB_ptr)(GLuint, GLint, GLsizei, GLfloat *) = NULL;
GLAPI void (*glGetnUniformivARB_ptr)(GLuint, GLint, GLsizei, GLint *) = NULL;
GLAPI void (*glGetnUniformuivARB_ptr)(GLuint, GLint, GLsizei, GLuint *) = NULL;
GLAPI void (*glGetnUniformdvARB_ptr)(GLuint, GLint, GLsizei, GLdouble *) = NULL;
GLAPI void (*glFramebufferSampleLocationsfvARB_ptr)(GLenum, GLuint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glNamedFramebufferSampleLocationsfvARB_ptr)(GLuint, GLuint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glEvaluateDepthValuesARB_ptr)() = NULL;
GLAPI void (*glMinSampleShadingARB_ptr)(GLfloat) = NULL;
GLAPI void (*glNamedStringARB_ptr)(GLenum, GLint, const GLchar *, GLint, const GLchar *) = NULL;
GLAPI void (*glDeleteNamedStringARB_ptr)(GLint, const GLchar *) = NULL;
GLAPI void (*glCompileShaderIncludeARB_ptr)(GLuint, GLsizei, const GLchar *const*, const GLint *) = NULL;
GLAPI GLboolean (*glIsNamedStringARB_ptr)(GLint, const GLchar *) = NULL;
GLAPI void (*glGetNamedStringARB_ptr)(GLint, const GLchar *, GLsizei, GLint *, GLchar *) = NULL;
GLAPI void (*glGetNamedStringivARB_ptr)(GLint, const GLchar *, GLenum, GLint *) = NULL;
GLAPI void (*glBufferPageCommitmentARB_ptr)(GLenum, GLintptr, GLsizeiptr, GLboolean) = NULL;
GLAPI void (*glNamedBufferPageCommitmentEXT_ptr)(GLuint, GLintptr, GLsizeiptr, GLboolean) = NULL;
GLAPI void (*glNamedBufferPageCommitmentARB_ptr)(GLuint, GLintptr, GLsizeiptr, GLboolean) = NULL;
GLAPI void (*glTexPageCommitmentARB_ptr)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glTexBufferARB_ptr)(GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glDepthRangeArraydvNV_ptr)(GLuint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glDepthRangeIndexeddNV_ptr)(GLuint, GLdouble, GLdouble) = NULL;
GLAPI void (*glBlendBarrierKHR_ptr)() = NULL;
GLAPI void (*glMaxShaderCompilerThreadsKHR_ptr)(GLuint) = NULL;
GLAPI void (*glRenderbufferStorageMultisampleAdvancedAMD_ptr)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glNamedRenderbufferStorageMultisampleAdvancedAMD_ptr)(GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glGetPerfMonitorGroupsAMD_ptr)(GLint *, GLsizei, GLuint *) = NULL;
GLAPI void (*glGetPerfMonitorCountersAMD_ptr)(GLuint, GLint *, GLint *, GLsizei, GLuint *) = NULL;
GLAPI void (*glGetPerfMonitorGroupStringAMD_ptr)(GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glGetPerfMonitorCounterStringAMD_ptr)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glGetPerfMonitorCounterInfoAMD_ptr)(GLuint, GLuint, GLenum, void *) = NULL;
GLAPI void (*glGenPerfMonitorsAMD_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glDeletePerfMonitorsAMD_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glSelectPerfMonitorCountersAMD_ptr)(GLuint, GLboolean, GLuint, GLint, GLuint *) = NULL;
GLAPI void (*glBeginPerfMonitorAMD_ptr)(GLuint) = NULL;
GLAPI void (*glEndPerfMonitorAMD_ptr)(GLuint) = NULL;
GLAPI void (*glGetPerfMonitorCounterDataAMD_ptr)(GLuint, GLenum, GLsizei, GLuint *, GLint *) = NULL;
GLAPI void (*glEGLImageTargetTexStorageEXT_ptr)(GLenum, GLeglImageOES, const GLint*) = NULL;
GLAPI void (*glEGLImageTargetTextureStorageEXT_ptr)(GLuint, GLeglImageOES, const GLint*) = NULL;
GLAPI void (*glLabelObjectEXT_ptr)(GLenum, GLuint, GLsizei, const GLchar *) = NULL;
GLAPI void (*glGetObjectLabelEXT_ptr)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = NULL;
GLAPI void (*glInsertEventMarkerEXT_ptr)(GLsizei, const GLchar *) = NULL;
GLAPI void (*glPushGroupMarkerEXT_ptr)(GLsizei, const GLchar *) = NULL;
GLAPI void (*glPopGroupMarkerEXT_ptr)() = NULL;
GLAPI void (*glMatrixLoadfEXT_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixLoaddEXT_ptr)(GLenum, const GLdouble *) = NULL;
GLAPI void (*glMatrixMultfEXT_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixMultdEXT_ptr)(GLenum, const GLdouble *) = NULL;
GLAPI void (*glMatrixLoadIdentityEXT_ptr)(GLenum) = NULL;
GLAPI void (*glMatrixRotatefEXT_ptr)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glMatrixRotatedEXT_ptr)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glMatrixScalefEXT_ptr)(GLenum, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glMatrixScaledEXT_ptr)(GLenum, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glMatrixTranslatefEXT_ptr)(GLenum, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glMatrixTranslatedEXT_ptr)(GLenum, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glMatrixFrustumEXT_ptr)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glMatrixOrthoEXT_ptr)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glMatrixPopEXT_ptr)(GLenum) = NULL;
GLAPI void (*glMatrixPushEXT_ptr)(GLenum) = NULL;
GLAPI void (*glClientAttribDefaultEXT_ptr)(GLbitfield) = NULL;
GLAPI void (*glPushClientAttribDefaultEXT_ptr)(GLbitfield) = NULL;
GLAPI void (*glTextureParameterfEXT_ptr)(GLuint, GLenum, GLenum, GLfloat) = NULL;
GLAPI void (*glTextureParameterfvEXT_ptr)(GLuint, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glTextureParameteriEXT_ptr)(GLuint, GLenum, GLenum, GLint) = NULL;
GLAPI void (*glTextureParameterivEXT_ptr)(GLuint, GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glTextureImage1DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTextureImage2DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTextureSubImage1DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTextureSubImage2DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glCopyTextureImage1DEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = NULL;
GLAPI void (*glCopyTextureImage2DEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = NULL;
GLAPI void (*glCopyTextureSubImage1DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei) = NULL;
GLAPI void (*glCopyTextureSubImage2DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glGetTextureImageEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLenum, void *) = NULL;
GLAPI void (*glGetTextureParameterfvEXT_ptr)(GLuint, GLenum, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetTextureParameterivEXT_ptr)(GLuint, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetTextureLevelParameterfvEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetTextureLevelParameterivEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLint *) = NULL;
GLAPI void (*glTextureImage3DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glTextureSubImage3DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glCopyTextureSubImage3DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glBindMultiTextureEXT_ptr)(GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glMultiTexCoordPointerEXT_ptr)(GLenum, GLint, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glMultiTexEnvfEXT_ptr)(GLenum, GLenum, GLenum, GLfloat) = NULL;
GLAPI void (*glMultiTexEnvfvEXT_ptr)(GLenum, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glMultiTexEnviEXT_ptr)(GLenum, GLenum, GLenum, GLint) = NULL;
GLAPI void (*glMultiTexEnvivEXT_ptr)(GLenum, GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glMultiTexGendEXT_ptr)(GLenum, GLenum, GLenum, GLdouble) = NULL;
GLAPI void (*glMultiTexGendvEXT_ptr)(GLenum, GLenum, GLenum, const GLdouble *) = NULL;
GLAPI void (*glMultiTexGenfEXT_ptr)(GLenum, GLenum, GLenum, GLfloat) = NULL;
GLAPI void (*glMultiTexGenfvEXT_ptr)(GLenum, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glMultiTexGeniEXT_ptr)(GLenum, GLenum, GLenum, GLint) = NULL;
GLAPI void (*glMultiTexGenivEXT_ptr)(GLenum, GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glGetMultiTexEnvfvEXT_ptr)(GLenum, GLenum, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetMultiTexEnvivEXT_ptr)(GLenum, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetMultiTexGendvEXT_ptr)(GLenum, GLenum, GLenum, GLdouble *) = NULL;
GLAPI void (*glGetMultiTexGenfvEXT_ptr)(GLenum, GLenum, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetMultiTexGenivEXT_ptr)(GLenum, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glMultiTexParameteriEXT_ptr)(GLenum, GLenum, GLenum, GLint) = NULL;
GLAPI void (*glMultiTexParameterivEXT_ptr)(GLenum, GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glMultiTexParameterfEXT_ptr)(GLenum, GLenum, GLenum, GLfloat) = NULL;
GLAPI void (*glMultiTexParameterfvEXT_ptr)(GLenum, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glMultiTexImage1DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glMultiTexImage2DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glMultiTexSubImage1DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glMultiTexSubImage2DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glCopyMultiTexImage1DEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = NULL;
GLAPI void (*glCopyMultiTexImage2DEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = NULL;
GLAPI void (*glCopyMultiTexSubImage1DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei) = NULL;
GLAPI void (*glCopyMultiTexSubImage2DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glGetMultiTexImageEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLenum, void *) = NULL;
GLAPI void (*glGetMultiTexParameterfvEXT_ptr)(GLenum, GLenum, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetMultiTexParameterivEXT_ptr)(GLenum, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetMultiTexLevelParameterfvEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetMultiTexLevelParameterivEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLint *) = NULL;
GLAPI void (*glMultiTexImage3DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glMultiTexSubImage3DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glCopyMultiTexSubImage3DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glEnableClientStateIndexedEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDisableClientStateIndexedEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glGetFloatIndexedvEXT_ptr)(GLenum, GLuint, GLfloat *) = NULL;
GLAPI void (*glGetDoubleIndexedvEXT_ptr)(GLenum, GLuint, GLdouble *) = NULL;
GLAPI void (*glGetPointerIndexedvEXT_ptr)(GLenum, GLuint, void **) = NULL;
GLAPI void (*glEnableIndexedEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDisableIndexedEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI GLboolean (*glIsEnabledIndexedEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glGetIntegerIndexedvEXT_ptr)(GLenum, GLuint, GLint *) = NULL;
GLAPI void (*glGetBooleanIndexedvEXT_ptr)(GLenum, GLuint, GLboolean *) = NULL;
GLAPI void (*glCompressedTextureImage3DEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTextureImage2DEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTextureImage1DEXT_ptr)(GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTextureSubImage3DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTextureSubImage2DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedTextureSubImage1DEXT_ptr)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glGetCompressedTextureImageEXT_ptr)(GLuint, GLenum, GLint, void *) = NULL;
GLAPI void (*glCompressedMultiTexImage3DEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedMultiTexImage2DEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedMultiTexImage1DEXT_ptr)(GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedMultiTexSubImage3DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedMultiTexSubImage2DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glCompressedMultiTexSubImage1DEXT_ptr)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glGetCompressedMultiTexImageEXT_ptr)(GLenum, GLenum, GLint, void *) = NULL;
GLAPI void (*glMatrixLoadTransposefEXT_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixLoadTransposedEXT_ptr)(GLenum, const GLdouble *) = NULL;
GLAPI void (*glMatrixMultTransposefEXT_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixMultTransposedEXT_ptr)(GLenum, const GLdouble *) = NULL;
GLAPI void (*glNamedBufferDataEXT_ptr)(GLuint, GLsizeiptr, const void *, GLenum) = NULL;
GLAPI void (*glNamedBufferSubDataEXT_ptr)(GLuint, GLintptr, GLsizeiptr, const void *) = NULL;
GLAPI void * (*glMapNamedBufferEXT_ptr)(GLuint, GLenum) = NULL;
GLAPI GLboolean (*glUnmapNamedBufferEXT_ptr)(GLuint) = NULL;
GLAPI void (*glGetNamedBufferParameterivEXT_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetNamedBufferPointervEXT_ptr)(GLuint, GLenum, void **) = NULL;
GLAPI void (*glGetNamedBufferSubDataEXT_ptr)(GLuint, GLintptr, GLsizeiptr, void *) = NULL;
GLAPI void (*glProgramUniform1fEXT_ptr)(GLuint, GLint, GLfloat) = NULL;
GLAPI void (*glProgramUniform2fEXT_ptr)(GLuint, GLint, GLfloat, GLfloat) = NULL;
GLAPI void (*glProgramUniform3fEXT_ptr)(GLuint, GLint, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glProgramUniform4fEXT_ptr)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glProgramUniform1iEXT_ptr)(GLuint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform2iEXT_ptr)(GLuint, GLint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform3iEXT_ptr)(GLuint, GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform4iEXT_ptr)(GLuint, GLint, GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glProgramUniform1fvEXT_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform2fvEXT_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform3fvEXT_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform4fvEXT_ptr)(GLuint, GLint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glProgramUniform1ivEXT_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniform2ivEXT_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniform3ivEXT_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniform4ivEXT_ptr)(GLuint, GLint, GLsizei, const GLint *) = NULL;
GLAPI void (*glProgramUniformMatrix2fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix3fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix4fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix2x3fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix3x2fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix2x4fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix4x2fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix3x4fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glProgramUniformMatrix4x3fvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = NULL;
GLAPI void (*glTextureBufferEXT_ptr)(GLuint, GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glMultiTexBufferEXT_ptr)(GLenum, GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glTextureParameterIivEXT_ptr)(GLuint, GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glTextureParameterIuivEXT_ptr)(GLuint, GLenum, GLenum, const GLuint *) = NULL;
GLAPI void (*glGetTextureParameterIivEXT_ptr)(GLuint, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetTextureParameterIuivEXT_ptr)(GLuint, GLenum, GLenum, GLuint *) = NULL;
GLAPI void (*glMultiTexParameterIivEXT_ptr)(GLenum, GLenum, GLenum, const GLint *) = NULL;
GLAPI void (*glMultiTexParameterIuivEXT_ptr)(GLenum, GLenum, GLenum, const GLuint *) = NULL;
GLAPI void (*glGetMultiTexParameterIivEXT_ptr)(GLenum, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetMultiTexParameterIuivEXT_ptr)(GLenum, GLenum, GLenum, GLuint *) = NULL;
GLAPI void (*glProgramUniform1uiEXT_ptr)(GLuint, GLint, GLuint) = NULL;
GLAPI void (*glProgramUniform2uiEXT_ptr)(GLuint, GLint, GLuint, GLuint) = NULL;
GLAPI void (*glProgramUniform3uiEXT_ptr)(GLuint, GLint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glProgramUniform4uiEXT_ptr)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glProgramUniform1uivEXT_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glProgramUniform2uivEXT_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glProgramUniform3uivEXT_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glProgramUniform4uivEXT_ptr)(GLuint, GLint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glNamedProgramLocalParameters4fvEXT_ptr)(GLuint, GLenum, GLuint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glNamedProgramLocalParameterI4iEXT_ptr)(GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint) = NULL;
GLAPI void (*glNamedProgramLocalParameterI4ivEXT_ptr)(GLuint, GLenum, GLuint, const GLint *) = NULL;
GLAPI void (*glNamedProgramLocalParametersI4ivEXT_ptr)(GLuint, GLenum, GLuint, GLsizei, const GLint *) = NULL;
GLAPI void (*glNamedProgramLocalParameterI4uiEXT_ptr)(GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glNamedProgramLocalParameterI4uivEXT_ptr)(GLuint, GLenum, GLuint, const GLuint *) = NULL;
GLAPI void (*glNamedProgramLocalParametersI4uivEXT_ptr)(GLuint, GLenum, GLuint, GLsizei, const GLuint *) = NULL;
GLAPI void (*glGetNamedProgramLocalParameterIivEXT_ptr)(GLuint, GLenum, GLuint, GLint *) = NULL;
GLAPI void (*glGetNamedProgramLocalParameterIuivEXT_ptr)(GLuint, GLenum, GLuint, GLuint *) = NULL;
GLAPI void (*glEnableClientStateiEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glDisableClientStateiEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glGetFloati_vEXT_ptr)(GLenum, GLuint, GLfloat *) = NULL;
GLAPI void (*glGetDoublei_vEXT_ptr)(GLenum, GLuint, GLdouble *) = NULL;
GLAPI void (*glGetPointeri_vEXT_ptr)(GLenum, GLuint, void **) = NULL;
GLAPI void (*glNamedProgramStringEXT_ptr)(GLuint, GLenum, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glNamedProgramLocalParameter4dEXT_ptr)(GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glNamedProgramLocalParameter4dvEXT_ptr)(GLuint, GLenum, GLuint, const GLdouble *) = NULL;
GLAPI void (*glNamedProgramLocalParameter4fEXT_ptr)(GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glNamedProgramLocalParameter4fvEXT_ptr)(GLuint, GLenum, GLuint, const GLfloat *) = NULL;
GLAPI void (*glGetNamedProgramLocalParameterdvEXT_ptr)(GLuint, GLenum, GLuint, GLdouble *) = NULL;
GLAPI void (*glGetNamedProgramLocalParameterfvEXT_ptr)(GLuint, GLenum, GLuint, GLfloat *) = NULL;
GLAPI void (*glGetNamedProgramivEXT_ptr)(GLuint, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGetNamedProgramStringEXT_ptr)(GLuint, GLenum, GLenum, void *) = NULL;
GLAPI void (*glNamedRenderbufferStorageEXT_ptr)(GLuint, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glGetNamedRenderbufferParameterivEXT_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glNamedRenderbufferStorageMultisampleEXT_ptr)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glNamedRenderbufferStorageMultisampleCoverageEXT_ptr)(GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI GLenum (*glCheckNamedFramebufferStatusEXT_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glNamedFramebufferTexture1DEXT_ptr)(GLuint, GLenum, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glNamedFramebufferTexture2DEXT_ptr)(GLuint, GLenum, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glNamedFramebufferTexture3DEXT_ptr)(GLuint, GLenum, GLenum, GLuint, GLint, GLint) = NULL;
GLAPI void (*glNamedFramebufferRenderbufferEXT_ptr)(GLuint, GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glGetNamedFramebufferAttachmentParameterivEXT_ptr)(GLuint, GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glGenerateTextureMipmapEXT_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glGenerateMultiTexMipmapEXT_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glFramebufferDrawBufferEXT_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glFramebufferDrawBuffersEXT_ptr)(GLuint, GLsizei, const GLenum *) = NULL;
GLAPI void (*glFramebufferReadBufferEXT_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glGetFramebufferParameterivEXT_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glNamedCopyBufferSubDataEXT_ptr)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glNamedFramebufferTextureEXT_ptr)(GLuint, GLenum, GLuint, GLint) = NULL;
GLAPI void (*glNamedFramebufferTextureLayerEXT_ptr)(GLuint, GLenum, GLuint, GLint, GLint) = NULL;
GLAPI void (*glNamedFramebufferTextureFaceEXT_ptr)(GLuint, GLenum, GLuint, GLint, GLenum) = NULL;
GLAPI void (*glTextureRenderbufferEXT_ptr)(GLuint, GLenum, GLuint) = NULL;
GLAPI void (*glMultiTexRenderbufferEXT_ptr)(GLenum, GLenum, GLuint) = NULL;
GLAPI void (*glVertexArrayVertexOffsetEXT_ptr)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayColorOffsetEXT_ptr)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayEdgeFlagOffsetEXT_ptr)(GLuint, GLuint, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayIndexOffsetEXT_ptr)(GLuint, GLuint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayNormalOffsetEXT_ptr)(GLuint, GLuint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayTexCoordOffsetEXT_ptr)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayMultiTexCoordOffsetEXT_ptr)(GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayFogCoordOffsetEXT_ptr)(GLuint, GLuint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArraySecondaryColorOffsetEXT_ptr)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayVertexAttribOffsetEXT_ptr)(GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr) = NULL;
GLAPI void (*glVertexArrayVertexAttribIOffsetEXT_ptr)(GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glEnableVertexArrayEXT_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glDisableVertexArrayEXT_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glEnableVertexArrayAttribEXT_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glDisableVertexArrayAttribEXT_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glGetVertexArrayIntegervEXT_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetVertexArrayPointervEXT_ptr)(GLuint, GLenum, void **) = NULL;
GLAPI void (*glGetVertexArrayIntegeri_vEXT_ptr)(GLuint, GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetVertexArrayPointeri_vEXT_ptr)(GLuint, GLuint, GLenum, void **) = NULL;
GLAPI void * (*glMapNamedBufferRangeEXT_ptr)(GLuint, GLintptr, GLsizeiptr, GLbitfield) = NULL;
GLAPI void (*glFlushMappedNamedBufferRangeEXT_ptr)(GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glNamedBufferStorageEXT_ptr)(GLuint, GLsizeiptr, const void *, GLbitfield) = NULL;
GLAPI void (*glClearNamedBufferDataEXT_ptr)(GLuint, GLenum, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glClearNamedBufferSubDataEXT_ptr)(GLuint, GLenum, GLsizeiptr, GLsizeiptr, GLenum, GLenum, const void *) = NULL;
GLAPI void (*glNamedFramebufferParameteriEXT_ptr)(GLuint, GLenum, GLint) = NULL;
GLAPI void (*glGetNamedFramebufferParameterivEXT_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glProgramUniform1dEXT_ptr)(GLuint, GLint, GLdouble) = NULL;
GLAPI void (*glProgramUniform2dEXT_ptr)(GLuint, GLint, GLdouble, GLdouble) = NULL;
GLAPI void (*glProgramUniform3dEXT_ptr)(GLuint, GLint, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glProgramUniform4dEXT_ptr)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;
GLAPI void (*glProgramUniform1dvEXT_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniform2dvEXT_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniform3dvEXT_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniform4dvEXT_ptr)(GLuint, GLint, GLsizei, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix2dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix3dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix4dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix2x3dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix2x4dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix3x2dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix3x4dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix4x2dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glProgramUniformMatrix4x3dvEXT_ptr)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = NULL;
GLAPI void (*glTextureBufferRangeEXT_ptr)(GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr) = NULL;
GLAPI void (*glTextureStorage1DEXT_ptr)(GLuint, GLenum, GLsizei, GLenum, GLsizei) = NULL;
GLAPI void (*glTextureStorage2DEXT_ptr)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glTextureStorage3DEXT_ptr)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = NULL;
GLAPI void (*glTextureStorage2DMultisampleEXT_ptr)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glTextureStorage3DMultisampleEXT_ptr)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glVertexArrayBindVertexBufferEXT_ptr)(GLuint, GLuint, GLuint, GLintptr, GLsizei) = NULL;
GLAPI void (*glVertexArrayVertexAttribFormatEXT_ptr)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint) = NULL;
GLAPI void (*glVertexArrayVertexAttribIFormatEXT_ptr)(GLuint, GLuint, GLint, GLenum, GLuint) = NULL;
GLAPI void (*glVertexArrayVertexAttribLFormatEXT_ptr)(GLuint, GLuint, GLint, GLenum, GLuint) = NULL;
GLAPI void (*glVertexArrayVertexAttribBindingEXT_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glVertexArrayVertexBindingDivisorEXT_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glVertexArrayVertexAttribLOffsetEXT_ptr)(GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = NULL;
GLAPI void (*glTexturePageCommitmentEXT_ptr)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean) = NULL;
GLAPI void (*glVertexArrayVertexAttribDivisorEXT_ptr)(GLuint, GLuint, GLuint) = NULL;
GLAPI void (*glDrawArraysInstancedEXT_ptr)(GLenum, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glDrawElementsInstancedEXT_ptr)(GLenum, GLsizei, GLenum, const void *, GLsizei) = NULL;
GLAPI void (*glPolygonOffsetClampEXT_ptr)(GLfloat, GLfloat, GLfloat) = NULL;
GLAPI void (*glRasterSamplesEXT_ptr)(GLuint, GLboolean) = NULL;
GLAPI void (*glUseShaderProgramEXT_ptr)(GLenum, GLuint) = NULL;
GLAPI void (*glActiveProgramEXT_ptr)(GLuint) = NULL;
GLAPI GLuint (*glCreateShaderProgramEXT_ptr)(GLenum, const GLchar *) = NULL;
GLAPI void (*glFramebufferFetchBarrierEXT_ptr)() = NULL;
GLAPI void (*glTexStorage1DEXT_ptr)(GLenum, GLsizei, GLenum, GLsizei) = NULL;
GLAPI void (*glTexStorage2DEXT_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glTexStorage3DEXT_ptr)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = NULL;
GLAPI void (*glWindowRectanglesEXT_ptr)(GLenum, GLsizei, const GLint *) = NULL;
GLAPI void (*glApplyFramebufferAttachmentCMAAINTEL_ptr)() = NULL;
GLAPI void (*glBeginPerfQueryINTEL_ptr)(GLuint) = NULL;
GLAPI void (*glCreatePerfQueryINTEL_ptr)(GLuint, GLuint *) = NULL;
GLAPI void (*glDeletePerfQueryINTEL_ptr)(GLuint) = NULL;
GLAPI void (*glEndPerfQueryINTEL_ptr)(GLuint) = NULL;
GLAPI void (*glGetFirstPerfQueryIdINTEL_ptr)(GLuint *) = NULL;
GLAPI void (*glGetNextPerfQueryIdINTEL_ptr)(GLuint, GLuint *) = NULL;
GLAPI void (*glGetPerfCounterInfoINTEL_ptr)(GLuint, GLuint, GLuint, GLchar *, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *, GLuint64 *) = NULL;
GLAPI void (*glGetPerfQueryDataINTEL_ptr)(GLuint, GLuint, GLsizei, void *, GLuint *) = NULL;
GLAPI void (*glGetPerfQueryIdByNameINTEL_ptr)(GLchar *, GLuint *) = NULL;
GLAPI void (*glGetPerfQueryInfoINTEL_ptr)(GLuint, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *) = NULL;
GLAPI void (*glFramebufferParameteriMESA_ptr)(GLenum, GLenum, GLint) = NULL;
GLAPI void (*glGetFramebufferParameterivMESA_ptr)(GLenum, GLenum, GLint *) = NULL;
GLAPI void (*glMultiDrawArraysIndirectBindlessNV_ptr)(GLenum, const void *, GLsizei, GLsizei, GLint) = NULL;
GLAPI void (*glMultiDrawElementsIndirectBindlessNV_ptr)(GLenum, GLenum, const void *, GLsizei, GLsizei, GLint) = NULL;
GLAPI void (*glMultiDrawArraysIndirectBindlessCountNV_ptr)(GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint) = NULL;
GLAPI void (*glMultiDrawElementsIndirectBindlessCountNV_ptr)(GLenum, GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint) = NULL;
GLAPI GLuint64 (*glGetTextureHandleNV_ptr)(GLuint) = NULL;
GLAPI GLuint64 (*glGetTextureSamplerHandleNV_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glMakeTextureHandleResidentNV_ptr)(GLuint64) = NULL;
GLAPI void (*glMakeTextureHandleNonResidentNV_ptr)(GLuint64) = NULL;
GLAPI GLuint64 (*glGetImageHandleNV_ptr)(GLuint, GLint, GLboolean, GLint, GLenum) = NULL;
GLAPI void (*glMakeImageHandleResidentNV_ptr)(GLuint64, GLenum) = NULL;
GLAPI void (*glMakeImageHandleNonResidentNV_ptr)(GLuint64) = NULL;
GLAPI void (*glUniformHandleui64NV_ptr)(GLint, GLuint64) = NULL;
GLAPI void (*glUniformHandleui64vNV_ptr)(GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI void (*glProgramUniformHandleui64NV_ptr)(GLuint, GLint, GLuint64) = NULL;
GLAPI void (*glProgramUniformHandleui64vNV_ptr)(GLuint, GLint, GLsizei, const GLuint64 *) = NULL;
GLAPI GLboolean (*glIsTextureHandleResidentNV_ptr)(GLuint64) = NULL;
GLAPI GLboolean (*glIsImageHandleResidentNV_ptr)(GLuint64) = NULL;
GLAPI void (*glBlendParameteriNV_ptr)(GLenum, GLint) = NULL;
GLAPI void (*glBlendBarrierNV_ptr)() = NULL;
GLAPI void (*glViewportPositionWScaleNV_ptr)(GLuint, GLfloat, GLfloat) = NULL;
GLAPI void (*glCreateStatesNV_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glDeleteStatesNV_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI GLboolean (*glIsStateNV_ptr)(GLuint) = NULL;
GLAPI void (*glStateCaptureNV_ptr)(GLuint, GLenum) = NULL;
GLAPI GLuint (*glGetCommandHeaderNV_ptr)(GLenum, GLuint) = NULL;
GLAPI GLushort (*glGetStageIndexNV_ptr)(GLenum) = NULL;
GLAPI void (*glDrawCommandsNV_ptr)(GLenum, GLuint, const GLintptr *, const GLsizei *, GLuint) = NULL;
GLAPI void (*glDrawCommandsAddressNV_ptr)(GLenum, const GLuint64 *, const GLsizei *, GLuint) = NULL;
GLAPI void (*glDrawCommandsStatesNV_ptr)(GLuint, const GLintptr *, const GLsizei *, const GLuint *, const GLuint *, GLuint) = NULL;
GLAPI void (*glDrawCommandsStatesAddressNV_ptr)(const GLuint64 *, const GLsizei *, const GLuint *, const GLuint *, GLuint) = NULL;
GLAPI void (*glCreateCommandListsNV_ptr)(GLsizei, GLuint *) = NULL;
GLAPI void (*glDeleteCommandListsNV_ptr)(GLsizei, const GLuint *) = NULL;
GLAPI GLboolean (*glIsCommandListNV_ptr)(GLuint) = NULL;
GLAPI void (*glListDrawCommandsStatesClientNV_ptr)(GLuint, GLuint, const void **, const GLsizei *, const GLuint *, const GLuint *, GLuint) = NULL;
GLAPI void (*glCommandListSegmentsNV_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glCompileCommandListNV_ptr)(GLuint) = NULL;
GLAPI void (*glCallCommandListNV_ptr)(GLuint) = NULL;
GLAPI void (*glBeginConditionalRenderNV_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glEndConditionalRenderNV_ptr)() = NULL;
GLAPI void (*glSubpixelPrecisionBiasNV_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glConservativeRasterParameterfNV_ptr)(GLenum, GLfloat) = NULL;
GLAPI void (*glConservativeRasterParameteriNV_ptr)(GLenum, GLint) = NULL;
GLAPI void (*glDepthRangedNV_ptr)(GLdouble, GLdouble) = NULL;
GLAPI void (*glClearDepthdNV_ptr)(GLdouble) = NULL;
GLAPI void (*glDepthBoundsdNV_ptr)(GLdouble, GLdouble) = NULL;
GLAPI void (*glDrawVkImageNV_ptr)(GLuint64, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;
GLAPI GLVULKANPROCNV (*glGetVkProcAddrNV_ptr)(const GLchar *) = NULL;
GLAPI void (*glWaitVkSemaphoreNV_ptr)(GLuint64) = NULL;
GLAPI void (*glSignalVkSemaphoreNV_ptr)(GLuint64) = NULL;
GLAPI void (*glSignalVkFenceNV_ptr)(GLuint64) = NULL;
GLAPI void (*glFragmentCoverageColorNV_ptr)(GLuint) = NULL;
GLAPI void (*glCoverageModulationTableNV_ptr)(GLsizei, const GLfloat *) = NULL;
GLAPI void (*glGetCoverageModulationTableNV_ptr)(GLsizei, GLfloat *) = NULL;
GLAPI void (*glCoverageModulationNV_ptr)(GLenum) = NULL;
GLAPI void (*glRenderbufferStorageMultisampleCoverageNV_ptr)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) = NULL;
GLAPI void (*glUniform1i64NV_ptr)(GLint, GLint64EXT) = NULL;
GLAPI void (*glUniform2i64NV_ptr)(GLint, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glUniform3i64NV_ptr)(GLint, GLint64EXT, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glUniform4i64NV_ptr)(GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glUniform1i64vNV_ptr)(GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glUniform2i64vNV_ptr)(GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glUniform3i64vNV_ptr)(GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glUniform4i64vNV_ptr)(GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glUniform1ui64NV_ptr)(GLint, GLuint64EXT) = NULL;
GLAPI void (*glUniform2ui64NV_ptr)(GLint, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glUniform3ui64NV_ptr)(GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glUniform4ui64NV_ptr)(GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glUniform1ui64vNV_ptr)(GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glUniform2ui64vNV_ptr)(GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glUniform3ui64vNV_ptr)(GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glUniform4ui64vNV_ptr)(GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glGetUniformi64vNV_ptr)(GLuint, GLint, GLint64EXT *) = NULL;
GLAPI void (*glProgramUniform1i64NV_ptr)(GLuint, GLint, GLint64EXT) = NULL;
GLAPI void (*glProgramUniform2i64NV_ptr)(GLuint, GLint, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glProgramUniform3i64NV_ptr)(GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glProgramUniform4i64NV_ptr)(GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glProgramUniform1i64vNV_ptr)(GLuint, GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glProgramUniform2i64vNV_ptr)(GLuint, GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glProgramUniform3i64vNV_ptr)(GLuint, GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glProgramUniform4i64vNV_ptr)(GLuint, GLint, GLsizei, const GLint64EXT *) = NULL;
GLAPI void (*glProgramUniform1ui64NV_ptr)(GLuint, GLint, GLuint64EXT) = NULL;
GLAPI void (*glProgramUniform2ui64NV_ptr)(GLuint, GLint, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glProgramUniform3ui64NV_ptr)(GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glProgramUniform4ui64NV_ptr)(GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glProgramUniform1ui64vNV_ptr)(GLuint, GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glProgramUniform2ui64vNV_ptr)(GLuint, GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glProgramUniform3ui64vNV_ptr)(GLuint, GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glProgramUniform4ui64vNV_ptr)(GLuint, GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glGetInternalformatSampleivNV_ptr)(GLenum, GLenum, GLsizei, GLenum, GLsizei, GLint *) = NULL;
GLAPI void (*glGetMemoryObjectDetachedResourcesuivNV_ptr)(GLuint, GLenum, GLint, GLsizei, GLuint *) = NULL;
GLAPI void (*glResetMemoryObjectParameterNV_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glTexAttachMemoryNV_ptr)(GLenum, GLuint, GLuint64) = NULL;
GLAPI void (*glBufferAttachMemoryNV_ptr)(GLenum, GLuint, GLuint64) = NULL;
GLAPI void (*glTextureAttachMemoryNV_ptr)(GLuint, GLuint, GLuint64) = NULL;
GLAPI void (*glNamedBufferAttachMemoryNV_ptr)(GLuint, GLuint, GLuint64) = NULL;
GLAPI void (*glBufferPageCommitmentMemNV_ptr)(GLenum, GLintptr, GLsizeiptr, GLuint, GLuint64, GLboolean) = NULL;
GLAPI void (*glTexPageCommitmentMemNV_ptr)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLuint, GLuint64, GLboolean) = NULL;
GLAPI void (*glNamedBufferPageCommitmentMemNV_ptr)(GLuint, GLintptr, GLsizeiptr, GLuint, GLuint64, GLboolean) = NULL;
GLAPI void (*glTexturePageCommitmentMemNV_ptr)(GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLuint, GLuint64, GLboolean) = NULL;
GLAPI void (*glDrawMeshTasksNV_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glDrawMeshTasksIndirectNV_ptr)(GLintptr) = NULL;
GLAPI void (*glMultiDrawMeshTasksIndirectNV_ptr)(GLintptr, GLsizei, GLsizei) = NULL;
GLAPI void (*glMultiDrawMeshTasksIndirectCountNV_ptr)(GLintptr, GLintptr, GLsizei, GLsizei) = NULL;
GLAPI GLuint (*glGenPathsNV_ptr)(GLsizei) = NULL;
GLAPI void (*glDeletePathsNV_ptr)(GLuint, GLsizei) = NULL;
GLAPI GLboolean (*glIsPathNV_ptr)(GLuint) = NULL;
GLAPI void (*glPathCommandsNV_ptr)(GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const void *) = NULL;
GLAPI void (*glPathCoordsNV_ptr)(GLuint, GLsizei, GLenum, const void *) = NULL;
GLAPI void (*glPathSubCommandsNV_ptr)(GLuint, GLsizei, GLsizei, GLsizei, const GLubyte *, GLsizei, GLenum, const void *) = NULL;
GLAPI void (*glPathSubCoordsNV_ptr)(GLuint, GLsizei, GLsizei, GLenum, const void *) = NULL;
GLAPI void (*glPathStringNV_ptr)(GLuint, GLenum, GLsizei, const void *) = NULL;
GLAPI void (*glPathGlyphsNV_ptr)(GLuint, GLenum, const void *, GLbitfield, GLsizei, GLenum, const void *, GLenum, GLuint, GLfloat) = NULL;
GLAPI void (*glPathGlyphRangeNV_ptr)(GLuint, GLenum, const void *, GLbitfield, GLuint, GLsizei, GLenum, GLuint, GLfloat) = NULL;
GLAPI void (*glWeightPathsNV_ptr)(GLuint, GLsizei, const GLuint *, const GLfloat *) = NULL;
GLAPI void (*glCopyPathNV_ptr)(GLuint, GLuint) = NULL;
GLAPI void (*glInterpolatePathsNV_ptr)(GLuint, GLuint, GLuint, GLfloat) = NULL;
GLAPI void (*glTransformPathNV_ptr)(GLuint, GLuint, GLenum, const GLfloat *) = NULL;
GLAPI void (*glPathParameterivNV_ptr)(GLuint, GLenum, const GLint *) = NULL;
GLAPI void (*glPathParameteriNV_ptr)(GLuint, GLenum, GLint) = NULL;
GLAPI void (*glPathParameterfvNV_ptr)(GLuint, GLenum, const GLfloat *) = NULL;
GLAPI void (*glPathParameterfNV_ptr)(GLuint, GLenum, GLfloat) = NULL;
GLAPI void (*glPathDashArrayNV_ptr)(GLuint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glPathStencilFuncNV_ptr)(GLenum, GLint, GLuint) = NULL;
GLAPI void (*glPathStencilDepthOffsetNV_ptr)(GLfloat, GLfloat) = NULL;
GLAPI void (*glStencilFillPathNV_ptr)(GLuint, GLenum, GLuint) = NULL;
GLAPI void (*glStencilStrokePathNV_ptr)(GLuint, GLint, GLuint) = NULL;
GLAPI void (*glStencilFillPathInstancedNV_ptr)(GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *) = NULL;
GLAPI void (*glStencilStrokePathInstancedNV_ptr)(GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *) = NULL;
GLAPI void (*glPathCoverDepthFuncNV_ptr)(GLenum) = NULL;
GLAPI void (*glCoverFillPathNV_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glCoverStrokePathNV_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glCoverFillPathInstancedNV_ptr)(GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glCoverStrokePathInstancedNV_ptr)(GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glGetPathParameterivNV_ptr)(GLuint, GLenum, GLint *) = NULL;
GLAPI void (*glGetPathParameterfvNV_ptr)(GLuint, GLenum, GLfloat *) = NULL;
GLAPI void (*glGetPathCommandsNV_ptr)(GLuint, GLubyte *) = NULL;
GLAPI void (*glGetPathCoordsNV_ptr)(GLuint, GLfloat *) = NULL;
GLAPI void (*glGetPathDashArrayNV_ptr)(GLuint, GLfloat *) = NULL;
GLAPI void (*glGetPathMetricsNV_ptr)(GLbitfield, GLsizei, GLenum, const void *, GLuint, GLsizei, GLfloat *) = NULL;
GLAPI void (*glGetPathMetricRangeNV_ptr)(GLbitfield, GLuint, GLsizei, GLsizei, GLfloat *) = NULL;
GLAPI void (*glGetPathSpacingNV_ptr)(GLenum, GLsizei, GLenum, const void *, GLuint, GLfloat, GLfloat, GLenum, GLfloat *) = NULL;
GLAPI GLboolean (*glIsPointInFillPathNV_ptr)(GLuint, GLuint, GLfloat, GLfloat) = NULL;
GLAPI GLboolean (*glIsPointInStrokePathNV_ptr)(GLuint, GLfloat, GLfloat) = NULL;
GLAPI GLfloat (*glGetPathLengthNV_ptr)(GLuint, GLsizei, GLsizei) = NULL;
GLAPI GLboolean (*glPointAlongPathNV_ptr)(GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat *) = NULL;
GLAPI void (*glMatrixLoad3x2fNV_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixLoad3x3fNV_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixLoadTranspose3x3fNV_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixMult3x2fNV_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixMult3x3fNV_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glMatrixMultTranspose3x3fNV_ptr)(GLenum, const GLfloat *) = NULL;
GLAPI void (*glStencilThenCoverFillPathNV_ptr)(GLuint, GLenum, GLuint, GLenum) = NULL;
GLAPI void (*glStencilThenCoverStrokePathNV_ptr)(GLuint, GLint, GLuint, GLenum) = NULL;
GLAPI void (*glStencilThenCoverFillPathInstancedNV_ptr)(GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI void (*glStencilThenCoverStrokePathInstancedNV_ptr)(GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *) = NULL;
GLAPI GLenum (*glPathGlyphIndexRangeNV_ptr)(GLenum, const void *, GLbitfield, GLuint, GLfloat, GLuint *) = NULL;
GLAPI GLenum (*glPathGlyphIndexArrayNV_ptr)(GLuint, GLenum, const void *, GLbitfield, GLuint, GLsizei, GLuint, GLfloat) = NULL;
GLAPI GLenum (*glPathMemoryGlyphIndexArrayNV_ptr)(GLuint, GLenum, GLsizeiptr, const void *, GLsizei, GLuint, GLsizei, GLuint, GLfloat) = NULL;
GLAPI void (*glProgramPathFragmentInputGenNV_ptr)(GLuint, GLint, GLenum, GLint, const GLfloat *) = NULL;
GLAPI void (*glGetProgramResourcefvNV_ptr)(GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLfloat *) = NULL;
GLAPI void (*glFramebufferSampleLocationsfvNV_ptr)(GLenum, GLuint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glNamedFramebufferSampleLocationsfvNV_ptr)(GLuint, GLuint, GLsizei, const GLfloat *) = NULL;
GLAPI void (*glResolveDepthValuesNV_ptr)() = NULL;
GLAPI void (*glScissorExclusiveNV_ptr)(GLint, GLint, GLsizei, GLsizei) = NULL;
GLAPI void (*glScissorExclusiveArrayvNV_ptr)(GLuint, GLsizei, const GLint *) = NULL;
GLAPI void (*glMakeBufferResidentNV_ptr)(GLenum, GLenum) = NULL;
GLAPI void (*glMakeBufferNonResidentNV_ptr)(GLenum) = NULL;
GLAPI GLboolean (*glIsBufferResidentNV_ptr)(GLenum) = NULL;
GLAPI void (*glMakeNamedBufferResidentNV_ptr)(GLuint, GLenum) = NULL;
GLAPI void (*glMakeNamedBufferNonResidentNV_ptr)(GLuint) = NULL;
GLAPI GLboolean (*glIsNamedBufferResidentNV_ptr)(GLuint) = NULL;
GLAPI void (*glGetBufferParameterui64vNV_ptr)(GLenum, GLenum, GLuint64EXT *) = NULL;
GLAPI void (*glGetNamedBufferParameterui64vNV_ptr)(GLuint, GLenum, GLuint64EXT *) = NULL;
GLAPI void (*glGetIntegerui64vNV_ptr)(GLenum, GLuint64EXT *) = NULL;
GLAPI void (*glUniformui64NV_ptr)(GLint, GLuint64EXT) = NULL;
GLAPI void (*glUniformui64vNV_ptr)(GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glGetUniformui64vNV_ptr)(GLuint, GLint, GLuint64EXT *) = NULL;
GLAPI void (*glProgramUniformui64NV_ptr)(GLuint, GLint, GLuint64EXT) = NULL;
GLAPI void (*glProgramUniformui64vNV_ptr)(GLuint, GLint, GLsizei, const GLuint64EXT *) = NULL;
GLAPI void (*glBindShadingRateImageNV_ptr)(GLuint) = NULL;
GLAPI void (*glGetShadingRateImagePaletteNV_ptr)(GLuint, GLuint, GLenum *) = NULL;
GLAPI void (*glGetShadingRateSampleLocationivNV_ptr)(GLenum, GLuint, GLuint, GLint *) = NULL;
GLAPI void (*glShadingRateImageBarrierNV_ptr)(GLboolean) = NULL;
GLAPI void (*glShadingRateImagePaletteNV_ptr)(GLuint, GLuint, GLsizei, const GLenum *) = NULL;
GLAPI void (*glShadingRateSampleOrderNV_ptr)(GLenum) = NULL;
GLAPI void (*glShadingRateSampleOrderCustomNV_ptr)(GLenum, GLuint, const GLint *) = NULL;
GLAPI void (*glTextureBarrierNV_ptr)() = NULL;
GLAPI void (*glVertexAttribL1i64NV_ptr)(GLuint, GLint64EXT) = NULL;
GLAPI void (*glVertexAttribL2i64NV_ptr)(GLuint, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glVertexAttribL3i64NV_ptr)(GLuint, GLint64EXT, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glVertexAttribL4i64NV_ptr)(GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT) = NULL;
GLAPI void (*glVertexAttribL1i64vNV_ptr)(GLuint, const GLint64EXT *) = NULL;
GLAPI void (*glVertexAttribL2i64vNV_ptr)(GLuint, const GLint64EXT *) = NULL;
GLAPI void (*glVertexAttribL3i64vNV_ptr)(GLuint, const GLint64EXT *) = NULL;
GLAPI void (*glVertexAttribL4i64vNV_ptr)(GLuint, const GLint64EXT *) = NULL;
GLAPI void (*glVertexAttribL1ui64NV_ptr)(GLuint, GLuint64EXT) = NULL;
GLAPI void (*glVertexAttribL2ui64NV_ptr)(GLuint, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glVertexAttribL3ui64NV_ptr)(GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glVertexAttribL4ui64NV_ptr)(GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT) = NULL;
GLAPI void (*glVertexAttribL1ui64vNV_ptr)(GLuint, const GLuint64EXT *) = NULL;
GLAPI void (*glVertexAttribL2ui64vNV_ptr)(GLuint, const GLuint64EXT *) = NULL;
GLAPI void (*glVertexAttribL3ui64vNV_ptr)(GLuint, const GLuint64EXT *) = NULL;
GLAPI void (*glVertexAttribL4ui64vNV_ptr)(GLuint, const GLuint64EXT *) = NULL;
GLAPI void (*glGetVertexAttribLi64vNV_ptr)(GLuint, GLenum, GLint64EXT *) = NULL;
GLAPI void (*glGetVertexAttribLui64vNV_ptr)(GLuint, GLenum, GLuint64EXT *) = NULL;
GLAPI void (*glVertexAttribLFormatNV_ptr)(GLuint, GLint, GLenum, GLsizei) = NULL;
GLAPI void (*glBufferAddressRangeNV_ptr)(GLenum, GLuint, GLuint64EXT, GLsizeiptr) = NULL;
GLAPI void (*glVertexFormatNV_ptr)(GLint, GLenum, GLsizei) = NULL;
GLAPI void (*glNormalFormatNV_ptr)(GLenum, GLsizei) = NULL;
GLAPI void (*glColorFormatNV_ptr)(GLint, GLenum, GLsizei) = NULL;
GLAPI void (*glIndexFormatNV_ptr)(GLenum, GLsizei) = NULL;
GLAPI void (*glTexCoordFormatNV_ptr)(GLint, GLenum, GLsizei) = NULL;
GLAPI void (*glEdgeFlagFormatNV_ptr)(GLsizei) = NULL;
GLAPI void (*glSecondaryColorFormatNV_ptr)(GLint, GLenum, GLsizei) = NULL;
GLAPI void (*glFogCoordFormatNV_ptr)(GLenum, GLsizei) = NULL;
GLAPI void (*glVertexAttribFormatNV_ptr)(GLuint, GLint, GLenum, GLboolean, GLsizei) = NULL;
GLAPI void (*glVertexAttribIFormatNV_ptr)(GLuint, GLint, GLenum, GLsizei) = NULL;
GLAPI void (*glGetIntegerui64i_vNV_ptr)(GLenum, GLuint, GLuint64EXT *) = NULL;
GLAPI void (*glViewportSwizzleNV_ptr)(GLuint, GLenum, GLenum, GLenum, GLenum) = NULL;
GLAPI void (*glFramebufferTextureMultiviewOVR_ptr)(GLenum, GLenum, GLuint, GLint, GLint, GLsizei) = NULL;
GLAPI void (*glNamedFramebufferTextureMultiviewOVR_ptr)(GLuint, GLenum, GLuint, GLint, GLint, GLsizei) = NULL;

GLAPI void APIENTRY paradox_opengl_load_functions()
{
	paradox_opengl_load_function("glCullFace", (void**)&glCullFace_ptr);
	paradox_opengl_load_function("glFrontFace", (void**)&glFrontFace_ptr);
	paradox_opengl_load_function("glHint", (void**)&glHint_ptr);
	paradox_opengl_load_function("glLineWidth", (void**)&glLineWidth_ptr);
	paradox_opengl_load_function("glPointSize", (void**)&glPointSize_ptr);
	paradox_opengl_load_function("glPolygonMode", (void**)&glPolygonMode_ptr);
	paradox_opengl_load_function("glScissor", (void**)&glScissor_ptr);
	paradox_opengl_load_function("glTexParameterf", (void**)&glTexParameterf_ptr);
	paradox_opengl_load_function("glTexParameterfv", (void**)&glTexParameterfv_ptr);
	paradox_opengl_load_function("glTexParameteri", (void**)&glTexParameteri_ptr);
	paradox_opengl_load_function("glTexParameteriv", (void**)&glTexParameteriv_ptr);
	paradox_opengl_load_function("glTexImage1D", (void**)&glTexImage1D_ptr);
	paradox_opengl_load_function("glTexImage2D", (void**)&glTexImage2D_ptr);
	paradox_opengl_load_function("glDrawBuffer", (void**)&glDrawBuffer_ptr);
	paradox_opengl_load_function("glClear", (void**)&glClear_ptr);
	paradox_opengl_load_function("glClearColor", (void**)&glClearColor_ptr);
	paradox_opengl_load_function("glClearStencil", (void**)&glClearStencil_ptr);
	paradox_opengl_load_function("glClearDepth", (void**)&glClearDepth_ptr);
	paradox_opengl_load_function("glStencilMask", (void**)&glStencilMask_ptr);
	paradox_opengl_load_function("glColorMask", (void**)&glColorMask_ptr);
	paradox_opengl_load_function("glDepthMask", (void**)&glDepthMask_ptr);
	paradox_opengl_load_function("glDisable", (void**)&glDisable_ptr);
	paradox_opengl_load_function("glEnable", (void**)&glEnable_ptr);
	paradox_opengl_load_function("glFinish", (void**)&glFinish_ptr);
	paradox_opengl_load_function("glFlush", (void**)&glFlush_ptr);
	paradox_opengl_load_function("glBlendFunc", (void**)&glBlendFunc_ptr);
	paradox_opengl_load_function("glLogicOp", (void**)&glLogicOp_ptr);
	paradox_opengl_load_function("glStencilFunc", (void**)&glStencilFunc_ptr);
	paradox_opengl_load_function("glStencilOp", (void**)&glStencilOp_ptr);
	paradox_opengl_load_function("glDepthFunc", (void**)&glDepthFunc_ptr);
	paradox_opengl_load_function("glPixelStoref", (void**)&glPixelStoref_ptr);
	paradox_opengl_load_function("glPixelStorei", (void**)&glPixelStorei_ptr);
	paradox_opengl_load_function("glReadBuffer", (void**)&glReadBuffer_ptr);
	paradox_opengl_load_function("glReadPixels", (void**)&glReadPixels_ptr);
	paradox_opengl_load_function("glGetBooleanv", (void**)&glGetBooleanv_ptr);
	paradox_opengl_load_function("glGetDoublev", (void**)&glGetDoublev_ptr);
	paradox_opengl_load_function("glGetError", (void**)&glGetError_ptr);
	paradox_opengl_load_function("glGetFloatv", (void**)&glGetFloatv_ptr);
	paradox_opengl_load_function("glGetIntegerv", (void**)&glGetIntegerv_ptr);
	paradox_opengl_load_function("glGetString", (void**)&glGetString_ptr);
	paradox_opengl_load_function("glGetTexImage", (void**)&glGetTexImage_ptr);
	paradox_opengl_load_function("glGetTexParameterfv", (void**)&glGetTexParameterfv_ptr);
	paradox_opengl_load_function("glGetTexParameteriv", (void**)&glGetTexParameteriv_ptr);
	paradox_opengl_load_function("glGetTexLevelParameterfv", (void**)&glGetTexLevelParameterfv_ptr);
	paradox_opengl_load_function("glGetTexLevelParameteriv", (void**)&glGetTexLevelParameteriv_ptr);
	paradox_opengl_load_function("glIsEnabled", (void**)&glIsEnabled_ptr);
	paradox_opengl_load_function("glDepthRange", (void**)&glDepthRange_ptr);
	paradox_opengl_load_function("glViewport", (void**)&glViewport_ptr);
	paradox_opengl_load_function("glDrawArrays", (void**)&glDrawArrays_ptr);
	paradox_opengl_load_function("glDrawElements", (void**)&glDrawElements_ptr);
	paradox_opengl_load_function("glGetPointerv", (void**)&glGetPointerv_ptr);
	paradox_opengl_load_function("glPolygonOffset", (void**)&glPolygonOffset_ptr);
	paradox_opengl_load_function("glCopyTexImage1D", (void**)&glCopyTexImage1D_ptr);
	paradox_opengl_load_function("glCopyTexImage2D", (void**)&glCopyTexImage2D_ptr);
	paradox_opengl_load_function("glCopyTexSubImage1D", (void**)&glCopyTexSubImage1D_ptr);
	paradox_opengl_load_function("glCopyTexSubImage2D", (void**)&glCopyTexSubImage2D_ptr);
	paradox_opengl_load_function("glTexSubImage1D", (void**)&glTexSubImage1D_ptr);
	paradox_opengl_load_function("glTexSubImage2D", (void**)&glTexSubImage2D_ptr);
	paradox_opengl_load_function("glBindTexture", (void**)&glBindTexture_ptr);
	paradox_opengl_load_function("glDeleteTextures", (void**)&glDeleteTextures_ptr);
	paradox_opengl_load_function("glGenTextures", (void**)&glGenTextures_ptr);
	paradox_opengl_load_function("glIsTexture", (void**)&glIsTexture_ptr);
	paradox_opengl_load_function("glDrawRangeElements", (void**)&glDrawRangeElements_ptr);
	paradox_opengl_load_function("glTexImage3D", (void**)&glTexImage3D_ptr);
	paradox_opengl_load_function("glTexSubImage3D", (void**)&glTexSubImage3D_ptr);
	paradox_opengl_load_function("glCopyTexSubImage3D", (void**)&glCopyTexSubImage3D_ptr);
	paradox_opengl_load_function("glActiveTexture", (void**)&glActiveTexture_ptr);
	paradox_opengl_load_function("glSampleCoverage", (void**)&glSampleCoverage_ptr);
	paradox_opengl_load_function("glCompressedTexImage3D", (void**)&glCompressedTexImage3D_ptr);
	paradox_opengl_load_function("glCompressedTexImage2D", (void**)&glCompressedTexImage2D_ptr);
	paradox_opengl_load_function("glCompressedTexImage1D", (void**)&glCompressedTexImage1D_ptr);
	paradox_opengl_load_function("glCompressedTexSubImage3D", (void**)&glCompressedTexSubImage3D_ptr);
	paradox_opengl_load_function("glCompressedTexSubImage2D", (void**)&glCompressedTexSubImage2D_ptr);
	paradox_opengl_load_function("glCompressedTexSubImage1D", (void**)&glCompressedTexSubImage1D_ptr);
	paradox_opengl_load_function("glGetCompressedTexImage", (void**)&glGetCompressedTexImage_ptr);
	paradox_opengl_load_function("glBlendFuncSeparate", (void**)&glBlendFuncSeparate_ptr);
	paradox_opengl_load_function("glMultiDrawArrays", (void**)&glMultiDrawArrays_ptr);
	paradox_opengl_load_function("glMultiDrawElements", (void**)&glMultiDrawElements_ptr);
	paradox_opengl_load_function("glPointParameterf", (void**)&glPointParameterf_ptr);
	paradox_opengl_load_function("glPointParameterfv", (void**)&glPointParameterfv_ptr);
	paradox_opengl_load_function("glPointParameteri", (void**)&glPointParameteri_ptr);
	paradox_opengl_load_function("glPointParameteriv", (void**)&glPointParameteriv_ptr);
	paradox_opengl_load_function("glBlendColor", (void**)&glBlendColor_ptr);
	paradox_opengl_load_function("glBlendEquation", (void**)&glBlendEquation_ptr);
	paradox_opengl_load_function("glGenQueries", (void**)&glGenQueries_ptr);
	paradox_opengl_load_function("glDeleteQueries", (void**)&glDeleteQueries_ptr);
	paradox_opengl_load_function("glIsQuery", (void**)&glIsQuery_ptr);
	paradox_opengl_load_function("glBeginQuery", (void**)&glBeginQuery_ptr);
	paradox_opengl_load_function("glEndQuery", (void**)&glEndQuery_ptr);
	paradox_opengl_load_function("glGetQueryiv", (void**)&glGetQueryiv_ptr);
	paradox_opengl_load_function("glGetQueryObjectiv", (void**)&glGetQueryObjectiv_ptr);
	paradox_opengl_load_function("glGetQueryObjectuiv", (void**)&glGetQueryObjectuiv_ptr);
	paradox_opengl_load_function("glBindBuffer", (void**)&glBindBuffer_ptr);
	paradox_opengl_load_function("glDeleteBuffers", (void**)&glDeleteBuffers_ptr);
	paradox_opengl_load_function("glGenBuffers", (void**)&glGenBuffers_ptr);
	paradox_opengl_load_function("glIsBuffer", (void**)&glIsBuffer_ptr);
	paradox_opengl_load_function("glBufferData", (void**)&glBufferData_ptr);
	paradox_opengl_load_function("glBufferSubData", (void**)&glBufferSubData_ptr);
	paradox_opengl_load_function("glGetBufferSubData", (void**)&glGetBufferSubData_ptr);
	paradox_opengl_load_function("glMapBuffer", (void**)&glMapBuffer_ptr);
	paradox_opengl_load_function("glUnmapBuffer", (void**)&glUnmapBuffer_ptr);
	paradox_opengl_load_function("glGetBufferParameteriv", (void**)&glGetBufferParameteriv_ptr);
	paradox_opengl_load_function("glGetBufferPointerv", (void**)&glGetBufferPointerv_ptr);
	paradox_opengl_load_function("glBlendEquationSeparate", (void**)&glBlendEquationSeparate_ptr);
	paradox_opengl_load_function("glDrawBuffers", (void**)&glDrawBuffers_ptr);
	paradox_opengl_load_function("glStencilOpSeparate", (void**)&glStencilOpSeparate_ptr);
	paradox_opengl_load_function("glStencilFuncSeparate", (void**)&glStencilFuncSeparate_ptr);
	paradox_opengl_load_function("glStencilMaskSeparate", (void**)&glStencilMaskSeparate_ptr);
	paradox_opengl_load_function("glAttachShader", (void**)&glAttachShader_ptr);
	paradox_opengl_load_function("glBindAttribLocation", (void**)&glBindAttribLocation_ptr);
	paradox_opengl_load_function("glCompileShader", (void**)&glCompileShader_ptr);
	paradox_opengl_load_function("glCreateProgram", (void**)&glCreateProgram_ptr);
	paradox_opengl_load_function("glCreateShader", (void**)&glCreateShader_ptr);
	paradox_opengl_load_function("glDeleteProgram", (void**)&glDeleteProgram_ptr);
	paradox_opengl_load_function("glDeleteShader", (void**)&glDeleteShader_ptr);
	paradox_opengl_load_function("glDetachShader", (void**)&glDetachShader_ptr);
	paradox_opengl_load_function("glDisableVertexAttribArray", (void**)&glDisableVertexAttribArray_ptr);
	paradox_opengl_load_function("glEnableVertexAttribArray", (void**)&glEnableVertexAttribArray_ptr);
	paradox_opengl_load_function("glGetActiveAttrib", (void**)&glGetActiveAttrib_ptr);
	paradox_opengl_load_function("glGetActiveUniform", (void**)&glGetActiveUniform_ptr);
	paradox_opengl_load_function("glGetAttachedShaders", (void**)&glGetAttachedShaders_ptr);
	paradox_opengl_load_function("glGetAttribLocation", (void**)&glGetAttribLocation_ptr);
	paradox_opengl_load_function("glGetProgramiv", (void**)&glGetProgramiv_ptr);
	paradox_opengl_load_function("glGetProgramInfoLog", (void**)&glGetProgramInfoLog_ptr);
	paradox_opengl_load_function("glGetShaderiv", (void**)&glGetShaderiv_ptr);
	paradox_opengl_load_function("glGetShaderInfoLog", (void**)&glGetShaderInfoLog_ptr);
	paradox_opengl_load_function("glGetShaderSource", (void**)&glGetShaderSource_ptr);
	paradox_opengl_load_function("glGetUniformLocation", (void**)&glGetUniformLocation_ptr);
	paradox_opengl_load_function("glGetUniformfv", (void**)&glGetUniformfv_ptr);
	paradox_opengl_load_function("glGetUniformiv", (void**)&glGetUniformiv_ptr);
	paradox_opengl_load_function("glGetVertexAttribdv", (void**)&glGetVertexAttribdv_ptr);
	paradox_opengl_load_function("glGetVertexAttribfv", (void**)&glGetVertexAttribfv_ptr);
	paradox_opengl_load_function("glGetVertexAttribiv", (void**)&glGetVertexAttribiv_ptr);
	paradox_opengl_load_function("glGetVertexAttribPointerv", (void**)&glGetVertexAttribPointerv_ptr);
	paradox_opengl_load_function("glIsProgram", (void**)&glIsProgram_ptr);
	paradox_opengl_load_function("glIsShader", (void**)&glIsShader_ptr);
	paradox_opengl_load_function("glLinkProgram", (void**)&glLinkProgram_ptr);
	paradox_opengl_load_function("glShaderSource", (void**)&glShaderSource_ptr);
	paradox_opengl_load_function("glUseProgram", (void**)&glUseProgram_ptr);
	paradox_opengl_load_function("glUniform1f", (void**)&glUniform1f_ptr);
	paradox_opengl_load_function("glUniform2f", (void**)&glUniform2f_ptr);
	paradox_opengl_load_function("glUniform3f", (void**)&glUniform3f_ptr);
	paradox_opengl_load_function("glUniform4f", (void**)&glUniform4f_ptr);
	paradox_opengl_load_function("glUniform1i", (void**)&glUniform1i_ptr);
	paradox_opengl_load_function("glUniform2i", (void**)&glUniform2i_ptr);
	paradox_opengl_load_function("glUniform3i", (void**)&glUniform3i_ptr);
	paradox_opengl_load_function("glUniform4i", (void**)&glUniform4i_ptr);
	paradox_opengl_load_function("glUniform1fv", (void**)&glUniform1fv_ptr);
	paradox_opengl_load_function("glUniform2fv", (void**)&glUniform2fv_ptr);
	paradox_opengl_load_function("glUniform3fv", (void**)&glUniform3fv_ptr);
	paradox_opengl_load_function("glUniform4fv", (void**)&glUniform4fv_ptr);
	paradox_opengl_load_function("glUniform1iv", (void**)&glUniform1iv_ptr);
	paradox_opengl_load_function("glUniform2iv", (void**)&glUniform2iv_ptr);
	paradox_opengl_load_function("glUniform3iv", (void**)&glUniform3iv_ptr);
	paradox_opengl_load_function("glUniform4iv", (void**)&glUniform4iv_ptr);
	paradox_opengl_load_function("glUniformMatrix2fv", (void**)&glUniformMatrix2fv_ptr);
	paradox_opengl_load_function("glUniformMatrix3fv", (void**)&glUniformMatrix3fv_ptr);
	paradox_opengl_load_function("glUniformMatrix4fv", (void**)&glUniformMatrix4fv_ptr);
	paradox_opengl_load_function("glValidateProgram", (void**)&glValidateProgram_ptr);
	paradox_opengl_load_function("glVertexAttrib1d", (void**)&glVertexAttrib1d_ptr);
	paradox_opengl_load_function("glVertexAttrib1dv", (void**)&glVertexAttrib1dv_ptr);
	paradox_opengl_load_function("glVertexAttrib1f", (void**)&glVertexAttrib1f_ptr);
	paradox_opengl_load_function("glVertexAttrib1fv", (void**)&glVertexAttrib1fv_ptr);
	paradox_opengl_load_function("glVertexAttrib1s", (void**)&glVertexAttrib1s_ptr);
	paradox_opengl_load_function("glVertexAttrib1sv", (void**)&glVertexAttrib1sv_ptr);
	paradox_opengl_load_function("glVertexAttrib2d", (void**)&glVertexAttrib2d_ptr);
	paradox_opengl_load_function("glVertexAttrib2dv", (void**)&glVertexAttrib2dv_ptr);
	paradox_opengl_load_function("glVertexAttrib2f", (void**)&glVertexAttrib2f_ptr);
	paradox_opengl_load_function("glVertexAttrib2fv", (void**)&glVertexAttrib2fv_ptr);
	paradox_opengl_load_function("glVertexAttrib2s", (void**)&glVertexAttrib2s_ptr);
	paradox_opengl_load_function("glVertexAttrib2sv", (void**)&glVertexAttrib2sv_ptr);
	paradox_opengl_load_function("glVertexAttrib3d", (void**)&glVertexAttrib3d_ptr);
	paradox_opengl_load_function("glVertexAttrib3dv", (void**)&glVertexAttrib3dv_ptr);
	paradox_opengl_load_function("glVertexAttrib3f", (void**)&glVertexAttrib3f_ptr);
	paradox_opengl_load_function("glVertexAttrib3fv", (void**)&glVertexAttrib3fv_ptr);
	paradox_opengl_load_function("glVertexAttrib3s", (void**)&glVertexAttrib3s_ptr);
	paradox_opengl_load_function("glVertexAttrib3sv", (void**)&glVertexAttrib3sv_ptr);
	paradox_opengl_load_function("glVertexAttrib4Nbv", (void**)&glVertexAttrib4Nbv_ptr);
	paradox_opengl_load_function("glVertexAttrib4Niv", (void**)&glVertexAttrib4Niv_ptr);
	paradox_opengl_load_function("glVertexAttrib4Nsv", (void**)&glVertexAttrib4Nsv_ptr);
	paradox_opengl_load_function("glVertexAttrib4Nub", (void**)&glVertexAttrib4Nub_ptr);
	paradox_opengl_load_function("glVertexAttrib4Nubv", (void**)&glVertexAttrib4Nubv_ptr);
	paradox_opengl_load_function("glVertexAttrib4Nuiv", (void**)&glVertexAttrib4Nuiv_ptr);
	paradox_opengl_load_function("glVertexAttrib4Nusv", (void**)&glVertexAttrib4Nusv_ptr);
	paradox_opengl_load_function("glVertexAttrib4bv", (void**)&glVertexAttrib4bv_ptr);
	paradox_opengl_load_function("glVertexAttrib4d", (void**)&glVertexAttrib4d_ptr);
	paradox_opengl_load_function("glVertexAttrib4dv", (void**)&glVertexAttrib4dv_ptr);
	paradox_opengl_load_function("glVertexAttrib4f", (void**)&glVertexAttrib4f_ptr);
	paradox_opengl_load_function("glVertexAttrib4fv", (void**)&glVertexAttrib4fv_ptr);
	paradox_opengl_load_function("glVertexAttrib4iv", (void**)&glVertexAttrib4iv_ptr);
	paradox_opengl_load_function("glVertexAttrib4s", (void**)&glVertexAttrib4s_ptr);
	paradox_opengl_load_function("glVertexAttrib4sv", (void**)&glVertexAttrib4sv_ptr);
	paradox_opengl_load_function("glVertexAttrib4ubv", (void**)&glVertexAttrib4ubv_ptr);
	paradox_opengl_load_function("glVertexAttrib4uiv", (void**)&glVertexAttrib4uiv_ptr);
	paradox_opengl_load_function("glVertexAttrib4usv", (void**)&glVertexAttrib4usv_ptr);
	paradox_opengl_load_function("glVertexAttribPointer", (void**)&glVertexAttribPointer_ptr);
	paradox_opengl_load_function("glUniformMatrix2x3fv", (void**)&glUniformMatrix2x3fv_ptr);
	paradox_opengl_load_function("glUniformMatrix3x2fv", (void**)&glUniformMatrix3x2fv_ptr);
	paradox_opengl_load_function("glUniformMatrix2x4fv", (void**)&glUniformMatrix2x4fv_ptr);
	paradox_opengl_load_function("glUniformMatrix4x2fv", (void**)&glUniformMatrix4x2fv_ptr);
	paradox_opengl_load_function("glUniformMatrix3x4fv", (void**)&glUniformMatrix3x4fv_ptr);
	paradox_opengl_load_function("glUniformMatrix4x3fv", (void**)&glUniformMatrix4x3fv_ptr);
	paradox_opengl_load_function("glColorMaski", (void**)&glColorMaski_ptr);
	paradox_opengl_load_function("glGetBooleani_v", (void**)&glGetBooleani_v_ptr);
	paradox_opengl_load_function("glGetIntegeri_v", (void**)&glGetIntegeri_v_ptr);
	paradox_opengl_load_function("glEnablei", (void**)&glEnablei_ptr);
	paradox_opengl_load_function("glDisablei", (void**)&glDisablei_ptr);
	paradox_opengl_load_function("glIsEnabledi", (void**)&glIsEnabledi_ptr);
	paradox_opengl_load_function("glBeginTransformFeedback", (void**)&glBeginTransformFeedback_ptr);
	paradox_opengl_load_function("glEndTransformFeedback", (void**)&glEndTransformFeedback_ptr);
	paradox_opengl_load_function("glBindBufferRange", (void**)&glBindBufferRange_ptr);
	paradox_opengl_load_function("glBindBufferBase", (void**)&glBindBufferBase_ptr);
	paradox_opengl_load_function("glTransformFeedbackVaryings", (void**)&glTransformFeedbackVaryings_ptr);
	paradox_opengl_load_function("glGetTransformFeedbackVarying", (void**)&glGetTransformFeedbackVarying_ptr);
	paradox_opengl_load_function("glClampColor", (void**)&glClampColor_ptr);
	paradox_opengl_load_function("glBeginConditionalRender", (void**)&glBeginConditionalRender_ptr);
	paradox_opengl_load_function("glEndConditionalRender", (void**)&glEndConditionalRender_ptr);
	paradox_opengl_load_function("glVertexAttribIPointer", (void**)&glVertexAttribIPointer_ptr);
	paradox_opengl_load_function("glGetVertexAttribIiv", (void**)&glGetVertexAttribIiv_ptr);
	paradox_opengl_load_function("glGetVertexAttribIuiv", (void**)&glGetVertexAttribIuiv_ptr);
	paradox_opengl_load_function("glVertexAttribI1i", (void**)&glVertexAttribI1i_ptr);
	paradox_opengl_load_function("glVertexAttribI2i", (void**)&glVertexAttribI2i_ptr);
	paradox_opengl_load_function("glVertexAttribI3i", (void**)&glVertexAttribI3i_ptr);
	paradox_opengl_load_function("glVertexAttribI4i", (void**)&glVertexAttribI4i_ptr);
	paradox_opengl_load_function("glVertexAttribI1ui", (void**)&glVertexAttribI1ui_ptr);
	paradox_opengl_load_function("glVertexAttribI2ui", (void**)&glVertexAttribI2ui_ptr);
	paradox_opengl_load_function("glVertexAttribI3ui", (void**)&glVertexAttribI3ui_ptr);
	paradox_opengl_load_function("glVertexAttribI4ui", (void**)&glVertexAttribI4ui_ptr);
	paradox_opengl_load_function("glVertexAttribI1iv", (void**)&glVertexAttribI1iv_ptr);
	paradox_opengl_load_function("glVertexAttribI2iv", (void**)&glVertexAttribI2iv_ptr);
	paradox_opengl_load_function("glVertexAttribI3iv", (void**)&glVertexAttribI3iv_ptr);
	paradox_opengl_load_function("glVertexAttribI4iv", (void**)&glVertexAttribI4iv_ptr);
	paradox_opengl_load_function("glVertexAttribI1uiv", (void**)&glVertexAttribI1uiv_ptr);
	paradox_opengl_load_function("glVertexAttribI2uiv", (void**)&glVertexAttribI2uiv_ptr);
	paradox_opengl_load_function("glVertexAttribI3uiv", (void**)&glVertexAttribI3uiv_ptr);
	paradox_opengl_load_function("glVertexAttribI4uiv", (void**)&glVertexAttribI4uiv_ptr);
	paradox_opengl_load_function("glVertexAttribI4bv", (void**)&glVertexAttribI4bv_ptr);
	paradox_opengl_load_function("glVertexAttribI4sv", (void**)&glVertexAttribI4sv_ptr);
	paradox_opengl_load_function("glVertexAttribI4ubv", (void**)&glVertexAttribI4ubv_ptr);
	paradox_opengl_load_function("glVertexAttribI4usv", (void**)&glVertexAttribI4usv_ptr);
	paradox_opengl_load_function("glGetUniformuiv", (void**)&glGetUniformuiv_ptr);
	paradox_opengl_load_function("glBindFragDataLocation", (void**)&glBindFragDataLocation_ptr);
	paradox_opengl_load_function("glGetFragDataLocation", (void**)&glGetFragDataLocation_ptr);
	paradox_opengl_load_function("glUniform1ui", (void**)&glUniform1ui_ptr);
	paradox_opengl_load_function("glUniform2ui", (void**)&glUniform2ui_ptr);
	paradox_opengl_load_function("glUniform3ui", (void**)&glUniform3ui_ptr);
	paradox_opengl_load_function("glUniform4ui", (void**)&glUniform4ui_ptr);
	paradox_opengl_load_function("glUniform1uiv", (void**)&glUniform1uiv_ptr);
	paradox_opengl_load_function("glUniform2uiv", (void**)&glUniform2uiv_ptr);
	paradox_opengl_load_function("glUniform3uiv", (void**)&glUniform3uiv_ptr);
	paradox_opengl_load_function("glUniform4uiv", (void**)&glUniform4uiv_ptr);
	paradox_opengl_load_function("glTexParameterIiv", (void**)&glTexParameterIiv_ptr);
	paradox_opengl_load_function("glTexParameterIuiv", (void**)&glTexParameterIuiv_ptr);
	paradox_opengl_load_function("glGetTexParameterIiv", (void**)&glGetTexParameterIiv_ptr);
	paradox_opengl_load_function("glGetTexParameterIuiv", (void**)&glGetTexParameterIuiv_ptr);
	paradox_opengl_load_function("glClearBufferiv", (void**)&glClearBufferiv_ptr);
	paradox_opengl_load_function("glClearBufferuiv", (void**)&glClearBufferuiv_ptr);
	paradox_opengl_load_function("glClearBufferfv", (void**)&glClearBufferfv_ptr);
	paradox_opengl_load_function("glClearBufferfi", (void**)&glClearBufferfi_ptr);
	paradox_opengl_load_function("glGetStringi", (void**)&glGetStringi_ptr);
	paradox_opengl_load_function("glIsRenderbuffer", (void**)&glIsRenderbuffer_ptr);
	paradox_opengl_load_function("glBindRenderbuffer", (void**)&glBindRenderbuffer_ptr);
	paradox_opengl_load_function("glDeleteRenderbuffers", (void**)&glDeleteRenderbuffers_ptr);
	paradox_opengl_load_function("glGenRenderbuffers", (void**)&glGenRenderbuffers_ptr);
	paradox_opengl_load_function("glRenderbufferStorage", (void**)&glRenderbufferStorage_ptr);
	paradox_opengl_load_function("glGetRenderbufferParameteriv", (void**)&glGetRenderbufferParameteriv_ptr);
	paradox_opengl_load_function("glIsFramebuffer", (void**)&glIsFramebuffer_ptr);
	paradox_opengl_load_function("glBindFramebuffer", (void**)&glBindFramebuffer_ptr);
	paradox_opengl_load_function("glDeleteFramebuffers", (void**)&glDeleteFramebuffers_ptr);
	paradox_opengl_load_function("glGenFramebuffers", (void**)&glGenFramebuffers_ptr);
	paradox_opengl_load_function("glCheckFramebufferStatus", (void**)&glCheckFramebufferStatus_ptr);
	paradox_opengl_load_function("glFramebufferTexture1D", (void**)&glFramebufferTexture1D_ptr);
	paradox_opengl_load_function("glFramebufferTexture2D", (void**)&glFramebufferTexture2D_ptr);
	paradox_opengl_load_function("glFramebufferTexture3D", (void**)&glFramebufferTexture3D_ptr);
	paradox_opengl_load_function("glFramebufferRenderbuffer", (void**)&glFramebufferRenderbuffer_ptr);
	paradox_opengl_load_function("glGetFramebufferAttachmentParameteriv", (void**)&glGetFramebufferAttachmentParameteriv_ptr);
	paradox_opengl_load_function("glGenerateMipmap", (void**)&glGenerateMipmap_ptr);
	paradox_opengl_load_function("glBlitFramebuffer", (void**)&glBlitFramebuffer_ptr);
	paradox_opengl_load_function("glRenderbufferStorageMultisample", (void**)&glRenderbufferStorageMultisample_ptr);
	paradox_opengl_load_function("glFramebufferTextureLayer", (void**)&glFramebufferTextureLayer_ptr);
	paradox_opengl_load_function("glMapBufferRange", (void**)&glMapBufferRange_ptr);
	paradox_opengl_load_function("glFlushMappedBufferRange", (void**)&glFlushMappedBufferRange_ptr);
	paradox_opengl_load_function("glBindVertexArray", (void**)&glBindVertexArray_ptr);
	paradox_opengl_load_function("glDeleteVertexArrays", (void**)&glDeleteVertexArrays_ptr);
	paradox_opengl_load_function("glGenVertexArrays", (void**)&glGenVertexArrays_ptr);
	paradox_opengl_load_function("glIsVertexArray", (void**)&glIsVertexArray_ptr);
	paradox_opengl_load_function("glDrawArraysInstanced", (void**)&glDrawArraysInstanced_ptr);
	paradox_opengl_load_function("glDrawElementsInstanced", (void**)&glDrawElementsInstanced_ptr);
	paradox_opengl_load_function("glTexBuffer", (void**)&glTexBuffer_ptr);
	paradox_opengl_load_function("glPrimitiveRestartIndex", (void**)&glPrimitiveRestartIndex_ptr);
	paradox_opengl_load_function("glCopyBufferSubData", (void**)&glCopyBufferSubData_ptr);
	paradox_opengl_load_function("glGetUniformIndices", (void**)&glGetUniformIndices_ptr);
	paradox_opengl_load_function("glGetActiveUniformsiv", (void**)&glGetActiveUniformsiv_ptr);
	paradox_opengl_load_function("glGetActiveUniformName", (void**)&glGetActiveUniformName_ptr);
	paradox_opengl_load_function("glGetUniformBlockIndex", (void**)&glGetUniformBlockIndex_ptr);
	paradox_opengl_load_function("glGetActiveUniformBlockiv", (void**)&glGetActiveUniformBlockiv_ptr);
	paradox_opengl_load_function("glGetActiveUniformBlockName", (void**)&glGetActiveUniformBlockName_ptr);
	paradox_opengl_load_function("glUniformBlockBinding", (void**)&glUniformBlockBinding_ptr);
	paradox_opengl_load_function("glDrawElementsBaseVertex", (void**)&glDrawElementsBaseVertex_ptr);
	paradox_opengl_load_function("glDrawRangeElementsBaseVertex", (void**)&glDrawRangeElementsBaseVertex_ptr);
	paradox_opengl_load_function("glDrawElementsInstancedBaseVertex", (void**)&glDrawElementsInstancedBaseVertex_ptr);
	paradox_opengl_load_function("glMultiDrawElementsBaseVertex", (void**)&glMultiDrawElementsBaseVertex_ptr);
	paradox_opengl_load_function("glProvokingVertex", (void**)&glProvokingVertex_ptr);
	paradox_opengl_load_function("glFenceSync", (void**)&glFenceSync_ptr);
	paradox_opengl_load_function("glIsSync", (void**)&glIsSync_ptr);
	paradox_opengl_load_function("glDeleteSync", (void**)&glDeleteSync_ptr);
	paradox_opengl_load_function("glClientWaitSync", (void**)&glClientWaitSync_ptr);
	paradox_opengl_load_function("glWaitSync", (void**)&glWaitSync_ptr);
	paradox_opengl_load_function("glGetInteger64v", (void**)&glGetInteger64v_ptr);
	paradox_opengl_load_function("glGetSynciv", (void**)&glGetSynciv_ptr);
	paradox_opengl_load_function("glGetInteger64i_v", (void**)&glGetInteger64i_v_ptr);
	paradox_opengl_load_function("glGetBufferParameteri64v", (void**)&glGetBufferParameteri64v_ptr);
	paradox_opengl_load_function("glFramebufferTexture", (void**)&glFramebufferTexture_ptr);
	paradox_opengl_load_function("glTexImage2DMultisample", (void**)&glTexImage2DMultisample_ptr);
	paradox_opengl_load_function("glTexImage3DMultisample", (void**)&glTexImage3DMultisample_ptr);
	paradox_opengl_load_function("glGetMultisamplefv", (void**)&glGetMultisamplefv_ptr);
	paradox_opengl_load_function("glSampleMaski", (void**)&glSampleMaski_ptr);
	paradox_opengl_load_function("glBindFragDataLocationIndexed", (void**)&glBindFragDataLocationIndexed_ptr);
	paradox_opengl_load_function("glGetFragDataIndex", (void**)&glGetFragDataIndex_ptr);
	paradox_opengl_load_function("glGenSamplers", (void**)&glGenSamplers_ptr);
	paradox_opengl_load_function("glDeleteSamplers", (void**)&glDeleteSamplers_ptr);
	paradox_opengl_load_function("glIsSampler", (void**)&glIsSampler_ptr);
	paradox_opengl_load_function("glBindSampler", (void**)&glBindSampler_ptr);
	paradox_opengl_load_function("glSamplerParameteri", (void**)&glSamplerParameteri_ptr);
	paradox_opengl_load_function("glSamplerParameteriv", (void**)&glSamplerParameteriv_ptr);
	paradox_opengl_load_function("glSamplerParameterf", (void**)&glSamplerParameterf_ptr);
	paradox_opengl_load_function("glSamplerParameterfv", (void**)&glSamplerParameterfv_ptr);
	paradox_opengl_load_function("glSamplerParameterIiv", (void**)&glSamplerParameterIiv_ptr);
	paradox_opengl_load_function("glSamplerParameterIuiv", (void**)&glSamplerParameterIuiv_ptr);
	paradox_opengl_load_function("glGetSamplerParameteriv", (void**)&glGetSamplerParameteriv_ptr);
	paradox_opengl_load_function("glGetSamplerParameterIiv", (void**)&glGetSamplerParameterIiv_ptr);
	paradox_opengl_load_function("glGetSamplerParameterfv", (void**)&glGetSamplerParameterfv_ptr);
	paradox_opengl_load_function("glGetSamplerParameterIuiv", (void**)&glGetSamplerParameterIuiv_ptr);
	paradox_opengl_load_function("glQueryCounter", (void**)&glQueryCounter_ptr);
	paradox_opengl_load_function("glGetQueryObjecti64v", (void**)&glGetQueryObjecti64v_ptr);
	paradox_opengl_load_function("glGetQueryObjectui64v", (void**)&glGetQueryObjectui64v_ptr);
	paradox_opengl_load_function("glVertexAttribDivisor", (void**)&glVertexAttribDivisor_ptr);
	paradox_opengl_load_function("glVertexAttribP1ui", (void**)&glVertexAttribP1ui_ptr);
	paradox_opengl_load_function("glVertexAttribP1uiv", (void**)&glVertexAttribP1uiv_ptr);
	paradox_opengl_load_function("glVertexAttribP2ui", (void**)&glVertexAttribP2ui_ptr);
	paradox_opengl_load_function("glVertexAttribP2uiv", (void**)&glVertexAttribP2uiv_ptr);
	paradox_opengl_load_function("glVertexAttribP3ui", (void**)&glVertexAttribP3ui_ptr);
	paradox_opengl_load_function("glVertexAttribP3uiv", (void**)&glVertexAttribP3uiv_ptr);
	paradox_opengl_load_function("glVertexAttribP4ui", (void**)&glVertexAttribP4ui_ptr);
	paradox_opengl_load_function("glVertexAttribP4uiv", (void**)&glVertexAttribP4uiv_ptr);
	paradox_opengl_load_function("glMinSampleShading", (void**)&glMinSampleShading_ptr);
	paradox_opengl_load_function("glBlendEquationi", (void**)&glBlendEquationi_ptr);
	paradox_opengl_load_function("glBlendEquationSeparatei", (void**)&glBlendEquationSeparatei_ptr);
	paradox_opengl_load_function("glBlendFunci", (void**)&glBlendFunci_ptr);
	paradox_opengl_load_function("glBlendFuncSeparatei", (void**)&glBlendFuncSeparatei_ptr);
	paradox_opengl_load_function("glDrawArraysIndirect", (void**)&glDrawArraysIndirect_ptr);
	paradox_opengl_load_function("glDrawElementsIndirect", (void**)&glDrawElementsIndirect_ptr);
	paradox_opengl_load_function("glUniform1d", (void**)&glUniform1d_ptr);
	paradox_opengl_load_function("glUniform2d", (void**)&glUniform2d_ptr);
	paradox_opengl_load_function("glUniform3d", (void**)&glUniform3d_ptr);
	paradox_opengl_load_function("glUniform4d", (void**)&glUniform4d_ptr);
	paradox_opengl_load_function("glUniform1dv", (void**)&glUniform1dv_ptr);
	paradox_opengl_load_function("glUniform2dv", (void**)&glUniform2dv_ptr);
	paradox_opengl_load_function("glUniform3dv", (void**)&glUniform3dv_ptr);
	paradox_opengl_load_function("glUniform4dv", (void**)&glUniform4dv_ptr);
	paradox_opengl_load_function("glUniformMatrix2dv", (void**)&glUniformMatrix2dv_ptr);
	paradox_opengl_load_function("glUniformMatrix3dv", (void**)&glUniformMatrix3dv_ptr);
	paradox_opengl_load_function("glUniformMatrix4dv", (void**)&glUniformMatrix4dv_ptr);
	paradox_opengl_load_function("glUniformMatrix2x3dv", (void**)&glUniformMatrix2x3dv_ptr);
	paradox_opengl_load_function("glUniformMatrix2x4dv", (void**)&glUniformMatrix2x4dv_ptr);
	paradox_opengl_load_function("glUniformMatrix3x2dv", (void**)&glUniformMatrix3x2dv_ptr);
	paradox_opengl_load_function("glUniformMatrix3x4dv", (void**)&glUniformMatrix3x4dv_ptr);
	paradox_opengl_load_function("glUniformMatrix4x2dv", (void**)&glUniformMatrix4x2dv_ptr);
	paradox_opengl_load_function("glUniformMatrix4x3dv", (void**)&glUniformMatrix4x3dv_ptr);
	paradox_opengl_load_function("glGetUniformdv", (void**)&glGetUniformdv_ptr);
	paradox_opengl_load_function("glGetSubroutineUniformLocation", (void**)&glGetSubroutineUniformLocation_ptr);
	paradox_opengl_load_function("glGetSubroutineIndex", (void**)&glGetSubroutineIndex_ptr);
	paradox_opengl_load_function("glGetActiveSubroutineUniformiv", (void**)&glGetActiveSubroutineUniformiv_ptr);
	paradox_opengl_load_function("glGetActiveSubroutineUniformName", (void**)&glGetActiveSubroutineUniformName_ptr);
	paradox_opengl_load_function("glGetActiveSubroutineName", (void**)&glGetActiveSubroutineName_ptr);
	paradox_opengl_load_function("glUniformSubroutinesuiv", (void**)&glUniformSubroutinesuiv_ptr);
	paradox_opengl_load_function("glGetUniformSubroutineuiv", (void**)&glGetUniformSubroutineuiv_ptr);
	paradox_opengl_load_function("glGetProgramStageiv", (void**)&glGetProgramStageiv_ptr);
	paradox_opengl_load_function("glPatchParameteri", (void**)&glPatchParameteri_ptr);
	paradox_opengl_load_function("glPatchParameterfv", (void**)&glPatchParameterfv_ptr);
	paradox_opengl_load_function("glBindTransformFeedback", (void**)&glBindTransformFeedback_ptr);
	paradox_opengl_load_function("glDeleteTransformFeedbacks", (void**)&glDeleteTransformFeedbacks_ptr);
	paradox_opengl_load_function("glGenTransformFeedbacks", (void**)&glGenTransformFeedbacks_ptr);
	paradox_opengl_load_function("glIsTransformFeedback", (void**)&glIsTransformFeedback_ptr);
	paradox_opengl_load_function("glPauseTransformFeedback", (void**)&glPauseTransformFeedback_ptr);
	paradox_opengl_load_function("glResumeTransformFeedback", (void**)&glResumeTransformFeedback_ptr);
	paradox_opengl_load_function("glDrawTransformFeedback", (void**)&glDrawTransformFeedback_ptr);
	paradox_opengl_load_function("glDrawTransformFeedbackStream", (void**)&glDrawTransformFeedbackStream_ptr);
	paradox_opengl_load_function("glBeginQueryIndexed", (void**)&glBeginQueryIndexed_ptr);
	paradox_opengl_load_function("glEndQueryIndexed", (void**)&glEndQueryIndexed_ptr);
	paradox_opengl_load_function("glGetQueryIndexediv", (void**)&glGetQueryIndexediv_ptr);
	paradox_opengl_load_function("glReleaseShaderCompiler", (void**)&glReleaseShaderCompiler_ptr);
	paradox_opengl_load_function("glShaderBinary", (void**)&glShaderBinary_ptr);
	paradox_opengl_load_function("glGetShaderPrecisionFormat", (void**)&glGetShaderPrecisionFormat_ptr);
	paradox_opengl_load_function("glDepthRangef", (void**)&glDepthRangef_ptr);
	paradox_opengl_load_function("glClearDepthf", (void**)&glClearDepthf_ptr);
	paradox_opengl_load_function("glGetProgramBinary", (void**)&glGetProgramBinary_ptr);
	paradox_opengl_load_function("glProgramBinary", (void**)&glProgramBinary_ptr);
	paradox_opengl_load_function("glProgramParameteri", (void**)&glProgramParameteri_ptr);
	paradox_opengl_load_function("glUseProgramStages", (void**)&glUseProgramStages_ptr);
	paradox_opengl_load_function("glActiveShaderProgram", (void**)&glActiveShaderProgram_ptr);
	paradox_opengl_load_function("glCreateShaderProgramv", (void**)&glCreateShaderProgramv_ptr);
	paradox_opengl_load_function("glBindProgramPipeline", (void**)&glBindProgramPipeline_ptr);
	paradox_opengl_load_function("glDeleteProgramPipelines", (void**)&glDeleteProgramPipelines_ptr);
	paradox_opengl_load_function("glGenProgramPipelines", (void**)&glGenProgramPipelines_ptr);
	paradox_opengl_load_function("glIsProgramPipeline", (void**)&glIsProgramPipeline_ptr);
	paradox_opengl_load_function("glGetProgramPipelineiv", (void**)&glGetProgramPipelineiv_ptr);
	paradox_opengl_load_function("glProgramUniform1i", (void**)&glProgramUniform1i_ptr);
	paradox_opengl_load_function("glProgramUniform1iv", (void**)&glProgramUniform1iv_ptr);
	paradox_opengl_load_function("glProgramUniform1f", (void**)&glProgramUniform1f_ptr);
	paradox_opengl_load_function("glProgramUniform1fv", (void**)&glProgramUniform1fv_ptr);
	paradox_opengl_load_function("glProgramUniform1d", (void**)&glProgramUniform1d_ptr);
	paradox_opengl_load_function("glProgramUniform1dv", (void**)&glProgramUniform1dv_ptr);
	paradox_opengl_load_function("glProgramUniform1ui", (void**)&glProgramUniform1ui_ptr);
	paradox_opengl_load_function("glProgramUniform1uiv", (void**)&glProgramUniform1uiv_ptr);
	paradox_opengl_load_function("glProgramUniform2i", (void**)&glProgramUniform2i_ptr);
	paradox_opengl_load_function("glProgramUniform2iv", (void**)&glProgramUniform2iv_ptr);
	paradox_opengl_load_function("glProgramUniform2f", (void**)&glProgramUniform2f_ptr);
	paradox_opengl_load_function("glProgramUniform2fv", (void**)&glProgramUniform2fv_ptr);
	paradox_opengl_load_function("glProgramUniform2d", (void**)&glProgramUniform2d_ptr);
	paradox_opengl_load_function("glProgramUniform2dv", (void**)&glProgramUniform2dv_ptr);
	paradox_opengl_load_function("glProgramUniform2ui", (void**)&glProgramUniform2ui_ptr);
	paradox_opengl_load_function("glProgramUniform2uiv", (void**)&glProgramUniform2uiv_ptr);
	paradox_opengl_load_function("glProgramUniform3i", (void**)&glProgramUniform3i_ptr);
	paradox_opengl_load_function("glProgramUniform3iv", (void**)&glProgramUniform3iv_ptr);
	paradox_opengl_load_function("glProgramUniform3f", (void**)&glProgramUniform3f_ptr);
	paradox_opengl_load_function("glProgramUniform3fv", (void**)&glProgramUniform3fv_ptr);
	paradox_opengl_load_function("glProgramUniform3d", (void**)&glProgramUniform3d_ptr);
	paradox_opengl_load_function("glProgramUniform3dv", (void**)&glProgramUniform3dv_ptr);
	paradox_opengl_load_function("glProgramUniform3ui", (void**)&glProgramUniform3ui_ptr);
	paradox_opengl_load_function("glProgramUniform3uiv", (void**)&glProgramUniform3uiv_ptr);
	paradox_opengl_load_function("glProgramUniform4i", (void**)&glProgramUniform4i_ptr);
	paradox_opengl_load_function("glProgramUniform4iv", (void**)&glProgramUniform4iv_ptr);
	paradox_opengl_load_function("glProgramUniform4f", (void**)&glProgramUniform4f_ptr);
	paradox_opengl_load_function("glProgramUniform4fv", (void**)&glProgramUniform4fv_ptr);
	paradox_opengl_load_function("glProgramUniform4d", (void**)&glProgramUniform4d_ptr);
	paradox_opengl_load_function("glProgramUniform4dv", (void**)&glProgramUniform4dv_ptr);
	paradox_opengl_load_function("glProgramUniform4ui", (void**)&glProgramUniform4ui_ptr);
	paradox_opengl_load_function("glProgramUniform4uiv", (void**)&glProgramUniform4uiv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2fv", (void**)&glProgramUniformMatrix2fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3fv", (void**)&glProgramUniformMatrix3fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4fv", (void**)&glProgramUniformMatrix4fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2dv", (void**)&glProgramUniformMatrix2dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3dv", (void**)&glProgramUniformMatrix3dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4dv", (void**)&glProgramUniformMatrix4dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x3fv", (void**)&glProgramUniformMatrix2x3fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x2fv", (void**)&glProgramUniformMatrix3x2fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x4fv", (void**)&glProgramUniformMatrix2x4fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x2fv", (void**)&glProgramUniformMatrix4x2fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x4fv", (void**)&glProgramUniformMatrix3x4fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x3fv", (void**)&glProgramUniformMatrix4x3fv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x3dv", (void**)&glProgramUniformMatrix2x3dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x2dv", (void**)&glProgramUniformMatrix3x2dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x4dv", (void**)&glProgramUniformMatrix2x4dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x2dv", (void**)&glProgramUniformMatrix4x2dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x4dv", (void**)&glProgramUniformMatrix3x4dv_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x3dv", (void**)&glProgramUniformMatrix4x3dv_ptr);
	paradox_opengl_load_function("glValidateProgramPipeline", (void**)&glValidateProgramPipeline_ptr);
	paradox_opengl_load_function("glGetProgramPipelineInfoLog", (void**)&glGetProgramPipelineInfoLog_ptr);
	paradox_opengl_load_function("glVertexAttribL1d", (void**)&glVertexAttribL1d_ptr);
	paradox_opengl_load_function("glVertexAttribL2d", (void**)&glVertexAttribL2d_ptr);
	paradox_opengl_load_function("glVertexAttribL3d", (void**)&glVertexAttribL3d_ptr);
	paradox_opengl_load_function("glVertexAttribL4d", (void**)&glVertexAttribL4d_ptr);
	paradox_opengl_load_function("glVertexAttribL1dv", (void**)&glVertexAttribL1dv_ptr);
	paradox_opengl_load_function("glVertexAttribL2dv", (void**)&glVertexAttribL2dv_ptr);
	paradox_opengl_load_function("glVertexAttribL3dv", (void**)&glVertexAttribL3dv_ptr);
	paradox_opengl_load_function("glVertexAttribL4dv", (void**)&glVertexAttribL4dv_ptr);
	paradox_opengl_load_function("glVertexAttribLPointer", (void**)&glVertexAttribLPointer_ptr);
	paradox_opengl_load_function("glGetVertexAttribLdv", (void**)&glGetVertexAttribLdv_ptr);
	paradox_opengl_load_function("glViewportArrayv", (void**)&glViewportArrayv_ptr);
	paradox_opengl_load_function("glViewportIndexedf", (void**)&glViewportIndexedf_ptr);
	paradox_opengl_load_function("glViewportIndexedfv", (void**)&glViewportIndexedfv_ptr);
	paradox_opengl_load_function("glScissorArrayv", (void**)&glScissorArrayv_ptr);
	paradox_opengl_load_function("glScissorIndexed", (void**)&glScissorIndexed_ptr);
	paradox_opengl_load_function("glScissorIndexedv", (void**)&glScissorIndexedv_ptr);
	paradox_opengl_load_function("glDepthRangeArrayv", (void**)&glDepthRangeArrayv_ptr);
	paradox_opengl_load_function("glDepthRangeIndexed", (void**)&glDepthRangeIndexed_ptr);
	paradox_opengl_load_function("glGetFloati_v", (void**)&glGetFloati_v_ptr);
	paradox_opengl_load_function("glGetDoublei_v", (void**)&glGetDoublei_v_ptr);
	paradox_opengl_load_function("glDrawArraysInstancedBaseInstance", (void**)&glDrawArraysInstancedBaseInstance_ptr);
	paradox_opengl_load_function("glDrawElementsInstancedBaseInstance", (void**)&glDrawElementsInstancedBaseInstance_ptr);
	paradox_opengl_load_function("glDrawElementsInstancedBaseVertexBaseInstance", (void**)&glDrawElementsInstancedBaseVertexBaseInstance_ptr);
	paradox_opengl_load_function("glGetInternalformativ", (void**)&glGetInternalformativ_ptr);
	paradox_opengl_load_function("glGetActiveAtomicCounterBufferiv", (void**)&glGetActiveAtomicCounterBufferiv_ptr);
	paradox_opengl_load_function("glBindImageTexture", (void**)&glBindImageTexture_ptr);
	paradox_opengl_load_function("glMemoryBarrier", (void**)&glMemoryBarrier_ptr);
	paradox_opengl_load_function("glTexStorage1D", (void**)&glTexStorage1D_ptr);
	paradox_opengl_load_function("glTexStorage2D", (void**)&glTexStorage2D_ptr);
	paradox_opengl_load_function("glTexStorage3D", (void**)&glTexStorage3D_ptr);
	paradox_opengl_load_function("glDrawTransformFeedbackInstanced", (void**)&glDrawTransformFeedbackInstanced_ptr);
	paradox_opengl_load_function("glDrawTransformFeedbackStreamInstanced", (void**)&glDrawTransformFeedbackStreamInstanced_ptr);
	paradox_opengl_load_function("glClearBufferData", (void**)&glClearBufferData_ptr);
	paradox_opengl_load_function("glClearBufferSubData", (void**)&glClearBufferSubData_ptr);
	paradox_opengl_load_function("glDispatchCompute", (void**)&glDispatchCompute_ptr);
	paradox_opengl_load_function("glDispatchComputeIndirect", (void**)&glDispatchComputeIndirect_ptr);
	paradox_opengl_load_function("glCopyImageSubData", (void**)&glCopyImageSubData_ptr);
	paradox_opengl_load_function("glFramebufferParameteri", (void**)&glFramebufferParameteri_ptr);
	paradox_opengl_load_function("glGetFramebufferParameteriv", (void**)&glGetFramebufferParameteriv_ptr);
	paradox_opengl_load_function("glGetInternalformati64v", (void**)&glGetInternalformati64v_ptr);
	paradox_opengl_load_function("glInvalidateTexSubImage", (void**)&glInvalidateTexSubImage_ptr);
	paradox_opengl_load_function("glInvalidateTexImage", (void**)&glInvalidateTexImage_ptr);
	paradox_opengl_load_function("glInvalidateBufferSubData", (void**)&glInvalidateBufferSubData_ptr);
	paradox_opengl_load_function("glInvalidateBufferData", (void**)&glInvalidateBufferData_ptr);
	paradox_opengl_load_function("glInvalidateFramebuffer", (void**)&glInvalidateFramebuffer_ptr);
	paradox_opengl_load_function("glInvalidateSubFramebuffer", (void**)&glInvalidateSubFramebuffer_ptr);
	paradox_opengl_load_function("glMultiDrawArraysIndirect", (void**)&glMultiDrawArraysIndirect_ptr);
	paradox_opengl_load_function("glMultiDrawElementsIndirect", (void**)&glMultiDrawElementsIndirect_ptr);
	paradox_opengl_load_function("glGetProgramInterfaceiv", (void**)&glGetProgramInterfaceiv_ptr);
	paradox_opengl_load_function("glGetProgramResourceIndex", (void**)&glGetProgramResourceIndex_ptr);
	paradox_opengl_load_function("glGetProgramResourceName", (void**)&glGetProgramResourceName_ptr);
	paradox_opengl_load_function("glGetProgramResourceiv", (void**)&glGetProgramResourceiv_ptr);
	paradox_opengl_load_function("glGetProgramResourceLocation", (void**)&glGetProgramResourceLocation_ptr);
	paradox_opengl_load_function("glGetProgramResourceLocationIndex", (void**)&glGetProgramResourceLocationIndex_ptr);
	paradox_opengl_load_function("glShaderStorageBlockBinding", (void**)&glShaderStorageBlockBinding_ptr);
	paradox_opengl_load_function("glTexBufferRange", (void**)&glTexBufferRange_ptr);
	paradox_opengl_load_function("glTexStorage2DMultisample", (void**)&glTexStorage2DMultisample_ptr);
	paradox_opengl_load_function("glTexStorage3DMultisample", (void**)&glTexStorage3DMultisample_ptr);
	paradox_opengl_load_function("glTextureView", (void**)&glTextureView_ptr);
	paradox_opengl_load_function("glBindVertexBuffer", (void**)&glBindVertexBuffer_ptr);
	paradox_opengl_load_function("glVertexAttribFormat", (void**)&glVertexAttribFormat_ptr);
	paradox_opengl_load_function("glVertexAttribIFormat", (void**)&glVertexAttribIFormat_ptr);
	paradox_opengl_load_function("glVertexAttribLFormat", (void**)&glVertexAttribLFormat_ptr);
	paradox_opengl_load_function("glVertexAttribBinding", (void**)&glVertexAttribBinding_ptr);
	paradox_opengl_load_function("glVertexBindingDivisor", (void**)&glVertexBindingDivisor_ptr);
	paradox_opengl_load_function("glDebugMessageControl", (void**)&glDebugMessageControl_ptr);
	paradox_opengl_load_function("glDebugMessageInsert", (void**)&glDebugMessageInsert_ptr);
	paradox_opengl_load_function("glDebugMessageCallback", (void**)&glDebugMessageCallback_ptr);
	paradox_opengl_load_function("glGetDebugMessageLog", (void**)&glGetDebugMessageLog_ptr);
	paradox_opengl_load_function("glPushDebugGroup", (void**)&glPushDebugGroup_ptr);
	paradox_opengl_load_function("glPopDebugGroup", (void**)&glPopDebugGroup_ptr);
	paradox_opengl_load_function("glObjectLabel", (void**)&glObjectLabel_ptr);
	paradox_opengl_load_function("glGetObjectLabel", (void**)&glGetObjectLabel_ptr);
	paradox_opengl_load_function("glObjectPtrLabel", (void**)&glObjectPtrLabel_ptr);
	paradox_opengl_load_function("glGetObjectPtrLabel", (void**)&glGetObjectPtrLabel_ptr);
	paradox_opengl_load_function("glBufferStorage", (void**)&glBufferStorage_ptr);
	paradox_opengl_load_function("glClearTexImage", (void**)&glClearTexImage_ptr);
	paradox_opengl_load_function("glClearTexSubImage", (void**)&glClearTexSubImage_ptr);
	paradox_opengl_load_function("glBindBuffersBase", (void**)&glBindBuffersBase_ptr);
	paradox_opengl_load_function("glBindBuffersRange", (void**)&glBindBuffersRange_ptr);
	paradox_opengl_load_function("glBindTextures", (void**)&glBindTextures_ptr);
	paradox_opengl_load_function("glBindSamplers", (void**)&glBindSamplers_ptr);
	paradox_opengl_load_function("glBindImageTextures", (void**)&glBindImageTextures_ptr);
	paradox_opengl_load_function("glBindVertexBuffers", (void**)&glBindVertexBuffers_ptr);
	paradox_opengl_load_function("glClipControl", (void**)&glClipControl_ptr);
	paradox_opengl_load_function("glCreateTransformFeedbacks", (void**)&glCreateTransformFeedbacks_ptr);
	paradox_opengl_load_function("glTransformFeedbackBufferBase", (void**)&glTransformFeedbackBufferBase_ptr);
	paradox_opengl_load_function("glTransformFeedbackBufferRange", (void**)&glTransformFeedbackBufferRange_ptr);
	paradox_opengl_load_function("glGetTransformFeedbackiv", (void**)&glGetTransformFeedbackiv_ptr);
	paradox_opengl_load_function("glGetTransformFeedbacki_v", (void**)&glGetTransformFeedbacki_v_ptr);
	paradox_opengl_load_function("glGetTransformFeedbacki64_v", (void**)&glGetTransformFeedbacki64_v_ptr);
	paradox_opengl_load_function("glCreateBuffers", (void**)&glCreateBuffers_ptr);
	paradox_opengl_load_function("glNamedBufferStorage", (void**)&glNamedBufferStorage_ptr);
	paradox_opengl_load_function("glNamedBufferData", (void**)&glNamedBufferData_ptr);
	paradox_opengl_load_function("glNamedBufferSubData", (void**)&glNamedBufferSubData_ptr);
	paradox_opengl_load_function("glCopyNamedBufferSubData", (void**)&glCopyNamedBufferSubData_ptr);
	paradox_opengl_load_function("glClearNamedBufferData", (void**)&glClearNamedBufferData_ptr);
	paradox_opengl_load_function("glClearNamedBufferSubData", (void**)&glClearNamedBufferSubData_ptr);
	paradox_opengl_load_function("glMapNamedBuffer", (void**)&glMapNamedBuffer_ptr);
	paradox_opengl_load_function("glMapNamedBufferRange", (void**)&glMapNamedBufferRange_ptr);
	paradox_opengl_load_function("glUnmapNamedBuffer", (void**)&glUnmapNamedBuffer_ptr);
	paradox_opengl_load_function("glFlushMappedNamedBufferRange", (void**)&glFlushMappedNamedBufferRange_ptr);
	paradox_opengl_load_function("glGetNamedBufferParameteriv", (void**)&glGetNamedBufferParameteriv_ptr);
	paradox_opengl_load_function("glGetNamedBufferParameteri64v", (void**)&glGetNamedBufferParameteri64v_ptr);
	paradox_opengl_load_function("glGetNamedBufferPointerv", (void**)&glGetNamedBufferPointerv_ptr);
	paradox_opengl_load_function("glGetNamedBufferSubData", (void**)&glGetNamedBufferSubData_ptr);
	paradox_opengl_load_function("glCreateFramebuffers", (void**)&glCreateFramebuffers_ptr);
	paradox_opengl_load_function("glNamedFramebufferRenderbuffer", (void**)&glNamedFramebufferRenderbuffer_ptr);
	paradox_opengl_load_function("glNamedFramebufferParameteri", (void**)&glNamedFramebufferParameteri_ptr);
	paradox_opengl_load_function("glNamedFramebufferTexture", (void**)&glNamedFramebufferTexture_ptr);
	paradox_opengl_load_function("glNamedFramebufferTextureLayer", (void**)&glNamedFramebufferTextureLayer_ptr);
	paradox_opengl_load_function("glNamedFramebufferDrawBuffer", (void**)&glNamedFramebufferDrawBuffer_ptr);
	paradox_opengl_load_function("glNamedFramebufferDrawBuffers", (void**)&glNamedFramebufferDrawBuffers_ptr);
	paradox_opengl_load_function("glNamedFramebufferReadBuffer", (void**)&glNamedFramebufferReadBuffer_ptr);
	paradox_opengl_load_function("glInvalidateNamedFramebufferData", (void**)&glInvalidateNamedFramebufferData_ptr);
	paradox_opengl_load_function("glInvalidateNamedFramebufferSubData", (void**)&glInvalidateNamedFramebufferSubData_ptr);
	paradox_opengl_load_function("glClearNamedFramebufferiv", (void**)&glClearNamedFramebufferiv_ptr);
	paradox_opengl_load_function("glClearNamedFramebufferuiv", (void**)&glClearNamedFramebufferuiv_ptr);
	paradox_opengl_load_function("glClearNamedFramebufferfv", (void**)&glClearNamedFramebufferfv_ptr);
	paradox_opengl_load_function("glClearNamedFramebufferfi", (void**)&glClearNamedFramebufferfi_ptr);
	paradox_opengl_load_function("glBlitNamedFramebuffer", (void**)&glBlitNamedFramebuffer_ptr);
	paradox_opengl_load_function("glCheckNamedFramebufferStatus", (void**)&glCheckNamedFramebufferStatus_ptr);
	paradox_opengl_load_function("glGetNamedFramebufferParameteriv", (void**)&glGetNamedFramebufferParameteriv_ptr);
	paradox_opengl_load_function("glGetNamedFramebufferAttachmentParameteriv", (void**)&glGetNamedFramebufferAttachmentParameteriv_ptr);
	paradox_opengl_load_function("glCreateRenderbuffers", (void**)&glCreateRenderbuffers_ptr);
	paradox_opengl_load_function("glNamedRenderbufferStorage", (void**)&glNamedRenderbufferStorage_ptr);
	paradox_opengl_load_function("glNamedRenderbufferStorageMultisample", (void**)&glNamedRenderbufferStorageMultisample_ptr);
	paradox_opengl_load_function("glGetNamedRenderbufferParameteriv", (void**)&glGetNamedRenderbufferParameteriv_ptr);
	paradox_opengl_load_function("glCreateTextures", (void**)&glCreateTextures_ptr);
	paradox_opengl_load_function("glTextureBuffer", (void**)&glTextureBuffer_ptr);
	paradox_opengl_load_function("glTextureBufferRange", (void**)&glTextureBufferRange_ptr);
	paradox_opengl_load_function("glTextureStorage1D", (void**)&glTextureStorage1D_ptr);
	paradox_opengl_load_function("glTextureStorage2D", (void**)&glTextureStorage2D_ptr);
	paradox_opengl_load_function("glTextureStorage3D", (void**)&glTextureStorage3D_ptr);
	paradox_opengl_load_function("glTextureStorage2DMultisample", (void**)&glTextureStorage2DMultisample_ptr);
	paradox_opengl_load_function("glTextureStorage3DMultisample", (void**)&glTextureStorage3DMultisample_ptr);
	paradox_opengl_load_function("glTextureSubImage1D", (void**)&glTextureSubImage1D_ptr);
	paradox_opengl_load_function("glTextureSubImage2D", (void**)&glTextureSubImage2D_ptr);
	paradox_opengl_load_function("glTextureSubImage3D", (void**)&glTextureSubImage3D_ptr);
	paradox_opengl_load_function("glCompressedTextureSubImage1D", (void**)&glCompressedTextureSubImage1D_ptr);
	paradox_opengl_load_function("glCompressedTextureSubImage2D", (void**)&glCompressedTextureSubImage2D_ptr);
	paradox_opengl_load_function("glCompressedTextureSubImage3D", (void**)&glCompressedTextureSubImage3D_ptr);
	paradox_opengl_load_function("glCopyTextureSubImage1D", (void**)&glCopyTextureSubImage1D_ptr);
	paradox_opengl_load_function("glCopyTextureSubImage2D", (void**)&glCopyTextureSubImage2D_ptr);
	paradox_opengl_load_function("glCopyTextureSubImage3D", (void**)&glCopyTextureSubImage3D_ptr);
	paradox_opengl_load_function("glTextureParameterf", (void**)&glTextureParameterf_ptr);
	paradox_opengl_load_function("glTextureParameterfv", (void**)&glTextureParameterfv_ptr);
	paradox_opengl_load_function("glTextureParameteri", (void**)&glTextureParameteri_ptr);
	paradox_opengl_load_function("glTextureParameterIiv", (void**)&glTextureParameterIiv_ptr);
	paradox_opengl_load_function("glTextureParameterIuiv", (void**)&glTextureParameterIuiv_ptr);
	paradox_opengl_load_function("glTextureParameteriv", (void**)&glTextureParameteriv_ptr);
	paradox_opengl_load_function("glGenerateTextureMipmap", (void**)&glGenerateTextureMipmap_ptr);
	paradox_opengl_load_function("glBindTextureUnit", (void**)&glBindTextureUnit_ptr);
	paradox_opengl_load_function("glGetTextureImage", (void**)&glGetTextureImage_ptr);
	paradox_opengl_load_function("glGetCompressedTextureImage", (void**)&glGetCompressedTextureImage_ptr);
	paradox_opengl_load_function("glGetTextureLevelParameterfv", (void**)&glGetTextureLevelParameterfv_ptr);
	paradox_opengl_load_function("glGetTextureLevelParameteriv", (void**)&glGetTextureLevelParameteriv_ptr);
	paradox_opengl_load_function("glGetTextureParameterfv", (void**)&glGetTextureParameterfv_ptr);
	paradox_opengl_load_function("glGetTextureParameterIiv", (void**)&glGetTextureParameterIiv_ptr);
	paradox_opengl_load_function("glGetTextureParameterIuiv", (void**)&glGetTextureParameterIuiv_ptr);
	paradox_opengl_load_function("glGetTextureParameteriv", (void**)&glGetTextureParameteriv_ptr);
	paradox_opengl_load_function("glCreateVertexArrays", (void**)&glCreateVertexArrays_ptr);
	paradox_opengl_load_function("glDisableVertexArrayAttrib", (void**)&glDisableVertexArrayAttrib_ptr);
	paradox_opengl_load_function("glEnableVertexArrayAttrib", (void**)&glEnableVertexArrayAttrib_ptr);
	paradox_opengl_load_function("glVertexArrayElementBuffer", (void**)&glVertexArrayElementBuffer_ptr);
	paradox_opengl_load_function("glVertexArrayVertexBuffer", (void**)&glVertexArrayVertexBuffer_ptr);
	paradox_opengl_load_function("glVertexArrayVertexBuffers", (void**)&glVertexArrayVertexBuffers_ptr);
	paradox_opengl_load_function("glVertexArrayAttribBinding", (void**)&glVertexArrayAttribBinding_ptr);
	paradox_opengl_load_function("glVertexArrayAttribFormat", (void**)&glVertexArrayAttribFormat_ptr);
	paradox_opengl_load_function("glVertexArrayAttribIFormat", (void**)&glVertexArrayAttribIFormat_ptr);
	paradox_opengl_load_function("glVertexArrayAttribLFormat", (void**)&glVertexArrayAttribLFormat_ptr);
	paradox_opengl_load_function("glVertexArrayBindingDivisor", (void**)&glVertexArrayBindingDivisor_ptr);
	paradox_opengl_load_function("glGetVertexArrayiv", (void**)&glGetVertexArrayiv_ptr);
	paradox_opengl_load_function("glGetVertexArrayIndexediv", (void**)&glGetVertexArrayIndexediv_ptr);
	paradox_opengl_load_function("glGetVertexArrayIndexed64iv", (void**)&glGetVertexArrayIndexed64iv_ptr);
	paradox_opengl_load_function("glCreateSamplers", (void**)&glCreateSamplers_ptr);
	paradox_opengl_load_function("glCreateProgramPipelines", (void**)&glCreateProgramPipelines_ptr);
	paradox_opengl_load_function("glCreateQueries", (void**)&glCreateQueries_ptr);
	paradox_opengl_load_function("glGetQueryBufferObjecti64v", (void**)&glGetQueryBufferObjecti64v_ptr);
	paradox_opengl_load_function("glGetQueryBufferObjectiv", (void**)&glGetQueryBufferObjectiv_ptr);
	paradox_opengl_load_function("glGetQueryBufferObjectui64v", (void**)&glGetQueryBufferObjectui64v_ptr);
	paradox_opengl_load_function("glGetQueryBufferObjectuiv", (void**)&glGetQueryBufferObjectuiv_ptr);
	paradox_opengl_load_function("glMemoryBarrierByRegion", (void**)&glMemoryBarrierByRegion_ptr);
	paradox_opengl_load_function("glGetTextureSubImage", (void**)&glGetTextureSubImage_ptr);
	paradox_opengl_load_function("glGetCompressedTextureSubImage", (void**)&glGetCompressedTextureSubImage_ptr);
	paradox_opengl_load_function("glGetGraphicsResetStatus", (void**)&glGetGraphicsResetStatus_ptr);
	paradox_opengl_load_function("glGetnCompressedTexImage", (void**)&glGetnCompressedTexImage_ptr);
	paradox_opengl_load_function("glGetnTexImage", (void**)&glGetnTexImage_ptr);
	paradox_opengl_load_function("glGetnUniformdv", (void**)&glGetnUniformdv_ptr);
	paradox_opengl_load_function("glGetnUniformfv", (void**)&glGetnUniformfv_ptr);
	paradox_opengl_load_function("glGetnUniformiv", (void**)&glGetnUniformiv_ptr);
	paradox_opengl_load_function("glGetnUniformuiv", (void**)&glGetnUniformuiv_ptr);
	paradox_opengl_load_function("glReadnPixels", (void**)&glReadnPixels_ptr);
	paradox_opengl_load_function("glTextureBarrier", (void**)&glTextureBarrier_ptr);
	paradox_opengl_load_function("glSpecializeShader", (void**)&glSpecializeShader_ptr);
	paradox_opengl_load_function("glMultiDrawArraysIndirectCount", (void**)&glMultiDrawArraysIndirectCount_ptr);
	paradox_opengl_load_function("glMultiDrawElementsIndirectCount", (void**)&glMultiDrawElementsIndirectCount_ptr);
	paradox_opengl_load_function("glPolygonOffsetClamp", (void**)&glPolygonOffsetClamp_ptr);
	paradox_opengl_load_function("glPrimitiveBoundingBoxARB", (void**)&glPrimitiveBoundingBoxARB_ptr);
	paradox_opengl_load_function("glGetTextureHandleARB", (void**)&glGetTextureHandleARB_ptr);
	paradox_opengl_load_function("glGetTextureSamplerHandleARB", (void**)&glGetTextureSamplerHandleARB_ptr);
	paradox_opengl_load_function("glMakeTextureHandleResidentARB", (void**)&glMakeTextureHandleResidentARB_ptr);
	paradox_opengl_load_function("glMakeTextureHandleNonResidentARB", (void**)&glMakeTextureHandleNonResidentARB_ptr);
	paradox_opengl_load_function("glGetImageHandleARB", (void**)&glGetImageHandleARB_ptr);
	paradox_opengl_load_function("glMakeImageHandleResidentARB", (void**)&glMakeImageHandleResidentARB_ptr);
	paradox_opengl_load_function("glMakeImageHandleNonResidentARB", (void**)&glMakeImageHandleNonResidentARB_ptr);
	paradox_opengl_load_function("glUniformHandleui64ARB", (void**)&glUniformHandleui64ARB_ptr);
	paradox_opengl_load_function("glUniformHandleui64vARB", (void**)&glUniformHandleui64vARB_ptr);
	paradox_opengl_load_function("glProgramUniformHandleui64ARB", (void**)&glProgramUniformHandleui64ARB_ptr);
	paradox_opengl_load_function("glProgramUniformHandleui64vARB", (void**)&glProgramUniformHandleui64vARB_ptr);
	paradox_opengl_load_function("glIsTextureHandleResidentARB", (void**)&glIsTextureHandleResidentARB_ptr);
	paradox_opengl_load_function("glIsImageHandleResidentARB", (void**)&glIsImageHandleResidentARB_ptr);
	paradox_opengl_load_function("glVertexAttribL1ui64ARB", (void**)&glVertexAttribL1ui64ARB_ptr);
	paradox_opengl_load_function("glVertexAttribL1ui64vARB", (void**)&glVertexAttribL1ui64vARB_ptr);
	paradox_opengl_load_function("glGetVertexAttribLui64vARB", (void**)&glGetVertexAttribLui64vARB_ptr);
	paradox_opengl_load_function("glCreateSyncFromCLeventARB", (void**)&glCreateSyncFromCLeventARB_ptr);
	paradox_opengl_load_function("glDispatchComputeGroupSizeARB", (void**)&glDispatchComputeGroupSizeARB_ptr);
	paradox_opengl_load_function("glDebugMessageControlARB", (void**)&glDebugMessageControlARB_ptr);
	paradox_opengl_load_function("glDebugMessageInsertARB", (void**)&glDebugMessageInsertARB_ptr);
	paradox_opengl_load_function("glDebugMessageCallbackARB", (void**)&glDebugMessageCallbackARB_ptr);
	paradox_opengl_load_function("glGetDebugMessageLogARB", (void**)&glGetDebugMessageLogARB_ptr);
	paradox_opengl_load_function("glBlendEquationiARB", (void**)&glBlendEquationiARB_ptr);
	paradox_opengl_load_function("glBlendEquationSeparateiARB", (void**)&glBlendEquationSeparateiARB_ptr);
	paradox_opengl_load_function("glBlendFunciARB", (void**)&glBlendFunciARB_ptr);
	paradox_opengl_load_function("glBlendFuncSeparateiARB", (void**)&glBlendFuncSeparateiARB_ptr);
	paradox_opengl_load_function("glDrawArraysInstancedARB", (void**)&glDrawArraysInstancedARB_ptr);
	paradox_opengl_load_function("glDrawElementsInstancedARB", (void**)&glDrawElementsInstancedARB_ptr);
	paradox_opengl_load_function("glProgramParameteriARB", (void**)&glProgramParameteriARB_ptr);
	paradox_opengl_load_function("glFramebufferTextureARB", (void**)&glFramebufferTextureARB_ptr);
	paradox_opengl_load_function("glFramebufferTextureLayerARB", (void**)&glFramebufferTextureLayerARB_ptr);
	paradox_opengl_load_function("glFramebufferTextureFaceARB", (void**)&glFramebufferTextureFaceARB_ptr);
	paradox_opengl_load_function("glSpecializeShaderARB", (void**)&glSpecializeShaderARB_ptr);
	paradox_opengl_load_function("glUniform1i64ARB", (void**)&glUniform1i64ARB_ptr);
	paradox_opengl_load_function("glUniform2i64ARB", (void**)&glUniform2i64ARB_ptr);
	paradox_opengl_load_function("glUniform3i64ARB", (void**)&glUniform3i64ARB_ptr);
	paradox_opengl_load_function("glUniform4i64ARB", (void**)&glUniform4i64ARB_ptr);
	paradox_opengl_load_function("glUniform1i64vARB", (void**)&glUniform1i64vARB_ptr);
	paradox_opengl_load_function("glUniform2i64vARB", (void**)&glUniform2i64vARB_ptr);
	paradox_opengl_load_function("glUniform3i64vARB", (void**)&glUniform3i64vARB_ptr);
	paradox_opengl_load_function("glUniform4i64vARB", (void**)&glUniform4i64vARB_ptr);
	paradox_opengl_load_function("glUniform1ui64ARB", (void**)&glUniform1ui64ARB_ptr);
	paradox_opengl_load_function("glUniform2ui64ARB", (void**)&glUniform2ui64ARB_ptr);
	paradox_opengl_load_function("glUniform3ui64ARB", (void**)&glUniform3ui64ARB_ptr);
	paradox_opengl_load_function("glUniform4ui64ARB", (void**)&glUniform4ui64ARB_ptr);
	paradox_opengl_load_function("glUniform1ui64vARB", (void**)&glUniform1ui64vARB_ptr);
	paradox_opengl_load_function("glUniform2ui64vARB", (void**)&glUniform2ui64vARB_ptr);
	paradox_opengl_load_function("glUniform3ui64vARB", (void**)&glUniform3ui64vARB_ptr);
	paradox_opengl_load_function("glUniform4ui64vARB", (void**)&glUniform4ui64vARB_ptr);
	paradox_opengl_load_function("glGetUniformi64vARB", (void**)&glGetUniformi64vARB_ptr);
	paradox_opengl_load_function("glGetUniformui64vARB", (void**)&glGetUniformui64vARB_ptr);
	paradox_opengl_load_function("glGetnUniformi64vARB", (void**)&glGetnUniformi64vARB_ptr);
	paradox_opengl_load_function("glGetnUniformui64vARB", (void**)&glGetnUniformui64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform1i64ARB", (void**)&glProgramUniform1i64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform2i64ARB", (void**)&glProgramUniform2i64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform3i64ARB", (void**)&glProgramUniform3i64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform4i64ARB", (void**)&glProgramUniform4i64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform1i64vARB", (void**)&glProgramUniform1i64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform2i64vARB", (void**)&glProgramUniform2i64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform3i64vARB", (void**)&glProgramUniform3i64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform4i64vARB", (void**)&glProgramUniform4i64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform1ui64ARB", (void**)&glProgramUniform1ui64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform2ui64ARB", (void**)&glProgramUniform2ui64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform3ui64ARB", (void**)&glProgramUniform3ui64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform4ui64ARB", (void**)&glProgramUniform4ui64ARB_ptr);
	paradox_opengl_load_function("glProgramUniform1ui64vARB", (void**)&glProgramUniform1ui64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform2ui64vARB", (void**)&glProgramUniform2ui64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform3ui64vARB", (void**)&glProgramUniform3ui64vARB_ptr);
	paradox_opengl_load_function("glProgramUniform4ui64vARB", (void**)&glProgramUniform4ui64vARB_ptr);
	paradox_opengl_load_function("glMultiDrawArraysIndirectCountARB", (void**)&glMultiDrawArraysIndirectCountARB_ptr);
	paradox_opengl_load_function("glMultiDrawElementsIndirectCountARB", (void**)&glMultiDrawElementsIndirectCountARB_ptr);
	paradox_opengl_load_function("glVertexAttribDivisorARB", (void**)&glVertexAttribDivisorARB_ptr);
	paradox_opengl_load_function("glMaxShaderCompilerThreadsARB", (void**)&glMaxShaderCompilerThreadsARB_ptr);
	paradox_opengl_load_function("glGetGraphicsResetStatusARB", (void**)&glGetGraphicsResetStatusARB_ptr);
	paradox_opengl_load_function("glGetnTexImageARB", (void**)&glGetnTexImageARB_ptr);
	paradox_opengl_load_function("glReadnPixelsARB", (void**)&glReadnPixelsARB_ptr);
	paradox_opengl_load_function("glGetnCompressedTexImageARB", (void**)&glGetnCompressedTexImageARB_ptr);
	paradox_opengl_load_function("glGetnUniformfvARB", (void**)&glGetnUniformfvARB_ptr);
	paradox_opengl_load_function("glGetnUniformivARB", (void**)&glGetnUniformivARB_ptr);
	paradox_opengl_load_function("glGetnUniformuivARB", (void**)&glGetnUniformuivARB_ptr);
	paradox_opengl_load_function("glGetnUniformdvARB", (void**)&glGetnUniformdvARB_ptr);
	paradox_opengl_load_function("glFramebufferSampleLocationsfvARB", (void**)&glFramebufferSampleLocationsfvARB_ptr);
	paradox_opengl_load_function("glNamedFramebufferSampleLocationsfvARB", (void**)&glNamedFramebufferSampleLocationsfvARB_ptr);
	paradox_opengl_load_function("glEvaluateDepthValuesARB", (void**)&glEvaluateDepthValuesARB_ptr);
	paradox_opengl_load_function("glMinSampleShadingARB", (void**)&glMinSampleShadingARB_ptr);
	paradox_opengl_load_function("glNamedStringARB", (void**)&glNamedStringARB_ptr);
	paradox_opengl_load_function("glDeleteNamedStringARB", (void**)&glDeleteNamedStringARB_ptr);
	paradox_opengl_load_function("glCompileShaderIncludeARB", (void**)&glCompileShaderIncludeARB_ptr);
	paradox_opengl_load_function("glIsNamedStringARB", (void**)&glIsNamedStringARB_ptr);
	paradox_opengl_load_function("glGetNamedStringARB", (void**)&glGetNamedStringARB_ptr);
	paradox_opengl_load_function("glGetNamedStringivARB", (void**)&glGetNamedStringivARB_ptr);
	paradox_opengl_load_function("glBufferPageCommitmentARB", (void**)&glBufferPageCommitmentARB_ptr);
	paradox_opengl_load_function("glNamedBufferPageCommitmentEXT", (void**)&glNamedBufferPageCommitmentEXT_ptr);
	paradox_opengl_load_function("glNamedBufferPageCommitmentARB", (void**)&glNamedBufferPageCommitmentARB_ptr);
	paradox_opengl_load_function("glTexPageCommitmentARB", (void**)&glTexPageCommitmentARB_ptr);
	paradox_opengl_load_function("glTexBufferARB", (void**)&glTexBufferARB_ptr);
	paradox_opengl_load_function("glDepthRangeArraydvNV", (void**)&glDepthRangeArraydvNV_ptr);
	paradox_opengl_load_function("glDepthRangeIndexeddNV", (void**)&glDepthRangeIndexeddNV_ptr);
	paradox_opengl_load_function("glBlendBarrierKHR", (void**)&glBlendBarrierKHR_ptr);
	paradox_opengl_load_function("glMaxShaderCompilerThreadsKHR", (void**)&glMaxShaderCompilerThreadsKHR_ptr);
	paradox_opengl_load_function("glRenderbufferStorageMultisampleAdvancedAMD", (void**)&glRenderbufferStorageMultisampleAdvancedAMD_ptr);
	paradox_opengl_load_function("glNamedRenderbufferStorageMultisampleAdvancedAMD", (void**)&glNamedRenderbufferStorageMultisampleAdvancedAMD_ptr);
	paradox_opengl_load_function("glGetPerfMonitorGroupsAMD", (void**)&glGetPerfMonitorGroupsAMD_ptr);
	paradox_opengl_load_function("glGetPerfMonitorCountersAMD", (void**)&glGetPerfMonitorCountersAMD_ptr);
	paradox_opengl_load_function("glGetPerfMonitorGroupStringAMD", (void**)&glGetPerfMonitorGroupStringAMD_ptr);
	paradox_opengl_load_function("glGetPerfMonitorCounterStringAMD", (void**)&glGetPerfMonitorCounterStringAMD_ptr);
	paradox_opengl_load_function("glGetPerfMonitorCounterInfoAMD", (void**)&glGetPerfMonitorCounterInfoAMD_ptr);
	paradox_opengl_load_function("glGenPerfMonitorsAMD", (void**)&glGenPerfMonitorsAMD_ptr);
	paradox_opengl_load_function("glDeletePerfMonitorsAMD", (void**)&glDeletePerfMonitorsAMD_ptr);
	paradox_opengl_load_function("glSelectPerfMonitorCountersAMD", (void**)&glSelectPerfMonitorCountersAMD_ptr);
	paradox_opengl_load_function("glBeginPerfMonitorAMD", (void**)&glBeginPerfMonitorAMD_ptr);
	paradox_opengl_load_function("glEndPerfMonitorAMD", (void**)&glEndPerfMonitorAMD_ptr);
	paradox_opengl_load_function("glGetPerfMonitorCounterDataAMD", (void**)&glGetPerfMonitorCounterDataAMD_ptr);
	paradox_opengl_load_function("glEGLImageTargetTexStorageEXT", (void**)&glEGLImageTargetTexStorageEXT_ptr);
	paradox_opengl_load_function("glEGLImageTargetTextureStorageEXT", (void**)&glEGLImageTargetTextureStorageEXT_ptr);
	paradox_opengl_load_function("glLabelObjectEXT", (void**)&glLabelObjectEXT_ptr);
	paradox_opengl_load_function("glGetObjectLabelEXT", (void**)&glGetObjectLabelEXT_ptr);
	paradox_opengl_load_function("glInsertEventMarkerEXT", (void**)&glInsertEventMarkerEXT_ptr);
	paradox_opengl_load_function("glPushGroupMarkerEXT", (void**)&glPushGroupMarkerEXT_ptr);
	paradox_opengl_load_function("glPopGroupMarkerEXT", (void**)&glPopGroupMarkerEXT_ptr);
	paradox_opengl_load_function("glMatrixLoadfEXT", (void**)&glMatrixLoadfEXT_ptr);
	paradox_opengl_load_function("glMatrixLoaddEXT", (void**)&glMatrixLoaddEXT_ptr);
	paradox_opengl_load_function("glMatrixMultfEXT", (void**)&glMatrixMultfEXT_ptr);
	paradox_opengl_load_function("glMatrixMultdEXT", (void**)&glMatrixMultdEXT_ptr);
	paradox_opengl_load_function("glMatrixLoadIdentityEXT", (void**)&glMatrixLoadIdentityEXT_ptr);
	paradox_opengl_load_function("glMatrixRotatefEXT", (void**)&glMatrixRotatefEXT_ptr);
	paradox_opengl_load_function("glMatrixRotatedEXT", (void**)&glMatrixRotatedEXT_ptr);
	paradox_opengl_load_function("glMatrixScalefEXT", (void**)&glMatrixScalefEXT_ptr);
	paradox_opengl_load_function("glMatrixScaledEXT", (void**)&glMatrixScaledEXT_ptr);
	paradox_opengl_load_function("glMatrixTranslatefEXT", (void**)&glMatrixTranslatefEXT_ptr);
	paradox_opengl_load_function("glMatrixTranslatedEXT", (void**)&glMatrixTranslatedEXT_ptr);
	paradox_opengl_load_function("glMatrixFrustumEXT", (void**)&glMatrixFrustumEXT_ptr);
	paradox_opengl_load_function("glMatrixOrthoEXT", (void**)&glMatrixOrthoEXT_ptr);
	paradox_opengl_load_function("glMatrixPopEXT", (void**)&glMatrixPopEXT_ptr);
	paradox_opengl_load_function("glMatrixPushEXT", (void**)&glMatrixPushEXT_ptr);
	paradox_opengl_load_function("glClientAttribDefaultEXT", (void**)&glClientAttribDefaultEXT_ptr);
	paradox_opengl_load_function("glPushClientAttribDefaultEXT", (void**)&glPushClientAttribDefaultEXT_ptr);
	paradox_opengl_load_function("glTextureParameterfEXT", (void**)&glTextureParameterfEXT_ptr);
	paradox_opengl_load_function("glTextureParameterfvEXT", (void**)&glTextureParameterfvEXT_ptr);
	paradox_opengl_load_function("glTextureParameteriEXT", (void**)&glTextureParameteriEXT_ptr);
	paradox_opengl_load_function("glTextureParameterivEXT", (void**)&glTextureParameterivEXT_ptr);
	paradox_opengl_load_function("glTextureImage1DEXT", (void**)&glTextureImage1DEXT_ptr);
	paradox_opengl_load_function("glTextureImage2DEXT", (void**)&glTextureImage2DEXT_ptr);
	paradox_opengl_load_function("glTextureSubImage1DEXT", (void**)&glTextureSubImage1DEXT_ptr);
	paradox_opengl_load_function("glTextureSubImage2DEXT", (void**)&glTextureSubImage2DEXT_ptr);
	paradox_opengl_load_function("glCopyTextureImage1DEXT", (void**)&glCopyTextureImage1DEXT_ptr);
	paradox_opengl_load_function("glCopyTextureImage2DEXT", (void**)&glCopyTextureImage2DEXT_ptr);
	paradox_opengl_load_function("glCopyTextureSubImage1DEXT", (void**)&glCopyTextureSubImage1DEXT_ptr);
	paradox_opengl_load_function("glCopyTextureSubImage2DEXT", (void**)&glCopyTextureSubImage2DEXT_ptr);
	paradox_opengl_load_function("glGetTextureImageEXT", (void**)&glGetTextureImageEXT_ptr);
	paradox_opengl_load_function("glGetTextureParameterfvEXT", (void**)&glGetTextureParameterfvEXT_ptr);
	paradox_opengl_load_function("glGetTextureParameterivEXT", (void**)&glGetTextureParameterivEXT_ptr);
	paradox_opengl_load_function("glGetTextureLevelParameterfvEXT", (void**)&glGetTextureLevelParameterfvEXT_ptr);
	paradox_opengl_load_function("glGetTextureLevelParameterivEXT", (void**)&glGetTextureLevelParameterivEXT_ptr);
	paradox_opengl_load_function("glTextureImage3DEXT", (void**)&glTextureImage3DEXT_ptr);
	paradox_opengl_load_function("glTextureSubImage3DEXT", (void**)&glTextureSubImage3DEXT_ptr);
	paradox_opengl_load_function("glCopyTextureSubImage3DEXT", (void**)&glCopyTextureSubImage3DEXT_ptr);
	paradox_opengl_load_function("glBindMultiTextureEXT", (void**)&glBindMultiTextureEXT_ptr);
	paradox_opengl_load_function("glMultiTexCoordPointerEXT", (void**)&glMultiTexCoordPointerEXT_ptr);
	paradox_opengl_load_function("glMultiTexEnvfEXT", (void**)&glMultiTexEnvfEXT_ptr);
	paradox_opengl_load_function("glMultiTexEnvfvEXT", (void**)&glMultiTexEnvfvEXT_ptr);
	paradox_opengl_load_function("glMultiTexEnviEXT", (void**)&glMultiTexEnviEXT_ptr);
	paradox_opengl_load_function("glMultiTexEnvivEXT", (void**)&glMultiTexEnvivEXT_ptr);
	paradox_opengl_load_function("glMultiTexGendEXT", (void**)&glMultiTexGendEXT_ptr);
	paradox_opengl_load_function("glMultiTexGendvEXT", (void**)&glMultiTexGendvEXT_ptr);
	paradox_opengl_load_function("glMultiTexGenfEXT", (void**)&glMultiTexGenfEXT_ptr);
	paradox_opengl_load_function("glMultiTexGenfvEXT", (void**)&glMultiTexGenfvEXT_ptr);
	paradox_opengl_load_function("glMultiTexGeniEXT", (void**)&glMultiTexGeniEXT_ptr);
	paradox_opengl_load_function("glMultiTexGenivEXT", (void**)&glMultiTexGenivEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexEnvfvEXT", (void**)&glGetMultiTexEnvfvEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexEnvivEXT", (void**)&glGetMultiTexEnvivEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexGendvEXT", (void**)&glGetMultiTexGendvEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexGenfvEXT", (void**)&glGetMultiTexGenfvEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexGenivEXT", (void**)&glGetMultiTexGenivEXT_ptr);
	paradox_opengl_load_function("glMultiTexParameteriEXT", (void**)&glMultiTexParameteriEXT_ptr);
	paradox_opengl_load_function("glMultiTexParameterivEXT", (void**)&glMultiTexParameterivEXT_ptr);
	paradox_opengl_load_function("glMultiTexParameterfEXT", (void**)&glMultiTexParameterfEXT_ptr);
	paradox_opengl_load_function("glMultiTexParameterfvEXT", (void**)&glMultiTexParameterfvEXT_ptr);
	paradox_opengl_load_function("glMultiTexImage1DEXT", (void**)&glMultiTexImage1DEXT_ptr);
	paradox_opengl_load_function("glMultiTexImage2DEXT", (void**)&glMultiTexImage2DEXT_ptr);
	paradox_opengl_load_function("glMultiTexSubImage1DEXT", (void**)&glMultiTexSubImage1DEXT_ptr);
	paradox_opengl_load_function("glMultiTexSubImage2DEXT", (void**)&glMultiTexSubImage2DEXT_ptr);
	paradox_opengl_load_function("glCopyMultiTexImage1DEXT", (void**)&glCopyMultiTexImage1DEXT_ptr);
	paradox_opengl_load_function("glCopyMultiTexImage2DEXT", (void**)&glCopyMultiTexImage2DEXT_ptr);
	paradox_opengl_load_function("glCopyMultiTexSubImage1DEXT", (void**)&glCopyMultiTexSubImage1DEXT_ptr);
	paradox_opengl_load_function("glCopyMultiTexSubImage2DEXT", (void**)&glCopyMultiTexSubImage2DEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexImageEXT", (void**)&glGetMultiTexImageEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexParameterfvEXT", (void**)&glGetMultiTexParameterfvEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexParameterivEXT", (void**)&glGetMultiTexParameterivEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexLevelParameterfvEXT", (void**)&glGetMultiTexLevelParameterfvEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexLevelParameterivEXT", (void**)&glGetMultiTexLevelParameterivEXT_ptr);
	paradox_opengl_load_function("glMultiTexImage3DEXT", (void**)&glMultiTexImage3DEXT_ptr);
	paradox_opengl_load_function("glMultiTexSubImage3DEXT", (void**)&glMultiTexSubImage3DEXT_ptr);
	paradox_opengl_load_function("glCopyMultiTexSubImage3DEXT", (void**)&glCopyMultiTexSubImage3DEXT_ptr);
	paradox_opengl_load_function("glEnableClientStateIndexedEXT", (void**)&glEnableClientStateIndexedEXT_ptr);
	paradox_opengl_load_function("glDisableClientStateIndexedEXT", (void**)&glDisableClientStateIndexedEXT_ptr);
	paradox_opengl_load_function("glGetFloatIndexedvEXT", (void**)&glGetFloatIndexedvEXT_ptr);
	paradox_opengl_load_function("glGetDoubleIndexedvEXT", (void**)&glGetDoubleIndexedvEXT_ptr);
	paradox_opengl_load_function("glGetPointerIndexedvEXT", (void**)&glGetPointerIndexedvEXT_ptr);
	paradox_opengl_load_function("glEnableIndexedEXT", (void**)&glEnableIndexedEXT_ptr);
	paradox_opengl_load_function("glDisableIndexedEXT", (void**)&glDisableIndexedEXT_ptr);
	paradox_opengl_load_function("glIsEnabledIndexedEXT", (void**)&glIsEnabledIndexedEXT_ptr);
	paradox_opengl_load_function("glGetIntegerIndexedvEXT", (void**)&glGetIntegerIndexedvEXT_ptr);
	paradox_opengl_load_function("glGetBooleanIndexedvEXT", (void**)&glGetBooleanIndexedvEXT_ptr);
	paradox_opengl_load_function("glCompressedTextureImage3DEXT", (void**)&glCompressedTextureImage3DEXT_ptr);
	paradox_opengl_load_function("glCompressedTextureImage2DEXT", (void**)&glCompressedTextureImage2DEXT_ptr);
	paradox_opengl_load_function("glCompressedTextureImage1DEXT", (void**)&glCompressedTextureImage1DEXT_ptr);
	paradox_opengl_load_function("glCompressedTextureSubImage3DEXT", (void**)&glCompressedTextureSubImage3DEXT_ptr);
	paradox_opengl_load_function("glCompressedTextureSubImage2DEXT", (void**)&glCompressedTextureSubImage2DEXT_ptr);
	paradox_opengl_load_function("glCompressedTextureSubImage1DEXT", (void**)&glCompressedTextureSubImage1DEXT_ptr);
	paradox_opengl_load_function("glGetCompressedTextureImageEXT", (void**)&glGetCompressedTextureImageEXT_ptr);
	paradox_opengl_load_function("glCompressedMultiTexImage3DEXT", (void**)&glCompressedMultiTexImage3DEXT_ptr);
	paradox_opengl_load_function("glCompressedMultiTexImage2DEXT", (void**)&glCompressedMultiTexImage2DEXT_ptr);
	paradox_opengl_load_function("glCompressedMultiTexImage1DEXT", (void**)&glCompressedMultiTexImage1DEXT_ptr);
	paradox_opengl_load_function("glCompressedMultiTexSubImage3DEXT", (void**)&glCompressedMultiTexSubImage3DEXT_ptr);
	paradox_opengl_load_function("glCompressedMultiTexSubImage2DEXT", (void**)&glCompressedMultiTexSubImage2DEXT_ptr);
	paradox_opengl_load_function("glCompressedMultiTexSubImage1DEXT", (void**)&glCompressedMultiTexSubImage1DEXT_ptr);
	paradox_opengl_load_function("glGetCompressedMultiTexImageEXT", (void**)&glGetCompressedMultiTexImageEXT_ptr);
	paradox_opengl_load_function("glMatrixLoadTransposefEXT", (void**)&glMatrixLoadTransposefEXT_ptr);
	paradox_opengl_load_function("glMatrixLoadTransposedEXT", (void**)&glMatrixLoadTransposedEXT_ptr);
	paradox_opengl_load_function("glMatrixMultTransposefEXT", (void**)&glMatrixMultTransposefEXT_ptr);
	paradox_opengl_load_function("glMatrixMultTransposedEXT", (void**)&glMatrixMultTransposedEXT_ptr);
	paradox_opengl_load_function("glNamedBufferDataEXT", (void**)&glNamedBufferDataEXT_ptr);
	paradox_opengl_load_function("glNamedBufferSubDataEXT", (void**)&glNamedBufferSubDataEXT_ptr);
	paradox_opengl_load_function("glMapNamedBufferEXT", (void**)&glMapNamedBufferEXT_ptr);
	paradox_opengl_load_function("glUnmapNamedBufferEXT", (void**)&glUnmapNamedBufferEXT_ptr);
	paradox_opengl_load_function("glGetNamedBufferParameterivEXT", (void**)&glGetNamedBufferParameterivEXT_ptr);
	paradox_opengl_load_function("glGetNamedBufferPointervEXT", (void**)&glGetNamedBufferPointervEXT_ptr);
	paradox_opengl_load_function("glGetNamedBufferSubDataEXT", (void**)&glGetNamedBufferSubDataEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1fEXT", (void**)&glProgramUniform1fEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2fEXT", (void**)&glProgramUniform2fEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3fEXT", (void**)&glProgramUniform3fEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4fEXT", (void**)&glProgramUniform4fEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1iEXT", (void**)&glProgramUniform1iEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2iEXT", (void**)&glProgramUniform2iEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3iEXT", (void**)&glProgramUniform3iEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4iEXT", (void**)&glProgramUniform4iEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1fvEXT", (void**)&glProgramUniform1fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2fvEXT", (void**)&glProgramUniform2fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3fvEXT", (void**)&glProgramUniform3fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4fvEXT", (void**)&glProgramUniform4fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1ivEXT", (void**)&glProgramUniform1ivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2ivEXT", (void**)&glProgramUniform2ivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3ivEXT", (void**)&glProgramUniform3ivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4ivEXT", (void**)&glProgramUniform4ivEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2fvEXT", (void**)&glProgramUniformMatrix2fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3fvEXT", (void**)&glProgramUniformMatrix3fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4fvEXT", (void**)&glProgramUniformMatrix4fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x3fvEXT", (void**)&glProgramUniformMatrix2x3fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x2fvEXT", (void**)&glProgramUniformMatrix3x2fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x4fvEXT", (void**)&glProgramUniformMatrix2x4fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x2fvEXT", (void**)&glProgramUniformMatrix4x2fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x4fvEXT", (void**)&glProgramUniformMatrix3x4fvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x3fvEXT", (void**)&glProgramUniformMatrix4x3fvEXT_ptr);
	paradox_opengl_load_function("glTextureBufferEXT", (void**)&glTextureBufferEXT_ptr);
	paradox_opengl_load_function("glMultiTexBufferEXT", (void**)&glMultiTexBufferEXT_ptr);
	paradox_opengl_load_function("glTextureParameterIivEXT", (void**)&glTextureParameterIivEXT_ptr);
	paradox_opengl_load_function("glTextureParameterIuivEXT", (void**)&glTextureParameterIuivEXT_ptr);
	paradox_opengl_load_function("glGetTextureParameterIivEXT", (void**)&glGetTextureParameterIivEXT_ptr);
	paradox_opengl_load_function("glGetTextureParameterIuivEXT", (void**)&glGetTextureParameterIuivEXT_ptr);
	paradox_opengl_load_function("glMultiTexParameterIivEXT", (void**)&glMultiTexParameterIivEXT_ptr);
	paradox_opengl_load_function("glMultiTexParameterIuivEXT", (void**)&glMultiTexParameterIuivEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexParameterIivEXT", (void**)&glGetMultiTexParameterIivEXT_ptr);
	paradox_opengl_load_function("glGetMultiTexParameterIuivEXT", (void**)&glGetMultiTexParameterIuivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1uiEXT", (void**)&glProgramUniform1uiEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2uiEXT", (void**)&glProgramUniform2uiEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3uiEXT", (void**)&glProgramUniform3uiEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4uiEXT", (void**)&glProgramUniform4uiEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1uivEXT", (void**)&glProgramUniform1uivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2uivEXT", (void**)&glProgramUniform2uivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3uivEXT", (void**)&glProgramUniform3uivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4uivEXT", (void**)&glProgramUniform4uivEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameters4fvEXT", (void**)&glNamedProgramLocalParameters4fvEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameterI4iEXT", (void**)&glNamedProgramLocalParameterI4iEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameterI4ivEXT", (void**)&glNamedProgramLocalParameterI4ivEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParametersI4ivEXT", (void**)&glNamedProgramLocalParametersI4ivEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameterI4uiEXT", (void**)&glNamedProgramLocalParameterI4uiEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameterI4uivEXT", (void**)&glNamedProgramLocalParameterI4uivEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParametersI4uivEXT", (void**)&glNamedProgramLocalParametersI4uivEXT_ptr);
	paradox_opengl_load_function("glGetNamedProgramLocalParameterIivEXT", (void**)&glGetNamedProgramLocalParameterIivEXT_ptr);
	paradox_opengl_load_function("glGetNamedProgramLocalParameterIuivEXT", (void**)&glGetNamedProgramLocalParameterIuivEXT_ptr);
	paradox_opengl_load_function("glEnableClientStateiEXT", (void**)&glEnableClientStateiEXT_ptr);
	paradox_opengl_load_function("glDisableClientStateiEXT", (void**)&glDisableClientStateiEXT_ptr);
	paradox_opengl_load_function("glGetFloati_vEXT", (void**)&glGetFloati_vEXT_ptr);
	paradox_opengl_load_function("glGetDoublei_vEXT", (void**)&glGetDoublei_vEXT_ptr);
	paradox_opengl_load_function("glGetPointeri_vEXT", (void**)&glGetPointeri_vEXT_ptr);
	paradox_opengl_load_function("glNamedProgramStringEXT", (void**)&glNamedProgramStringEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameter4dEXT", (void**)&glNamedProgramLocalParameter4dEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameter4dvEXT", (void**)&glNamedProgramLocalParameter4dvEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameter4fEXT", (void**)&glNamedProgramLocalParameter4fEXT_ptr);
	paradox_opengl_load_function("glNamedProgramLocalParameter4fvEXT", (void**)&glNamedProgramLocalParameter4fvEXT_ptr);
	paradox_opengl_load_function("glGetNamedProgramLocalParameterdvEXT", (void**)&glGetNamedProgramLocalParameterdvEXT_ptr);
	paradox_opengl_load_function("glGetNamedProgramLocalParameterfvEXT", (void**)&glGetNamedProgramLocalParameterfvEXT_ptr);
	paradox_opengl_load_function("glGetNamedProgramivEXT", (void**)&glGetNamedProgramivEXT_ptr);
	paradox_opengl_load_function("glGetNamedProgramStringEXT", (void**)&glGetNamedProgramStringEXT_ptr);
	paradox_opengl_load_function("glNamedRenderbufferStorageEXT", (void**)&glNamedRenderbufferStorageEXT_ptr);
	paradox_opengl_load_function("glGetNamedRenderbufferParameterivEXT", (void**)&glGetNamedRenderbufferParameterivEXT_ptr);
	paradox_opengl_load_function("glNamedRenderbufferStorageMultisampleEXT", (void**)&glNamedRenderbufferStorageMultisampleEXT_ptr);
	paradox_opengl_load_function("glNamedRenderbufferStorageMultisampleCoverageEXT", (void**)&glNamedRenderbufferStorageMultisampleCoverageEXT_ptr);
	paradox_opengl_load_function("glCheckNamedFramebufferStatusEXT", (void**)&glCheckNamedFramebufferStatusEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferTexture1DEXT", (void**)&glNamedFramebufferTexture1DEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferTexture2DEXT", (void**)&glNamedFramebufferTexture2DEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferTexture3DEXT", (void**)&glNamedFramebufferTexture3DEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferRenderbufferEXT", (void**)&glNamedFramebufferRenderbufferEXT_ptr);
	paradox_opengl_load_function("glGetNamedFramebufferAttachmentParameterivEXT", (void**)&glGetNamedFramebufferAttachmentParameterivEXT_ptr);
	paradox_opengl_load_function("glGenerateTextureMipmapEXT", (void**)&glGenerateTextureMipmapEXT_ptr);
	paradox_opengl_load_function("glGenerateMultiTexMipmapEXT", (void**)&glGenerateMultiTexMipmapEXT_ptr);
	paradox_opengl_load_function("glFramebufferDrawBufferEXT", (void**)&glFramebufferDrawBufferEXT_ptr);
	paradox_opengl_load_function("glFramebufferDrawBuffersEXT", (void**)&glFramebufferDrawBuffersEXT_ptr);
	paradox_opengl_load_function("glFramebufferReadBufferEXT", (void**)&glFramebufferReadBufferEXT_ptr);
	paradox_opengl_load_function("glGetFramebufferParameterivEXT", (void**)&glGetFramebufferParameterivEXT_ptr);
	paradox_opengl_load_function("glNamedCopyBufferSubDataEXT", (void**)&glNamedCopyBufferSubDataEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferTextureEXT", (void**)&glNamedFramebufferTextureEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferTextureLayerEXT", (void**)&glNamedFramebufferTextureLayerEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferTextureFaceEXT", (void**)&glNamedFramebufferTextureFaceEXT_ptr);
	paradox_opengl_load_function("glTextureRenderbufferEXT", (void**)&glTextureRenderbufferEXT_ptr);
	paradox_opengl_load_function("glMultiTexRenderbufferEXT", (void**)&glMultiTexRenderbufferEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexOffsetEXT", (void**)&glVertexArrayVertexOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayColorOffsetEXT", (void**)&glVertexArrayColorOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayEdgeFlagOffsetEXT", (void**)&glVertexArrayEdgeFlagOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayIndexOffsetEXT", (void**)&glVertexArrayIndexOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayNormalOffsetEXT", (void**)&glVertexArrayNormalOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayTexCoordOffsetEXT", (void**)&glVertexArrayTexCoordOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayMultiTexCoordOffsetEXT", (void**)&glVertexArrayMultiTexCoordOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayFogCoordOffsetEXT", (void**)&glVertexArrayFogCoordOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArraySecondaryColorOffsetEXT", (void**)&glVertexArraySecondaryColorOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribOffsetEXT", (void**)&glVertexArrayVertexAttribOffsetEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribIOffsetEXT", (void**)&glVertexArrayVertexAttribIOffsetEXT_ptr);
	paradox_opengl_load_function("glEnableVertexArrayEXT", (void**)&glEnableVertexArrayEXT_ptr);
	paradox_opengl_load_function("glDisableVertexArrayEXT", (void**)&glDisableVertexArrayEXT_ptr);
	paradox_opengl_load_function("glEnableVertexArrayAttribEXT", (void**)&glEnableVertexArrayAttribEXT_ptr);
	paradox_opengl_load_function("glDisableVertexArrayAttribEXT", (void**)&glDisableVertexArrayAttribEXT_ptr);
	paradox_opengl_load_function("glGetVertexArrayIntegervEXT", (void**)&glGetVertexArrayIntegervEXT_ptr);
	paradox_opengl_load_function("glGetVertexArrayPointervEXT", (void**)&glGetVertexArrayPointervEXT_ptr);
	paradox_opengl_load_function("glGetVertexArrayIntegeri_vEXT", (void**)&glGetVertexArrayIntegeri_vEXT_ptr);
	paradox_opengl_load_function("glGetVertexArrayPointeri_vEXT", (void**)&glGetVertexArrayPointeri_vEXT_ptr);
	paradox_opengl_load_function("glMapNamedBufferRangeEXT", (void**)&glMapNamedBufferRangeEXT_ptr);
	paradox_opengl_load_function("glFlushMappedNamedBufferRangeEXT", (void**)&glFlushMappedNamedBufferRangeEXT_ptr);
	paradox_opengl_load_function("glNamedBufferStorageEXT", (void**)&glNamedBufferStorageEXT_ptr);
	paradox_opengl_load_function("glClearNamedBufferDataEXT", (void**)&glClearNamedBufferDataEXT_ptr);
	paradox_opengl_load_function("glClearNamedBufferSubDataEXT", (void**)&glClearNamedBufferSubDataEXT_ptr);
	paradox_opengl_load_function("glNamedFramebufferParameteriEXT", (void**)&glNamedFramebufferParameteriEXT_ptr);
	paradox_opengl_load_function("glGetNamedFramebufferParameterivEXT", (void**)&glGetNamedFramebufferParameterivEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1dEXT", (void**)&glProgramUniform1dEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2dEXT", (void**)&glProgramUniform2dEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3dEXT", (void**)&glProgramUniform3dEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4dEXT", (void**)&glProgramUniform4dEXT_ptr);
	paradox_opengl_load_function("glProgramUniform1dvEXT", (void**)&glProgramUniform1dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniform2dvEXT", (void**)&glProgramUniform2dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniform3dvEXT", (void**)&glProgramUniform3dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniform4dvEXT", (void**)&glProgramUniform4dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2dvEXT", (void**)&glProgramUniformMatrix2dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3dvEXT", (void**)&glProgramUniformMatrix3dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4dvEXT", (void**)&glProgramUniformMatrix4dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x3dvEXT", (void**)&glProgramUniformMatrix2x3dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix2x4dvEXT", (void**)&glProgramUniformMatrix2x4dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x2dvEXT", (void**)&glProgramUniformMatrix3x2dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix3x4dvEXT", (void**)&glProgramUniformMatrix3x4dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x2dvEXT", (void**)&glProgramUniformMatrix4x2dvEXT_ptr);
	paradox_opengl_load_function("glProgramUniformMatrix4x3dvEXT", (void**)&glProgramUniformMatrix4x3dvEXT_ptr);
	paradox_opengl_load_function("glTextureBufferRangeEXT", (void**)&glTextureBufferRangeEXT_ptr);
	paradox_opengl_load_function("glTextureStorage1DEXT", (void**)&glTextureStorage1DEXT_ptr);
	paradox_opengl_load_function("glTextureStorage2DEXT", (void**)&glTextureStorage2DEXT_ptr);
	paradox_opengl_load_function("glTextureStorage3DEXT", (void**)&glTextureStorage3DEXT_ptr);
	paradox_opengl_load_function("glTextureStorage2DMultisampleEXT", (void**)&glTextureStorage2DMultisampleEXT_ptr);
	paradox_opengl_load_function("glTextureStorage3DMultisampleEXT", (void**)&glTextureStorage3DMultisampleEXT_ptr);
	paradox_opengl_load_function("glVertexArrayBindVertexBufferEXT", (void**)&glVertexArrayBindVertexBufferEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribFormatEXT", (void**)&glVertexArrayVertexAttribFormatEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribIFormatEXT", (void**)&glVertexArrayVertexAttribIFormatEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribLFormatEXT", (void**)&glVertexArrayVertexAttribLFormatEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribBindingEXT", (void**)&glVertexArrayVertexAttribBindingEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexBindingDivisorEXT", (void**)&glVertexArrayVertexBindingDivisorEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribLOffsetEXT", (void**)&glVertexArrayVertexAttribLOffsetEXT_ptr);
	paradox_opengl_load_function("glTexturePageCommitmentEXT", (void**)&glTexturePageCommitmentEXT_ptr);
	paradox_opengl_load_function("glVertexArrayVertexAttribDivisorEXT", (void**)&glVertexArrayVertexAttribDivisorEXT_ptr);
	paradox_opengl_load_function("glDrawArraysInstancedEXT", (void**)&glDrawArraysInstancedEXT_ptr);
	paradox_opengl_load_function("glDrawElementsInstancedEXT", (void**)&glDrawElementsInstancedEXT_ptr);
	paradox_opengl_load_function("glPolygonOffsetClampEXT", (void**)&glPolygonOffsetClampEXT_ptr);
	paradox_opengl_load_function("glRasterSamplesEXT", (void**)&glRasterSamplesEXT_ptr);
	paradox_opengl_load_function("glUseShaderProgramEXT", (void**)&glUseShaderProgramEXT_ptr);
	paradox_opengl_load_function("glActiveProgramEXT", (void**)&glActiveProgramEXT_ptr);
	paradox_opengl_load_function("glCreateShaderProgramEXT", (void**)&glCreateShaderProgramEXT_ptr);
	paradox_opengl_load_function("glFramebufferFetchBarrierEXT", (void**)&glFramebufferFetchBarrierEXT_ptr);
	paradox_opengl_load_function("glTexStorage1DEXT", (void**)&glTexStorage1DEXT_ptr);
	paradox_opengl_load_function("glTexStorage2DEXT", (void**)&glTexStorage2DEXT_ptr);
	paradox_opengl_load_function("glTexStorage3DEXT", (void**)&glTexStorage3DEXT_ptr);
	paradox_opengl_load_function("glWindowRectanglesEXT", (void**)&glWindowRectanglesEXT_ptr);
	paradox_opengl_load_function("glApplyFramebufferAttachmentCMAAINTEL", (void**)&glApplyFramebufferAttachmentCMAAINTEL_ptr);
	paradox_opengl_load_function("glBeginPerfQueryINTEL", (void**)&glBeginPerfQueryINTEL_ptr);
	paradox_opengl_load_function("glCreatePerfQueryINTEL", (void**)&glCreatePerfQueryINTEL_ptr);
	paradox_opengl_load_function("glDeletePerfQueryINTEL", (void**)&glDeletePerfQueryINTEL_ptr);
	paradox_opengl_load_function("glEndPerfQueryINTEL", (void**)&glEndPerfQueryINTEL_ptr);
	paradox_opengl_load_function("glGetFirstPerfQueryIdINTEL", (void**)&glGetFirstPerfQueryIdINTEL_ptr);
	paradox_opengl_load_function("glGetNextPerfQueryIdINTEL", (void**)&glGetNextPerfQueryIdINTEL_ptr);
	paradox_opengl_load_function("glGetPerfCounterInfoINTEL", (void**)&glGetPerfCounterInfoINTEL_ptr);
	paradox_opengl_load_function("glGetPerfQueryDataINTEL", (void**)&glGetPerfQueryDataINTEL_ptr);
	paradox_opengl_load_function("glGetPerfQueryIdByNameINTEL", (void**)&glGetPerfQueryIdByNameINTEL_ptr);
	paradox_opengl_load_function("glGetPerfQueryInfoINTEL", (void**)&glGetPerfQueryInfoINTEL_ptr);
	paradox_opengl_load_function("glFramebufferParameteriMESA", (void**)&glFramebufferParameteriMESA_ptr);
	paradox_opengl_load_function("glGetFramebufferParameterivMESA", (void**)&glGetFramebufferParameterivMESA_ptr);
	paradox_opengl_load_function("glMultiDrawArraysIndirectBindlessNV", (void**)&glMultiDrawArraysIndirectBindlessNV_ptr);
	paradox_opengl_load_function("glMultiDrawElementsIndirectBindlessNV", (void**)&glMultiDrawElementsIndirectBindlessNV_ptr);
	paradox_opengl_load_function("glMultiDrawArraysIndirectBindlessCountNV", (void**)&glMultiDrawArraysIndirectBindlessCountNV_ptr);
	paradox_opengl_load_function("glMultiDrawElementsIndirectBindlessCountNV", (void**)&glMultiDrawElementsIndirectBindlessCountNV_ptr);
	paradox_opengl_load_function("glGetTextureHandleNV", (void**)&glGetTextureHandleNV_ptr);
	paradox_opengl_load_function("glGetTextureSamplerHandleNV", (void**)&glGetTextureSamplerHandleNV_ptr);
	paradox_opengl_load_function("glMakeTextureHandleResidentNV", (void**)&glMakeTextureHandleResidentNV_ptr);
	paradox_opengl_load_function("glMakeTextureHandleNonResidentNV", (void**)&glMakeTextureHandleNonResidentNV_ptr);
	paradox_opengl_load_function("glGetImageHandleNV", (void**)&glGetImageHandleNV_ptr);
	paradox_opengl_load_function("glMakeImageHandleResidentNV", (void**)&glMakeImageHandleResidentNV_ptr);
	paradox_opengl_load_function("glMakeImageHandleNonResidentNV", (void**)&glMakeImageHandleNonResidentNV_ptr);
	paradox_opengl_load_function("glUniformHandleui64NV", (void**)&glUniformHandleui64NV_ptr);
	paradox_opengl_load_function("glUniformHandleui64vNV", (void**)&glUniformHandleui64vNV_ptr);
	paradox_opengl_load_function("glProgramUniformHandleui64NV", (void**)&glProgramUniformHandleui64NV_ptr);
	paradox_opengl_load_function("glProgramUniformHandleui64vNV", (void**)&glProgramUniformHandleui64vNV_ptr);
	paradox_opengl_load_function("glIsTextureHandleResidentNV", (void**)&glIsTextureHandleResidentNV_ptr);
	paradox_opengl_load_function("glIsImageHandleResidentNV", (void**)&glIsImageHandleResidentNV_ptr);
	paradox_opengl_load_function("glBlendParameteriNV", (void**)&glBlendParameteriNV_ptr);
	paradox_opengl_load_function("glBlendBarrierNV", (void**)&glBlendBarrierNV_ptr);
	paradox_opengl_load_function("glViewportPositionWScaleNV", (void**)&glViewportPositionWScaleNV_ptr);
	paradox_opengl_load_function("glCreateStatesNV", (void**)&glCreateStatesNV_ptr);
	paradox_opengl_load_function("glDeleteStatesNV", (void**)&glDeleteStatesNV_ptr);
	paradox_opengl_load_function("glIsStateNV", (void**)&glIsStateNV_ptr);
	paradox_opengl_load_function("glStateCaptureNV", (void**)&glStateCaptureNV_ptr);
	paradox_opengl_load_function("glGetCommandHeaderNV", (void**)&glGetCommandHeaderNV_ptr);
	paradox_opengl_load_function("glGetStageIndexNV", (void**)&glGetStageIndexNV_ptr);
	paradox_opengl_load_function("glDrawCommandsNV", (void**)&glDrawCommandsNV_ptr);
	paradox_opengl_load_function("glDrawCommandsAddressNV", (void**)&glDrawCommandsAddressNV_ptr);
	paradox_opengl_load_function("glDrawCommandsStatesNV", (void**)&glDrawCommandsStatesNV_ptr);
	paradox_opengl_load_function("glDrawCommandsStatesAddressNV", (void**)&glDrawCommandsStatesAddressNV_ptr);
	paradox_opengl_load_function("glCreateCommandListsNV", (void**)&glCreateCommandListsNV_ptr);
	paradox_opengl_load_function("glDeleteCommandListsNV", (void**)&glDeleteCommandListsNV_ptr);
	paradox_opengl_load_function("glIsCommandListNV", (void**)&glIsCommandListNV_ptr);
	paradox_opengl_load_function("glListDrawCommandsStatesClientNV", (void**)&glListDrawCommandsStatesClientNV_ptr);
	paradox_opengl_load_function("glCommandListSegmentsNV", (void**)&glCommandListSegmentsNV_ptr);
	paradox_opengl_load_function("glCompileCommandListNV", (void**)&glCompileCommandListNV_ptr);
	paradox_opengl_load_function("glCallCommandListNV", (void**)&glCallCommandListNV_ptr);
	paradox_opengl_load_function("glBeginConditionalRenderNV", (void**)&glBeginConditionalRenderNV_ptr);
	paradox_opengl_load_function("glEndConditionalRenderNV", (void**)&glEndConditionalRenderNV_ptr);
	paradox_opengl_load_function("glSubpixelPrecisionBiasNV", (void**)&glSubpixelPrecisionBiasNV_ptr);
	paradox_opengl_load_function("glConservativeRasterParameterfNV", (void**)&glConservativeRasterParameterfNV_ptr);
	paradox_opengl_load_function("glConservativeRasterParameteriNV", (void**)&glConservativeRasterParameteriNV_ptr);
	paradox_opengl_load_function("glDepthRangedNV", (void**)&glDepthRangedNV_ptr);
	paradox_opengl_load_function("glClearDepthdNV", (void**)&glClearDepthdNV_ptr);
	paradox_opengl_load_function("glDepthBoundsdNV", (void**)&glDepthBoundsdNV_ptr);
	paradox_opengl_load_function("glDrawVkImageNV", (void**)&glDrawVkImageNV_ptr);
	paradox_opengl_load_function("glGetVkProcAddrNV", (void**)&glGetVkProcAddrNV_ptr);
	paradox_opengl_load_function("glWaitVkSemaphoreNV", (void**)&glWaitVkSemaphoreNV_ptr);
	paradox_opengl_load_function("glSignalVkSemaphoreNV", (void**)&glSignalVkSemaphoreNV_ptr);
	paradox_opengl_load_function("glSignalVkFenceNV", (void**)&glSignalVkFenceNV_ptr);
	paradox_opengl_load_function("glFragmentCoverageColorNV", (void**)&glFragmentCoverageColorNV_ptr);
	paradox_opengl_load_function("glCoverageModulationTableNV", (void**)&glCoverageModulationTableNV_ptr);
	paradox_opengl_load_function("glGetCoverageModulationTableNV", (void**)&glGetCoverageModulationTableNV_ptr);
	paradox_opengl_load_function("glCoverageModulationNV", (void**)&glCoverageModulationNV_ptr);
	paradox_opengl_load_function("glRenderbufferStorageMultisampleCoverageNV", (void**)&glRenderbufferStorageMultisampleCoverageNV_ptr);
	paradox_opengl_load_function("glUniform1i64NV", (void**)&glUniform1i64NV_ptr);
	paradox_opengl_load_function("glUniform2i64NV", (void**)&glUniform2i64NV_ptr);
	paradox_opengl_load_function("glUniform3i64NV", (void**)&glUniform3i64NV_ptr);
	paradox_opengl_load_function("glUniform4i64NV", (void**)&glUniform4i64NV_ptr);
	paradox_opengl_load_function("glUniform1i64vNV", (void**)&glUniform1i64vNV_ptr);
	paradox_opengl_load_function("glUniform2i64vNV", (void**)&glUniform2i64vNV_ptr);
	paradox_opengl_load_function("glUniform3i64vNV", (void**)&glUniform3i64vNV_ptr);
	paradox_opengl_load_function("glUniform4i64vNV", (void**)&glUniform4i64vNV_ptr);
	paradox_opengl_load_function("glUniform1ui64NV", (void**)&glUniform1ui64NV_ptr);
	paradox_opengl_load_function("glUniform2ui64NV", (void**)&glUniform2ui64NV_ptr);
	paradox_opengl_load_function("glUniform3ui64NV", (void**)&glUniform3ui64NV_ptr);
	paradox_opengl_load_function("glUniform4ui64NV", (void**)&glUniform4ui64NV_ptr);
	paradox_opengl_load_function("glUniform1ui64vNV", (void**)&glUniform1ui64vNV_ptr);
	paradox_opengl_load_function("glUniform2ui64vNV", (void**)&glUniform2ui64vNV_ptr);
	paradox_opengl_load_function("glUniform3ui64vNV", (void**)&glUniform3ui64vNV_ptr);
	paradox_opengl_load_function("glUniform4ui64vNV", (void**)&glUniform4ui64vNV_ptr);
	paradox_opengl_load_function("glGetUniformi64vNV", (void**)&glGetUniformi64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform1i64NV", (void**)&glProgramUniform1i64NV_ptr);
	paradox_opengl_load_function("glProgramUniform2i64NV", (void**)&glProgramUniform2i64NV_ptr);
	paradox_opengl_load_function("glProgramUniform3i64NV", (void**)&glProgramUniform3i64NV_ptr);
	paradox_opengl_load_function("glProgramUniform4i64NV", (void**)&glProgramUniform4i64NV_ptr);
	paradox_opengl_load_function("glProgramUniform1i64vNV", (void**)&glProgramUniform1i64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform2i64vNV", (void**)&glProgramUniform2i64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform3i64vNV", (void**)&glProgramUniform3i64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform4i64vNV", (void**)&glProgramUniform4i64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform1ui64NV", (void**)&glProgramUniform1ui64NV_ptr);
	paradox_opengl_load_function("glProgramUniform2ui64NV", (void**)&glProgramUniform2ui64NV_ptr);
	paradox_opengl_load_function("glProgramUniform3ui64NV", (void**)&glProgramUniform3ui64NV_ptr);
	paradox_opengl_load_function("glProgramUniform4ui64NV", (void**)&glProgramUniform4ui64NV_ptr);
	paradox_opengl_load_function("glProgramUniform1ui64vNV", (void**)&glProgramUniform1ui64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform2ui64vNV", (void**)&glProgramUniform2ui64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform3ui64vNV", (void**)&glProgramUniform3ui64vNV_ptr);
	paradox_opengl_load_function("glProgramUniform4ui64vNV", (void**)&glProgramUniform4ui64vNV_ptr);
	paradox_opengl_load_function("glGetInternalformatSampleivNV", (void**)&glGetInternalformatSampleivNV_ptr);
	paradox_opengl_load_function("glGetMemoryObjectDetachedResourcesuivNV", (void**)&glGetMemoryObjectDetachedResourcesuivNV_ptr);
	paradox_opengl_load_function("glResetMemoryObjectParameterNV", (void**)&glResetMemoryObjectParameterNV_ptr);
	paradox_opengl_load_function("glTexAttachMemoryNV", (void**)&glTexAttachMemoryNV_ptr);
	paradox_opengl_load_function("glBufferAttachMemoryNV", (void**)&glBufferAttachMemoryNV_ptr);
	paradox_opengl_load_function("glTextureAttachMemoryNV", (void**)&glTextureAttachMemoryNV_ptr);
	paradox_opengl_load_function("glNamedBufferAttachMemoryNV", (void**)&glNamedBufferAttachMemoryNV_ptr);
	paradox_opengl_load_function("glBufferPageCommitmentMemNV", (void**)&glBufferPageCommitmentMemNV_ptr);
	paradox_opengl_load_function("glTexPageCommitmentMemNV", (void**)&glTexPageCommitmentMemNV_ptr);
	paradox_opengl_load_function("glNamedBufferPageCommitmentMemNV", (void**)&glNamedBufferPageCommitmentMemNV_ptr);
	paradox_opengl_load_function("glTexturePageCommitmentMemNV", (void**)&glTexturePageCommitmentMemNV_ptr);
	paradox_opengl_load_function("glDrawMeshTasksNV", (void**)&glDrawMeshTasksNV_ptr);
	paradox_opengl_load_function("glDrawMeshTasksIndirectNV", (void**)&glDrawMeshTasksIndirectNV_ptr);
	paradox_opengl_load_function("glMultiDrawMeshTasksIndirectNV", (void**)&glMultiDrawMeshTasksIndirectNV_ptr);
	paradox_opengl_load_function("glMultiDrawMeshTasksIndirectCountNV", (void**)&glMultiDrawMeshTasksIndirectCountNV_ptr);
	paradox_opengl_load_function("glGenPathsNV", (void**)&glGenPathsNV_ptr);
	paradox_opengl_load_function("glDeletePathsNV", (void**)&glDeletePathsNV_ptr);
	paradox_opengl_load_function("glIsPathNV", (void**)&glIsPathNV_ptr);
	paradox_opengl_load_function("glPathCommandsNV", (void**)&glPathCommandsNV_ptr);
	paradox_opengl_load_function("glPathCoordsNV", (void**)&glPathCoordsNV_ptr);
	paradox_opengl_load_function("glPathSubCommandsNV", (void**)&glPathSubCommandsNV_ptr);
	paradox_opengl_load_function("glPathSubCoordsNV", (void**)&glPathSubCoordsNV_ptr);
	paradox_opengl_load_function("glPathStringNV", (void**)&glPathStringNV_ptr);
	paradox_opengl_load_function("glPathGlyphsNV", (void**)&glPathGlyphsNV_ptr);
	paradox_opengl_load_function("glPathGlyphRangeNV", (void**)&glPathGlyphRangeNV_ptr);
	paradox_opengl_load_function("glWeightPathsNV", (void**)&glWeightPathsNV_ptr);
	paradox_opengl_load_function("glCopyPathNV", (void**)&glCopyPathNV_ptr);
	paradox_opengl_load_function("glInterpolatePathsNV", (void**)&glInterpolatePathsNV_ptr);
	paradox_opengl_load_function("glTransformPathNV", (void**)&glTransformPathNV_ptr);
	paradox_opengl_load_function("glPathParameterivNV", (void**)&glPathParameterivNV_ptr);
	paradox_opengl_load_function("glPathParameteriNV", (void**)&glPathParameteriNV_ptr);
	paradox_opengl_load_function("glPathParameterfvNV", (void**)&glPathParameterfvNV_ptr);
	paradox_opengl_load_function("glPathParameterfNV", (void**)&glPathParameterfNV_ptr);
	paradox_opengl_load_function("glPathDashArrayNV", (void**)&glPathDashArrayNV_ptr);
	paradox_opengl_load_function("glPathStencilFuncNV", (void**)&glPathStencilFuncNV_ptr);
	paradox_opengl_load_function("glPathStencilDepthOffsetNV", (void**)&glPathStencilDepthOffsetNV_ptr);
	paradox_opengl_load_function("glStencilFillPathNV", (void**)&glStencilFillPathNV_ptr);
	paradox_opengl_load_function("glStencilStrokePathNV", (void**)&glStencilStrokePathNV_ptr);
	paradox_opengl_load_function("glStencilFillPathInstancedNV", (void**)&glStencilFillPathInstancedNV_ptr);
	paradox_opengl_load_function("glStencilStrokePathInstancedNV", (void**)&glStencilStrokePathInstancedNV_ptr);
	paradox_opengl_load_function("glPathCoverDepthFuncNV", (void**)&glPathCoverDepthFuncNV_ptr);
	paradox_opengl_load_function("glCoverFillPathNV", (void**)&glCoverFillPathNV_ptr);
	paradox_opengl_load_function("glCoverStrokePathNV", (void**)&glCoverStrokePathNV_ptr);
	paradox_opengl_load_function("glCoverFillPathInstancedNV", (void**)&glCoverFillPathInstancedNV_ptr);
	paradox_opengl_load_function("glCoverStrokePathInstancedNV", (void**)&glCoverStrokePathInstancedNV_ptr);
	paradox_opengl_load_function("glGetPathParameterivNV", (void**)&glGetPathParameterivNV_ptr);
	paradox_opengl_load_function("glGetPathParameterfvNV", (void**)&glGetPathParameterfvNV_ptr);
	paradox_opengl_load_function("glGetPathCommandsNV", (void**)&glGetPathCommandsNV_ptr);
	paradox_opengl_load_function("glGetPathCoordsNV", (void**)&glGetPathCoordsNV_ptr);
	paradox_opengl_load_function("glGetPathDashArrayNV", (void**)&glGetPathDashArrayNV_ptr);
	paradox_opengl_load_function("glGetPathMetricsNV", (void**)&glGetPathMetricsNV_ptr);
	paradox_opengl_load_function("glGetPathMetricRangeNV", (void**)&glGetPathMetricRangeNV_ptr);
	paradox_opengl_load_function("glGetPathSpacingNV", (void**)&glGetPathSpacingNV_ptr);
	paradox_opengl_load_function("glIsPointInFillPathNV", (void**)&glIsPointInFillPathNV_ptr);
	paradox_opengl_load_function("glIsPointInStrokePathNV", (void**)&glIsPointInStrokePathNV_ptr);
	paradox_opengl_load_function("glGetPathLengthNV", (void**)&glGetPathLengthNV_ptr);
	paradox_opengl_load_function("glPointAlongPathNV", (void**)&glPointAlongPathNV_ptr);
	paradox_opengl_load_function("glMatrixLoad3x2fNV", (void**)&glMatrixLoad3x2fNV_ptr);
	paradox_opengl_load_function("glMatrixLoad3x3fNV", (void**)&glMatrixLoad3x3fNV_ptr);
	paradox_opengl_load_function("glMatrixLoadTranspose3x3fNV", (void**)&glMatrixLoadTranspose3x3fNV_ptr);
	paradox_opengl_load_function("glMatrixMult3x2fNV", (void**)&glMatrixMult3x2fNV_ptr);
	paradox_opengl_load_function("glMatrixMult3x3fNV", (void**)&glMatrixMult3x3fNV_ptr);
	paradox_opengl_load_function("glMatrixMultTranspose3x3fNV", (void**)&glMatrixMultTranspose3x3fNV_ptr);
	paradox_opengl_load_function("glStencilThenCoverFillPathNV", (void**)&glStencilThenCoverFillPathNV_ptr);
	paradox_opengl_load_function("glStencilThenCoverStrokePathNV", (void**)&glStencilThenCoverStrokePathNV_ptr);
	paradox_opengl_load_function("glStencilThenCoverFillPathInstancedNV", (void**)&glStencilThenCoverFillPathInstancedNV_ptr);
	paradox_opengl_load_function("glStencilThenCoverStrokePathInstancedNV", (void**)&glStencilThenCoverStrokePathInstancedNV_ptr);
	paradox_opengl_load_function("glPathGlyphIndexRangeNV", (void**)&glPathGlyphIndexRangeNV_ptr);
	paradox_opengl_load_function("glPathGlyphIndexArrayNV", (void**)&glPathGlyphIndexArrayNV_ptr);
	paradox_opengl_load_function("glPathMemoryGlyphIndexArrayNV", (void**)&glPathMemoryGlyphIndexArrayNV_ptr);
	paradox_opengl_load_function("glProgramPathFragmentInputGenNV", (void**)&glProgramPathFragmentInputGenNV_ptr);
	paradox_opengl_load_function("glGetProgramResourcefvNV", (void**)&glGetProgramResourcefvNV_ptr);
	paradox_opengl_load_function("glFramebufferSampleLocationsfvNV", (void**)&glFramebufferSampleLocationsfvNV_ptr);
	paradox_opengl_load_function("glNamedFramebufferSampleLocationsfvNV", (void**)&glNamedFramebufferSampleLocationsfvNV_ptr);
	paradox_opengl_load_function("glResolveDepthValuesNV", (void**)&glResolveDepthValuesNV_ptr);
	paradox_opengl_load_function("glScissorExclusiveNV", (void**)&glScissorExclusiveNV_ptr);
	paradox_opengl_load_function("glScissorExclusiveArrayvNV", (void**)&glScissorExclusiveArrayvNV_ptr);
	paradox_opengl_load_function("glMakeBufferResidentNV", (void**)&glMakeBufferResidentNV_ptr);
	paradox_opengl_load_function("glMakeBufferNonResidentNV", (void**)&glMakeBufferNonResidentNV_ptr);
	paradox_opengl_load_function("glIsBufferResidentNV", (void**)&glIsBufferResidentNV_ptr);
	paradox_opengl_load_function("glMakeNamedBufferResidentNV", (void**)&glMakeNamedBufferResidentNV_ptr);
	paradox_opengl_load_function("glMakeNamedBufferNonResidentNV", (void**)&glMakeNamedBufferNonResidentNV_ptr);
	paradox_opengl_load_function("glIsNamedBufferResidentNV", (void**)&glIsNamedBufferResidentNV_ptr);
	paradox_opengl_load_function("glGetBufferParameterui64vNV", (void**)&glGetBufferParameterui64vNV_ptr);
	paradox_opengl_load_function("glGetNamedBufferParameterui64vNV", (void**)&glGetNamedBufferParameterui64vNV_ptr);
	paradox_opengl_load_function("glGetIntegerui64vNV", (void**)&glGetIntegerui64vNV_ptr);
	paradox_opengl_load_function("glUniformui64NV", (void**)&glUniformui64NV_ptr);
	paradox_opengl_load_function("glUniformui64vNV", (void**)&glUniformui64vNV_ptr);
	paradox_opengl_load_function("glGetUniformui64vNV", (void**)&glGetUniformui64vNV_ptr);
	paradox_opengl_load_function("glProgramUniformui64NV", (void**)&glProgramUniformui64NV_ptr);
	paradox_opengl_load_function("glProgramUniformui64vNV", (void**)&glProgramUniformui64vNV_ptr);
	paradox_opengl_load_function("glBindShadingRateImageNV", (void**)&glBindShadingRateImageNV_ptr);
	paradox_opengl_load_function("glGetShadingRateImagePaletteNV", (void**)&glGetShadingRateImagePaletteNV_ptr);
	paradox_opengl_load_function("glGetShadingRateSampleLocationivNV", (void**)&glGetShadingRateSampleLocationivNV_ptr);
	paradox_opengl_load_function("glShadingRateImageBarrierNV", (void**)&glShadingRateImageBarrierNV_ptr);
	paradox_opengl_load_function("glShadingRateImagePaletteNV", (void**)&glShadingRateImagePaletteNV_ptr);
	paradox_opengl_load_function("glShadingRateSampleOrderNV", (void**)&glShadingRateSampleOrderNV_ptr);
	paradox_opengl_load_function("glShadingRateSampleOrderCustomNV", (void**)&glShadingRateSampleOrderCustomNV_ptr);
	paradox_opengl_load_function("glTextureBarrierNV", (void**)&glTextureBarrierNV_ptr);
	paradox_opengl_load_function("glVertexAttribL1i64NV", (void**)&glVertexAttribL1i64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL2i64NV", (void**)&glVertexAttribL2i64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL3i64NV", (void**)&glVertexAttribL3i64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL4i64NV", (void**)&glVertexAttribL4i64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL1i64vNV", (void**)&glVertexAttribL1i64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribL2i64vNV", (void**)&glVertexAttribL2i64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribL3i64vNV", (void**)&glVertexAttribL3i64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribL4i64vNV", (void**)&glVertexAttribL4i64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribL1ui64NV", (void**)&glVertexAttribL1ui64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL2ui64NV", (void**)&glVertexAttribL2ui64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL3ui64NV", (void**)&glVertexAttribL3ui64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL4ui64NV", (void**)&glVertexAttribL4ui64NV_ptr);
	paradox_opengl_load_function("glVertexAttribL1ui64vNV", (void**)&glVertexAttribL1ui64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribL2ui64vNV", (void**)&glVertexAttribL2ui64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribL3ui64vNV", (void**)&glVertexAttribL3ui64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribL4ui64vNV", (void**)&glVertexAttribL4ui64vNV_ptr);
	paradox_opengl_load_function("glGetVertexAttribLi64vNV", (void**)&glGetVertexAttribLi64vNV_ptr);
	paradox_opengl_load_function("glGetVertexAttribLui64vNV", (void**)&glGetVertexAttribLui64vNV_ptr);
	paradox_opengl_load_function("glVertexAttribLFormatNV", (void**)&glVertexAttribLFormatNV_ptr);
	paradox_opengl_load_function("glBufferAddressRangeNV", (void**)&glBufferAddressRangeNV_ptr);
	paradox_opengl_load_function("glVertexFormatNV", (void**)&glVertexFormatNV_ptr);
	paradox_opengl_load_function("glNormalFormatNV", (void**)&glNormalFormatNV_ptr);
	paradox_opengl_load_function("glColorFormatNV", (void**)&glColorFormatNV_ptr);
	paradox_opengl_load_function("glIndexFormatNV", (void**)&glIndexFormatNV_ptr);
	paradox_opengl_load_function("glTexCoordFormatNV", (void**)&glTexCoordFormatNV_ptr);
	paradox_opengl_load_function("glEdgeFlagFormatNV", (void**)&glEdgeFlagFormatNV_ptr);
	paradox_opengl_load_function("glSecondaryColorFormatNV", (void**)&glSecondaryColorFormatNV_ptr);
	paradox_opengl_load_function("glFogCoordFormatNV", (void**)&glFogCoordFormatNV_ptr);
	paradox_opengl_load_function("glVertexAttribFormatNV", (void**)&glVertexAttribFormatNV_ptr);
	paradox_opengl_load_function("glVertexAttribIFormatNV", (void**)&glVertexAttribIFormatNV_ptr);
	paradox_opengl_load_function("glGetIntegerui64i_vNV", (void**)&glGetIntegerui64i_vNV_ptr);
	paradox_opengl_load_function("glViewportSwizzleNV", (void**)&glViewportSwizzleNV_ptr);
	paradox_opengl_load_function("glFramebufferTextureMultiviewOVR", (void**)&glFramebufferTextureMultiviewOVR_ptr);
	paradox_opengl_load_function("glNamedFramebufferTextureMultiviewOVR", (void**)&glNamedFramebufferTextureMultiviewOVR_ptr);

}

GLAPI void APIENTRY glCullFace(GLenum mode) { glCullFace_ptr(mode); }
GLAPI void APIENTRY glFrontFace(GLenum mode) { glFrontFace_ptr(mode); }
GLAPI void APIENTRY glHint(GLenum target, GLenum mode) { glHint_ptr(target, mode); }
GLAPI void APIENTRY glLineWidth(GLfloat width) { glLineWidth_ptr(width); }
GLAPI void APIENTRY glPointSize(GLfloat size) { glPointSize_ptr(size); }
GLAPI void APIENTRY glPolygonMode(GLenum face, GLenum mode) { glPolygonMode_ptr(face, mode); }
GLAPI void APIENTRY glScissor(GLint x, GLint y, GLsizei width, GLsizei height) { glScissor_ptr(x, y, width, height); }
GLAPI void APIENTRY glTexParameterf(GLenum target, GLenum pname, GLfloat param) { glTexParameterf_ptr(target, pname, param); }
GLAPI void APIENTRY glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params) { glTexParameterfv_ptr(target, pname, params); }
GLAPI void APIENTRY glTexParameteri(GLenum target, GLenum pname, GLint param) { glTexParameteri_ptr(target, pname, param); }
GLAPI void APIENTRY glTexParameteriv(GLenum target, GLenum pname, const GLint *params) { glTexParameteriv_ptr(target, pname, params); }
GLAPI void APIENTRY glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) { glTexImage1D_ptr(target, level, internalformat, width, border, format, type, pixels); }
GLAPI void APIENTRY glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) { glTexImage2D_ptr(target, level, internalformat, width, height, border, format, type, pixels); }
GLAPI void APIENTRY glDrawBuffer(GLenum buf) { glDrawBuffer_ptr(buf); }
GLAPI void APIENTRY glClear(GLbitfield mask) { glClear_ptr(mask); }
GLAPI void APIENTRY glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { glClearColor_ptr(red, green, blue, alpha); }
GLAPI void APIENTRY glClearStencil(GLint s) { glClearStencil_ptr(s); }
GLAPI void APIENTRY glClearDepth(GLdouble depth) { glClearDepth_ptr(depth); }
GLAPI void APIENTRY glStencilMask(GLuint mask) { glStencilMask_ptr(mask); }
GLAPI void APIENTRY glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { glColorMask_ptr(red, green, blue, alpha); }
GLAPI void APIENTRY glDepthMask(GLboolean flag) { glDepthMask_ptr(flag); }
GLAPI void APIENTRY glDisable(GLenum cap) { glDisable_ptr(cap); }
GLAPI void APIENTRY glEnable(GLenum cap) { glEnable_ptr(cap); }
GLAPI void APIENTRY glFinish() { glFinish_ptr(); }
GLAPI void APIENTRY glFlush() { glFlush_ptr(); }
GLAPI void APIENTRY glBlendFunc(GLenum sfactor, GLenum dfactor) { glBlendFunc_ptr(sfactor, dfactor); }
GLAPI void APIENTRY glLogicOp(GLenum opcode) { glLogicOp_ptr(opcode); }
GLAPI void APIENTRY glStencilFunc(GLenum func, GLint ref, GLuint mask) { glStencilFunc_ptr(func, ref, mask); }
GLAPI void APIENTRY glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) { glStencilOp_ptr(fail, zfail, zpass); }
GLAPI void APIENTRY glDepthFunc(GLenum func) { glDepthFunc_ptr(func); }
GLAPI void APIENTRY glPixelStoref(GLenum pname, GLfloat param) { glPixelStoref_ptr(pname, param); }
GLAPI void APIENTRY glPixelStorei(GLenum pname, GLint param) { glPixelStorei_ptr(pname, param); }
GLAPI void APIENTRY glReadBuffer(GLenum src) { glReadBuffer_ptr(src); }
GLAPI void APIENTRY glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels) { glReadPixels_ptr(x, y, width, height, format, type, pixels); }
GLAPI void APIENTRY glGetBooleanv(GLenum pname, GLboolean *data) { glGetBooleanv_ptr(pname, data); }
GLAPI void APIENTRY glGetDoublev(GLenum pname, GLdouble *data) { glGetDoublev_ptr(pname, data); }
GLAPI GLenum APIENTRY glGetError() { return glGetError_ptr(); }
GLAPI void APIENTRY glGetFloatv(GLenum pname, GLfloat *data) { glGetFloatv_ptr(pname, data); }
GLAPI void APIENTRY glGetIntegerv(GLenum pname, GLint *data) { glGetIntegerv_ptr(pname, data); }
GLAPI const GLubyte * APIENTRY glGetString(GLenum name) { return glGetString_ptr(name); }
GLAPI void APIENTRY glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void *pixels) { glGetTexImage_ptr(target, level, format, type, pixels); }
GLAPI void APIENTRY glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params) { glGetTexParameterfv_ptr(target, pname, params); }
GLAPI void APIENTRY glGetTexParameteriv(GLenum target, GLenum pname, GLint *params) { glGetTexParameteriv_ptr(target, pname, params); }
GLAPI void APIENTRY glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params) { glGetTexLevelParameterfv_ptr(target, level, pname, params); }
GLAPI void APIENTRY glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params) { glGetTexLevelParameteriv_ptr(target, level, pname, params); }
GLAPI GLboolean APIENTRY glIsEnabled(GLenum cap) { return glIsEnabled_ptr(cap); }
GLAPI void APIENTRY glDepthRange(GLdouble n, GLdouble f) { glDepthRange_ptr(n, f); }
GLAPI void APIENTRY glViewport(GLint x, GLint y, GLsizei width, GLsizei height) { glViewport_ptr(x, y, width, height); }
GLAPI void APIENTRY glDrawArrays(GLenum mode, GLint first, GLsizei count) { glDrawArrays_ptr(mode, first, count); }
GLAPI void APIENTRY glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices) { glDrawElements_ptr(mode, count, type, indices); }
GLAPI void APIENTRY glGetPointerv(GLenum pname, void **params) { glGetPointerv_ptr(pname, params); }
GLAPI void APIENTRY glPolygonOffset(GLfloat factor, GLfloat units) { glPolygonOffset_ptr(factor, units); }
GLAPI void APIENTRY glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) { glCopyTexImage1D_ptr(target, level, internalformat, x, y, width, border); }
GLAPI void APIENTRY glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { glCopyTexImage2D_ptr(target, level, internalformat, x, y, width, height, border); }
GLAPI void APIENTRY glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { glCopyTexSubImage1D_ptr(target, level, xoffset, x, y, width); }
GLAPI void APIENTRY glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyTexSubImage2D_ptr(target, level, xoffset, yoffset, x, y, width, height); }
GLAPI void APIENTRY glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) { glTexSubImage1D_ptr(target, level, xoffset, width, format, type, pixels); }
GLAPI void APIENTRY glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) { glTexSubImage2D_ptr(target, level, xoffset, yoffset, width, height, format, type, pixels); }
GLAPI void APIENTRY glBindTexture(GLenum target, GLuint texture) { glBindTexture_ptr(target, texture); }
GLAPI void APIENTRY glDeleteTextures(GLsizei n, const GLuint *textures) { glDeleteTextures_ptr(n, textures); }
GLAPI void APIENTRY glGenTextures(GLsizei n, GLuint *textures) { glGenTextures_ptr(n, textures); }
GLAPI GLboolean APIENTRY glIsTexture(GLuint texture) { return glIsTexture_ptr(texture); }
GLAPI void APIENTRY glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) { glDrawRangeElements_ptr(mode, start, end, count, type, indices); }
GLAPI void APIENTRY glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) { glTexImage3D_ptr(target, level, internalformat, width, height, depth, border, format, type, pixels); }
GLAPI void APIENTRY glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) { glTexSubImage3D_ptr(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
GLAPI void APIENTRY glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyTexSubImage3D_ptr(target, level, xoffset, yoffset, zoffset, x, y, width, height); }
GLAPI void APIENTRY glActiveTexture(GLenum texture) { glActiveTexture_ptr(texture); }
GLAPI void APIENTRY glSampleCoverage(GLfloat value, GLboolean invert) { glSampleCoverage_ptr(value, invert); }
GLAPI void APIENTRY glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) { glCompressedTexImage3D_ptr(target, level, internalformat, width, height, depth, border, imageSize, data); }
GLAPI void APIENTRY glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) { glCompressedTexImage2D_ptr(target, level, internalformat, width, height, border, imageSize, data); }
GLAPI void APIENTRY glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) { glCompressedTexImage1D_ptr(target, level, internalformat, width, border, imageSize, data); }
GLAPI void APIENTRY glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) { glCompressedTexSubImage3D_ptr(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
GLAPI void APIENTRY glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) { glCompressedTexSubImage2D_ptr(target, level, xoffset, yoffset, width, height, format, imageSize, data); }
GLAPI void APIENTRY glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) { glCompressedTexSubImage1D_ptr(target, level, xoffset, width, format, imageSize, data); }
GLAPI void APIENTRY glGetCompressedTexImage(GLenum target, GLint level, void *img) { glGetCompressedTexImage_ptr(target, level, img); }
GLAPI void APIENTRY glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) { glBlendFuncSeparate_ptr(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha); }
GLAPI void APIENTRY glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount) { glMultiDrawArrays_ptr(mode, first, count, drawcount); }
GLAPI void APIENTRY glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount) { glMultiDrawElements_ptr(mode, count, type, indices, drawcount); }
GLAPI void APIENTRY glPointParameterf(GLenum pname, GLfloat param) { glPointParameterf_ptr(pname, param); }
GLAPI void APIENTRY glPointParameterfv(GLenum pname, const GLfloat *params) { glPointParameterfv_ptr(pname, params); }
GLAPI void APIENTRY glPointParameteri(GLenum pname, GLint param) { glPointParameteri_ptr(pname, param); }
GLAPI void APIENTRY glPointParameteriv(GLenum pname, const GLint *params) { glPointParameteriv_ptr(pname, params); }
GLAPI void APIENTRY glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { glBlendColor_ptr(red, green, blue, alpha); }
GLAPI void APIENTRY glBlendEquation(GLenum mode) { glBlendEquation_ptr(mode); }
GLAPI void APIENTRY glGenQueries(GLsizei n, GLuint *ids) { glGenQueries_ptr(n, ids); }
GLAPI void APIENTRY glDeleteQueries(GLsizei n, const GLuint *ids) { glDeleteQueries_ptr(n, ids); }
GLAPI GLboolean APIENTRY glIsQuery(GLuint id) { return glIsQuery_ptr(id); }
GLAPI void APIENTRY glBeginQuery(GLenum target, GLuint id) { glBeginQuery_ptr(target, id); }
GLAPI void APIENTRY glEndQuery(GLenum target) { glEndQuery_ptr(target); }
GLAPI void APIENTRY glGetQueryiv(GLenum target, GLenum pname, GLint *params) { glGetQueryiv_ptr(target, pname, params); }
GLAPI void APIENTRY glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params) { glGetQueryObjectiv_ptr(id, pname, params); }
GLAPI void APIENTRY glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params) { glGetQueryObjectuiv_ptr(id, pname, params); }
GLAPI void APIENTRY glBindBuffer(GLenum target, GLuint buffer) { glBindBuffer_ptr(target, buffer); }
GLAPI void APIENTRY glDeleteBuffers(GLsizei n, const GLuint *buffers) { glDeleteBuffers_ptr(n, buffers); }
GLAPI void APIENTRY glGenBuffers(GLsizei n, GLuint *buffers) { glGenBuffers_ptr(n, buffers); }
GLAPI GLboolean APIENTRY glIsBuffer(GLuint buffer) { return glIsBuffer_ptr(buffer); }
GLAPI void APIENTRY glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage) { glBufferData_ptr(target, size, data, usage); }
GLAPI void APIENTRY glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data) { glBufferSubData_ptr(target, offset, size, data); }
GLAPI void APIENTRY glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void *data) { glGetBufferSubData_ptr(target, offset, size, data); }
GLAPI void * APIENTRY glMapBuffer(GLenum target, GLenum access) { return glMapBuffer_ptr(target, access); }
GLAPI GLboolean APIENTRY glUnmapBuffer(GLenum target) { return glUnmapBuffer_ptr(target); }
GLAPI void APIENTRY glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params) { glGetBufferParameteriv_ptr(target, pname, params); }
GLAPI void APIENTRY glGetBufferPointerv(GLenum target, GLenum pname, void **params) { glGetBufferPointerv_ptr(target, pname, params); }
GLAPI void APIENTRY glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) { glBlendEquationSeparate_ptr(modeRGB, modeAlpha); }
GLAPI void APIENTRY glDrawBuffers(GLsizei n, const GLenum *bufs) { glDrawBuffers_ptr(n, bufs); }
GLAPI void APIENTRY glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) { glStencilOpSeparate_ptr(face, sfail, dpfail, dppass); }
GLAPI void APIENTRY glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) { glStencilFuncSeparate_ptr(face, func, ref, mask); }
GLAPI void APIENTRY glStencilMaskSeparate(GLenum face, GLuint mask) { glStencilMaskSeparate_ptr(face, mask); }
GLAPI void APIENTRY glAttachShader(GLuint program, GLuint shader) { glAttachShader_ptr(program, shader); }
GLAPI void APIENTRY glBindAttribLocation(GLuint program, GLuint index, const GLchar *name) { glBindAttribLocation_ptr(program, index, name); }
GLAPI void APIENTRY glCompileShader(GLuint shader) { glCompileShader_ptr(shader); }
GLAPI GLuint APIENTRY glCreateProgram() { return glCreateProgram_ptr(); }
GLAPI GLuint APIENTRY glCreateShader(GLenum type) { return glCreateShader_ptr(type); }
GLAPI void APIENTRY glDeleteProgram(GLuint program) { glDeleteProgram_ptr(program); }
GLAPI void APIENTRY glDeleteShader(GLuint shader) { glDeleteShader_ptr(shader); }
GLAPI void APIENTRY glDetachShader(GLuint program, GLuint shader) { glDetachShader_ptr(program, shader); }
GLAPI void APIENTRY glDisableVertexAttribArray(GLuint index) { glDisableVertexAttribArray_ptr(index); }
GLAPI void APIENTRY glEnableVertexAttribArray(GLuint index) { glEnableVertexAttribArray_ptr(index); }
GLAPI void APIENTRY glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) { glGetActiveAttrib_ptr(program, index, bufSize, length, size, type, name); }
GLAPI void APIENTRY glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) { glGetActiveUniform_ptr(program, index, bufSize, length, size, type, name); }
GLAPI void APIENTRY glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) { glGetAttachedShaders_ptr(program, maxCount, count, shaders); }
GLAPI GLint APIENTRY glGetAttribLocation(GLuint program, const GLchar *name) { return glGetAttribLocation_ptr(program, name); }
GLAPI void APIENTRY glGetProgramiv(GLuint program, GLenum pname, GLint *params) { glGetProgramiv_ptr(program, pname, params); }
GLAPI void APIENTRY glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) { glGetProgramInfoLog_ptr(program, bufSize, length, infoLog); }
GLAPI void APIENTRY glGetShaderiv(GLuint shader, GLenum pname, GLint *params) { glGetShaderiv_ptr(shader, pname, params); }
GLAPI void APIENTRY glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) { glGetShaderInfoLog_ptr(shader, bufSize, length, infoLog); }
GLAPI void APIENTRY glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) { glGetShaderSource_ptr(shader, bufSize, length, source); }
GLAPI GLint APIENTRY glGetUniformLocation(GLuint program, const GLchar *name) { return glGetUniformLocation_ptr(program, name); }
GLAPI void APIENTRY glGetUniformfv(GLuint program, GLint location, GLfloat *params) { glGetUniformfv_ptr(program, location, params); }
GLAPI void APIENTRY glGetUniformiv(GLuint program, GLint location, GLint *params) { glGetUniformiv_ptr(program, location, params); }
GLAPI void APIENTRY glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params) { glGetVertexAttribdv_ptr(index, pname, params); }
GLAPI void APIENTRY glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params) { glGetVertexAttribfv_ptr(index, pname, params); }
GLAPI void APIENTRY glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params) { glGetVertexAttribiv_ptr(index, pname, params); }
GLAPI void APIENTRY glGetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer) { glGetVertexAttribPointerv_ptr(index, pname, pointer); }
GLAPI GLboolean APIENTRY glIsProgram(GLuint program) { return glIsProgram_ptr(program); }
GLAPI GLboolean APIENTRY glIsShader(GLuint shader) { return glIsShader_ptr(shader); }
GLAPI void APIENTRY glLinkProgram(GLuint program) { glLinkProgram_ptr(program); }
GLAPI void APIENTRY glShaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) { glShaderSource_ptr(shader, count, string, length); }
GLAPI void APIENTRY glUseProgram(GLuint program) { glUseProgram_ptr(program); }
GLAPI void APIENTRY glUniform1f(GLint location, GLfloat v0) { glUniform1f_ptr(location, v0); }
GLAPI void APIENTRY glUniform2f(GLint location, GLfloat v0, GLfloat v1) { glUniform2f_ptr(location, v0, v1); }
GLAPI void APIENTRY glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { glUniform3f_ptr(location, v0, v1, v2); }
GLAPI void APIENTRY glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { glUniform4f_ptr(location, v0, v1, v2, v3); }
GLAPI void APIENTRY glUniform1i(GLint location, GLint v0) { glUniform1i_ptr(location, v0); }
GLAPI void APIENTRY glUniform2i(GLint location, GLint v0, GLint v1) { glUniform2i_ptr(location, v0, v1); }
GLAPI void APIENTRY glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) { glUniform3i_ptr(location, v0, v1, v2); }
GLAPI void APIENTRY glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { glUniform4i_ptr(location, v0, v1, v2, v3); }
GLAPI void APIENTRY glUniform1fv(GLint location, GLsizei count, const GLfloat *value) { glUniform1fv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2fv(GLint location, GLsizei count, const GLfloat *value) { glUniform2fv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3fv(GLint location, GLsizei count, const GLfloat *value) { glUniform3fv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4fv(GLint location, GLsizei count, const GLfloat *value) { glUniform4fv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform1iv(GLint location, GLsizei count, const GLint *value) { glUniform1iv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2iv(GLint location, GLsizei count, const GLint *value) { glUniform2iv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3iv(GLint location, GLsizei count, const GLint *value) { glUniform3iv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4iv(GLint location, GLsizei count, const GLint *value) { glUniform4iv_ptr(location, count, value); }
GLAPI void APIENTRY glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix2fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix3fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix4fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glValidateProgram(GLuint program) { glValidateProgram_ptr(program); }
GLAPI void APIENTRY glVertexAttrib1d(GLuint index, GLdouble x) { glVertexAttrib1d_ptr(index, x); }
GLAPI void APIENTRY glVertexAttrib1dv(GLuint index, const GLdouble *v) { glVertexAttrib1dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib1f(GLuint index, GLfloat x) { glVertexAttrib1f_ptr(index, x); }
GLAPI void APIENTRY glVertexAttrib1fv(GLuint index, const GLfloat *v) { glVertexAttrib1fv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib1s(GLuint index, GLshort x) { glVertexAttrib1s_ptr(index, x); }
GLAPI void APIENTRY glVertexAttrib1sv(GLuint index, const GLshort *v) { glVertexAttrib1sv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y) { glVertexAttrib2d_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttrib2dv(GLuint index, const GLdouble *v) { glVertexAttrib2dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) { glVertexAttrib2f_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttrib2fv(GLuint index, const GLfloat *v) { glVertexAttrib2fv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib2s(GLuint index, GLshort x, GLshort y) { glVertexAttrib2s_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttrib2sv(GLuint index, const GLshort *v) { glVertexAttrib2sv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) { glVertexAttrib3d_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttrib3dv(GLuint index, const GLdouble *v) { glVertexAttrib3dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) { glVertexAttrib3f_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttrib3fv(GLuint index, const GLfloat *v) { glVertexAttrib3fv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z) { glVertexAttrib3s_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttrib3sv(GLuint index, const GLshort *v) { glVertexAttrib3sv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4Nbv(GLuint index, const GLbyte *v) { glVertexAttrib4Nbv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4Niv(GLuint index, const GLint *v) { glVertexAttrib4Niv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4Nsv(GLuint index, const GLshort *v) { glVertexAttrib4Nsv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) { glVertexAttrib4Nub_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttrib4Nubv(GLuint index, const GLubyte *v) { glVertexAttrib4Nubv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4Nuiv(GLuint index, const GLuint *v) { glVertexAttrib4Nuiv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4Nusv(GLuint index, const GLushort *v) { glVertexAttrib4Nusv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4bv(GLuint index, const GLbyte *v) { glVertexAttrib4bv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { glVertexAttrib4d_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttrib4dv(GLuint index, const GLdouble *v) { glVertexAttrib4dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { glVertexAttrib4f_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttrib4fv(GLuint index, const GLfloat *v) { glVertexAttrib4fv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4iv(GLuint index, const GLint *v) { glVertexAttrib4iv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) { glVertexAttrib4s_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttrib4sv(GLuint index, const GLshort *v) { glVertexAttrib4sv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4ubv(GLuint index, const GLubyte *v) { glVertexAttrib4ubv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4uiv(GLuint index, const GLuint *v) { glVertexAttrib4uiv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttrib4usv(GLuint index, const GLushort *v) { glVertexAttrib4usv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) { glVertexAttribPointer_ptr(index, size, type, normalized, stride, pointer); }
GLAPI void APIENTRY glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix2x3fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix3x2fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix2x4fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix4x2fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix3x4fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glUniformMatrix4x3fv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) { glColorMaski_ptr(index, r, g, b, a); }
GLAPI void APIENTRY glGetBooleani_v(GLenum target, GLuint index, GLboolean *data) { glGetBooleani_v_ptr(target, index, data); }
GLAPI void APIENTRY glGetIntegeri_v(GLenum target, GLuint index, GLint *data) { glGetIntegeri_v_ptr(target, index, data); }
GLAPI void APIENTRY glEnablei(GLenum target, GLuint index) { glEnablei_ptr(target, index); }
GLAPI void APIENTRY glDisablei(GLenum target, GLuint index) { glDisablei_ptr(target, index); }
GLAPI GLboolean APIENTRY glIsEnabledi(GLenum target, GLuint index) { return glIsEnabledi_ptr(target, index); }
GLAPI void APIENTRY glBeginTransformFeedback(GLenum primitiveMode) { glBeginTransformFeedback_ptr(primitiveMode); }
GLAPI void APIENTRY glEndTransformFeedback() { glEndTransformFeedback_ptr(); }
GLAPI void APIENTRY glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) { glBindBufferRange_ptr(target, index, buffer, offset, size); }
GLAPI void APIENTRY glBindBufferBase(GLenum target, GLuint index, GLuint buffer) { glBindBufferBase_ptr(target, index, buffer); }
GLAPI void APIENTRY glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) { glTransformFeedbackVaryings_ptr(program, count, varyings, bufferMode); }
GLAPI void APIENTRY glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) { glGetTransformFeedbackVarying_ptr(program, index, bufSize, length, size, type, name); }
GLAPI void APIENTRY glClampColor(GLenum target, GLenum clamp) { glClampColor_ptr(target, clamp); }
GLAPI void APIENTRY glBeginConditionalRender(GLuint id, GLenum mode) { glBeginConditionalRender_ptr(id, mode); }
GLAPI void APIENTRY glEndConditionalRender() { glEndConditionalRender_ptr(); }
GLAPI void APIENTRY glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) { glVertexAttribIPointer_ptr(index, size, type, stride, pointer); }
GLAPI void APIENTRY glGetVertexAttribIiv(GLuint index, GLenum pname, GLint *params) { glGetVertexAttribIiv_ptr(index, pname, params); }
GLAPI void APIENTRY glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params) { glGetVertexAttribIuiv_ptr(index, pname, params); }
GLAPI void APIENTRY glVertexAttribI1i(GLuint index, GLint x) { glVertexAttribI1i_ptr(index, x); }
GLAPI void APIENTRY glVertexAttribI2i(GLuint index, GLint x, GLint y) { glVertexAttribI2i_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z) { glVertexAttribI3i_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) { glVertexAttribI4i_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttribI1ui(GLuint index, GLuint x) { glVertexAttribI1ui_ptr(index, x); }
GLAPI void APIENTRY glVertexAttribI2ui(GLuint index, GLuint x, GLuint y) { glVertexAttribI2ui_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z) { glVertexAttribI3ui_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) { glVertexAttribI4ui_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttribI1iv(GLuint index, const GLint *v) { glVertexAttribI1iv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI2iv(GLuint index, const GLint *v) { glVertexAttribI2iv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI3iv(GLuint index, const GLint *v) { glVertexAttribI3iv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI4iv(GLuint index, const GLint *v) { glVertexAttribI4iv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI1uiv(GLuint index, const GLuint *v) { glVertexAttribI1uiv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI2uiv(GLuint index, const GLuint *v) { glVertexAttribI2uiv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI3uiv(GLuint index, const GLuint *v) { glVertexAttribI3uiv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI4uiv(GLuint index, const GLuint *v) { glVertexAttribI4uiv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI4bv(GLuint index, const GLbyte *v) { glVertexAttribI4bv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI4sv(GLuint index, const GLshort *v) { glVertexAttribI4sv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI4ubv(GLuint index, const GLubyte *v) { glVertexAttribI4ubv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribI4usv(GLuint index, const GLushort *v) { glVertexAttribI4usv_ptr(index, v); }
GLAPI void APIENTRY glGetUniformuiv(GLuint program, GLint location, GLuint *params) { glGetUniformuiv_ptr(program, location, params); }
GLAPI void APIENTRY glBindFragDataLocation(GLuint program, GLuint color, const GLchar *name) { glBindFragDataLocation_ptr(program, color, name); }
GLAPI GLint APIENTRY glGetFragDataLocation(GLuint program, const GLchar *name) { return glGetFragDataLocation_ptr(program, name); }
GLAPI void APIENTRY glUniform1ui(GLint location, GLuint v0) { glUniform1ui_ptr(location, v0); }
GLAPI void APIENTRY glUniform2ui(GLint location, GLuint v0, GLuint v1) { glUniform2ui_ptr(location, v0, v1); }
GLAPI void APIENTRY glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) { glUniform3ui_ptr(location, v0, v1, v2); }
GLAPI void APIENTRY glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) { glUniform4ui_ptr(location, v0, v1, v2, v3); }
GLAPI void APIENTRY glUniform1uiv(GLint location, GLsizei count, const GLuint *value) { glUniform1uiv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2uiv(GLint location, GLsizei count, const GLuint *value) { glUniform2uiv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3uiv(GLint location, GLsizei count, const GLuint *value) { glUniform3uiv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4uiv(GLint location, GLsizei count, const GLuint *value) { glUniform4uiv_ptr(location, count, value); }
GLAPI void APIENTRY glTexParameterIiv(GLenum target, GLenum pname, const GLint *params) { glTexParameterIiv_ptr(target, pname, params); }
GLAPI void APIENTRY glTexParameterIuiv(GLenum target, GLenum pname, const GLuint *params) { glTexParameterIuiv_ptr(target, pname, params); }
GLAPI void APIENTRY glGetTexParameterIiv(GLenum target, GLenum pname, GLint *params) { glGetTexParameterIiv_ptr(target, pname, params); }
GLAPI void APIENTRY glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint *params) { glGetTexParameterIuiv_ptr(target, pname, params); }
GLAPI void APIENTRY glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value) { glClearBufferiv_ptr(buffer, drawbuffer, value); }
GLAPI void APIENTRY glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value) { glClearBufferuiv_ptr(buffer, drawbuffer, value); }
GLAPI void APIENTRY glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value) { glClearBufferfv_ptr(buffer, drawbuffer, value); }
GLAPI void APIENTRY glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) { glClearBufferfi_ptr(buffer, drawbuffer, depth, stencil); }
GLAPI const GLubyte * APIENTRY glGetStringi(GLenum name, GLuint index) { return glGetStringi_ptr(name, index); }
GLAPI GLboolean APIENTRY glIsRenderbuffer(GLuint renderbuffer) { return glIsRenderbuffer_ptr(renderbuffer); }
GLAPI void APIENTRY glBindRenderbuffer(GLenum target, GLuint renderbuffer) { glBindRenderbuffer_ptr(target, renderbuffer); }
GLAPI void APIENTRY glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers) { glDeleteRenderbuffers_ptr(n, renderbuffers); }
GLAPI void APIENTRY glGenRenderbuffers(GLsizei n, GLuint *renderbuffers) { glGenRenderbuffers_ptr(n, renderbuffers); }
GLAPI void APIENTRY glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) { glRenderbufferStorage_ptr(target, internalformat, width, height); }
GLAPI void APIENTRY glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params) { glGetRenderbufferParameteriv_ptr(target, pname, params); }
GLAPI GLboolean APIENTRY glIsFramebuffer(GLuint framebuffer) { return glIsFramebuffer_ptr(framebuffer); }
GLAPI void APIENTRY glBindFramebuffer(GLenum target, GLuint framebuffer) { glBindFramebuffer_ptr(target, framebuffer); }
GLAPI void APIENTRY glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers) { glDeleteFramebuffers_ptr(n, framebuffers); }
GLAPI void APIENTRY glGenFramebuffers(GLsizei n, GLuint *framebuffers) { glGenFramebuffers_ptr(n, framebuffers); }
GLAPI GLenum APIENTRY glCheckFramebufferStatus(GLenum target) { return glCheckFramebufferStatus_ptr(target); }
GLAPI void APIENTRY glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { glFramebufferTexture1D_ptr(target, attachment, textarget, texture, level); }
GLAPI void APIENTRY glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { glFramebufferTexture2D_ptr(target, attachment, textarget, texture, level); }
GLAPI void APIENTRY glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) { glFramebufferTexture3D_ptr(target, attachment, textarget, texture, level, zoffset); }
GLAPI void APIENTRY glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { glFramebufferRenderbuffer_ptr(target, attachment, renderbuffertarget, renderbuffer); }
GLAPI void APIENTRY glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params) { glGetFramebufferAttachmentParameteriv_ptr(target, attachment, pname, params); }
GLAPI void APIENTRY glGenerateMipmap(GLenum target) { glGenerateMipmap_ptr(target); }
GLAPI void APIENTRY glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) { glBlitFramebuffer_ptr(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
GLAPI void APIENTRY glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { glRenderbufferStorageMultisample_ptr(target, samples, internalformat, width, height); }
GLAPI void APIENTRY glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) { glFramebufferTextureLayer_ptr(target, attachment, texture, level, layer); }
GLAPI void * APIENTRY glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) { return glMapBufferRange_ptr(target, offset, length, access); }
GLAPI void APIENTRY glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) { glFlushMappedBufferRange_ptr(target, offset, length); }
GLAPI void APIENTRY glBindVertexArray(GLuint array) { glBindVertexArray_ptr(array); }
GLAPI void APIENTRY glDeleteVertexArrays(GLsizei n, const GLuint *arrays) { glDeleteVertexArrays_ptr(n, arrays); }
GLAPI void APIENTRY glGenVertexArrays(GLsizei n, GLuint *arrays) { glGenVertexArrays_ptr(n, arrays); }
GLAPI GLboolean APIENTRY glIsVertexArray(GLuint array) { return glIsVertexArray_ptr(array); }
GLAPI void APIENTRY glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) { glDrawArraysInstanced_ptr(mode, first, count, instancecount); }
GLAPI void APIENTRY glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) { glDrawElementsInstanced_ptr(mode, count, type, indices, instancecount); }
GLAPI void APIENTRY glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) { glTexBuffer_ptr(target, internalformat, buffer); }
GLAPI void APIENTRY glPrimitiveRestartIndex(GLuint index) { glPrimitiveRestartIndex_ptr(index); }
GLAPI void APIENTRY glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) { glCopyBufferSubData_ptr(readTarget, writeTarget, readOffset, writeOffset, size); }
GLAPI void APIENTRY glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) { glGetUniformIndices_ptr(program, uniformCount, uniformNames, uniformIndices); }
GLAPI void APIENTRY glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) { glGetActiveUniformsiv_ptr(program, uniformCount, uniformIndices, pname, params); }
GLAPI void APIENTRY glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName) { glGetActiveUniformName_ptr(program, uniformIndex, bufSize, length, uniformName); }
GLAPI GLuint APIENTRY glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName) { return glGetUniformBlockIndex_ptr(program, uniformBlockName); }
GLAPI void APIENTRY glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) { glGetActiveUniformBlockiv_ptr(program, uniformBlockIndex, pname, params); }
GLAPI void APIENTRY glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) { glGetActiveUniformBlockName_ptr(program, uniformBlockIndex, bufSize, length, uniformBlockName); }
GLAPI void APIENTRY glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) { glUniformBlockBinding_ptr(program, uniformBlockIndex, uniformBlockBinding); }
GLAPI void APIENTRY glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex) { glDrawElementsBaseVertex_ptr(mode, count, type, indices, basevertex); }
GLAPI void APIENTRY glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex) { glDrawRangeElementsBaseVertex_ptr(mode, start, end, count, type, indices, basevertex); }
GLAPI void APIENTRY glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex) { glDrawElementsInstancedBaseVertex_ptr(mode, count, type, indices, instancecount, basevertex); }
GLAPI void APIENTRY glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex) { glMultiDrawElementsBaseVertex_ptr(mode, count, type, indices, drawcount, basevertex); }
GLAPI void APIENTRY glProvokingVertex(GLenum mode) { glProvokingVertex_ptr(mode); }
GLAPI GLsync APIENTRY glFenceSync(GLenum condition, GLbitfield flags) { return glFenceSync_ptr(condition, flags); }
GLAPI GLboolean APIENTRY glIsSync(GLsync sync) { return glIsSync_ptr(sync); }
GLAPI void APIENTRY glDeleteSync(GLsync sync) { glDeleteSync_ptr(sync); }
GLAPI GLenum APIENTRY glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) { return glClientWaitSync_ptr(sync, flags, timeout); }
GLAPI void APIENTRY glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) { glWaitSync_ptr(sync, flags, timeout); }
GLAPI void APIENTRY glGetInteger64v(GLenum pname, GLint64 *data) { glGetInteger64v_ptr(pname, data); }
GLAPI void APIENTRY glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values) { glGetSynciv_ptr(sync, pname, count, length, values); }
GLAPI void APIENTRY glGetInteger64i_v(GLenum target, GLuint index, GLint64 *data) { glGetInteger64i_v_ptr(target, index, data); }
GLAPI void APIENTRY glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params) { glGetBufferParameteri64v_ptr(target, pname, params); }
GLAPI void APIENTRY glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) { glFramebufferTexture_ptr(target, attachment, texture, level); }
GLAPI void APIENTRY glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { glTexImage2DMultisample_ptr(target, samples, internalformat, width, height, fixedsamplelocations); }
GLAPI void APIENTRY glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { glTexImage3DMultisample_ptr(target, samples, internalformat, width, height, depth, fixedsamplelocations); }
GLAPI void APIENTRY glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val) { glGetMultisamplefv_ptr(pname, index, val); }
GLAPI void APIENTRY glSampleMaski(GLuint maskNumber, GLbitfield mask) { glSampleMaski_ptr(maskNumber, mask); }
GLAPI void APIENTRY glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name) { glBindFragDataLocationIndexed_ptr(program, colorNumber, index, name); }
GLAPI GLint APIENTRY glGetFragDataIndex(GLuint program, const GLchar *name) { return glGetFragDataIndex_ptr(program, name); }
GLAPI void APIENTRY glGenSamplers(GLsizei count, GLuint *samplers) { glGenSamplers_ptr(count, samplers); }
GLAPI void APIENTRY glDeleteSamplers(GLsizei count, const GLuint *samplers) { glDeleteSamplers_ptr(count, samplers); }
GLAPI GLboolean APIENTRY glIsSampler(GLuint sampler) { return glIsSampler_ptr(sampler); }
GLAPI void APIENTRY glBindSampler(GLuint unit, GLuint sampler) { glBindSampler_ptr(unit, sampler); }
GLAPI void APIENTRY glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) { glSamplerParameteri_ptr(sampler, pname, param); }
GLAPI void APIENTRY glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *param) { glSamplerParameteriv_ptr(sampler, pname, param); }
GLAPI void APIENTRY glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) { glSamplerParameterf_ptr(sampler, pname, param); }
GLAPI void APIENTRY glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param) { glSamplerParameterfv_ptr(sampler, pname, param); }
GLAPI void APIENTRY glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint *param) { glSamplerParameterIiv_ptr(sampler, pname, param); }
GLAPI void APIENTRY glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint *param) { glSamplerParameterIuiv_ptr(sampler, pname, param); }
GLAPI void APIENTRY glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params) { glGetSamplerParameteriv_ptr(sampler, pname, params); }
GLAPI void APIENTRY glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint *params) { glGetSamplerParameterIiv_ptr(sampler, pname, params); }
GLAPI void APIENTRY glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params) { glGetSamplerParameterfv_ptr(sampler, pname, params); }
GLAPI void APIENTRY glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint *params) { glGetSamplerParameterIuiv_ptr(sampler, pname, params); }
GLAPI void APIENTRY glQueryCounter(GLuint id, GLenum target) { glQueryCounter_ptr(id, target); }
GLAPI void APIENTRY glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 *params) { glGetQueryObjecti64v_ptr(id, pname, params); }
GLAPI void APIENTRY glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 *params) { glGetQueryObjectui64v_ptr(id, pname, params); }
GLAPI void APIENTRY glVertexAttribDivisor(GLuint index, GLuint divisor) { glVertexAttribDivisor_ptr(index, divisor); }
GLAPI void APIENTRY glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { glVertexAttribP1ui_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) { glVertexAttribP1uiv_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { glVertexAttribP2ui_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) { glVertexAttribP2uiv_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { glVertexAttribP3ui_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) { glVertexAttribP3uiv_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { glVertexAttribP4ui_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) { glVertexAttribP4uiv_ptr(index, type, normalized, value); }
GLAPI void APIENTRY glMinSampleShading(GLfloat value) { glMinSampleShading_ptr(value); }
GLAPI void APIENTRY glBlendEquationi(GLuint buf, GLenum mode) { glBlendEquationi_ptr(buf, mode); }
GLAPI void APIENTRY glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha) { glBlendEquationSeparatei_ptr(buf, modeRGB, modeAlpha); }
GLAPI void APIENTRY glBlendFunci(GLuint buf, GLenum src, GLenum dst) { glBlendFunci_ptr(buf, src, dst); }
GLAPI void APIENTRY glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) { glBlendFuncSeparatei_ptr(buf, srcRGB, dstRGB, srcAlpha, dstAlpha); }
GLAPI void APIENTRY glDrawArraysIndirect(GLenum mode, const void *indirect) { glDrawArraysIndirect_ptr(mode, indirect); }
GLAPI void APIENTRY glDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect) { glDrawElementsIndirect_ptr(mode, type, indirect); }
GLAPI void APIENTRY glUniform1d(GLint location, GLdouble x) { glUniform1d_ptr(location, x); }
GLAPI void APIENTRY glUniform2d(GLint location, GLdouble x, GLdouble y) { glUniform2d_ptr(location, x, y); }
GLAPI void APIENTRY glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z) { glUniform3d_ptr(location, x, y, z); }
GLAPI void APIENTRY glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { glUniform4d_ptr(location, x, y, z, w); }
GLAPI void APIENTRY glUniform1dv(GLint location, GLsizei count, const GLdouble *value) { glUniform1dv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2dv(GLint location, GLsizei count, const GLdouble *value) { glUniform2dv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3dv(GLint location, GLsizei count, const GLdouble *value) { glUniform3dv_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4dv(GLint location, GLsizei count, const GLdouble *value) { glUniform4dv_ptr(location, count, value); }
GLAPI void APIENTRY glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix2dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix3dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix4dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix2x3dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix2x4dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix3x2dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix3x4dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix4x2dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glUniformMatrix4x3dv_ptr(location, count, transpose, value); }
GLAPI void APIENTRY glGetUniformdv(GLuint program, GLint location, GLdouble *params) { glGetUniformdv_ptr(program, location, params); }
GLAPI GLint APIENTRY glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name) { return glGetSubroutineUniformLocation_ptr(program, shadertype, name); }
GLAPI GLuint APIENTRY glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name) { return glGetSubroutineIndex_ptr(program, shadertype, name); }
GLAPI void APIENTRY glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) { glGetActiveSubroutineUniformiv_ptr(program, shadertype, index, pname, values); }
GLAPI void APIENTRY glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) { glGetActiveSubroutineUniformName_ptr(program, shadertype, index, bufSize, length, name); }
GLAPI void APIENTRY glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) { glGetActiveSubroutineName_ptr(program, shadertype, index, bufSize, length, name); }
GLAPI void APIENTRY glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices) { glUniformSubroutinesuiv_ptr(shadertype, count, indices); }
GLAPI void APIENTRY glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params) { glGetUniformSubroutineuiv_ptr(shadertype, location, params); }
GLAPI void APIENTRY glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values) { glGetProgramStageiv_ptr(program, shadertype, pname, values); }
GLAPI void APIENTRY glPatchParameteri(GLenum pname, GLint value) { glPatchParameteri_ptr(pname, value); }
GLAPI void APIENTRY glPatchParameterfv(GLenum pname, const GLfloat *values) { glPatchParameterfv_ptr(pname, values); }
GLAPI void APIENTRY glBindTransformFeedback(GLenum target, GLuint id) { glBindTransformFeedback_ptr(target, id); }
GLAPI void APIENTRY glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids) { glDeleteTransformFeedbacks_ptr(n, ids); }
GLAPI void APIENTRY glGenTransformFeedbacks(GLsizei n, GLuint *ids) { glGenTransformFeedbacks_ptr(n, ids); }
GLAPI GLboolean APIENTRY glIsTransformFeedback(GLuint id) { return glIsTransformFeedback_ptr(id); }
GLAPI void APIENTRY glPauseTransformFeedback() { glPauseTransformFeedback_ptr(); }
GLAPI void APIENTRY glResumeTransformFeedback() { glResumeTransformFeedback_ptr(); }
GLAPI void APIENTRY glDrawTransformFeedback(GLenum mode, GLuint id) { glDrawTransformFeedback_ptr(mode, id); }
GLAPI void APIENTRY glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) { glDrawTransformFeedbackStream_ptr(mode, id, stream); }
GLAPI void APIENTRY glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) { glBeginQueryIndexed_ptr(target, index, id); }
GLAPI void APIENTRY glEndQueryIndexed(GLenum target, GLuint index) { glEndQueryIndexed_ptr(target, index); }
GLAPI void APIENTRY glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint *params) { glGetQueryIndexediv_ptr(target, index, pname, params); }
GLAPI void APIENTRY glReleaseShaderCompiler() { glReleaseShaderCompiler_ptr(); }
GLAPI void APIENTRY glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length) { glShaderBinary_ptr(count, shaders, binaryFormat, binary, length); }
GLAPI void APIENTRY glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) { glGetShaderPrecisionFormat_ptr(shadertype, precisiontype, range, precision); }
GLAPI void APIENTRY glDepthRangef(GLfloat n, GLfloat f) { glDepthRangef_ptr(n, f); }
GLAPI void APIENTRY glClearDepthf(GLfloat d) { glClearDepthf_ptr(d); }
GLAPI void APIENTRY glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) { glGetProgramBinary_ptr(program, bufSize, length, binaryFormat, binary); }
GLAPI void APIENTRY glProgramBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) { glProgramBinary_ptr(program, binaryFormat, binary, length); }
GLAPI void APIENTRY glProgramParameteri(GLuint program, GLenum pname, GLint value) { glProgramParameteri_ptr(program, pname, value); }
GLAPI void APIENTRY glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) { glUseProgramStages_ptr(pipeline, stages, program); }
GLAPI void APIENTRY glActiveShaderProgram(GLuint pipeline, GLuint program) { glActiveShaderProgram_ptr(pipeline, program); }
GLAPI GLuint APIENTRY glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const*strings) { return glCreateShaderProgramv_ptr(type, count, strings); }
GLAPI void APIENTRY glBindProgramPipeline(GLuint pipeline) { glBindProgramPipeline_ptr(pipeline); }
GLAPI void APIENTRY glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines) { glDeleteProgramPipelines_ptr(n, pipelines); }
GLAPI void APIENTRY glGenProgramPipelines(GLsizei n, GLuint *pipelines) { glGenProgramPipelines_ptr(n, pipelines); }
GLAPI GLboolean APIENTRY glIsProgramPipeline(GLuint pipeline) { return glIsProgramPipeline_ptr(pipeline); }
GLAPI void APIENTRY glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params) { glGetProgramPipelineiv_ptr(pipeline, pname, params); }
GLAPI void APIENTRY glProgramUniform1i(GLuint program, GLint location, GLint v0) { glProgramUniform1i_ptr(program, location, v0); }
GLAPI void APIENTRY glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform1iv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform1f(GLuint program, GLint location, GLfloat v0) { glProgramUniform1f_ptr(program, location, v0); }
GLAPI void APIENTRY glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform1fv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform1d(GLuint program, GLint location, GLdouble v0) { glProgramUniform1d_ptr(program, location, v0); }
GLAPI void APIENTRY glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform1dv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform1ui(GLuint program, GLint location, GLuint v0) { glProgramUniform1ui_ptr(program, location, v0); }
GLAPI void APIENTRY glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform1uiv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) { glProgramUniform2i_ptr(program, location, v0, v1); }
GLAPI void APIENTRY glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform2iv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) { glProgramUniform2f_ptr(program, location, v0, v1); }
GLAPI void APIENTRY glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform2fv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1) { glProgramUniform2d_ptr(program, location, v0, v1); }
GLAPI void APIENTRY glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform2dv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) { glProgramUniform2ui_ptr(program, location, v0, v1); }
GLAPI void APIENTRY glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform2uiv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) { glProgramUniform3i_ptr(program, location, v0, v1, v2); }
GLAPI void APIENTRY glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform3iv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { glProgramUniform3f_ptr(program, location, v0, v1, v2); }
GLAPI void APIENTRY glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform3fv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) { glProgramUniform3d_ptr(program, location, v0, v1, v2); }
GLAPI void APIENTRY glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform3dv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) { glProgramUniform3ui_ptr(program, location, v0, v1, v2); }
GLAPI void APIENTRY glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform3uiv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { glProgramUniform4i_ptr(program, location, v0, v1, v2, v3); }
GLAPI void APIENTRY glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform4iv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { glProgramUniform4f_ptr(program, location, v0, v1, v2, v3); }
GLAPI void APIENTRY glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform4fv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) { glProgramUniform4d_ptr(program, location, v0, v1, v2, v3); }
GLAPI void APIENTRY glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform4dv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) { glProgramUniform4ui_ptr(program, location, v0, v1, v2, v3); }
GLAPI void APIENTRY glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform4uiv_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix2fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix3fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix4fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix2dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix3dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix4dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix2x3fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix3x2fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix2x4fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix4x2fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix3x4fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix4x3fv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix2x3dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix3x2dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix2x4dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix4x2dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix3x4dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix4x3dv_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glValidateProgramPipeline(GLuint pipeline) { glValidateProgramPipeline_ptr(pipeline); }
GLAPI void APIENTRY glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) { glGetProgramPipelineInfoLog_ptr(pipeline, bufSize, length, infoLog); }
GLAPI void APIENTRY glVertexAttribL1d(GLuint index, GLdouble x) { glVertexAttribL1d_ptr(index, x); }
GLAPI void APIENTRY glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y) { glVertexAttribL2d_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) { glVertexAttribL3d_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { glVertexAttribL4d_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttribL1dv(GLuint index, const GLdouble *v) { glVertexAttribL1dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL2dv(GLuint index, const GLdouble *v) { glVertexAttribL2dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL3dv(GLuint index, const GLdouble *v) { glVertexAttribL3dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL4dv(GLuint index, const GLdouble *v) { glVertexAttribL4dv_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) { glVertexAttribLPointer_ptr(index, size, type, stride, pointer); }
GLAPI void APIENTRY glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble *params) { glGetVertexAttribLdv_ptr(index, pname, params); }
GLAPI void APIENTRY glViewportArrayv(GLuint first, GLsizei count, const GLfloat *v) { glViewportArrayv_ptr(first, count, v); }
GLAPI void APIENTRY glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) { glViewportIndexedf_ptr(index, x, y, w, h); }
GLAPI void APIENTRY glViewportIndexedfv(GLuint index, const GLfloat *v) { glViewportIndexedfv_ptr(index, v); }
GLAPI void APIENTRY glScissorArrayv(GLuint first, GLsizei count, const GLint *v) { glScissorArrayv_ptr(first, count, v); }
GLAPI void APIENTRY glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) { glScissorIndexed_ptr(index, left, bottom, width, height); }
GLAPI void APIENTRY glScissorIndexedv(GLuint index, const GLint *v) { glScissorIndexedv_ptr(index, v); }
GLAPI void APIENTRY glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble *v) { glDepthRangeArrayv_ptr(first, count, v); }
GLAPI void APIENTRY glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f) { glDepthRangeIndexed_ptr(index, n, f); }
GLAPI void APIENTRY glGetFloati_v(GLenum target, GLuint index, GLfloat *data) { glGetFloati_v_ptr(target, index, data); }
GLAPI void APIENTRY glGetDoublei_v(GLenum target, GLuint index, GLdouble *data) { glGetDoublei_v_ptr(target, index, data); }
GLAPI void APIENTRY glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) { glDrawArraysInstancedBaseInstance_ptr(mode, first, count, instancecount, baseinstance); }
GLAPI void APIENTRY glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance) { glDrawElementsInstancedBaseInstance_ptr(mode, count, type, indices, instancecount, baseinstance); }
GLAPI void APIENTRY glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) { glDrawElementsInstancedBaseVertexBaseInstance_ptr(mode, count, type, indices, instancecount, basevertex, baseinstance); }
GLAPI void APIENTRY glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params) { glGetInternalformativ_ptr(target, internalformat, pname, count, params); }
GLAPI void APIENTRY glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) { glGetActiveAtomicCounterBufferiv_ptr(program, bufferIndex, pname, params); }
GLAPI void APIENTRY glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) { glBindImageTexture_ptr(unit, texture, level, layered, layer, access, format); }
GLAPI void APIENTRY glMemoryBarrier(GLbitfield barriers) { glMemoryBarrier_ptr(barriers); }
GLAPI void APIENTRY glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) { glTexStorage1D_ptr(target, levels, internalformat, width); }
GLAPI void APIENTRY glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) { glTexStorage2D_ptr(target, levels, internalformat, width, height); }
GLAPI void APIENTRY glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) { glTexStorage3D_ptr(target, levels, internalformat, width, height, depth); }
GLAPI void APIENTRY glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount) { glDrawTransformFeedbackInstanced_ptr(mode, id, instancecount); }
GLAPI void APIENTRY glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) { glDrawTransformFeedbackStreamInstanced_ptr(mode, id, stream, instancecount); }
GLAPI void APIENTRY glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data) { glClearBufferData_ptr(target, internalformat, format, type, data); }
GLAPI void APIENTRY glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) { glClearBufferSubData_ptr(target, internalformat, offset, size, format, type, data); }
GLAPI void APIENTRY glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) { glDispatchCompute_ptr(num_groups_x, num_groups_y, num_groups_z); }
GLAPI void APIENTRY glDispatchComputeIndirect(GLintptr indirect) { glDispatchComputeIndirect_ptr(indirect); }
GLAPI void APIENTRY glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) { glCopyImageSubData_ptr(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth); }
GLAPI void APIENTRY glFramebufferParameteri(GLenum target, GLenum pname, GLint param) { glFramebufferParameteri_ptr(target, pname, param); }
GLAPI void APIENTRY glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint *params) { glGetFramebufferParameteriv_ptr(target, pname, params); }
GLAPI void APIENTRY glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params) { glGetInternalformati64v_ptr(target, internalformat, pname, count, params); }
GLAPI void APIENTRY glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) { glInvalidateTexSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth); }
GLAPI void APIENTRY glInvalidateTexImage(GLuint texture, GLint level) { glInvalidateTexImage_ptr(texture, level); }
GLAPI void APIENTRY glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length) { glInvalidateBufferSubData_ptr(buffer, offset, length); }
GLAPI void APIENTRY glInvalidateBufferData(GLuint buffer) { glInvalidateBufferData_ptr(buffer); }
GLAPI void APIENTRY glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments) { glInvalidateFramebuffer_ptr(target, numAttachments, attachments); }
GLAPI void APIENTRY glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) { glInvalidateSubFramebuffer_ptr(target, numAttachments, attachments, x, y, width, height); }
GLAPI void APIENTRY glMultiDrawArraysIndirect(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride) { glMultiDrawArraysIndirect_ptr(mode, indirect, drawcount, stride); }
GLAPI void APIENTRY glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride) { glMultiDrawElementsIndirect_ptr(mode, type, indirect, drawcount, stride); }
GLAPI void APIENTRY glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint *params) { glGetProgramInterfaceiv_ptr(program, programInterface, pname, params); }
GLAPI GLuint APIENTRY glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar *name) { return glGetProgramResourceIndex_ptr(program, programInterface, name); }
GLAPI void APIENTRY glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) { glGetProgramResourceName_ptr(program, programInterface, index, bufSize, length, name); }
GLAPI void APIENTRY glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLint *params) { glGetProgramResourceiv_ptr(program, programInterface, index, propCount, props, count, length, params); }
GLAPI GLint APIENTRY glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar *name) { return glGetProgramResourceLocation_ptr(program, programInterface, name); }
GLAPI GLint APIENTRY glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar *name) { return glGetProgramResourceLocationIndex_ptr(program, programInterface, name); }
GLAPI void APIENTRY glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) { glShaderStorageBlockBinding_ptr(program, storageBlockIndex, storageBlockBinding); }
GLAPI void APIENTRY glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) { glTexBufferRange_ptr(target, internalformat, buffer, offset, size); }
GLAPI void APIENTRY glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { glTexStorage2DMultisample_ptr(target, samples, internalformat, width, height, fixedsamplelocations); }
GLAPI void APIENTRY glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { glTexStorage3DMultisample_ptr(target, samples, internalformat, width, height, depth, fixedsamplelocations); }
GLAPI void APIENTRY glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) { glTextureView_ptr(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers); }
GLAPI void APIENTRY glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) { glBindVertexBuffer_ptr(bindingindex, buffer, offset, stride); }
GLAPI void APIENTRY glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) { glVertexAttribFormat_ptr(attribindex, size, type, normalized, relativeoffset); }
GLAPI void APIENTRY glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { glVertexAttribIFormat_ptr(attribindex, size, type, relativeoffset); }
GLAPI void APIENTRY glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { glVertexAttribLFormat_ptr(attribindex, size, type, relativeoffset); }
GLAPI void APIENTRY glVertexAttribBinding(GLuint attribindex, GLuint bindingindex) { glVertexAttribBinding_ptr(attribindex, bindingindex); }
GLAPI void APIENTRY glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) { glVertexBindingDivisor_ptr(bindingindex, divisor); }
GLAPI void APIENTRY glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) { glDebugMessageControl_ptr(source, type, severity, count, ids, enabled); }
GLAPI void APIENTRY glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) { glDebugMessageInsert_ptr(source, type, id, severity, length, buf); }
GLAPI void APIENTRY glDebugMessageCallback(GLDEBUGPROC callback, const void *userParam) { glDebugMessageCallback_ptr(callback, userParam); }
GLAPI GLuint APIENTRY glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) { return glGetDebugMessageLog_ptr(count, bufSize, sources, types, ids, severities, lengths, messageLog); }
GLAPI void APIENTRY glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar *message) { glPushDebugGroup_ptr(source, id, length, message); }
GLAPI void APIENTRY glPopDebugGroup() { glPopDebugGroup_ptr(); }
GLAPI void APIENTRY glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar *label) { glObjectLabel_ptr(identifier, name, length, label); }
GLAPI void APIENTRY glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label) { glGetObjectLabel_ptr(identifier, name, bufSize, length, label); }
GLAPI void APIENTRY glObjectPtrLabel(const void *ptr, GLsizei length, const GLchar *label) { glObjectPtrLabel_ptr(ptr, length, label); }
GLAPI void APIENTRY glGetObjectPtrLabel(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label) { glGetObjectPtrLabel_ptr(ptr, bufSize, length, label); }
GLAPI void APIENTRY glBufferStorage(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags) { glBufferStorage_ptr(target, size, data, flags); }
GLAPI void APIENTRY glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void *data) { glClearTexImage_ptr(texture, level, format, type, data); }
GLAPI void APIENTRY glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data) { glClearTexSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data); }
GLAPI void APIENTRY glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint *buffers) { glBindBuffersBase_ptr(target, first, count, buffers); }
GLAPI void APIENTRY glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes) { glBindBuffersRange_ptr(target, first, count, buffers, offsets, sizes); }
GLAPI void APIENTRY glBindTextures(GLuint first, GLsizei count, const GLuint *textures) { glBindTextures_ptr(first, count, textures); }
GLAPI void APIENTRY glBindSamplers(GLuint first, GLsizei count, const GLuint *samplers) { glBindSamplers_ptr(first, count, samplers); }
GLAPI void APIENTRY glBindImageTextures(GLuint first, GLsizei count, const GLuint *textures) { glBindImageTextures_ptr(first, count, textures); }
GLAPI void APIENTRY glBindVertexBuffers(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) { glBindVertexBuffers_ptr(first, count, buffers, offsets, strides); }
GLAPI void APIENTRY glClipControl(GLenum origin, GLenum depth) { glClipControl_ptr(origin, depth); }
GLAPI void APIENTRY glCreateTransformFeedbacks(GLsizei n, GLuint *ids) { glCreateTransformFeedbacks_ptr(n, ids); }
GLAPI void APIENTRY glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer) { glTransformFeedbackBufferBase_ptr(xfb, index, buffer); }
GLAPI void APIENTRY glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) { glTransformFeedbackBufferRange_ptr(xfb, index, buffer, offset, size); }
GLAPI void APIENTRY glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint *param) { glGetTransformFeedbackiv_ptr(xfb, pname, param); }
GLAPI void APIENTRY glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint *param) { glGetTransformFeedbacki_v_ptr(xfb, pname, index, param); }
GLAPI void APIENTRY glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 *param) { glGetTransformFeedbacki64_v_ptr(xfb, pname, index, param); }
GLAPI void APIENTRY glCreateBuffers(GLsizei n, GLuint *buffers) { glCreateBuffers_ptr(n, buffers); }
GLAPI void APIENTRY glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) { glNamedBufferStorage_ptr(buffer, size, data, flags); }
GLAPI void APIENTRY glNamedBufferData(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) { glNamedBufferData_ptr(buffer, size, data, usage); }
GLAPI void APIENTRY glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) { glNamedBufferSubData_ptr(buffer, offset, size, data); }
GLAPI void APIENTRY glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) { glCopyNamedBufferSubData_ptr(readBuffer, writeBuffer, readOffset, writeOffset, size); }
GLAPI void APIENTRY glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) { glClearNamedBufferData_ptr(buffer, internalformat, format, type, data); }
GLAPI void APIENTRY glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) { glClearNamedBufferSubData_ptr(buffer, internalformat, offset, size, format, type, data); }
GLAPI void * APIENTRY glMapNamedBuffer(GLuint buffer, GLenum access) { return glMapNamedBuffer_ptr(buffer, access); }
GLAPI void * APIENTRY glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) { return glMapNamedBufferRange_ptr(buffer, offset, length, access); }
GLAPI GLboolean APIENTRY glUnmapNamedBuffer(GLuint buffer) { return glUnmapNamedBuffer_ptr(buffer); }
GLAPI void APIENTRY glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length) { glFlushMappedNamedBufferRange_ptr(buffer, offset, length); }
GLAPI void APIENTRY glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint *params) { glGetNamedBufferParameteriv_ptr(buffer, pname, params); }
GLAPI void APIENTRY glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 *params) { glGetNamedBufferParameteri64v_ptr(buffer, pname, params); }
GLAPI void APIENTRY glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void **params) { glGetNamedBufferPointerv_ptr(buffer, pname, params); }
GLAPI void APIENTRY glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) { glGetNamedBufferSubData_ptr(buffer, offset, size, data); }
GLAPI void APIENTRY glCreateFramebuffers(GLsizei n, GLuint *framebuffers) { glCreateFramebuffers_ptr(n, framebuffers); }
GLAPI void APIENTRY glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { glNamedFramebufferRenderbuffer_ptr(framebuffer, attachment, renderbuffertarget, renderbuffer); }
GLAPI void APIENTRY glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param) { glNamedFramebufferParameteri_ptr(framebuffer, pname, param); }
GLAPI void APIENTRY glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) { glNamedFramebufferTexture_ptr(framebuffer, attachment, texture, level); }
GLAPI void APIENTRY glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) { glNamedFramebufferTextureLayer_ptr(framebuffer, attachment, texture, level, layer); }
GLAPI void APIENTRY glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf) { glNamedFramebufferDrawBuffer_ptr(framebuffer, buf); }
GLAPI void APIENTRY glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum *bufs) { glNamedFramebufferDrawBuffers_ptr(framebuffer, n, bufs); }
GLAPI void APIENTRY glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src) { glNamedFramebufferReadBuffer_ptr(framebuffer, src); }
GLAPI void APIENTRY glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments) { glInvalidateNamedFramebufferData_ptr(framebuffer, numAttachments, attachments); }
GLAPI void APIENTRY glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) { glInvalidateNamedFramebufferSubData_ptr(framebuffer, numAttachments, attachments, x, y, width, height); }
GLAPI void APIENTRY glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value) { glClearNamedFramebufferiv_ptr(framebuffer, buffer, drawbuffer, value); }
GLAPI void APIENTRY glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value) { glClearNamedFramebufferuiv_ptr(framebuffer, buffer, drawbuffer, value); }
GLAPI void APIENTRY glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value) { glClearNamedFramebufferfv_ptr(framebuffer, buffer, drawbuffer, value); }
GLAPI void APIENTRY glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) { glClearNamedFramebufferfi_ptr(framebuffer, buffer, drawbuffer, depth, stencil); }
GLAPI void APIENTRY glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) { glBlitNamedFramebuffer_ptr(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
GLAPI GLenum APIENTRY glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target) { return glCheckNamedFramebufferStatus_ptr(framebuffer, target); }
GLAPI void APIENTRY glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint *param) { glGetNamedFramebufferParameteriv_ptr(framebuffer, pname, param); }
GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) { glGetNamedFramebufferAttachmentParameteriv_ptr(framebuffer, attachment, pname, params); }
GLAPI void APIENTRY glCreateRenderbuffers(GLsizei n, GLuint *renderbuffers) { glCreateRenderbuffers_ptr(n, renderbuffers); }
GLAPI void APIENTRY glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) { glNamedRenderbufferStorage_ptr(renderbuffer, internalformat, width, height); }
GLAPI void APIENTRY glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { glNamedRenderbufferStorageMultisample_ptr(renderbuffer, samples, internalformat, width, height); }
GLAPI void APIENTRY glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint *params) { glGetNamedRenderbufferParameteriv_ptr(renderbuffer, pname, params); }
GLAPI void APIENTRY glCreateTextures(GLenum target, GLsizei n, GLuint *textures) { glCreateTextures_ptr(target, n, textures); }
GLAPI void APIENTRY glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer) { glTextureBuffer_ptr(texture, internalformat, buffer); }
GLAPI void APIENTRY glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) { glTextureBufferRange_ptr(texture, internalformat, buffer, offset, size); }
GLAPI void APIENTRY glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) { glTextureStorage1D_ptr(texture, levels, internalformat, width); }
GLAPI void APIENTRY glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) { glTextureStorage2D_ptr(texture, levels, internalformat, width, height); }
GLAPI void APIENTRY glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) { glTextureStorage3D_ptr(texture, levels, internalformat, width, height, depth); }
GLAPI void APIENTRY glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { glTextureStorage2DMultisample_ptr(texture, samples, internalformat, width, height, fixedsamplelocations); }
GLAPI void APIENTRY glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { glTextureStorage3DMultisample_ptr(texture, samples, internalformat, width, height, depth, fixedsamplelocations); }
GLAPI void APIENTRY glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) { glTextureSubImage1D_ptr(texture, level, xoffset, width, format, type, pixels); }
GLAPI void APIENTRY glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) { glTextureSubImage2D_ptr(texture, level, xoffset, yoffset, width, height, format, type, pixels); }
GLAPI void APIENTRY glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) { glTextureSubImage3D_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
GLAPI void APIENTRY glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) { glCompressedTextureSubImage1D_ptr(texture, level, xoffset, width, format, imageSize, data); }
GLAPI void APIENTRY glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) { glCompressedTextureSubImage2D_ptr(texture, level, xoffset, yoffset, width, height, format, imageSize, data); }
GLAPI void APIENTRY glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) { glCompressedTextureSubImage3D_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
GLAPI void APIENTRY glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { glCopyTextureSubImage1D_ptr(texture, level, xoffset, x, y, width); }
GLAPI void APIENTRY glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyTextureSubImage2D_ptr(texture, level, xoffset, yoffset, x, y, width, height); }
GLAPI void APIENTRY glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyTextureSubImage3D_ptr(texture, level, xoffset, yoffset, zoffset, x, y, width, height); }
GLAPI void APIENTRY glTextureParameterf(GLuint texture, GLenum pname, GLfloat param) { glTextureParameterf_ptr(texture, pname, param); }
GLAPI void APIENTRY glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat *param) { glTextureParameterfv_ptr(texture, pname, param); }
GLAPI void APIENTRY glTextureParameteri(GLuint texture, GLenum pname, GLint param) { glTextureParameteri_ptr(texture, pname, param); }
GLAPI void APIENTRY glTextureParameterIiv(GLuint texture, GLenum pname, const GLint *params) { glTextureParameterIiv_ptr(texture, pname, params); }
GLAPI void APIENTRY glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint *params) { glTextureParameterIuiv_ptr(texture, pname, params); }
GLAPI void APIENTRY glTextureParameteriv(GLuint texture, GLenum pname, const GLint *param) { glTextureParameteriv_ptr(texture, pname, param); }
GLAPI void APIENTRY glGenerateTextureMipmap(GLuint texture) { glGenerateTextureMipmap_ptr(texture); }
GLAPI void APIENTRY glBindTextureUnit(GLuint unit, GLuint texture) { glBindTextureUnit_ptr(unit, texture); }
GLAPI void APIENTRY glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) { glGetTextureImage_ptr(texture, level, format, type, bufSize, pixels); }
GLAPI void APIENTRY glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void *pixels) { glGetCompressedTextureImage_ptr(texture, level, bufSize, pixels); }
GLAPI void APIENTRY glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat *params) { glGetTextureLevelParameterfv_ptr(texture, level, pname, params); }
GLAPI void APIENTRY glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint *params) { glGetTextureLevelParameteriv_ptr(texture, level, pname, params); }
GLAPI void APIENTRY glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat *params) { glGetTextureParameterfv_ptr(texture, pname, params); }
GLAPI void APIENTRY glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint *params) { glGetTextureParameterIiv_ptr(texture, pname, params); }
GLAPI void APIENTRY glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint *params) { glGetTextureParameterIuiv_ptr(texture, pname, params); }
GLAPI void APIENTRY glGetTextureParameteriv(GLuint texture, GLenum pname, GLint *params) { glGetTextureParameteriv_ptr(texture, pname, params); }
GLAPI void APIENTRY glCreateVertexArrays(GLsizei n, GLuint *arrays) { glCreateVertexArrays_ptr(n, arrays); }
GLAPI void APIENTRY glDisableVertexArrayAttrib(GLuint vaobj, GLuint index) { glDisableVertexArrayAttrib_ptr(vaobj, index); }
GLAPI void APIENTRY glEnableVertexArrayAttrib(GLuint vaobj, GLuint index) { glEnableVertexArrayAttrib_ptr(vaobj, index); }
GLAPI void APIENTRY glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer) { glVertexArrayElementBuffer_ptr(vaobj, buffer); }
GLAPI void APIENTRY glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) { glVertexArrayVertexBuffer_ptr(vaobj, bindingindex, buffer, offset, stride); }
GLAPI void APIENTRY glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) { glVertexArrayVertexBuffers_ptr(vaobj, first, count, buffers, offsets, strides); }
GLAPI void APIENTRY glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex) { glVertexArrayAttribBinding_ptr(vaobj, attribindex, bindingindex); }
GLAPI void APIENTRY glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) { glVertexArrayAttribFormat_ptr(vaobj, attribindex, size, type, normalized, relativeoffset); }
GLAPI void APIENTRY glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { glVertexArrayAttribIFormat_ptr(vaobj, attribindex, size, type, relativeoffset); }
GLAPI void APIENTRY glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { glVertexArrayAttribLFormat_ptr(vaobj, attribindex, size, type, relativeoffset); }
GLAPI void APIENTRY glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor) { glVertexArrayBindingDivisor_ptr(vaobj, bindingindex, divisor); }
GLAPI void APIENTRY glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint *param) { glGetVertexArrayiv_ptr(vaobj, pname, param); }
GLAPI void APIENTRY glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint *param) { glGetVertexArrayIndexediv_ptr(vaobj, index, pname, param); }
GLAPI void APIENTRY glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param) { glGetVertexArrayIndexed64iv_ptr(vaobj, index, pname, param); }
GLAPI void APIENTRY glCreateSamplers(GLsizei n, GLuint *samplers) { glCreateSamplers_ptr(n, samplers); }
GLAPI void APIENTRY glCreateProgramPipelines(GLsizei n, GLuint *pipelines) { glCreateProgramPipelines_ptr(n, pipelines); }
GLAPI void APIENTRY glCreateQueries(GLenum target, GLsizei n, GLuint *ids) { glCreateQueries_ptr(target, n, ids); }
GLAPI void APIENTRY glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { glGetQueryBufferObjecti64v_ptr(id, buffer, pname, offset); }
GLAPI void APIENTRY glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { glGetQueryBufferObjectiv_ptr(id, buffer, pname, offset); }
GLAPI void APIENTRY glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { glGetQueryBufferObjectui64v_ptr(id, buffer, pname, offset); }
GLAPI void APIENTRY glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { glGetQueryBufferObjectuiv_ptr(id, buffer, pname, offset); }
GLAPI void APIENTRY glMemoryBarrierByRegion(GLbitfield barriers) { glMemoryBarrierByRegion_ptr(barriers); }
GLAPI void APIENTRY glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels) { glGetTextureSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels); }
GLAPI void APIENTRY glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels) { glGetCompressedTextureSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels); }
GLAPI GLenum APIENTRY glGetGraphicsResetStatus() { return glGetGraphicsResetStatus_ptr(); }
GLAPI void APIENTRY glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void *pixels) { glGetnCompressedTexImage_ptr(target, lod, bufSize, pixels); }
GLAPI void APIENTRY glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) { glGetnTexImage_ptr(target, level, format, type, bufSize, pixels); }
GLAPI void APIENTRY glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble *params) { glGetnUniformdv_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat *params) { glGetnUniformfv_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint *params) { glGetnUniformiv_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint *params) { glGetnUniformuiv_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) { glReadnPixels_ptr(x, y, width, height, format, type, bufSize, data); }
GLAPI void APIENTRY glTextureBarrier() { glTextureBarrier_ptr(); }
GLAPI void APIENTRY glSpecializeShader(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue) { glSpecializeShader_ptr(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue); }
GLAPI void APIENTRY glMultiDrawArraysIndirectCount(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) { glMultiDrawArraysIndirectCount_ptr(mode, indirect, drawcount, maxdrawcount, stride); }
GLAPI void APIENTRY glMultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) { glMultiDrawElementsIndirectCount_ptr(mode, type, indirect, drawcount, maxdrawcount, stride); }
GLAPI void APIENTRY glPolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp) { glPolygonOffsetClamp_ptr(factor, units, clamp); }
GLAPI void APIENTRY glPrimitiveBoundingBoxARB(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) { glPrimitiveBoundingBoxARB_ptr(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW); }
GLAPI GLuint64 APIENTRY glGetTextureHandleARB(GLuint texture) { return glGetTextureHandleARB_ptr(texture); }
GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler) { return glGetTextureSamplerHandleARB_ptr(texture, sampler); }
GLAPI void APIENTRY glMakeTextureHandleResidentARB(GLuint64 handle) { glMakeTextureHandleResidentARB_ptr(handle); }
GLAPI void APIENTRY glMakeTextureHandleNonResidentARB(GLuint64 handle) { glMakeTextureHandleNonResidentARB_ptr(handle); }
GLAPI GLuint64 APIENTRY glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) { return glGetImageHandleARB_ptr(texture, level, layered, layer, format); }
GLAPI void APIENTRY glMakeImageHandleResidentARB(GLuint64 handle, GLenum access) { glMakeImageHandleResidentARB_ptr(handle, access); }
GLAPI void APIENTRY glMakeImageHandleNonResidentARB(GLuint64 handle) { glMakeImageHandleNonResidentARB_ptr(handle); }
GLAPI void APIENTRY glUniformHandleui64ARB(GLint location, GLuint64 value) { glUniformHandleui64ARB_ptr(location, value); }
GLAPI void APIENTRY glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 *value) { glUniformHandleui64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value) { glProgramUniformHandleui64ARB_ptr(program, location, value); }
GLAPI void APIENTRY glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *values) { glProgramUniformHandleui64vARB_ptr(program, location, count, values); }
GLAPI GLboolean APIENTRY glIsTextureHandleResidentARB(GLuint64 handle) { return glIsTextureHandleResidentARB_ptr(handle); }
GLAPI GLboolean APIENTRY glIsImageHandleResidentARB(GLuint64 handle) { return glIsImageHandleResidentARB_ptr(handle); }
GLAPI void APIENTRY glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x) { glVertexAttribL1ui64ARB_ptr(index, x); }
GLAPI void APIENTRY glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT *v) { glVertexAttribL1ui64vARB_ptr(index, v); }
GLAPI void APIENTRY glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT *params) { glGetVertexAttribLui64vARB_ptr(index, pname, params); }
GLAPI GLsync APIENTRY glCreateSyncFromCLeventARB(struct _cl_context *context, struct _cl_event *event, GLbitfield flags) { return glCreateSyncFromCLeventARB_ptr(context, event, flags); }
GLAPI void APIENTRY glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z) { glDispatchComputeGroupSizeARB_ptr(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z); }
GLAPI void APIENTRY glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) { glDebugMessageControlARB_ptr(source, type, severity, count, ids, enabled); }
GLAPI void APIENTRY glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) { glDebugMessageInsertARB_ptr(source, type, id, severity, length, buf); }
GLAPI void APIENTRY glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void *userParam) { glDebugMessageCallbackARB_ptr(callback, userParam); }
GLAPI GLuint APIENTRY glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) { return glGetDebugMessageLogARB_ptr(count, bufSize, sources, types, ids, severities, lengths, messageLog); }
GLAPI void APIENTRY glBlendEquationiARB(GLuint buf, GLenum mode) { glBlendEquationiARB_ptr(buf, mode); }
GLAPI void APIENTRY glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha) { glBlendEquationSeparateiARB_ptr(buf, modeRGB, modeAlpha); }
GLAPI void APIENTRY glBlendFunciARB(GLuint buf, GLenum src, GLenum dst) { glBlendFunciARB_ptr(buf, src, dst); }
GLAPI void APIENTRY glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) { glBlendFuncSeparateiARB_ptr(buf, srcRGB, dstRGB, srcAlpha, dstAlpha); }
GLAPI void APIENTRY glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount) { glDrawArraysInstancedARB_ptr(mode, first, count, primcount); }
GLAPI void APIENTRY glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) { glDrawElementsInstancedARB_ptr(mode, count, type, indices, primcount); }
GLAPI void APIENTRY glProgramParameteriARB(GLuint program, GLenum pname, GLint value) { glProgramParameteriARB_ptr(program, pname, value); }
GLAPI void APIENTRY glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level) { glFramebufferTextureARB_ptr(target, attachment, texture, level); }
GLAPI void APIENTRY glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) { glFramebufferTextureLayerARB_ptr(target, attachment, texture, level, layer); }
GLAPI void APIENTRY glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) { glFramebufferTextureFaceARB_ptr(target, attachment, texture, level, face); }
GLAPI void APIENTRY glSpecializeShaderARB(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue) { glSpecializeShaderARB_ptr(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue); }
GLAPI void APIENTRY glUniform1i64ARB(GLint location, GLint64 x) { glUniform1i64ARB_ptr(location, x); }
GLAPI void APIENTRY glUniform2i64ARB(GLint location, GLint64 x, GLint64 y) { glUniform2i64ARB_ptr(location, x, y); }
GLAPI void APIENTRY glUniform3i64ARB(GLint location, GLint64 x, GLint64 y, GLint64 z) { glUniform3i64ARB_ptr(location, x, y, z); }
GLAPI void APIENTRY glUniform4i64ARB(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) { glUniform4i64ARB_ptr(location, x, y, z, w); }
GLAPI void APIENTRY glUniform1i64vARB(GLint location, GLsizei count, const GLint64 *value) { glUniform1i64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2i64vARB(GLint location, GLsizei count, const GLint64 *value) { glUniform2i64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3i64vARB(GLint location, GLsizei count, const GLint64 *value) { glUniform3i64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4i64vARB(GLint location, GLsizei count, const GLint64 *value) { glUniform4i64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glUniform1ui64ARB(GLint location, GLuint64 x) { glUniform1ui64ARB_ptr(location, x); }
GLAPI void APIENTRY glUniform2ui64ARB(GLint location, GLuint64 x, GLuint64 y) { glUniform2ui64ARB_ptr(location, x, y); }
GLAPI void APIENTRY glUniform3ui64ARB(GLint location, GLuint64 x, GLuint64 y, GLuint64 z) { glUniform3ui64ARB_ptr(location, x, y, z); }
GLAPI void APIENTRY glUniform4ui64ARB(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) { glUniform4ui64ARB_ptr(location, x, y, z, w); }
GLAPI void APIENTRY glUniform1ui64vARB(GLint location, GLsizei count, const GLuint64 *value) { glUniform1ui64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2ui64vARB(GLint location, GLsizei count, const GLuint64 *value) { glUniform2ui64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3ui64vARB(GLint location, GLsizei count, const GLuint64 *value) { glUniform3ui64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4ui64vARB(GLint location, GLsizei count, const GLuint64 *value) { glUniform4ui64vARB_ptr(location, count, value); }
GLAPI void APIENTRY glGetUniformi64vARB(GLuint program, GLint location, GLint64 *params) { glGetUniformi64vARB_ptr(program, location, params); }
GLAPI void APIENTRY glGetUniformui64vARB(GLuint program, GLint location, GLuint64 *params) { glGetUniformui64vARB_ptr(program, location, params); }
GLAPI void APIENTRY glGetnUniformi64vARB(GLuint program, GLint location, GLsizei bufSize, GLint64 *params) { glGetnUniformi64vARB_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glGetnUniformui64vARB(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params) { glGetnUniformui64vARB_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glProgramUniform1i64ARB(GLuint program, GLint location, GLint64 x) { glProgramUniform1i64ARB_ptr(program, location, x); }
GLAPI void APIENTRY glProgramUniform2i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y) { glProgramUniform2i64ARB_ptr(program, location, x, y); }
GLAPI void APIENTRY glProgramUniform3i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z) { glProgramUniform3i64ARB_ptr(program, location, x, y, z); }
GLAPI void APIENTRY glProgramUniform4i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) { glProgramUniform4i64ARB_ptr(program, location, x, y, z, w); }
GLAPI void APIENTRY glProgramUniform1i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) { glProgramUniform1i64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) { glProgramUniform2i64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) { glProgramUniform3i64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) { glProgramUniform4i64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform1ui64ARB(GLuint program, GLint location, GLuint64 x) { glProgramUniform1ui64ARB_ptr(program, location, x); }
GLAPI void APIENTRY glProgramUniform2ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y) { glProgramUniform2ui64ARB_ptr(program, location, x, y); }
GLAPI void APIENTRY glProgramUniform3ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z) { glProgramUniform3ui64ARB_ptr(program, location, x, y, z); }
GLAPI void APIENTRY glProgramUniform4ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) { glProgramUniform4ui64ARB_ptr(program, location, x, y, z, w); }
GLAPI void APIENTRY glProgramUniform1ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) { glProgramUniform1ui64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) { glProgramUniform2ui64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) { glProgramUniform3ui64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) { glProgramUniform4ui64vARB_ptr(program, location, count, value); }
GLAPI void APIENTRY glMultiDrawArraysIndirectCountARB(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) { glMultiDrawArraysIndirectCountARB_ptr(mode, indirect, drawcount, maxdrawcount, stride); }
GLAPI void APIENTRY glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) { glMultiDrawElementsIndirectCountARB_ptr(mode, type, indirect, drawcount, maxdrawcount, stride); }
GLAPI void APIENTRY glVertexAttribDivisorARB(GLuint index, GLuint divisor) { glVertexAttribDivisorARB_ptr(index, divisor); }
GLAPI void APIENTRY glMaxShaderCompilerThreadsARB(GLuint count) { glMaxShaderCompilerThreadsARB_ptr(count); }
GLAPI GLenum APIENTRY glGetGraphicsResetStatusARB() { return glGetGraphicsResetStatusARB_ptr(); }
GLAPI void APIENTRY glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img) { glGetnTexImageARB_ptr(target, level, format, type, bufSize, img); }
GLAPI void APIENTRY glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) { glReadnPixelsARB_ptr(x, y, width, height, format, type, bufSize, data); }
GLAPI void APIENTRY glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void *img) { glGetnCompressedTexImageARB_ptr(target, lod, bufSize, img); }
GLAPI void APIENTRY glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat *params) { glGetnUniformfvARB_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint *params) { glGetnUniformivARB_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint *params) { glGetnUniformuivARB_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble *params) { glGetnUniformdvARB_ptr(program, location, bufSize, params); }
GLAPI void APIENTRY glFramebufferSampleLocationsfvARB(GLenum target, GLuint start, GLsizei count, const GLfloat *v) { glFramebufferSampleLocationsfvARB_ptr(target, start, count, v); }
GLAPI void APIENTRY glNamedFramebufferSampleLocationsfvARB(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) { glNamedFramebufferSampleLocationsfvARB_ptr(framebuffer, start, count, v); }
GLAPI void APIENTRY glEvaluateDepthValuesARB() { glEvaluateDepthValuesARB_ptr(); }
GLAPI void APIENTRY glMinSampleShadingARB(GLfloat value) { glMinSampleShadingARB_ptr(value); }
GLAPI void APIENTRY glNamedStringARB(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string) { glNamedStringARB_ptr(type, namelen, name, stringlen, string); }
GLAPI void APIENTRY glDeleteNamedStringARB(GLint namelen, const GLchar *name) { glDeleteNamedStringARB_ptr(namelen, name); }
GLAPI void APIENTRY glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length) { glCompileShaderIncludeARB_ptr(shader, count, path, length); }
GLAPI GLboolean APIENTRY glIsNamedStringARB(GLint namelen, const GLchar *name) { return glIsNamedStringARB_ptr(namelen, name); }
GLAPI void APIENTRY glGetNamedStringARB(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string) { glGetNamedStringARB_ptr(namelen, name, bufSize, stringlen, string); }
GLAPI void APIENTRY glGetNamedStringivARB(GLint namelen, const GLchar *name, GLenum pname, GLint *params) { glGetNamedStringivARB_ptr(namelen, name, pname, params); }
GLAPI void APIENTRY glBufferPageCommitmentARB(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit) { glBufferPageCommitmentARB_ptr(target, offset, size, commit); }
GLAPI void APIENTRY glNamedBufferPageCommitmentEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) { glNamedBufferPageCommitmentEXT_ptr(buffer, offset, size, commit); }
GLAPI void APIENTRY glNamedBufferPageCommitmentARB(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) { glNamedBufferPageCommitmentARB_ptr(buffer, offset, size, commit); }
GLAPI void APIENTRY glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) { glTexPageCommitmentARB_ptr(target, level, xoffset, yoffset, zoffset, width, height, depth, commit); }
GLAPI void APIENTRY glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer) { glTexBufferARB_ptr(target, internalformat, buffer); }
GLAPI void APIENTRY glDepthRangeArraydvNV(GLuint first, GLsizei count, const GLdouble *v) { glDepthRangeArraydvNV_ptr(first, count, v); }
GLAPI void APIENTRY glDepthRangeIndexeddNV(GLuint index, GLdouble n, GLdouble f) { glDepthRangeIndexeddNV_ptr(index, n, f); }
GLAPI void APIENTRY glBlendBarrierKHR() { glBlendBarrierKHR_ptr(); }
GLAPI void APIENTRY glMaxShaderCompilerThreadsKHR(GLuint count) { glMaxShaderCompilerThreadsKHR_ptr(count); }
GLAPI void APIENTRY glRenderbufferStorageMultisampleAdvancedAMD(GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height) { glRenderbufferStorageMultisampleAdvancedAMD_ptr(target, samples, storageSamples, internalformat, width, height); }
GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleAdvancedAMD(GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height) { glNamedRenderbufferStorageMultisampleAdvancedAMD_ptr(renderbuffer, samples, storageSamples, internalformat, width, height); }
GLAPI void APIENTRY glGetPerfMonitorGroupsAMD(GLint *numGroups, GLsizei groupsSize, GLuint *groups) { glGetPerfMonitorGroupsAMD_ptr(numGroups, groupsSize, groups); }
GLAPI void APIENTRY glGetPerfMonitorCountersAMD(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters) { glGetPerfMonitorCountersAMD_ptr(group, numCounters, maxActiveCounters, counterSize, counters); }
GLAPI void APIENTRY glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString) { glGetPerfMonitorGroupStringAMD_ptr(group, bufSize, length, groupString); }
GLAPI void APIENTRY glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString) { glGetPerfMonitorCounterStringAMD_ptr(group, counter, bufSize, length, counterString); }
GLAPI void APIENTRY glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void *data) { glGetPerfMonitorCounterInfoAMD_ptr(group, counter, pname, data); }
GLAPI void APIENTRY glGenPerfMonitorsAMD(GLsizei n, GLuint *monitors) { glGenPerfMonitorsAMD_ptr(n, monitors); }
GLAPI void APIENTRY glDeletePerfMonitorsAMD(GLsizei n, GLuint *monitors) { glDeletePerfMonitorsAMD_ptr(n, monitors); }
GLAPI void APIENTRY glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList) { glSelectPerfMonitorCountersAMD_ptr(monitor, enable, group, numCounters, counterList); }
GLAPI void APIENTRY glBeginPerfMonitorAMD(GLuint monitor) { glBeginPerfMonitorAMD_ptr(monitor); }
GLAPI void APIENTRY glEndPerfMonitorAMD(GLuint monitor) { glEndPerfMonitorAMD_ptr(monitor); }
GLAPI void APIENTRY glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten) { glGetPerfMonitorCounterDataAMD_ptr(monitor, pname, dataSize, data, bytesWritten); }
GLAPI void APIENTRY glEGLImageTargetTexStorageEXT(GLenum target, GLeglImageOES image, const GLint* attrib_list) { glEGLImageTargetTexStorageEXT_ptr(target, image, attrib_list); }
GLAPI void APIENTRY glEGLImageTargetTextureStorageEXT(GLuint texture, GLeglImageOES image, const GLint* attrib_list) { glEGLImageTargetTextureStorageEXT_ptr(texture, image, attrib_list); }
GLAPI void APIENTRY glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar *label) { glLabelObjectEXT_ptr(type, object, length, label); }
GLAPI void APIENTRY glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label) { glGetObjectLabelEXT_ptr(type, object, bufSize, length, label); }
GLAPI void APIENTRY glInsertEventMarkerEXT(GLsizei length, const GLchar *marker) { glInsertEventMarkerEXT_ptr(length, marker); }
GLAPI void APIENTRY glPushGroupMarkerEXT(GLsizei length, const GLchar *marker) { glPushGroupMarkerEXT_ptr(length, marker); }
GLAPI void APIENTRY glPopGroupMarkerEXT() { glPopGroupMarkerEXT_ptr(); }
GLAPI void APIENTRY glMatrixLoadfEXT(GLenum mode, const GLfloat *m) { glMatrixLoadfEXT_ptr(mode, m); }
GLAPI void APIENTRY glMatrixLoaddEXT(GLenum mode, const GLdouble *m) { glMatrixLoaddEXT_ptr(mode, m); }
GLAPI void APIENTRY glMatrixMultfEXT(GLenum mode, const GLfloat *m) { glMatrixMultfEXT_ptr(mode, m); }
GLAPI void APIENTRY glMatrixMultdEXT(GLenum mode, const GLdouble *m) { glMatrixMultdEXT_ptr(mode, m); }
GLAPI void APIENTRY glMatrixLoadIdentityEXT(GLenum mode) { glMatrixLoadIdentityEXT_ptr(mode); }
GLAPI void APIENTRY glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) { glMatrixRotatefEXT_ptr(mode, angle, x, y, z); }
GLAPI void APIENTRY glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) { glMatrixRotatedEXT_ptr(mode, angle, x, y, z); }
GLAPI void APIENTRY glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) { glMatrixScalefEXT_ptr(mode, x, y, z); }
GLAPI void APIENTRY glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) { glMatrixScaledEXT_ptr(mode, x, y, z); }
GLAPI void APIENTRY glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) { glMatrixTranslatefEXT_ptr(mode, x, y, z); }
GLAPI void APIENTRY glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) { glMatrixTranslatedEXT_ptr(mode, x, y, z); }
GLAPI void APIENTRY glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) { glMatrixFrustumEXT_ptr(mode, left, right, bottom, top, zNear, zFar); }
GLAPI void APIENTRY glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) { glMatrixOrthoEXT_ptr(mode, left, right, bottom, top, zNear, zFar); }
GLAPI void APIENTRY glMatrixPopEXT(GLenum mode) { glMatrixPopEXT_ptr(mode); }
GLAPI void APIENTRY glMatrixPushEXT(GLenum mode) { glMatrixPushEXT_ptr(mode); }
GLAPI void APIENTRY glClientAttribDefaultEXT(GLbitfield mask) { glClientAttribDefaultEXT_ptr(mask); }
GLAPI void APIENTRY glPushClientAttribDefaultEXT(GLbitfield mask) { glPushClientAttribDefaultEXT_ptr(mask); }
GLAPI void APIENTRY glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param) { glTextureParameterfEXT_ptr(texture, target, pname, param); }
GLAPI void APIENTRY glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat *params) { glTextureParameterfvEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param) { glTextureParameteriEXT_ptr(texture, target, pname, param); }
GLAPI void APIENTRY glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params) { glTextureParameterivEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) { glTextureImage1DEXT_ptr(texture, target, level, internalformat, width, border, format, type, pixels); }
GLAPI void APIENTRY glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) { glTextureImage2DEXT_ptr(texture, target, level, internalformat, width, height, border, format, type, pixels); }
GLAPI void APIENTRY glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) { glTextureSubImage1DEXT_ptr(texture, target, level, xoffset, width, format, type, pixels); }
GLAPI void APIENTRY glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) { glTextureSubImage2DEXT_ptr(texture, target, level, xoffset, yoffset, width, height, format, type, pixels); }
GLAPI void APIENTRY glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) { glCopyTextureImage1DEXT_ptr(texture, target, level, internalformat, x, y, width, border); }
GLAPI void APIENTRY glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { glCopyTextureImage2DEXT_ptr(texture, target, level, internalformat, x, y, width, height, border); }
GLAPI void APIENTRY glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { glCopyTextureSubImage1DEXT_ptr(texture, target, level, xoffset, x, y, width); }
GLAPI void APIENTRY glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyTextureSubImage2DEXT_ptr(texture, target, level, xoffset, yoffset, x, y, width, height); }
GLAPI void APIENTRY glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) { glGetTextureImageEXT_ptr(texture, target, level, format, type, pixels); }
GLAPI void APIENTRY glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat *params) { glGetTextureParameterfvEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params) { glGetTextureParameterivEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params) { glGetTextureLevelParameterfvEXT_ptr(texture, target, level, pname, params); }
GLAPI void APIENTRY glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params) { glGetTextureLevelParameterivEXT_ptr(texture, target, level, pname, params); }
GLAPI void APIENTRY glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) { glTextureImage3DEXT_ptr(texture, target, level, internalformat, width, height, depth, border, format, type, pixels); }
GLAPI void APIENTRY glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) { glTextureSubImage3DEXT_ptr(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
GLAPI void APIENTRY glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyTextureSubImage3DEXT_ptr(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height); }
GLAPI void APIENTRY glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture) { glBindMultiTextureEXT_ptr(texunit, target, texture); }
GLAPI void APIENTRY glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer) { glMultiTexCoordPointerEXT_ptr(texunit, size, type, stride, pointer); }
GLAPI void APIENTRY glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param) { glMultiTexEnvfEXT_ptr(texunit, target, pname, param); }
GLAPI void APIENTRY glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) { glMultiTexEnvfvEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param) { glMultiTexEnviEXT_ptr(texunit, target, pname, param); }
GLAPI void APIENTRY glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params) { glMultiTexEnvivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param) { glMultiTexGendEXT_ptr(texunit, coord, pname, param); }
GLAPI void APIENTRY glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params) { glMultiTexGendvEXT_ptr(texunit, coord, pname, params); }
GLAPI void APIENTRY glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param) { glMultiTexGenfEXT_ptr(texunit, coord, pname, param); }
GLAPI void APIENTRY glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params) { glMultiTexGenfvEXT_ptr(texunit, coord, pname, params); }
GLAPI void APIENTRY glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param) { glMultiTexGeniEXT_ptr(texunit, coord, pname, param); }
GLAPI void APIENTRY glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint *params) { glMultiTexGenivEXT_ptr(texunit, coord, pname, params); }
GLAPI void APIENTRY glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params) { glGetMultiTexEnvfvEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params) { glGetMultiTexEnvivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params) { glGetMultiTexGendvEXT_ptr(texunit, coord, pname, params); }
GLAPI void APIENTRY glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params) { glGetMultiTexGenfvEXT_ptr(texunit, coord, pname, params); }
GLAPI void APIENTRY glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint *params) { glGetMultiTexGenivEXT_ptr(texunit, coord, pname, params); }
GLAPI void APIENTRY glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param) { glMultiTexParameteriEXT_ptr(texunit, target, pname, param); }
GLAPI void APIENTRY glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params) { glMultiTexParameterivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param) { glMultiTexParameterfEXT_ptr(texunit, target, pname, param); }
GLAPI void APIENTRY glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) { glMultiTexParameterfvEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) { glMultiTexImage1DEXT_ptr(texunit, target, level, internalformat, width, border, format, type, pixels); }
GLAPI void APIENTRY glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) { glMultiTexImage2DEXT_ptr(texunit, target, level, internalformat, width, height, border, format, type, pixels); }
GLAPI void APIENTRY glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) { glMultiTexSubImage1DEXT_ptr(texunit, target, level, xoffset, width, format, type, pixels); }
GLAPI void APIENTRY glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) { glMultiTexSubImage2DEXT_ptr(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels); }
GLAPI void APIENTRY glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) { glCopyMultiTexImage1DEXT_ptr(texunit, target, level, internalformat, x, y, width, border); }
GLAPI void APIENTRY glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { glCopyMultiTexImage2DEXT_ptr(texunit, target, level, internalformat, x, y, width, height, border); }
GLAPI void APIENTRY glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { glCopyMultiTexSubImage1DEXT_ptr(texunit, target, level, xoffset, x, y, width); }
GLAPI void APIENTRY glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyMultiTexSubImage2DEXT_ptr(texunit, target, level, xoffset, yoffset, x, y, width, height); }
GLAPI void APIENTRY glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) { glGetMultiTexImageEXT_ptr(texunit, target, level, format, type, pixels); }
GLAPI void APIENTRY glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params) { glGetMultiTexParameterfvEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params) { glGetMultiTexParameterivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params) { glGetMultiTexLevelParameterfvEXT_ptr(texunit, target, level, pname, params); }
GLAPI void APIENTRY glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params) { glGetMultiTexLevelParameterivEXT_ptr(texunit, target, level, pname, params); }
GLAPI void APIENTRY glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) { glMultiTexImage3DEXT_ptr(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels); }
GLAPI void APIENTRY glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) { glMultiTexSubImage3DEXT_ptr(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
GLAPI void APIENTRY glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { glCopyMultiTexSubImage3DEXT_ptr(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height); }
GLAPI void APIENTRY glEnableClientStateIndexedEXT(GLenum array, GLuint index) { glEnableClientStateIndexedEXT_ptr(array, index); }
GLAPI void APIENTRY glDisableClientStateIndexedEXT(GLenum array, GLuint index) { glDisableClientStateIndexedEXT_ptr(array, index); }
GLAPI void APIENTRY glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat *data) { glGetFloatIndexedvEXT_ptr(target, index, data); }
GLAPI void APIENTRY glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble *data) { glGetDoubleIndexedvEXT_ptr(target, index, data); }
GLAPI void APIENTRY glGetPointerIndexedvEXT(GLenum target, GLuint index, void **data) { glGetPointerIndexedvEXT_ptr(target, index, data); }
GLAPI void APIENTRY glEnableIndexedEXT(GLenum target, GLuint index) { glEnableIndexedEXT_ptr(target, index); }
GLAPI void APIENTRY glDisableIndexedEXT(GLenum target, GLuint index) { glDisableIndexedEXT_ptr(target, index); }
GLAPI GLboolean APIENTRY glIsEnabledIndexedEXT(GLenum target, GLuint index) { return glIsEnabledIndexedEXT_ptr(target, index); }
GLAPI void APIENTRY glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint *data) { glGetIntegerIndexedvEXT_ptr(target, index, data); }
GLAPI void APIENTRY glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean *data) { glGetBooleanIndexedvEXT_ptr(target, index, data); }
GLAPI void APIENTRY glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) { glCompressedTextureImage3DEXT_ptr(texture, target, level, internalformat, width, height, depth, border, imageSize, bits); }
GLAPI void APIENTRY glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) { glCompressedTextureImage2DEXT_ptr(texture, target, level, internalformat, width, height, border, imageSize, bits); }
GLAPI void APIENTRY glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) { glCompressedTextureImage1DEXT_ptr(texture, target, level, internalformat, width, border, imageSize, bits); }
GLAPI void APIENTRY glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) { glCompressedTextureSubImage3DEXT_ptr(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits); }
GLAPI void APIENTRY glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) { glCompressedTextureSubImage2DEXT_ptr(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits); }
GLAPI void APIENTRY glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) { glCompressedTextureSubImage1DEXT_ptr(texture, target, level, xoffset, width, format, imageSize, bits); }
GLAPI void APIENTRY glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void *img) { glGetCompressedTextureImageEXT_ptr(texture, target, lod, img); }
GLAPI void APIENTRY glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) { glCompressedMultiTexImage3DEXT_ptr(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits); }
GLAPI void APIENTRY glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) { glCompressedMultiTexImage2DEXT_ptr(texunit, target, level, internalformat, width, height, border, imageSize, bits); }
GLAPI void APIENTRY glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) { glCompressedMultiTexImage1DEXT_ptr(texunit, target, level, internalformat, width, border, imageSize, bits); }
GLAPI void APIENTRY glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) { glCompressedMultiTexSubImage3DEXT_ptr(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits); }
GLAPI void APIENTRY glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) { glCompressedMultiTexSubImage2DEXT_ptr(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits); }
GLAPI void APIENTRY glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) { glCompressedMultiTexSubImage1DEXT_ptr(texunit, target, level, xoffset, width, format, imageSize, bits); }
GLAPI void APIENTRY glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void *img) { glGetCompressedMultiTexImageEXT_ptr(texunit, target, lod, img); }
GLAPI void APIENTRY glMatrixLoadTransposefEXT(GLenum mode, const GLfloat *m) { glMatrixLoadTransposefEXT_ptr(mode, m); }
GLAPI void APIENTRY glMatrixLoadTransposedEXT(GLenum mode, const GLdouble *m) { glMatrixLoadTransposedEXT_ptr(mode, m); }
GLAPI void APIENTRY glMatrixMultTransposefEXT(GLenum mode, const GLfloat *m) { glMatrixMultTransposefEXT_ptr(mode, m); }
GLAPI void APIENTRY glMatrixMultTransposedEXT(GLenum mode, const GLdouble *m) { glMatrixMultTransposedEXT_ptr(mode, m); }
GLAPI void APIENTRY glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) { glNamedBufferDataEXT_ptr(buffer, size, data, usage); }
GLAPI void APIENTRY glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) { glNamedBufferSubDataEXT_ptr(buffer, offset, size, data); }
GLAPI void * APIENTRY glMapNamedBufferEXT(GLuint buffer, GLenum access) { return glMapNamedBufferEXT_ptr(buffer, access); }
GLAPI GLboolean APIENTRY glUnmapNamedBufferEXT(GLuint buffer) { return glUnmapNamedBufferEXT_ptr(buffer); }
GLAPI void APIENTRY glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint *params) { glGetNamedBufferParameterivEXT_ptr(buffer, pname, params); }
GLAPI void APIENTRY glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void **params) { glGetNamedBufferPointervEXT_ptr(buffer, pname, params); }
GLAPI void APIENTRY glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) { glGetNamedBufferSubDataEXT_ptr(buffer, offset, size, data); }
GLAPI void APIENTRY glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0) { glProgramUniform1fEXT_ptr(program, location, v0); }
GLAPI void APIENTRY glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1) { glProgramUniform2fEXT_ptr(program, location, v0, v1); }
GLAPI void APIENTRY glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { glProgramUniform3fEXT_ptr(program, location, v0, v1, v2); }
GLAPI void APIENTRY glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { glProgramUniform4fEXT_ptr(program, location, v0, v1, v2, v3); }
GLAPI void APIENTRY glProgramUniform1iEXT(GLuint program, GLint location, GLint v0) { glProgramUniform1iEXT_ptr(program, location, v0); }
GLAPI void APIENTRY glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1) { glProgramUniform2iEXT_ptr(program, location, v0, v1); }
GLAPI void APIENTRY glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) { glProgramUniform3iEXT_ptr(program, location, v0, v1, v2); }
GLAPI void APIENTRY glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { glProgramUniform4iEXT_ptr(program, location, v0, v1, v2, v3); }
GLAPI void APIENTRY glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform1fvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform2fvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform3fvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) { glProgramUniform4fvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform1ivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform2ivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform3ivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) { glProgramUniform4ivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix2fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix3fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix4fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix2x3fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix3x2fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix2x4fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix4x2fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix3x4fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) { glProgramUniformMatrix4x3fvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer) { glTextureBufferEXT_ptr(texture, target, internalformat, buffer); }
GLAPI void APIENTRY glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer) { glMultiTexBufferEXT_ptr(texunit, target, internalformat, buffer); }
GLAPI void APIENTRY glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params) { glTextureParameterIivEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint *params) { glTextureParameterIuivEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params) { glGetTextureParameterIivEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint *params) { glGetTextureParameterIuivEXT_ptr(texture, target, pname, params); }
GLAPI void APIENTRY glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params) { glMultiTexParameterIivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint *params) { glMultiTexParameterIuivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params) { glGetMultiTexParameterIivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint *params) { glGetMultiTexParameterIuivEXT_ptr(texunit, target, pname, params); }
GLAPI void APIENTRY glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0) { glProgramUniform1uiEXT_ptr(program, location, v0); }
GLAPI void APIENTRY glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1) { glProgramUniform2uiEXT_ptr(program, location, v0, v1); }
GLAPI void APIENTRY glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) { glProgramUniform3uiEXT_ptr(program, location, v0, v1, v2); }
GLAPI void APIENTRY glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) { glProgramUniform4uiEXT_ptr(program, location, v0, v1, v2, v3); }
GLAPI void APIENTRY glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform1uivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform2uivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform3uivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) { glProgramUniform4uivEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params) { glNamedProgramLocalParameters4fvEXT_ptr(program, target, index, count, params); }
GLAPI void APIENTRY glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) { glNamedProgramLocalParameterI4iEXT_ptr(program, target, index, x, y, z, w); }
GLAPI void APIENTRY glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint *params) { glNamedProgramLocalParameterI4ivEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params) { glNamedProgramLocalParametersI4ivEXT_ptr(program, target, index, count, params); }
GLAPI void APIENTRY glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) { glNamedProgramLocalParameterI4uiEXT_ptr(program, target, index, x, y, z, w); }
GLAPI void APIENTRY glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint *params) { glNamedProgramLocalParameterI4uivEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params) { glNamedProgramLocalParametersI4uivEXT_ptr(program, target, index, count, params); }
GLAPI void APIENTRY glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint *params) { glGetNamedProgramLocalParameterIivEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint *params) { glGetNamedProgramLocalParameterIuivEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glEnableClientStateiEXT(GLenum array, GLuint index) { glEnableClientStateiEXT_ptr(array, index); }
GLAPI void APIENTRY glDisableClientStateiEXT(GLenum array, GLuint index) { glDisableClientStateiEXT_ptr(array, index); }
GLAPI void APIENTRY glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat *params) { glGetFloati_vEXT_ptr(pname, index, params); }
GLAPI void APIENTRY glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble *params) { glGetDoublei_vEXT_ptr(pname, index, params); }
GLAPI void APIENTRY glGetPointeri_vEXT(GLenum pname, GLuint index, void **params) { glGetPointeri_vEXT_ptr(pname, index, params); }
GLAPI void APIENTRY glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void *string) { glNamedProgramStringEXT_ptr(program, target, format, len, string); }
GLAPI void APIENTRY glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { glNamedProgramLocalParameter4dEXT_ptr(program, target, index, x, y, z, w); }
GLAPI void APIENTRY glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble *params) { glNamedProgramLocalParameter4dvEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { glNamedProgramLocalParameter4fEXT_ptr(program, target, index, x, y, z, w); }
GLAPI void APIENTRY glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat *params) { glNamedProgramLocalParameter4fvEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble *params) { glGetNamedProgramLocalParameterdvEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat *params) { glGetNamedProgramLocalParameterfvEXT_ptr(program, target, index, params); }
GLAPI void APIENTRY glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint *params) { glGetNamedProgramivEXT_ptr(program, target, pname, params); }
GLAPI void APIENTRY glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void *string) { glGetNamedProgramStringEXT_ptr(program, target, pname, string); }
GLAPI void APIENTRY glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) { glNamedRenderbufferStorageEXT_ptr(renderbuffer, internalformat, width, height); }
GLAPI void APIENTRY glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint *params) { glGetNamedRenderbufferParameterivEXT_ptr(renderbuffer, pname, params); }
GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { glNamedRenderbufferStorageMultisampleEXT_ptr(renderbuffer, samples, internalformat, width, height); }
GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) { glNamedRenderbufferStorageMultisampleCoverageEXT_ptr(renderbuffer, coverageSamples, colorSamples, internalformat, width, height); }
GLAPI GLenum APIENTRY glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target) { return glCheckNamedFramebufferStatusEXT_ptr(framebuffer, target); }
GLAPI void APIENTRY glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { glNamedFramebufferTexture1DEXT_ptr(framebuffer, attachment, textarget, texture, level); }
GLAPI void APIENTRY glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { glNamedFramebufferTexture2DEXT_ptr(framebuffer, attachment, textarget, texture, level); }
GLAPI void APIENTRY glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) { glNamedFramebufferTexture3DEXT_ptr(framebuffer, attachment, textarget, texture, level, zoffset); }
GLAPI void APIENTRY glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { glNamedFramebufferRenderbufferEXT_ptr(framebuffer, attachment, renderbuffertarget, renderbuffer); }
GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) { glGetNamedFramebufferAttachmentParameterivEXT_ptr(framebuffer, attachment, pname, params); }
GLAPI void APIENTRY glGenerateTextureMipmapEXT(GLuint texture, GLenum target) { glGenerateTextureMipmapEXT_ptr(texture, target); }
GLAPI void APIENTRY glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target) { glGenerateMultiTexMipmapEXT_ptr(texunit, target); }
GLAPI void APIENTRY glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode) { glFramebufferDrawBufferEXT_ptr(framebuffer, mode); }
GLAPI void APIENTRY glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum *bufs) { glFramebufferDrawBuffersEXT_ptr(framebuffer, n, bufs); }
GLAPI void APIENTRY glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode) { glFramebufferReadBufferEXT_ptr(framebuffer, mode); }
GLAPI void APIENTRY glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params) { glGetFramebufferParameterivEXT_ptr(framebuffer, pname, params); }
GLAPI void APIENTRY glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) { glNamedCopyBufferSubDataEXT_ptr(readBuffer, writeBuffer, readOffset, writeOffset, size); }
GLAPI void APIENTRY glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) { glNamedFramebufferTextureEXT_ptr(framebuffer, attachment, texture, level); }
GLAPI void APIENTRY glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) { glNamedFramebufferTextureLayerEXT_ptr(framebuffer, attachment, texture, level, layer); }
GLAPI void APIENTRY glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face) { glNamedFramebufferTextureFaceEXT_ptr(framebuffer, attachment, texture, level, face); }
GLAPI void APIENTRY glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer) { glTextureRenderbufferEXT_ptr(texture, target, renderbuffer); }
GLAPI void APIENTRY glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer) { glMultiTexRenderbufferEXT_ptr(texunit, target, renderbuffer); }
GLAPI void APIENTRY glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayVertexOffsetEXT_ptr(vaobj, buffer, size, type, stride, offset); }
GLAPI void APIENTRY glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayColorOffsetEXT_ptr(vaobj, buffer, size, type, stride, offset); }
GLAPI void APIENTRY glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset) { glVertexArrayEdgeFlagOffsetEXT_ptr(vaobj, buffer, stride, offset); }
GLAPI void APIENTRY glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayIndexOffsetEXT_ptr(vaobj, buffer, type, stride, offset); }
GLAPI void APIENTRY glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayNormalOffsetEXT_ptr(vaobj, buffer, type, stride, offset); }
GLAPI void APIENTRY glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayTexCoordOffsetEXT_ptr(vaobj, buffer, size, type, stride, offset); }
GLAPI void APIENTRY glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayMultiTexCoordOffsetEXT_ptr(vaobj, buffer, texunit, size, type, stride, offset); }
GLAPI void APIENTRY glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayFogCoordOffsetEXT_ptr(vaobj, buffer, type, stride, offset); }
GLAPI void APIENTRY glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) { glVertexArraySecondaryColorOffsetEXT_ptr(vaobj, buffer, size, type, stride, offset); }
GLAPI void APIENTRY glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset) { glVertexArrayVertexAttribOffsetEXT_ptr(vaobj, buffer, index, size, type, normalized, stride, offset); }
GLAPI void APIENTRY glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayVertexAttribIOffsetEXT_ptr(vaobj, buffer, index, size, type, stride, offset); }
GLAPI void APIENTRY glEnableVertexArrayEXT(GLuint vaobj, GLenum array) { glEnableVertexArrayEXT_ptr(vaobj, array); }
GLAPI void APIENTRY glDisableVertexArrayEXT(GLuint vaobj, GLenum array) { glDisableVertexArrayEXT_ptr(vaobj, array); }
GLAPI void APIENTRY glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index) { glEnableVertexArrayAttribEXT_ptr(vaobj, index); }
GLAPI void APIENTRY glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index) { glDisableVertexArrayAttribEXT_ptr(vaobj, index); }
GLAPI void APIENTRY glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint *param) { glGetVertexArrayIntegervEXT_ptr(vaobj, pname, param); }
GLAPI void APIENTRY glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void **param) { glGetVertexArrayPointervEXT_ptr(vaobj, pname, param); }
GLAPI void APIENTRY glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint *param) { glGetVertexArrayIntegeri_vEXT_ptr(vaobj, index, pname, param); }
GLAPI void APIENTRY glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void **param) { glGetVertexArrayPointeri_vEXT_ptr(vaobj, index, pname, param); }
GLAPI void * APIENTRY glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) { return glMapNamedBufferRangeEXT_ptr(buffer, offset, length, access); }
GLAPI void APIENTRY glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length) { glFlushMappedNamedBufferRangeEXT_ptr(buffer, offset, length); }
GLAPI void APIENTRY glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) { glNamedBufferStorageEXT_ptr(buffer, size, data, flags); }
GLAPI void APIENTRY glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) { glClearNamedBufferDataEXT_ptr(buffer, internalformat, format, type, data); }
GLAPI void APIENTRY glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) { glClearNamedBufferSubDataEXT_ptr(buffer, internalformat, offset, size, format, type, data); }
GLAPI void APIENTRY glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param) { glNamedFramebufferParameteriEXT_ptr(framebuffer, pname, param); }
GLAPI void APIENTRY glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params) { glGetNamedFramebufferParameterivEXT_ptr(framebuffer, pname, params); }
GLAPI void APIENTRY glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x) { glProgramUniform1dEXT_ptr(program, location, x); }
GLAPI void APIENTRY glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y) { glProgramUniform2dEXT_ptr(program, location, x, y); }
GLAPI void APIENTRY glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z) { glProgramUniform3dEXT_ptr(program, location, x, y, z); }
GLAPI void APIENTRY glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { glProgramUniform4dEXT_ptr(program, location, x, y, z, w); }
GLAPI void APIENTRY glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform1dvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform2dvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform3dvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) { glProgramUniform4dvEXT_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix2dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix3dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix4dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix2x3dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix2x4dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix3x2dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix3x4dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix4x2dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) { glProgramUniformMatrix4x3dvEXT_ptr(program, location, count, transpose, value); }
GLAPI void APIENTRY glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) { glTextureBufferRangeEXT_ptr(texture, target, internalformat, buffer, offset, size); }
GLAPI void APIENTRY glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) { glTextureStorage1DEXT_ptr(texture, target, levels, internalformat, width); }
GLAPI void APIENTRY glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) { glTextureStorage2DEXT_ptr(texture, target, levels, internalformat, width, height); }
GLAPI void APIENTRY glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) { glTextureStorage3DEXT_ptr(texture, target, levels, internalformat, width, height, depth); }
GLAPI void APIENTRY glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { glTextureStorage2DMultisampleEXT_ptr(texture, target, samples, internalformat, width, height, fixedsamplelocations); }
GLAPI void APIENTRY glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { glTextureStorage3DMultisampleEXT_ptr(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations); }
GLAPI void APIENTRY glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) { glVertexArrayBindVertexBufferEXT_ptr(vaobj, bindingindex, buffer, offset, stride); }
GLAPI void APIENTRY glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) { glVertexArrayVertexAttribFormatEXT_ptr(vaobj, attribindex, size, type, normalized, relativeoffset); }
GLAPI void APIENTRY glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { glVertexArrayVertexAttribIFormatEXT_ptr(vaobj, attribindex, size, type, relativeoffset); }
GLAPI void APIENTRY glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { glVertexArrayVertexAttribLFormatEXT_ptr(vaobj, attribindex, size, type, relativeoffset); }
GLAPI void APIENTRY glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex) { glVertexArrayVertexAttribBindingEXT_ptr(vaobj, attribindex, bindingindex); }
GLAPI void APIENTRY glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor) { glVertexArrayVertexBindingDivisorEXT_ptr(vaobj, bindingindex, divisor); }
GLAPI void APIENTRY glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) { glVertexArrayVertexAttribLOffsetEXT_ptr(vaobj, buffer, index, size, type, stride, offset); }
GLAPI void APIENTRY glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) { glTexturePageCommitmentEXT_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit); }
GLAPI void APIENTRY glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor) { glVertexArrayVertexAttribDivisorEXT_ptr(vaobj, index, divisor); }
GLAPI void APIENTRY glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount) { glDrawArraysInstancedEXT_ptr(mode, start, count, primcount); }
GLAPI void APIENTRY glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) { glDrawElementsInstancedEXT_ptr(mode, count, type, indices, primcount); }
GLAPI void APIENTRY glPolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp) { glPolygonOffsetClampEXT_ptr(factor, units, clamp); }
GLAPI void APIENTRY glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations) { glRasterSamplesEXT_ptr(samples, fixedsamplelocations); }
GLAPI void APIENTRY glUseShaderProgramEXT(GLenum type, GLuint program) { glUseShaderProgramEXT_ptr(type, program); }
GLAPI void APIENTRY glActiveProgramEXT(GLuint program) { glActiveProgramEXT_ptr(program); }
GLAPI GLuint APIENTRY glCreateShaderProgramEXT(GLenum type, const GLchar *string) { return glCreateShaderProgramEXT_ptr(type, string); }
GLAPI void APIENTRY glFramebufferFetchBarrierEXT() { glFramebufferFetchBarrierEXT_ptr(); }
GLAPI void APIENTRY glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) { glTexStorage1DEXT_ptr(target, levels, internalformat, width); }
GLAPI void APIENTRY glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) { glTexStorage2DEXT_ptr(target, levels, internalformat, width, height); }
GLAPI void APIENTRY glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) { glTexStorage3DEXT_ptr(target, levels, internalformat, width, height, depth); }
GLAPI void APIENTRY glWindowRectanglesEXT(GLenum mode, GLsizei count, const GLint *box) { glWindowRectanglesEXT_ptr(mode, count, box); }
GLAPI void APIENTRY glApplyFramebufferAttachmentCMAAINTEL() { glApplyFramebufferAttachmentCMAAINTEL_ptr(); }
GLAPI void APIENTRY glBeginPerfQueryINTEL(GLuint queryHandle) { glBeginPerfQueryINTEL_ptr(queryHandle); }
GLAPI void APIENTRY glCreatePerfQueryINTEL(GLuint queryId, GLuint *queryHandle) { glCreatePerfQueryINTEL_ptr(queryId, queryHandle); }
GLAPI void APIENTRY glDeletePerfQueryINTEL(GLuint queryHandle) { glDeletePerfQueryINTEL_ptr(queryHandle); }
GLAPI void APIENTRY glEndPerfQueryINTEL(GLuint queryHandle) { glEndPerfQueryINTEL_ptr(queryHandle); }
GLAPI void APIENTRY glGetFirstPerfQueryIdINTEL(GLuint *queryId) { glGetFirstPerfQueryIdINTEL_ptr(queryId); }
GLAPI void APIENTRY glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint *nextQueryId) { glGetNextPerfQueryIdINTEL_ptr(queryId, nextQueryId); }
GLAPI void APIENTRY glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue) { glGetPerfCounterInfoINTEL_ptr(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue); }
GLAPI void APIENTRY glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, void *data, GLuint *bytesWritten) { glGetPerfQueryDataINTEL_ptr(queryHandle, flags, dataSize, data, bytesWritten); }
GLAPI void APIENTRY glGetPerfQueryIdByNameINTEL(GLchar *queryName, GLuint *queryId) { glGetPerfQueryIdByNameINTEL_ptr(queryName, queryId); }
GLAPI void APIENTRY glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask) { glGetPerfQueryInfoINTEL_ptr(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask); }
GLAPI void APIENTRY glFramebufferParameteriMESA(GLenum target, GLenum pname, GLint param) { glFramebufferParameteriMESA_ptr(target, pname, param); }
GLAPI void APIENTRY glGetFramebufferParameterivMESA(GLenum target, GLenum pname, GLint *params) { glGetFramebufferParameterivMESA_ptr(target, pname, params); }
GLAPI void APIENTRY glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) { glMultiDrawArraysIndirectBindlessNV_ptr(mode, indirect, drawCount, stride, vertexBufferCount); }
GLAPI void APIENTRY glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) { glMultiDrawElementsIndirectBindlessNV_ptr(mode, type, indirect, drawCount, stride, vertexBufferCount); }
GLAPI void APIENTRY glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) { glMultiDrawArraysIndirectBindlessCountNV_ptr(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount); }
GLAPI void APIENTRY glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) { glMultiDrawElementsIndirectBindlessCountNV_ptr(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount); }
GLAPI GLuint64 APIENTRY glGetTextureHandleNV(GLuint texture) { return glGetTextureHandleNV_ptr(texture); }
GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler) { return glGetTextureSamplerHandleNV_ptr(texture, sampler); }
GLAPI void APIENTRY glMakeTextureHandleResidentNV(GLuint64 handle) { glMakeTextureHandleResidentNV_ptr(handle); }
GLAPI void APIENTRY glMakeTextureHandleNonResidentNV(GLuint64 handle) { glMakeTextureHandleNonResidentNV_ptr(handle); }
GLAPI GLuint64 APIENTRY glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) { return glGetImageHandleNV_ptr(texture, level, layered, layer, format); }
GLAPI void APIENTRY glMakeImageHandleResidentNV(GLuint64 handle, GLenum access) { glMakeImageHandleResidentNV_ptr(handle, access); }
GLAPI void APIENTRY glMakeImageHandleNonResidentNV(GLuint64 handle) { glMakeImageHandleNonResidentNV_ptr(handle); }
GLAPI void APIENTRY glUniformHandleui64NV(GLint location, GLuint64 value) { glUniformHandleui64NV_ptr(location, value); }
GLAPI void APIENTRY glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 *value) { glUniformHandleui64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value) { glProgramUniformHandleui64NV_ptr(program, location, value); }
GLAPI void APIENTRY glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 *values) { glProgramUniformHandleui64vNV_ptr(program, location, count, values); }
GLAPI GLboolean APIENTRY glIsTextureHandleResidentNV(GLuint64 handle) { return glIsTextureHandleResidentNV_ptr(handle); }
GLAPI GLboolean APIENTRY glIsImageHandleResidentNV(GLuint64 handle) { return glIsImageHandleResidentNV_ptr(handle); }
GLAPI void APIENTRY glBlendParameteriNV(GLenum pname, GLint value) { glBlendParameteriNV_ptr(pname, value); }
GLAPI void APIENTRY glBlendBarrierNV() { glBlendBarrierNV_ptr(); }
GLAPI void APIENTRY glViewportPositionWScaleNV(GLuint index, GLfloat xcoeff, GLfloat ycoeff) { glViewportPositionWScaleNV_ptr(index, xcoeff, ycoeff); }
GLAPI void APIENTRY glCreateStatesNV(GLsizei n, GLuint *states) { glCreateStatesNV_ptr(n, states); }
GLAPI void APIENTRY glDeleteStatesNV(GLsizei n, const GLuint *states) { glDeleteStatesNV_ptr(n, states); }
GLAPI GLboolean APIENTRY glIsStateNV(GLuint state) { return glIsStateNV_ptr(state); }
GLAPI void APIENTRY glStateCaptureNV(GLuint state, GLenum mode) { glStateCaptureNV_ptr(state, mode); }
GLAPI GLuint APIENTRY glGetCommandHeaderNV(GLenum tokenID, GLuint size) { return glGetCommandHeaderNV_ptr(tokenID, size); }
GLAPI GLushort APIENTRY glGetStageIndexNV(GLenum shadertype) { return glGetStageIndexNV_ptr(shadertype); }
GLAPI void APIENTRY glDrawCommandsNV(GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count) { glDrawCommandsNV_ptr(primitiveMode, buffer, indirects, sizes, count); }
GLAPI void APIENTRY glDrawCommandsAddressNV(GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count) { glDrawCommandsAddressNV_ptr(primitiveMode, indirects, sizes, count); }
GLAPI void APIENTRY glDrawCommandsStatesNV(GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) { glDrawCommandsStatesNV_ptr(buffer, indirects, sizes, states, fbos, count); }
GLAPI void APIENTRY glDrawCommandsStatesAddressNV(const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) { glDrawCommandsStatesAddressNV_ptr(indirects, sizes, states, fbos, count); }
GLAPI void APIENTRY glCreateCommandListsNV(GLsizei n, GLuint *lists) { glCreateCommandListsNV_ptr(n, lists); }
GLAPI void APIENTRY glDeleteCommandListsNV(GLsizei n, const GLuint *lists) { glDeleteCommandListsNV_ptr(n, lists); }
GLAPI GLboolean APIENTRY glIsCommandListNV(GLuint list) { return glIsCommandListNV_ptr(list); }
GLAPI void APIENTRY glListDrawCommandsStatesClientNV(GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) { glListDrawCommandsStatesClientNV_ptr(list, segment, indirects, sizes, states, fbos, count); }
GLAPI void APIENTRY glCommandListSegmentsNV(GLuint list, GLuint segments) { glCommandListSegmentsNV_ptr(list, segments); }
GLAPI void APIENTRY glCompileCommandListNV(GLuint list) { glCompileCommandListNV_ptr(list); }
GLAPI void APIENTRY glCallCommandListNV(GLuint list) { glCallCommandListNV_ptr(list); }
GLAPI void APIENTRY glBeginConditionalRenderNV(GLuint id, GLenum mode) { glBeginConditionalRenderNV_ptr(id, mode); }
GLAPI void APIENTRY glEndConditionalRenderNV() { glEndConditionalRenderNV_ptr(); }
GLAPI void APIENTRY glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits) { glSubpixelPrecisionBiasNV_ptr(xbits, ybits); }
GLAPI void APIENTRY glConservativeRasterParameterfNV(GLenum pname, GLfloat value) { glConservativeRasterParameterfNV_ptr(pname, value); }
GLAPI void APIENTRY glConservativeRasterParameteriNV(GLenum pname, GLint param) { glConservativeRasterParameteriNV_ptr(pname, param); }
GLAPI void APIENTRY glDepthRangedNV(GLdouble zNear, GLdouble zFar) { glDepthRangedNV_ptr(zNear, zFar); }
GLAPI void APIENTRY glClearDepthdNV(GLdouble depth) { glClearDepthdNV_ptr(depth); }
GLAPI void APIENTRY glDepthBoundsdNV(GLdouble zmin, GLdouble zmax) { glDepthBoundsdNV_ptr(zmin, zmax); }
GLAPI void APIENTRY glDrawVkImageNV(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) { glDrawVkImageNV_ptr(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1); }
GLAPI GLVULKANPROCNV APIENTRY glGetVkProcAddrNV(const GLchar *name) { return glGetVkProcAddrNV_ptr(name); }
GLAPI void APIENTRY glWaitVkSemaphoreNV(GLuint64 vkSemaphore) { glWaitVkSemaphoreNV_ptr(vkSemaphore); }
GLAPI void APIENTRY glSignalVkSemaphoreNV(GLuint64 vkSemaphore) { glSignalVkSemaphoreNV_ptr(vkSemaphore); }
GLAPI void APIENTRY glSignalVkFenceNV(GLuint64 vkFence) { glSignalVkFenceNV_ptr(vkFence); }
GLAPI void APIENTRY glFragmentCoverageColorNV(GLuint color) { glFragmentCoverageColorNV_ptr(color); }
GLAPI void APIENTRY glCoverageModulationTableNV(GLsizei n, const GLfloat *v) { glCoverageModulationTableNV_ptr(n, v); }
GLAPI void APIENTRY glGetCoverageModulationTableNV(GLsizei bufSize, GLfloat *v) { glGetCoverageModulationTableNV_ptr(bufSize, v); }
GLAPI void APIENTRY glCoverageModulationNV(GLenum components) { glCoverageModulationNV_ptr(components); }
GLAPI void APIENTRY glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) { glRenderbufferStorageMultisampleCoverageNV_ptr(target, coverageSamples, colorSamples, internalformat, width, height); }
GLAPI void APIENTRY glUniform1i64NV(GLint location, GLint64EXT x) { glUniform1i64NV_ptr(location, x); }
GLAPI void APIENTRY glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y) { glUniform2i64NV_ptr(location, x, y); }
GLAPI void APIENTRY glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) { glUniform3i64NV_ptr(location, x, y, z); }
GLAPI void APIENTRY glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) { glUniform4i64NV_ptr(location, x, y, z, w); }
GLAPI void APIENTRY glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT *value) { glUniform1i64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT *value) { glUniform2i64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT *value) { glUniform3i64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT *value) { glUniform4i64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glUniform1ui64NV(GLint location, GLuint64EXT x) { glUniform1ui64NV_ptr(location, x); }
GLAPI void APIENTRY glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y) { glUniform2ui64NV_ptr(location, x, y); }
GLAPI void APIENTRY glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) { glUniform3ui64NV_ptr(location, x, y, z); }
GLAPI void APIENTRY glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) { glUniform4ui64NV_ptr(location, x, y, z, w); }
GLAPI void APIENTRY glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) { glUniform1ui64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) { glUniform2ui64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) { glUniform3ui64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) { glUniform4ui64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT *params) { glGetUniformi64vNV_ptr(program, location, params); }
GLAPI void APIENTRY glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x) { glProgramUniform1i64NV_ptr(program, location, x); }
GLAPI void APIENTRY glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y) { glProgramUniform2i64NV_ptr(program, location, x, y); }
GLAPI void APIENTRY glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) { glProgramUniform3i64NV_ptr(program, location, x, y, z); }
GLAPI void APIENTRY glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) { glProgramUniform4i64NV_ptr(program, location, x, y, z, w); }
GLAPI void APIENTRY glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) { glProgramUniform1i64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) { glProgramUniform2i64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) { glProgramUniform3i64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) { glProgramUniform4i64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x) { glProgramUniform1ui64NV_ptr(program, location, x); }
GLAPI void APIENTRY glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) { glProgramUniform2ui64NV_ptr(program, location, x, y); }
GLAPI void APIENTRY glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) { glProgramUniform3ui64NV_ptr(program, location, x, y, z); }
GLAPI void APIENTRY glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) { glProgramUniform4ui64NV_ptr(program, location, x, y, z, w); }
GLAPI void APIENTRY glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) { glProgramUniform1ui64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) { glProgramUniform2ui64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) { glProgramUniform3ui64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) { glProgramUniform4ui64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params) { glGetInternalformatSampleivNV_ptr(target, internalformat, samples, pname, count, params); }
GLAPI void APIENTRY glGetMemoryObjectDetachedResourcesuivNV(GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint *params) { glGetMemoryObjectDetachedResourcesuivNV_ptr(memory, pname, first, count, params); }
GLAPI void APIENTRY glResetMemoryObjectParameterNV(GLuint memory, GLenum pname) { glResetMemoryObjectParameterNV_ptr(memory, pname); }
GLAPI void APIENTRY glTexAttachMemoryNV(GLenum target, GLuint memory, GLuint64 offset) { glTexAttachMemoryNV_ptr(target, memory, offset); }
GLAPI void APIENTRY glBufferAttachMemoryNV(GLenum target, GLuint memory, GLuint64 offset) { glBufferAttachMemoryNV_ptr(target, memory, offset); }
GLAPI void APIENTRY glTextureAttachMemoryNV(GLuint texture, GLuint memory, GLuint64 offset) { glTextureAttachMemoryNV_ptr(texture, memory, offset); }
GLAPI void APIENTRY glNamedBufferAttachMemoryNV(GLuint buffer, GLuint memory, GLuint64 offset) { glNamedBufferAttachMemoryNV_ptr(buffer, memory, offset); }
GLAPI void APIENTRY glBufferPageCommitmentMemNV(GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit) { glBufferPageCommitmentMemNV_ptr(target, offset, size, memory, memOffset, commit); }
GLAPI void APIENTRY glTexPageCommitmentMemNV(GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit) { glTexPageCommitmentMemNV_ptr(target, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit); }
GLAPI void APIENTRY glNamedBufferPageCommitmentMemNV(GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit) { glNamedBufferPageCommitmentMemNV_ptr(buffer, offset, size, memory, memOffset, commit); }
GLAPI void APIENTRY glTexturePageCommitmentMemNV(GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit) { glTexturePageCommitmentMemNV_ptr(texture, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit); }
GLAPI void APIENTRY glDrawMeshTasksNV(GLuint first, GLuint count) { glDrawMeshTasksNV_ptr(first, count); }
GLAPI void APIENTRY glDrawMeshTasksIndirectNV(GLintptr indirect) { glDrawMeshTasksIndirectNV_ptr(indirect); }
GLAPI void APIENTRY glMultiDrawMeshTasksIndirectNV(GLintptr indirect, GLsizei drawcount, GLsizei stride) { glMultiDrawMeshTasksIndirectNV_ptr(indirect, drawcount, stride); }
GLAPI void APIENTRY glMultiDrawMeshTasksIndirectCountNV(GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) { glMultiDrawMeshTasksIndirectCountNV_ptr(indirect, drawcount, maxdrawcount, stride); }
GLAPI GLuint APIENTRY glGenPathsNV(GLsizei range) { return glGenPathsNV_ptr(range); }
GLAPI void APIENTRY glDeletePathsNV(GLuint path, GLsizei range) { glDeletePathsNV_ptr(path, range); }
GLAPI GLboolean APIENTRY glIsPathNV(GLuint path) { return glIsPathNV_ptr(path); }
GLAPI void APIENTRY glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) { glPathCommandsNV_ptr(path, numCommands, commands, numCoords, coordType, coords); }
GLAPI void APIENTRY glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void *coords) { glPathCoordsNV_ptr(path, numCoords, coordType, coords); }
GLAPI void APIENTRY glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) { glPathSubCommandsNV_ptr(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords); }
GLAPI void APIENTRY glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords) { glPathSubCoordsNV_ptr(path, coordStart, numCoords, coordType, coords); }
GLAPI void APIENTRY glPathStringNV(GLuint path, GLenum format, GLsizei length, const void *pathString) { glPathStringNV_ptr(path, format, length, pathString); }
GLAPI void APIENTRY glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) { glPathGlyphsNV_ptr(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale); }
GLAPI void APIENTRY glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) { glPathGlyphRangeNV_ptr(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale); }
GLAPI void APIENTRY glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights) { glWeightPathsNV_ptr(resultPath, numPaths, paths, weights); }
GLAPI void APIENTRY glCopyPathNV(GLuint resultPath, GLuint srcPath) { glCopyPathNV_ptr(resultPath, srcPath); }
GLAPI void APIENTRY glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) { glInterpolatePathsNV_ptr(resultPath, pathA, pathB, weight); }
GLAPI void APIENTRY glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues) { glTransformPathNV_ptr(resultPath, srcPath, transformType, transformValues); }
GLAPI void APIENTRY glPathParameterivNV(GLuint path, GLenum pname, const GLint *value) { glPathParameterivNV_ptr(path, pname, value); }
GLAPI void APIENTRY glPathParameteriNV(GLuint path, GLenum pname, GLint value) { glPathParameteriNV_ptr(path, pname, value); }
GLAPI void APIENTRY glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat *value) { glPathParameterfvNV_ptr(path, pname, value); }
GLAPI void APIENTRY glPathParameterfNV(GLuint path, GLenum pname, GLfloat value) { glPathParameterfNV_ptr(path, pname, value); }
GLAPI void APIENTRY glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat *dashArray) { glPathDashArrayNV_ptr(path, dashCount, dashArray); }
GLAPI void APIENTRY glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask) { glPathStencilFuncNV_ptr(func, ref, mask); }
GLAPI void APIENTRY glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units) { glPathStencilDepthOffsetNV_ptr(factor, units); }
GLAPI void APIENTRY glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask) { glStencilFillPathNV_ptr(path, fillMode, mask); }
GLAPI void APIENTRY glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask) { glStencilStrokePathNV_ptr(path, reference, mask); }
GLAPI void APIENTRY glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues) { glStencilFillPathInstancedNV_ptr(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues); }
GLAPI void APIENTRY glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues) { glStencilStrokePathInstancedNV_ptr(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues); }
GLAPI void APIENTRY glPathCoverDepthFuncNV(GLenum func) { glPathCoverDepthFuncNV_ptr(func); }
GLAPI void APIENTRY glCoverFillPathNV(GLuint path, GLenum coverMode) { glCoverFillPathNV_ptr(path, coverMode); }
GLAPI void APIENTRY glCoverStrokePathNV(GLuint path, GLenum coverMode) { glCoverStrokePathNV_ptr(path, coverMode); }
GLAPI void APIENTRY glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) { glCoverFillPathInstancedNV_ptr(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues); }
GLAPI void APIENTRY glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) { glCoverStrokePathInstancedNV_ptr(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues); }
GLAPI void APIENTRY glGetPathParameterivNV(GLuint path, GLenum pname, GLint *value) { glGetPathParameterivNV_ptr(path, pname, value); }
GLAPI void APIENTRY glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat *value) { glGetPathParameterfvNV_ptr(path, pname, value); }
GLAPI void APIENTRY glGetPathCommandsNV(GLuint path, GLubyte *commands) { glGetPathCommandsNV_ptr(path, commands); }
GLAPI void APIENTRY glGetPathCoordsNV(GLuint path, GLfloat *coords) { glGetPathCoordsNV_ptr(path, coords); }
GLAPI void APIENTRY glGetPathDashArrayNV(GLuint path, GLfloat *dashArray) { glGetPathDashArrayNV_ptr(path, dashArray); }
GLAPI void APIENTRY glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics) { glGetPathMetricsNV_ptr(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics); }
GLAPI void APIENTRY glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics) { glGetPathMetricRangeNV_ptr(metricQueryMask, firstPathName, numPaths, stride, metrics); }
GLAPI void APIENTRY glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing) { glGetPathSpacingNV_ptr(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing); }
GLAPI GLboolean APIENTRY glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y) { return glIsPointInFillPathNV_ptr(path, mask, x, y); }
GLAPI GLboolean APIENTRY glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y) { return glIsPointInStrokePathNV_ptr(path, x, y); }
GLAPI GLfloat APIENTRY glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments) { return glGetPathLengthNV_ptr(path, startSegment, numSegments); }
GLAPI GLboolean APIENTRY glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY) { return glPointAlongPathNV_ptr(path, startSegment, numSegments, distance, x, y, tangentX, tangentY); }
GLAPI void APIENTRY glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat *m) { glMatrixLoad3x2fNV_ptr(matrixMode, m); }
GLAPI void APIENTRY glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat *m) { glMatrixLoad3x3fNV_ptr(matrixMode, m); }
GLAPI void APIENTRY glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat *m) { glMatrixLoadTranspose3x3fNV_ptr(matrixMode, m); }
GLAPI void APIENTRY glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat *m) { glMatrixMult3x2fNV_ptr(matrixMode, m); }
GLAPI void APIENTRY glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat *m) { glMatrixMult3x3fNV_ptr(matrixMode, m); }
GLAPI void APIENTRY glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat *m) { glMatrixMultTranspose3x3fNV_ptr(matrixMode, m); }
GLAPI void APIENTRY glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode) { glStencilThenCoverFillPathNV_ptr(path, fillMode, mask, coverMode); }
GLAPI void APIENTRY glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode) { glStencilThenCoverStrokePathNV_ptr(path, reference, mask, coverMode); }
GLAPI void APIENTRY glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) { glStencilThenCoverFillPathInstancedNV_ptr(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues); }
GLAPI void APIENTRY glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) { glStencilThenCoverStrokePathInstancedNV_ptr(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues); }
GLAPI GLenum APIENTRY glPathGlyphIndexRangeNV(GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint *baseAndCount) { return glPathGlyphIndexRangeNV_ptr(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount); }
GLAPI GLenum APIENTRY glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) { return glPathGlyphIndexArrayNV_ptr(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale); }
GLAPI GLenum APIENTRY glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) { return glPathMemoryGlyphIndexArrayNV_ptr(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale); }
GLAPI void APIENTRY glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs) { glProgramPathFragmentInputGenNV_ptr(program, location, genMode, components, coeffs); }
GLAPI void APIENTRY glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLfloat *params) { glGetProgramResourcefvNV_ptr(program, programInterface, index, propCount, props, count, length, params); }
GLAPI void APIENTRY glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat *v) { glFramebufferSampleLocationsfvNV_ptr(target, start, count, v); }
GLAPI void APIENTRY glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) { glNamedFramebufferSampleLocationsfvNV_ptr(framebuffer, start, count, v); }
GLAPI void APIENTRY glResolveDepthValuesNV() { glResolveDepthValuesNV_ptr(); }
GLAPI void APIENTRY glScissorExclusiveNV(GLint x, GLint y, GLsizei width, GLsizei height) { glScissorExclusiveNV_ptr(x, y, width, height); }
GLAPI void APIENTRY glScissorExclusiveArrayvNV(GLuint first, GLsizei count, const GLint *v) { glScissorExclusiveArrayvNV_ptr(first, count, v); }
GLAPI void APIENTRY glMakeBufferResidentNV(GLenum target, GLenum access) { glMakeBufferResidentNV_ptr(target, access); }
GLAPI void APIENTRY glMakeBufferNonResidentNV(GLenum target) { glMakeBufferNonResidentNV_ptr(target); }
GLAPI GLboolean APIENTRY glIsBufferResidentNV(GLenum target) { return glIsBufferResidentNV_ptr(target); }
GLAPI void APIENTRY glMakeNamedBufferResidentNV(GLuint buffer, GLenum access) { glMakeNamedBufferResidentNV_ptr(buffer, access); }
GLAPI void APIENTRY glMakeNamedBufferNonResidentNV(GLuint buffer) { glMakeNamedBufferNonResidentNV_ptr(buffer); }
GLAPI GLboolean APIENTRY glIsNamedBufferResidentNV(GLuint buffer) { return glIsNamedBufferResidentNV_ptr(buffer); }
GLAPI void APIENTRY glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT *params) { glGetBufferParameterui64vNV_ptr(target, pname, params); }
GLAPI void APIENTRY glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT *params) { glGetNamedBufferParameterui64vNV_ptr(buffer, pname, params); }
GLAPI void APIENTRY glGetIntegerui64vNV(GLenum value, GLuint64EXT *result) { glGetIntegerui64vNV_ptr(value, result); }
GLAPI void APIENTRY glUniformui64NV(GLint location, GLuint64EXT value) { glUniformui64NV_ptr(location, value); }
GLAPI void APIENTRY glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) { glUniformui64vNV_ptr(location, count, value); }
GLAPI void APIENTRY glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT *params) { glGetUniformui64vNV_ptr(program, location, params); }
GLAPI void APIENTRY glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value) { glProgramUniformui64NV_ptr(program, location, value); }
GLAPI void APIENTRY glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) { glProgramUniformui64vNV_ptr(program, location, count, value); }
GLAPI void APIENTRY glBindShadingRateImageNV(GLuint texture) { glBindShadingRateImageNV_ptr(texture); }
GLAPI void APIENTRY glGetShadingRateImagePaletteNV(GLuint viewport, GLuint entry, GLenum *rate) { glGetShadingRateImagePaletteNV_ptr(viewport, entry, rate); }
GLAPI void APIENTRY glGetShadingRateSampleLocationivNV(GLenum rate, GLuint samples, GLuint index, GLint *location) { glGetShadingRateSampleLocationivNV_ptr(rate, samples, index, location); }
GLAPI void APIENTRY glShadingRateImageBarrierNV(GLboolean synchronize) { glShadingRateImageBarrierNV_ptr(synchronize); }
GLAPI void APIENTRY glShadingRateImagePaletteNV(GLuint viewport, GLuint first, GLsizei count, const GLenum *rates) { glShadingRateImagePaletteNV_ptr(viewport, first, count, rates); }
GLAPI void APIENTRY glShadingRateSampleOrderNV(GLenum order) { glShadingRateSampleOrderNV_ptr(order); }
GLAPI void APIENTRY glShadingRateSampleOrderCustomNV(GLenum rate, GLuint samples, const GLint *locations) { glShadingRateSampleOrderCustomNV_ptr(rate, samples, locations); }
GLAPI void APIENTRY glTextureBarrierNV() { glTextureBarrierNV_ptr(); }
GLAPI void APIENTRY glVertexAttribL1i64NV(GLuint index, GLint64EXT x) { glVertexAttribL1i64NV_ptr(index, x); }
GLAPI void APIENTRY glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y) { glVertexAttribL2i64NV_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z) { glVertexAttribL3i64NV_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) { glVertexAttribL4i64NV_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttribL1i64vNV(GLuint index, const GLint64EXT *v) { glVertexAttribL1i64vNV_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL2i64vNV(GLuint index, const GLint64EXT *v) { glVertexAttribL2i64vNV_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL3i64vNV(GLuint index, const GLint64EXT *v) { glVertexAttribL3i64vNV_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL4i64vNV(GLuint index, const GLint64EXT *v) { glVertexAttribL4i64vNV_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x) { glVertexAttribL1ui64NV_ptr(index, x); }
GLAPI void APIENTRY glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y) { glVertexAttribL2ui64NV_ptr(index, x, y); }
GLAPI void APIENTRY glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) { glVertexAttribL3ui64NV_ptr(index, x, y, z); }
GLAPI void APIENTRY glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) { glVertexAttribL4ui64NV_ptr(index, x, y, z, w); }
GLAPI void APIENTRY glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT *v) { glVertexAttribL1ui64vNV_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT *v) { glVertexAttribL2ui64vNV_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT *v) { glVertexAttribL3ui64vNV_ptr(index, v); }
GLAPI void APIENTRY glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT *v) { glVertexAttribL4ui64vNV_ptr(index, v); }
GLAPI void APIENTRY glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT *params) { glGetVertexAttribLi64vNV_ptr(index, pname, params); }
GLAPI void APIENTRY glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT *params) { glGetVertexAttribLui64vNV_ptr(index, pname, params); }
GLAPI void APIENTRY glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride) { glVertexAttribLFormatNV_ptr(index, size, type, stride); }
GLAPI void APIENTRY glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length) { glBufferAddressRangeNV_ptr(pname, index, address, length); }
GLAPI void APIENTRY glVertexFormatNV(GLint size, GLenum type, GLsizei stride) { glVertexFormatNV_ptr(size, type, stride); }
GLAPI void APIENTRY glNormalFormatNV(GLenum type, GLsizei stride) { glNormalFormatNV_ptr(type, stride); }
GLAPI void APIENTRY glColorFormatNV(GLint size, GLenum type, GLsizei stride) { glColorFormatNV_ptr(size, type, stride); }
GLAPI void APIENTRY glIndexFormatNV(GLenum type, GLsizei stride) { glIndexFormatNV_ptr(type, stride); }
GLAPI void APIENTRY glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride) { glTexCoordFormatNV_ptr(size, type, stride); }
GLAPI void APIENTRY glEdgeFlagFormatNV(GLsizei stride) { glEdgeFlagFormatNV_ptr(stride); }
GLAPI void APIENTRY glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride) { glSecondaryColorFormatNV_ptr(size, type, stride); }
GLAPI void APIENTRY glFogCoordFormatNV(GLenum type, GLsizei stride) { glFogCoordFormatNV_ptr(type, stride); }
GLAPI void APIENTRY glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride) { glVertexAttribFormatNV_ptr(index, size, type, normalized, stride); }
GLAPI void APIENTRY glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride) { glVertexAttribIFormatNV_ptr(index, size, type, stride); }
GLAPI void APIENTRY glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT *result) { glGetIntegerui64i_vNV_ptr(value, index, result); }
GLAPI void APIENTRY glViewportSwizzleNV(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew) { glViewportSwizzleNV_ptr(index, swizzlex, swizzley, swizzlez, swizzlew); }
GLAPI void APIENTRY glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) { glFramebufferTextureMultiviewOVR_ptr(target, attachment, texture, level, baseViewIndex, numViews); }
GLAPI void APIENTRY glNamedFramebufferTextureMultiviewOVR(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) { glNamedFramebufferTextureMultiviewOVR_ptr(framebuffer, attachment, texture, level, baseViewIndex, numViews); }
