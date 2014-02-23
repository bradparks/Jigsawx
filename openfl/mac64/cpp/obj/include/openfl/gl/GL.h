#ifndef INCLUDED_openfl_gl_GL
#define INCLUDED_openfl_gl_GL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,gl,GL)
HX_DECLARE_CLASS2(openfl,gl,GLBuffer)
HX_DECLARE_CLASS2(openfl,gl,GLFramebuffer)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLProgram)
HX_DECLARE_CLASS2(openfl,gl,GLRenderbuffer)
HX_DECLARE_CLASS2(openfl,gl,GLShader)
HX_DECLARE_CLASS2(openfl,gl,GLTexture)
HX_DECLARE_CLASS2(openfl,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,utils,Float32Array)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace openfl{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES  GL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GL_obj OBJ_;
		GL_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GL"); }

		static int drawingBufferHeight;
		static int drawingBufferWidth;
		static int version;
		static Void activeTexture( int texture);
		static Dynamic activeTexture_dyn();

		static Void attachShader( ::openfl::gl::GLProgram program,::openfl::gl::GLShader shader);
		static Dynamic attachShader_dyn();

		static Void bindAttribLocation( ::openfl::gl::GLProgram program,int index,::String name);
		static Dynamic bindAttribLocation_dyn();

		static Void bindBitmapDataTexture( ::flash::display::BitmapData texture);
		static Dynamic bindBitmapDataTexture_dyn();

		static Void bindBuffer( int target,::openfl::gl::GLBuffer buffer);
		static Dynamic bindBuffer_dyn();

		static Void bindFramebuffer( int target,::openfl::gl::GLFramebuffer framebuffer);
		static Dynamic bindFramebuffer_dyn();

		static Void bindRenderbuffer( int target,::openfl::gl::GLRenderbuffer renderbuffer);
		static Dynamic bindRenderbuffer_dyn();

		static Void bindTexture( int target,::openfl::gl::GLTexture texture);
		static Dynamic bindTexture_dyn();

		static Void blendColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic blendColor_dyn();

		static Void blendEquation( int mode);
		static Dynamic blendEquation_dyn();

		static Void blendEquationSeparate( int modeRGB,int modeAlpha);
		static Dynamic blendEquationSeparate_dyn();

		static Void blendFunc( int sfactor,int dfactor);
		static Dynamic blendFunc_dyn();

		static Void blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		static Dynamic blendFuncSeparate_dyn();

		static Void bufferData( int target,::openfl::utils::IMemoryRange data,int usage);
		static Dynamic bufferData_dyn();

		static Void bufferSubData( int target,int offset,::openfl::utils::IMemoryRange data);
		static Dynamic bufferSubData_dyn();

		static int checkFramebufferStatus( int target);
		static Dynamic checkFramebufferStatus_dyn();

		static Void clear( int mask);
		static Dynamic clear_dyn();

		static Void clearColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic clearColor_dyn();

		static Void clearDepth( Float depth);
		static Dynamic clearDepth_dyn();

		static Void clearStencil( int s);
		static Dynamic clearStencil_dyn();

		static Void colorMask( bool red,bool green,bool blue,bool alpha);
		static Dynamic colorMask_dyn();

		static Void compileShader( ::openfl::gl::GLShader shader);
		static Dynamic compileShader_dyn();

		static Void compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::openfl::utils::IMemoryRange data);
		static Dynamic compressedTexImage2D_dyn();

		static Void compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::openfl::utils::IMemoryRange data);
		static Dynamic compressedTexSubImage2D_dyn();

		static Void copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border);
		static Dynamic copyTexImage2D_dyn();

		static Void copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		static Dynamic copyTexSubImage2D_dyn();

		static ::openfl::gl::GLBuffer createBuffer( );
		static Dynamic createBuffer_dyn();

		static ::openfl::gl::GLFramebuffer createFramebuffer( );
		static Dynamic createFramebuffer_dyn();

		static ::openfl::gl::GLProgram createProgram( );
		static Dynamic createProgram_dyn();

		static ::openfl::gl::GLRenderbuffer createRenderbuffer( );
		static Dynamic createRenderbuffer_dyn();

		static ::openfl::gl::GLShader createShader( int type);
		static Dynamic createShader_dyn();

		static ::openfl::gl::GLTexture createTexture( );
		static Dynamic createTexture_dyn();

		static Void cullFace( int mode);
		static Dynamic cullFace_dyn();

		static Void deleteBuffer( ::openfl::gl::GLBuffer buffer);
		static Dynamic deleteBuffer_dyn();

		static Void deleteFramebuffer( ::openfl::gl::GLFramebuffer framebuffer);
		static Dynamic deleteFramebuffer_dyn();

		static Void deleteProgram( ::openfl::gl::GLProgram program);
		static Dynamic deleteProgram_dyn();

		static Void deleteRenderbuffer( ::openfl::gl::GLRenderbuffer renderbuffer);
		static Dynamic deleteRenderbuffer_dyn();

		static Void deleteShader( ::openfl::gl::GLShader shader);
		static Dynamic deleteShader_dyn();

		static Void deleteTexture( ::openfl::gl::GLTexture texture);
		static Dynamic deleteTexture_dyn();

		static Void depthFunc( int func);
		static Dynamic depthFunc_dyn();

		static Void depthMask( bool flag);
		static Dynamic depthMask_dyn();

		static Void depthRange( Float zNear,Float zFar);
		static Dynamic depthRange_dyn();

		static Void detachShader( ::openfl::gl::GLProgram program,::openfl::gl::GLShader shader);
		static Dynamic detachShader_dyn();

		static Void disable( int cap);
		static Dynamic disable_dyn();

		static Void disableVertexAttribArray( int index);
		static Dynamic disableVertexAttribArray_dyn();

		static Void drawArrays( int mode,int first,int count);
		static Dynamic drawArrays_dyn();

		static Void drawElements( int mode,int count,int type,int offset);
		static Dynamic drawElements_dyn();

		static Void enable( int cap);
		static Dynamic enable_dyn();

		static Void enableVertexAttribArray( int index);
		static Dynamic enableVertexAttribArray_dyn();

		static Void finish( );
		static Dynamic finish_dyn();

		static Void flush( );
		static Dynamic flush_dyn();

		static Void framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::openfl::gl::GLRenderbuffer renderbuffer);
		static Dynamic framebufferRenderbuffer_dyn();

		static Void framebufferTexture2D( int target,int attachment,int textarget,::openfl::gl::GLTexture texture,int level);
		static Dynamic framebufferTexture2D_dyn();

		static Void frontFace( int mode);
		static Dynamic frontFace_dyn();

		static Void generateMipmap( int target);
		static Dynamic generateMipmap_dyn();

		static Dynamic getActiveAttrib( ::openfl::gl::GLProgram program,int index);
		static Dynamic getActiveAttrib_dyn();

		static Dynamic getActiveUniform( ::openfl::gl::GLProgram program,int index);
		static Dynamic getActiveUniform_dyn();

		static Array< ::Dynamic > getAttachedShaders( ::openfl::gl::GLProgram program);
		static Dynamic getAttachedShaders_dyn();

		static int getAttribLocation( ::openfl::gl::GLProgram program,::String name);
		static Dynamic getAttribLocation_dyn();

		static Dynamic getBufferParameter( int target,int pname);
		static Dynamic getBufferParameter_dyn();

		static Dynamic getContextAttributes( );
		static Dynamic getContextAttributes_dyn();

		static int getError( );
		static Dynamic getError_dyn();

		static Dynamic getExtension( ::String name);
		static Dynamic getExtension_dyn();

		static Dynamic getFramebufferAttachmentParameter( int target,int attachment,int pname);
		static Dynamic getFramebufferAttachmentParameter_dyn();

		static Dynamic getParameter( int pname);
		static Dynamic getParameter_dyn();

		static ::String getProgramInfoLog( ::openfl::gl::GLProgram program);
		static Dynamic getProgramInfoLog_dyn();

		static int getProgramParameter( ::openfl::gl::GLProgram program,int pname);
		static Dynamic getProgramParameter_dyn();

		static Dynamic getRenderbufferParameter( int target,int pname);
		static Dynamic getRenderbufferParameter_dyn();

		static ::String getShaderInfoLog( ::openfl::gl::GLShader shader);
		static Dynamic getShaderInfoLog_dyn();

		static int getShaderParameter( ::openfl::gl::GLShader shader,int pname);
		static Dynamic getShaderParameter_dyn();

		static Dynamic getShaderPrecisionFormat( int shadertype,int precisiontype);
		static Dynamic getShaderPrecisionFormat_dyn();

		static ::String getShaderSource( ::openfl::gl::GLShader shader);
		static Dynamic getShaderSource_dyn();

		static Array< ::String > getSupportedExtensions( );
		static Dynamic getSupportedExtensions_dyn();

		static Dynamic getTexParameter( int target,int pname);
		static Dynamic getTexParameter_dyn();

		static Dynamic getUniform( ::openfl::gl::GLProgram program,Dynamic location);
		static Dynamic getUniform_dyn();

		static Dynamic getUniformLocation( ::openfl::gl::GLProgram program,::String name);
		static Dynamic getUniformLocation_dyn();

		static Dynamic getVertexAttrib( int index,int pname);
		static Dynamic getVertexAttrib_dyn();

		static int getVertexAttribOffset( int index,int pname);
		static Dynamic getVertexAttribOffset_dyn();

		static Void hint( int target,int mode);
		static Dynamic hint_dyn();

		static bool isBuffer( ::openfl::gl::GLBuffer buffer);
		static Dynamic isBuffer_dyn();

		static bool isEnabled( int cap);
		static Dynamic isEnabled_dyn();

		static bool isFramebuffer( ::openfl::gl::GLFramebuffer framebuffer);
		static Dynamic isFramebuffer_dyn();

		static bool isProgram( ::openfl::gl::GLProgram program);
		static Dynamic isProgram_dyn();

		static bool isRenderbuffer( ::openfl::gl::GLRenderbuffer renderbuffer);
		static Dynamic isRenderbuffer_dyn();

		static bool isShader( ::openfl::gl::GLShader shader);
		static Dynamic isShader_dyn();

		static bool isTexture( ::openfl::gl::GLTexture texture);
		static Dynamic isTexture_dyn();

		static Void lineWidth( Float width);
		static Dynamic lineWidth_dyn();

		static Void linkProgram( ::openfl::gl::GLProgram program);
		static Dynamic linkProgram_dyn();

		static Dynamic load( ::String inName,int inArgCount);
		static Dynamic load_dyn();

		static Void pixelStorei( int pname,int param);
		static Dynamic pixelStorei_dyn();

		static Void polygonOffset( Float factor,Float units);
		static Dynamic polygonOffset_dyn();

		static Void readPixels( int x,int y,int width,int height,int format,int type,::flash::utils::ByteArray pixels);
		static Dynamic readPixels_dyn();

		static Void renderbufferStorage( int target,int internalformat,int width,int height);
		static Dynamic renderbufferStorage_dyn();

		static Void sampleCoverage( Float value,bool invert);
		static Dynamic sampleCoverage_dyn();

		static Void scissor( int x,int y,int width,int height);
		static Dynamic scissor_dyn();

		static Void shaderSource( ::openfl::gl::GLShader shader,::String source);
		static Dynamic shaderSource_dyn();

		static Void stencilFunc( int func,int ref,int mask);
		static Dynamic stencilFunc_dyn();

		static Void stencilFuncSeparate( int face,int func,int ref,int mask);
		static Dynamic stencilFuncSeparate_dyn();

		static Void stencilMask( int mask);
		static Dynamic stencilMask_dyn();

		static Void stencilMaskSeparate( int face,int mask);
		static Dynamic stencilMaskSeparate_dyn();

		static Void stencilOp( int fail,int zfail,int zpass);
		static Dynamic stencilOp_dyn();

		static Void stencilOpSeparate( int face,int fail,int zfail,int zpass);
		static Dynamic stencilOpSeparate_dyn();

		static Void texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::openfl::utils::ArrayBufferView pixels);
		static Dynamic texImage2D_dyn();

		static Void texParameterf( int target,int pname,Float param);
		static Dynamic texParameterf_dyn();

		static Void texParameteri( int target,int pname,int param);
		static Dynamic texParameteri_dyn();

		static Void texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::openfl::utils::ArrayBufferView pixels);
		static Dynamic texSubImage2D_dyn();

		static Void uniform1f( Dynamic location,Float x);
		static Dynamic uniform1f_dyn();

		static Void uniform1fv( Dynamic location,Array< Float > x);
		static Dynamic uniform1fv_dyn();

		static Void uniform1i( Dynamic location,int x);
		static Dynamic uniform1i_dyn();

		static Void uniform1iv( Dynamic location,Array< int > v);
		static Dynamic uniform1iv_dyn();

		static Void uniform2f( Dynamic location,Float x,Float y);
		static Dynamic uniform2f_dyn();

		static Void uniform2fv( Dynamic location,Array< Float > v);
		static Dynamic uniform2fv_dyn();

		static Void uniform2i( Dynamic location,int x,int y);
		static Dynamic uniform2i_dyn();

		static Void uniform2iv( Dynamic location,Array< int > v);
		static Dynamic uniform2iv_dyn();

		static Void uniform3f( Dynamic location,Float x,Float y,Float z);
		static Dynamic uniform3f_dyn();

		static Void uniform3fv( Dynamic location,Array< Float > v);
		static Dynamic uniform3fv_dyn();

		static Void uniform3i( Dynamic location,int x,int y,int z);
		static Dynamic uniform3i_dyn();

		static Void uniform3iv( Dynamic location,Array< int > v);
		static Dynamic uniform3iv_dyn();

		static Void uniform4f( Dynamic location,Float x,Float y,Float z,Float w);
		static Dynamic uniform4f_dyn();

		static Void uniform4fv( Dynamic location,Array< Float > v);
		static Dynamic uniform4fv_dyn();

		static Void uniform4i( Dynamic location,int x,int y,int z,int w);
		static Dynamic uniform4i_dyn();

		static Void uniform4iv( Dynamic location,Array< int > v);
		static Dynamic uniform4iv_dyn();

		static Void uniformMatrix2fv( Dynamic location,bool transpose,::openfl::utils::Float32Array v);
		static Dynamic uniformMatrix2fv_dyn();

		static Void uniformMatrix3fv( Dynamic location,bool transpose,::openfl::utils::Float32Array v);
		static Dynamic uniformMatrix3fv_dyn();

		static Void uniformMatrix4fv( Dynamic location,bool transpose,::openfl::utils::Float32Array v);
		static Dynamic uniformMatrix4fv_dyn();

		static Void uniformMatrix3D( Dynamic location,bool transpose,::flash::geom::Matrix3D matrix);
		static Dynamic uniformMatrix3D_dyn();

		static Void useProgram( ::openfl::gl::GLProgram program);
		static Dynamic useProgram_dyn();

		static Void validateProgram( ::openfl::gl::GLProgram program);
		static Dynamic validateProgram_dyn();

		static Void vertexAttrib1f( int indx,Float x);
		static Dynamic vertexAttrib1f_dyn();

		static Void vertexAttrib1fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib1fv_dyn();

		static Void vertexAttrib2f( int indx,Float x,Float y);
		static Dynamic vertexAttrib2f_dyn();

		static Void vertexAttrib2fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib2fv_dyn();

		static Void vertexAttrib3f( int indx,Float x,Float y,Float z);
		static Dynamic vertexAttrib3f_dyn();

		static Void vertexAttrib3fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib3fv_dyn();

		static Void vertexAttrib4f( int indx,Float x,Float y,Float z,Float w);
		static Dynamic vertexAttrib4f_dyn();

		static Void vertexAttrib4fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib4fv_dyn();

		static Void vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset);
		static Dynamic vertexAttribPointer_dyn();

		static Void viewport( int x,int y,int width,int height);
		static Dynamic viewport_dyn();

		static int get_drawingBufferHeight( );
		static Dynamic get_drawingBufferHeight_dyn();

		static int get_drawingBufferWidth( );
		static Dynamic get_drawingBufferWidth_dyn();

		static int get_version( );
		static Dynamic get_version_dyn();

		static Dynamic lime_gl_active_texture;
		static Dynamic &lime_gl_active_texture_dyn() { return lime_gl_active_texture;}
		static Dynamic lime_gl_attach_shader;
		static Dynamic &lime_gl_attach_shader_dyn() { return lime_gl_attach_shader;}
		static Dynamic lime_gl_bind_attrib_location;
		static Dynamic &lime_gl_bind_attrib_location_dyn() { return lime_gl_bind_attrib_location;}
		static Dynamic lime_gl_bind_bitmap_data_texture;
		static Dynamic &lime_gl_bind_bitmap_data_texture_dyn() { return lime_gl_bind_bitmap_data_texture;}
		static Dynamic lime_gl_bind_buffer;
		static Dynamic &lime_gl_bind_buffer_dyn() { return lime_gl_bind_buffer;}
		static Dynamic lime_gl_bind_framebuffer;
		static Dynamic &lime_gl_bind_framebuffer_dyn() { return lime_gl_bind_framebuffer;}
		static Dynamic lime_gl_bind_renderbuffer;
		static Dynamic &lime_gl_bind_renderbuffer_dyn() { return lime_gl_bind_renderbuffer;}
		static Dynamic lime_gl_bind_texture;
		static Dynamic &lime_gl_bind_texture_dyn() { return lime_gl_bind_texture;}
		static Dynamic lime_gl_blend_color;
		static Dynamic &lime_gl_blend_color_dyn() { return lime_gl_blend_color;}
		static Dynamic lime_gl_blend_equation;
		static Dynamic &lime_gl_blend_equation_dyn() { return lime_gl_blend_equation;}
		static Dynamic lime_gl_blend_equation_separate;
		static Dynamic &lime_gl_blend_equation_separate_dyn() { return lime_gl_blend_equation_separate;}
		static Dynamic lime_gl_blend_func;
		static Dynamic &lime_gl_blend_func_dyn() { return lime_gl_blend_func;}
		static Dynamic lime_gl_blend_func_separate;
		static Dynamic &lime_gl_blend_func_separate_dyn() { return lime_gl_blend_func_separate;}
		static Dynamic lime_gl_buffer_data;
		static Dynamic &lime_gl_buffer_data_dyn() { return lime_gl_buffer_data;}
		static Dynamic lime_gl_buffer_sub_data;
		static Dynamic &lime_gl_buffer_sub_data_dyn() { return lime_gl_buffer_sub_data;}
		static Dynamic lime_gl_check_framebuffer_status;
		static Dynamic &lime_gl_check_framebuffer_status_dyn() { return lime_gl_check_framebuffer_status;}
		static Dynamic lime_gl_clear;
		static Dynamic &lime_gl_clear_dyn() { return lime_gl_clear;}
		static Dynamic lime_gl_clear_color;
		static Dynamic &lime_gl_clear_color_dyn() { return lime_gl_clear_color;}
		static Dynamic lime_gl_clear_depth;
		static Dynamic &lime_gl_clear_depth_dyn() { return lime_gl_clear_depth;}
		static Dynamic lime_gl_clear_stencil;
		static Dynamic &lime_gl_clear_stencil_dyn() { return lime_gl_clear_stencil;}
		static Dynamic lime_gl_color_mask;
		static Dynamic &lime_gl_color_mask_dyn() { return lime_gl_color_mask;}
		static Dynamic lime_gl_compile_shader;
		static Dynamic &lime_gl_compile_shader_dyn() { return lime_gl_compile_shader;}
		static Dynamic lime_gl_compressed_tex_image_2d;
		static Dynamic &lime_gl_compressed_tex_image_2d_dyn() { return lime_gl_compressed_tex_image_2d;}
		static Dynamic lime_gl_compressed_tex_sub_image_2d;
		static Dynamic &lime_gl_compressed_tex_sub_image_2d_dyn() { return lime_gl_compressed_tex_sub_image_2d;}
		static Dynamic lime_gl_copy_tex_image_2d;
		static Dynamic &lime_gl_copy_tex_image_2d_dyn() { return lime_gl_copy_tex_image_2d;}
		static Dynamic lime_gl_copy_tex_sub_image_2d;
		static Dynamic &lime_gl_copy_tex_sub_image_2d_dyn() { return lime_gl_copy_tex_sub_image_2d;}
		static Dynamic lime_gl_create_buffer;
		static Dynamic &lime_gl_create_buffer_dyn() { return lime_gl_create_buffer;}
		static Dynamic lime_gl_create_framebuffer;
		static Dynamic &lime_gl_create_framebuffer_dyn() { return lime_gl_create_framebuffer;}
		static Dynamic lime_gl_create_program;
		static Dynamic &lime_gl_create_program_dyn() { return lime_gl_create_program;}
		static Dynamic lime_gl_create_render_buffer;
		static Dynamic &lime_gl_create_render_buffer_dyn() { return lime_gl_create_render_buffer;}
		static Dynamic lime_gl_create_shader;
		static Dynamic &lime_gl_create_shader_dyn() { return lime_gl_create_shader;}
		static Dynamic lime_gl_create_texture;
		static Dynamic &lime_gl_create_texture_dyn() { return lime_gl_create_texture;}
		static Dynamic lime_gl_delete_buffer;
		static Dynamic &lime_gl_delete_buffer_dyn() { return lime_gl_delete_buffer;}
		static Dynamic lime_gl_delete_program;
		static Dynamic &lime_gl_delete_program_dyn() { return lime_gl_delete_program;}
		static Dynamic lime_gl_delete_shader;
		static Dynamic &lime_gl_delete_shader_dyn() { return lime_gl_delete_shader;}
		static Dynamic lime_gl_delete_texture;
		static Dynamic &lime_gl_delete_texture_dyn() { return lime_gl_delete_texture;}
		static Dynamic lime_gl_depth_func;
		static Dynamic &lime_gl_depth_func_dyn() { return lime_gl_depth_func;}
		static Dynamic lime_gl_depth_mask;
		static Dynamic &lime_gl_depth_mask_dyn() { return lime_gl_depth_mask;}
		static Dynamic lime_gl_depth_range;
		static Dynamic &lime_gl_depth_range_dyn() { return lime_gl_depth_range;}
		static Dynamic lime_gl_detach_shader;
		static Dynamic &lime_gl_detach_shader_dyn() { return lime_gl_detach_shader;}
		static Dynamic lime_gl_disable;
		static Dynamic &lime_gl_disable_dyn() { return lime_gl_disable;}
		static Dynamic lime_gl_disable_vertex_attrib_array;
		static Dynamic &lime_gl_disable_vertex_attrib_array_dyn() { return lime_gl_disable_vertex_attrib_array;}
		static Dynamic lime_gl_draw_arrays;
		static Dynamic &lime_gl_draw_arrays_dyn() { return lime_gl_draw_arrays;}
		static Dynamic lime_gl_draw_elements;
		static Dynamic &lime_gl_draw_elements_dyn() { return lime_gl_draw_elements;}
		static Dynamic lime_gl_enable;
		static Dynamic &lime_gl_enable_dyn() { return lime_gl_enable;}
		static Dynamic lime_gl_enable_vertex_attrib_array;
		static Dynamic &lime_gl_enable_vertex_attrib_array_dyn() { return lime_gl_enable_vertex_attrib_array;}
		static Dynamic lime_gl_finish;
		static Dynamic &lime_gl_finish_dyn() { return lime_gl_finish;}
		static Dynamic lime_gl_flush;
		static Dynamic &lime_gl_flush_dyn() { return lime_gl_flush;}
		static Dynamic lime_gl_framebuffer_renderbuffer;
		static Dynamic &lime_gl_framebuffer_renderbuffer_dyn() { return lime_gl_framebuffer_renderbuffer;}
		static Dynamic lime_gl_framebuffer_texture2D;
		static Dynamic &lime_gl_framebuffer_texture2D_dyn() { return lime_gl_framebuffer_texture2D;}
		static Dynamic lime_gl_front_face;
		static Dynamic &lime_gl_front_face_dyn() { return lime_gl_front_face;}
		static Dynamic lime_gl_generate_mipmap;
		static Dynamic &lime_gl_generate_mipmap_dyn() { return lime_gl_generate_mipmap;}
		static Dynamic lime_gl_get_active_attrib;
		static Dynamic &lime_gl_get_active_attrib_dyn() { return lime_gl_get_active_attrib;}
		static Dynamic lime_gl_get_active_uniform;
		static Dynamic &lime_gl_get_active_uniform_dyn() { return lime_gl_get_active_uniform;}
		static Dynamic lime_gl_get_attrib_location;
		static Dynamic &lime_gl_get_attrib_location_dyn() { return lime_gl_get_attrib_location;}
		static Dynamic lime_gl_get_buffer_paramerter;
		static Dynamic &lime_gl_get_buffer_paramerter_dyn() { return lime_gl_get_buffer_paramerter;}
		static Dynamic lime_gl_get_context_attributes;
		static Dynamic &lime_gl_get_context_attributes_dyn() { return lime_gl_get_context_attributes;}
		static Dynamic lime_gl_get_error;
		static Dynamic &lime_gl_get_error_dyn() { return lime_gl_get_error;}
		static Dynamic lime_gl_get_framebuffer_attachment_parameter;
		static Dynamic &lime_gl_get_framebuffer_attachment_parameter_dyn() { return lime_gl_get_framebuffer_attachment_parameter;}
		static Dynamic lime_gl_get_parameter;
		static Dynamic &lime_gl_get_parameter_dyn() { return lime_gl_get_parameter;}
		static Dynamic lime_gl_get_program_info_log;
		static Dynamic &lime_gl_get_program_info_log_dyn() { return lime_gl_get_program_info_log;}
		static Dynamic lime_gl_get_program_parameter;
		static Dynamic &lime_gl_get_program_parameter_dyn() { return lime_gl_get_program_parameter;}
		static Dynamic lime_gl_get_render_buffer_parameter;
		static Dynamic &lime_gl_get_render_buffer_parameter_dyn() { return lime_gl_get_render_buffer_parameter;}
		static Dynamic lime_gl_get_shader_info_log;
		static Dynamic &lime_gl_get_shader_info_log_dyn() { return lime_gl_get_shader_info_log;}
		static Dynamic lime_gl_get_shader_parameter;
		static Dynamic &lime_gl_get_shader_parameter_dyn() { return lime_gl_get_shader_parameter;}
		static Dynamic lime_gl_get_shader_precision_format;
		static Dynamic &lime_gl_get_shader_precision_format_dyn() { return lime_gl_get_shader_precision_format;}
		static Dynamic lime_gl_get_shader_source;
		static Dynamic &lime_gl_get_shader_source_dyn() { return lime_gl_get_shader_source;}
		static Dynamic lime_gl_get_supported_extensions;
		static Dynamic &lime_gl_get_supported_extensions_dyn() { return lime_gl_get_supported_extensions;}
		static Dynamic lime_gl_get_tex_parameter;
		static Dynamic &lime_gl_get_tex_parameter_dyn() { return lime_gl_get_tex_parameter;}
		static Dynamic lime_gl_get_uniform;
		static Dynamic &lime_gl_get_uniform_dyn() { return lime_gl_get_uniform;}
		static Dynamic lime_gl_get_uniform_location;
		static Dynamic &lime_gl_get_uniform_location_dyn() { return lime_gl_get_uniform_location;}
		static Dynamic lime_gl_get_vertex_attrib;
		static Dynamic &lime_gl_get_vertex_attrib_dyn() { return lime_gl_get_vertex_attrib;}
		static Dynamic lime_gl_get_vertex_attrib_offset;
		static Dynamic &lime_gl_get_vertex_attrib_offset_dyn() { return lime_gl_get_vertex_attrib_offset;}
		static Dynamic lime_gl_hint;
		static Dynamic &lime_gl_hint_dyn() { return lime_gl_hint;}
		static Dynamic lime_gl_is_buffer;
		static Dynamic &lime_gl_is_buffer_dyn() { return lime_gl_is_buffer;}
		static Dynamic lime_gl_is_enabled;
		static Dynamic &lime_gl_is_enabled_dyn() { return lime_gl_is_enabled;}
		static Dynamic lime_gl_is_framebuffer;
		static Dynamic &lime_gl_is_framebuffer_dyn() { return lime_gl_is_framebuffer;}
		static Dynamic lime_gl_is_program;
		static Dynamic &lime_gl_is_program_dyn() { return lime_gl_is_program;}
		static Dynamic lime_gl_is_renderbuffer;
		static Dynamic &lime_gl_is_renderbuffer_dyn() { return lime_gl_is_renderbuffer;}
		static Dynamic lime_gl_is_shader;
		static Dynamic &lime_gl_is_shader_dyn() { return lime_gl_is_shader;}
		static Dynamic lime_gl_is_texture;
		static Dynamic &lime_gl_is_texture_dyn() { return lime_gl_is_texture;}
		static Dynamic lime_gl_line_width;
		static Dynamic &lime_gl_line_width_dyn() { return lime_gl_line_width;}
		static Dynamic lime_gl_link_program;
		static Dynamic &lime_gl_link_program_dyn() { return lime_gl_link_program;}
		static Dynamic lime_gl_pixel_storei;
		static Dynamic &lime_gl_pixel_storei_dyn() { return lime_gl_pixel_storei;}
		static Dynamic lime_gl_polygon_offset;
		static Dynamic &lime_gl_polygon_offset_dyn() { return lime_gl_polygon_offset;}
		static Dynamic lime_gl_read_pixels;
		static Dynamic &lime_gl_read_pixels_dyn() { return lime_gl_read_pixels;}
		static Dynamic lime_gl_renderbuffer_storage;
		static Dynamic &lime_gl_renderbuffer_storage_dyn() { return lime_gl_renderbuffer_storage;}
		static Dynamic lime_gl_sample_coverage;
		static Dynamic &lime_gl_sample_coverage_dyn() { return lime_gl_sample_coverage;}
		static Dynamic lime_gl_scissor;
		static Dynamic &lime_gl_scissor_dyn() { return lime_gl_scissor;}
		static Dynamic lime_gl_shader_source;
		static Dynamic &lime_gl_shader_source_dyn() { return lime_gl_shader_source;}
		static Dynamic lime_gl_stencil_func;
		static Dynamic &lime_gl_stencil_func_dyn() { return lime_gl_stencil_func;}
		static Dynamic lime_gl_stencil_func_separate;
		static Dynamic &lime_gl_stencil_func_separate_dyn() { return lime_gl_stencil_func_separate;}
		static Dynamic lime_gl_stencil_mask;
		static Dynamic &lime_gl_stencil_mask_dyn() { return lime_gl_stencil_mask;}
		static Dynamic lime_gl_stencil_mask_separate;
		static Dynamic &lime_gl_stencil_mask_separate_dyn() { return lime_gl_stencil_mask_separate;}
		static Dynamic lime_gl_stencil_op;
		static Dynamic &lime_gl_stencil_op_dyn() { return lime_gl_stencil_op;}
		static Dynamic lime_gl_stencil_op_separate;
		static Dynamic &lime_gl_stencil_op_separate_dyn() { return lime_gl_stencil_op_separate;}
		static Dynamic lime_gl_tex_image_2d;
		static Dynamic &lime_gl_tex_image_2d_dyn() { return lime_gl_tex_image_2d;}
		static Dynamic lime_gl_tex_parameterf;
		static Dynamic &lime_gl_tex_parameterf_dyn() { return lime_gl_tex_parameterf;}
		static Dynamic lime_gl_tex_parameteri;
		static Dynamic &lime_gl_tex_parameteri_dyn() { return lime_gl_tex_parameteri;}
		static Dynamic lime_gl_tex_sub_image_2d;
		static Dynamic &lime_gl_tex_sub_image_2d_dyn() { return lime_gl_tex_sub_image_2d;}
		static Dynamic lime_gl_uniform1f;
		static Dynamic &lime_gl_uniform1f_dyn() { return lime_gl_uniform1f;}
		static Dynamic lime_gl_uniform1fv;
		static Dynamic &lime_gl_uniform1fv_dyn() { return lime_gl_uniform1fv;}
		static Dynamic lime_gl_uniform1i;
		static Dynamic &lime_gl_uniform1i_dyn() { return lime_gl_uniform1i;}
		static Dynamic lime_gl_uniform1iv;
		static Dynamic &lime_gl_uniform1iv_dyn() { return lime_gl_uniform1iv;}
		static Dynamic lime_gl_uniform2f;
		static Dynamic &lime_gl_uniform2f_dyn() { return lime_gl_uniform2f;}
		static Dynamic lime_gl_uniform2fv;
		static Dynamic &lime_gl_uniform2fv_dyn() { return lime_gl_uniform2fv;}
		static Dynamic lime_gl_uniform2i;
		static Dynamic &lime_gl_uniform2i_dyn() { return lime_gl_uniform2i;}
		static Dynamic lime_gl_uniform2iv;
		static Dynamic &lime_gl_uniform2iv_dyn() { return lime_gl_uniform2iv;}
		static Dynamic lime_gl_uniform3f;
		static Dynamic &lime_gl_uniform3f_dyn() { return lime_gl_uniform3f;}
		static Dynamic lime_gl_uniform3fv;
		static Dynamic &lime_gl_uniform3fv_dyn() { return lime_gl_uniform3fv;}
		static Dynamic lime_gl_uniform3i;
		static Dynamic &lime_gl_uniform3i_dyn() { return lime_gl_uniform3i;}
		static Dynamic lime_gl_uniform3iv;
		static Dynamic &lime_gl_uniform3iv_dyn() { return lime_gl_uniform3iv;}
		static Dynamic lime_gl_uniform4f;
		static Dynamic &lime_gl_uniform4f_dyn() { return lime_gl_uniform4f;}
		static Dynamic lime_gl_uniform4fv;
		static Dynamic &lime_gl_uniform4fv_dyn() { return lime_gl_uniform4fv;}
		static Dynamic lime_gl_uniform4i;
		static Dynamic &lime_gl_uniform4i_dyn() { return lime_gl_uniform4i;}
		static Dynamic lime_gl_uniform4iv;
		static Dynamic &lime_gl_uniform4iv_dyn() { return lime_gl_uniform4iv;}
		static Dynamic lime_gl_uniform_matrix;
		static Dynamic &lime_gl_uniform_matrix_dyn() { return lime_gl_uniform_matrix;}
		static Dynamic lime_gl_use_program;
		static Dynamic &lime_gl_use_program_dyn() { return lime_gl_use_program;}
		static Dynamic lime_gl_validate_program;
		static Dynamic &lime_gl_validate_program_dyn() { return lime_gl_validate_program;}
		static Dynamic lime_gl_version;
		static Dynamic &lime_gl_version_dyn() { return lime_gl_version;}
		static Dynamic lime_gl_vertex_attrib1f;
		static Dynamic &lime_gl_vertex_attrib1f_dyn() { return lime_gl_vertex_attrib1f;}
		static Dynamic lime_gl_vertex_attrib1fv;
		static Dynamic &lime_gl_vertex_attrib1fv_dyn() { return lime_gl_vertex_attrib1fv;}
		static Dynamic lime_gl_vertex_attrib2f;
		static Dynamic &lime_gl_vertex_attrib2f_dyn() { return lime_gl_vertex_attrib2f;}
		static Dynamic lime_gl_vertex_attrib2fv;
		static Dynamic &lime_gl_vertex_attrib2fv_dyn() { return lime_gl_vertex_attrib2fv;}
		static Dynamic lime_gl_vertex_attrib3f;
		static Dynamic &lime_gl_vertex_attrib3f_dyn() { return lime_gl_vertex_attrib3f;}
		static Dynamic lime_gl_vertex_attrib3fv;
		static Dynamic &lime_gl_vertex_attrib3fv_dyn() { return lime_gl_vertex_attrib3fv;}
		static Dynamic lime_gl_vertex_attrib4f;
		static Dynamic &lime_gl_vertex_attrib4f_dyn() { return lime_gl_vertex_attrib4f;}
		static Dynamic lime_gl_vertex_attrib4fv;
		static Dynamic &lime_gl_vertex_attrib4fv_dyn() { return lime_gl_vertex_attrib4fv;}
		static Dynamic lime_gl_vertex_attrib_pointer;
		static Dynamic &lime_gl_vertex_attrib_pointer_dyn() { return lime_gl_vertex_attrib_pointer;}
		static Dynamic lime_gl_viewport;
		static Dynamic &lime_gl_viewport_dyn() { return lime_gl_viewport;}
};

} // end namespace openfl
} // end namespace gl

#endif /* INCLUDED_openfl_gl_GL */ 
