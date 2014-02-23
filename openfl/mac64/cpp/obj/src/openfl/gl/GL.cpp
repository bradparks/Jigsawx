#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLBuffer
#include <openfl/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLFramebuffer
#include <openfl/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLProgram
#include <openfl/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl_gl_GLRenderbuffer
#include <openfl/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLShader
#include <openfl/gl/GLShader.h>
#endif
#ifndef INCLUDED_openfl_gl_GLTexture
#include <openfl/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_Float32Array
#include <openfl/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace openfl{
namespace gl{

Void GL_obj::__construct()
{
	return null();
}

GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

int GL_obj::drawingBufferHeight;

int GL_obj::drawingBufferWidth;

int GL_obj::version;

Void GL_obj::activeTexture( int texture){
{
		HX_STACK_PUSH("GL::activeTexture","openfl/gl/GL.hx",436);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(436)
		::openfl::gl::GL_obj::lime_gl_active_texture(texture);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,activeTexture,(void))

Void GL_obj::attachShader( ::openfl::gl::GLProgram program,::openfl::gl::GLShader shader){
{
		HX_STACK_PUSH("GL::attachShader","openfl/gl/GL.hx",439);
		HX_STACK_ARG(program,"program");
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(440)
		program->attach(shader);
		HX_STACK_LINE(441)
		::openfl::gl::GL_obj::lime_gl_attach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,attachShader,(void))

Void GL_obj::bindAttribLocation( ::openfl::gl::GLProgram program,int index,::String name){
{
		HX_STACK_PUSH("GL::bindAttribLocation","openfl/gl/GL.hx",445);
		HX_STACK_ARG(program,"program");
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(445)
		::openfl::gl::GL_obj::lime_gl_bind_attrib_location(program->id,index,name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bindAttribLocation,(void))

Void GL_obj::bindBitmapDataTexture( ::flash::display::BitmapData texture){
{
		HX_STACK_PUSH("GL::bindBitmapDataTexture","openfl/gl/GL.hx",450);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(450)
		::openfl::gl::GL_obj::lime_gl_bind_bitmap_data_texture(texture->__handle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,bindBitmapDataTexture,(void))

Void GL_obj::bindBuffer( int target,::openfl::gl::GLBuffer buffer){
{
		HX_STACK_PUSH("GL::bindBuffer","openfl/gl/GL.hx",455);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(buffer,"buffer");
		HX_STACK_LINE(455)
		::openfl::gl::GL_obj::lime_gl_bind_buffer(target,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindBuffer,(void))

Void GL_obj::bindFramebuffer( int target,::openfl::gl::GLFramebuffer framebuffer){
{
		HX_STACK_PUSH("GL::bindFramebuffer","openfl/gl/GL.hx",460);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(framebuffer,"framebuffer");
		HX_STACK_LINE(460)
		::openfl::gl::GL_obj::lime_gl_bind_framebuffer(target,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindFramebuffer,(void))

Void GL_obj::bindRenderbuffer( int target,::openfl::gl::GLRenderbuffer renderbuffer){
{
		HX_STACK_PUSH("GL::bindRenderbuffer","openfl/gl/GL.hx",465);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(renderbuffer,"renderbuffer");
		HX_STACK_LINE(465)
		::openfl::gl::GL_obj::lime_gl_bind_renderbuffer(target,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindRenderbuffer,(void))

Void GL_obj::bindTexture( int target,::openfl::gl::GLTexture texture){
{
		HX_STACK_PUSH("GL::bindTexture","openfl/gl/GL.hx",470);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(470)
		::openfl::gl::GL_obj::lime_gl_bind_texture(target,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTexture,(void))

Void GL_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("GL::blendColor","openfl/gl/GL.hx",475);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(475)
		::openfl::gl::GL_obj::lime_gl_blend_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendColor,(void))

Void GL_obj::blendEquation( int mode){
{
		HX_STACK_PUSH("GL::blendEquation","openfl/gl/GL.hx",480);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(480)
		::openfl::gl::GL_obj::lime_gl_blend_equation(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,blendEquation,(void))

Void GL_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_PUSH("GL::blendEquationSeparate","openfl/gl/GL.hx",485);
		HX_STACK_ARG(modeRGB,"modeRGB");
		HX_STACK_ARG(modeAlpha,"modeAlpha");
		HX_STACK_LINE(485)
		::openfl::gl::GL_obj::lime_gl_blend_equation_separate(modeRGB,modeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendEquationSeparate,(void))

Void GL_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_PUSH("GL::blendFunc","openfl/gl/GL.hx",490);
		HX_STACK_ARG(sfactor,"sfactor");
		HX_STACK_ARG(dfactor,"dfactor");
		HX_STACK_LINE(490)
		::openfl::gl::GL_obj::lime_gl_blend_func(sfactor,dfactor);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendFunc,(void))

Void GL_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_PUSH("GL::blendFuncSeparate","openfl/gl/GL.hx",495);
		HX_STACK_ARG(srcRGB,"srcRGB");
		HX_STACK_ARG(dstRGB,"dstRGB");
		HX_STACK_ARG(srcAlpha,"srcAlpha");
		HX_STACK_ARG(dstAlpha,"dstAlpha");
		HX_STACK_LINE(495)
		::openfl::gl::GL_obj::lime_gl_blend_func_separate(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendFuncSeparate,(void))

Void GL_obj::bufferData( int target,::openfl::utils::IMemoryRange data,int usage){
{
		HX_STACK_PUSH("GL::bufferData","openfl/gl/GL.hx",500);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(usage,"usage");
		HX_STACK_LINE(500)
		::openfl::gl::GL_obj::lime_gl_buffer_data(target,data->getByteBuffer(),data->getStart(),data->getLength(),usage);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferData,(void))

Void GL_obj::bufferSubData( int target,int offset,::openfl::utils::IMemoryRange data){
{
		HX_STACK_PUSH("GL::bufferSubData","openfl/gl/GL.hx",505);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(offset,"offset");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(505)
		::openfl::gl::GL_obj::lime_gl_buffer_sub_data(target,offset,data->getByteBuffer(),data->getStart(),data->getLength());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferSubData,(void))

int GL_obj::checkFramebufferStatus( int target){
	HX_STACK_PUSH("GL::checkFramebufferStatus","openfl/gl/GL.hx",510);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(510)
	return ::openfl::gl::GL_obj::lime_gl_check_framebuffer_status(target);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,checkFramebufferStatus,return )

Void GL_obj::clear( int mask){
{
		HX_STACK_PUSH("GL::clear","openfl/gl/GL.hx",515);
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(515)
		::openfl::gl::GL_obj::lime_gl_clear(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clear,(void))

Void GL_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("GL::clearColor","openfl/gl/GL.hx",520);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(520)
		::openfl::gl::GL_obj::lime_gl_clear_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearColor,(void))

Void GL_obj::clearDepth( Float depth){
{
		HX_STACK_PUSH("GL::clearDepth","openfl/gl/GL.hx",525);
		HX_STACK_ARG(depth,"depth");
		HX_STACK_LINE(525)
		::openfl::gl::GL_obj::lime_gl_clear_depth(depth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearDepth,(void))

Void GL_obj::clearStencil( int s){
{
		HX_STACK_PUSH("GL::clearStencil","openfl/gl/GL.hx",530);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(530)
		::openfl::gl::GL_obj::lime_gl_clear_stencil(s);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearStencil,(void))

Void GL_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_PUSH("GL::colorMask","openfl/gl/GL.hx",535);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(535)
		::openfl::gl::GL_obj::lime_gl_color_mask(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,colorMask,(void))

Void GL_obj::compileShader( ::openfl::gl::GLShader shader){
{
		HX_STACK_PUSH("GL::compileShader","openfl/gl/GL.hx",540);
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(540)
		::openfl::gl::GL_obj::lime_gl_compile_shader(shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,compileShader,(void))

Void GL_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::openfl::utils::IMemoryRange data){
{
		HX_STACK_PUSH("GL::compressedTexImage2D","openfl/gl/GL.hx",545);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(border,"border");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(545)
		::openfl::gl::GL_obj::lime_gl_compressed_tex_image_2d(target,level,internalformat,width,height,border,(  (((data == null()))) ? ::flash::utils::ByteArray(null()) : ::flash::utils::ByteArray(data->getByteBuffer()) ),(  (((data == null()))) ? Dynamic(null()) : Dynamic(data->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,compressedTexImage2D,(void))

Void GL_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::openfl::utils::IMemoryRange data){
{
		HX_STACK_PUSH("GL::compressedTexSubImage2D","openfl/gl/GL.hx",550);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(xoffset,"xoffset");
		HX_STACK_ARG(yoffset,"yoffset");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(550)
		::openfl::gl::GL_obj::lime_gl_compressed_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,(  (((data == null()))) ? ::flash::utils::ByteArray(null()) : ::flash::utils::ByteArray(data->getByteBuffer()) ),(  (((data == null()))) ? Dynamic(null()) : Dynamic(data->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,compressedTexSubImage2D,(void))

Void GL_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_PUSH("GL::copyTexImage2D","openfl/gl/GL.hx",555);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(border,"border");
		HX_STACK_LINE(555)
		::openfl::gl::GL_obj::lime_gl_copy_tex_image_2d(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexImage2D,(void))

Void GL_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_PUSH("GL::copyTexSubImage2D","openfl/gl/GL.hx",560);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(xoffset,"xoffset");
		HX_STACK_ARG(yoffset,"yoffset");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(560)
		::openfl::gl::GL_obj::lime_gl_copy_tex_sub_image_2d(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexSubImage2D,(void))

::openfl::gl::GLBuffer GL_obj::createBuffer( ){
	HX_STACK_PUSH("GL::createBuffer","openfl/gl/GL.hx",565);
	HX_STACK_LINE(565)
	return ::openfl::gl::GLBuffer_obj::__new(::openfl::gl::GL_obj::get_version(),::openfl::gl::GL_obj::lime_gl_create_buffer());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createBuffer,return )

::openfl::gl::GLFramebuffer GL_obj::createFramebuffer( ){
	HX_STACK_PUSH("GL::createFramebuffer","openfl/gl/GL.hx",570);
	HX_STACK_LINE(570)
	return ::openfl::gl::GLFramebuffer_obj::__new(::openfl::gl::GL_obj::get_version(),::openfl::gl::GL_obj::lime_gl_create_framebuffer());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createFramebuffer,return )

::openfl::gl::GLProgram GL_obj::createProgram( ){
	HX_STACK_PUSH("GL::createProgram","openfl/gl/GL.hx",575);
	HX_STACK_LINE(575)
	return ::openfl::gl::GLProgram_obj::__new(::openfl::gl::GL_obj::get_version(),::openfl::gl::GL_obj::lime_gl_create_program());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createProgram,return )

::openfl::gl::GLRenderbuffer GL_obj::createRenderbuffer( ){
	HX_STACK_PUSH("GL::createRenderbuffer","openfl/gl/GL.hx",580);
	HX_STACK_LINE(580)
	return ::openfl::gl::GLRenderbuffer_obj::__new(::openfl::gl::GL_obj::get_version(),::openfl::gl::GL_obj::lime_gl_create_render_buffer());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createRenderbuffer,return )

::openfl::gl::GLShader GL_obj::createShader( int type){
	HX_STACK_PUSH("GL::createShader","openfl/gl/GL.hx",585);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(585)
	return ::openfl::gl::GLShader_obj::__new(::openfl::gl::GL_obj::get_version(),::openfl::gl::GL_obj::lime_gl_create_shader(type));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,createShader,return )

::openfl::gl::GLTexture GL_obj::createTexture( ){
	HX_STACK_PUSH("GL::createTexture","openfl/gl/GL.hx",590);
	HX_STACK_LINE(590)
	return ::openfl::gl::GLTexture_obj::__new(::openfl::gl::GL_obj::get_version(),::openfl::gl::GL_obj::lime_gl_create_texture());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTexture,return )

Void GL_obj::cullFace( int mode){
{
		HX_STACK_PUSH("GL::cullFace","openfl/gl/GL.hx",595);
		HX_STACK_ARG(mode,"mode");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,cullFace,(void))

Void GL_obj::deleteBuffer( ::openfl::gl::GLBuffer buffer){
{
		HX_STACK_PUSH("GL::deleteBuffer","openfl/gl/GL.hx",599);
		HX_STACK_ARG(buffer,"buffer");
		HX_STACK_LINE(600)
		::openfl::gl::GL_obj::lime_gl_delete_buffer(buffer->id);
		HX_STACK_LINE(601)
		buffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteBuffer,(void))

Void GL_obj::deleteFramebuffer( ::openfl::gl::GLFramebuffer framebuffer){
{
		HX_STACK_PUSH("GL::deleteFramebuffer","openfl/gl/GL.hx",605);
		HX_STACK_ARG(framebuffer,"framebuffer");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteFramebuffer,(void))

Void GL_obj::deleteProgram( ::openfl::gl::GLProgram program){
{
		HX_STACK_PUSH("GL::deleteProgram","openfl/gl/GL.hx",609);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(610)
		::openfl::gl::GL_obj::lime_gl_delete_program(program->id);
		HX_STACK_LINE(611)
		program->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteProgram,(void))

Void GL_obj::deleteRenderbuffer( ::openfl::gl::GLRenderbuffer renderbuffer){
{
		HX_STACK_PUSH("GL::deleteRenderbuffer","openfl/gl/GL.hx",615);
		HX_STACK_ARG(renderbuffer,"renderbuffer");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteRenderbuffer,(void))

Void GL_obj::deleteShader( ::openfl::gl::GLShader shader){
{
		HX_STACK_PUSH("GL::deleteShader","openfl/gl/GL.hx",619);
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(620)
		::openfl::gl::GL_obj::lime_gl_delete_shader(shader->id);
		HX_STACK_LINE(621)
		shader->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteShader,(void))

Void GL_obj::deleteTexture( ::openfl::gl::GLTexture texture){
{
		HX_STACK_PUSH("GL::deleteTexture","openfl/gl/GL.hx",625);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(626)
		::openfl::gl::GL_obj::lime_gl_delete_texture(texture->id);
		HX_STACK_LINE(627)
		texture->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteTexture,(void))

Void GL_obj::depthFunc( int func){
{
		HX_STACK_PUSH("GL::depthFunc","openfl/gl/GL.hx",631);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(631)
		::openfl::gl::GL_obj::lime_gl_depth_func(func);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthFunc,(void))

Void GL_obj::depthMask( bool flag){
{
		HX_STACK_PUSH("GL::depthMask","openfl/gl/GL.hx",636);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(636)
		::openfl::gl::GL_obj::lime_gl_depth_mask(flag);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthMask,(void))

Void GL_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_PUSH("GL::depthRange","openfl/gl/GL.hx",641);
		HX_STACK_ARG(zNear,"zNear");
		HX_STACK_ARG(zFar,"zFar");
		HX_STACK_LINE(641)
		::openfl::gl::GL_obj::lime_gl_depth_range(zNear,zFar);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,depthRange,(void))

Void GL_obj::detachShader( ::openfl::gl::GLProgram program,::openfl::gl::GLShader shader){
{
		HX_STACK_PUSH("GL::detachShader","openfl/gl/GL.hx",646);
		HX_STACK_ARG(program,"program");
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(646)
		::openfl::gl::GL_obj::lime_gl_detach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,detachShader,(void))

Void GL_obj::disable( int cap){
{
		HX_STACK_PUSH("GL::disable","openfl/gl/GL.hx",651);
		HX_STACK_ARG(cap,"cap");
		HX_STACK_LINE(651)
		::openfl::gl::GL_obj::lime_gl_disable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disable,(void))

Void GL_obj::disableVertexAttribArray( int index){
{
		HX_STACK_PUSH("GL::disableVertexAttribArray","openfl/gl/GL.hx",656);
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(656)
		::openfl::gl::GL_obj::lime_gl_disable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disableVertexAttribArray,(void))

Void GL_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_PUSH("GL::drawArrays","openfl/gl/GL.hx",661);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(661)
		::openfl::gl::GL_obj::lime_gl_draw_arrays(mode,first,count);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,drawArrays,(void))

Void GL_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_PUSH("GL::drawElements","openfl/gl/GL.hx",666);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_ARG(count,"count");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(offset,"offset");
		HX_STACK_LINE(666)
		::openfl::gl::GL_obj::lime_gl_draw_elements(mode,count,type,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawElements,(void))

Void GL_obj::enable( int cap){
{
		HX_STACK_PUSH("GL::enable","openfl/gl/GL.hx",671);
		HX_STACK_ARG(cap,"cap");
		HX_STACK_LINE(671)
		::openfl::gl::GL_obj::lime_gl_enable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enable,(void))

Void GL_obj::enableVertexAttribArray( int index){
{
		HX_STACK_PUSH("GL::enableVertexAttribArray","openfl/gl/GL.hx",676);
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(676)
		::openfl::gl::GL_obj::lime_gl_enable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enableVertexAttribArray,(void))

Void GL_obj::finish( ){
{
		HX_STACK_PUSH("GL::finish","openfl/gl/GL.hx",681);
		HX_STACK_LINE(681)
		::openfl::gl::GL_obj::lime_gl_finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,finish,(void))

Void GL_obj::flush( ){
{
		HX_STACK_PUSH("GL::flush","openfl/gl/GL.hx",686);
		HX_STACK_LINE(686)
		::openfl::gl::GL_obj::lime_gl_flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,flush,(void))

Void GL_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::openfl::gl::GLRenderbuffer renderbuffer){
{
		HX_STACK_PUSH("GL::framebufferRenderbuffer","openfl/gl/GL.hx",691);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(attachment,"attachment");
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget");
		HX_STACK_ARG(renderbuffer,"renderbuffer");
		HX_STACK_LINE(691)
		::openfl::gl::GL_obj::lime_gl_framebuffer_renderbuffer(target,attachment,renderbuffertarget,renderbuffer->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,framebufferRenderbuffer,(void))

Void GL_obj::framebufferTexture2D( int target,int attachment,int textarget,::openfl::gl::GLTexture texture,int level){
{
		HX_STACK_PUSH("GL::framebufferTexture2D","openfl/gl/GL.hx",696);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(attachment,"attachment");
		HX_STACK_ARG(textarget,"textarget");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_ARG(level,"level");
		HX_STACK_LINE(696)
		::openfl::gl::GL_obj::lime_gl_framebuffer_texture2D(target,attachment,textarget,texture->id,level);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,framebufferTexture2D,(void))

Void GL_obj::frontFace( int mode){
{
		HX_STACK_PUSH("GL::frontFace","openfl/gl/GL.hx",701);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(701)
		::openfl::gl::GL_obj::lime_gl_front_face(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,frontFace,(void))

Void GL_obj::generateMipmap( int target){
{
		HX_STACK_PUSH("GL::generateMipmap","openfl/gl/GL.hx",706);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(706)
		::openfl::gl::GL_obj::lime_gl_generate_mipmap(target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,generateMipmap,(void))

Dynamic GL_obj::getActiveAttrib( ::openfl::gl::GLProgram program,int index){
	HX_STACK_PUSH("GL::getActiveAttrib","openfl/gl/GL.hx",711);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(711)
	return ::openfl::gl::GL_obj::lime_gl_get_active_attrib(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveAttrib,return )

Dynamic GL_obj::getActiveUniform( ::openfl::gl::GLProgram program,int index){
	HX_STACK_PUSH("GL::getActiveUniform","openfl/gl/GL.hx",716);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(716)
	return ::openfl::gl::GL_obj::lime_gl_get_active_uniform(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveUniform,return )

Array< ::Dynamic > GL_obj::getAttachedShaders( ::openfl::gl::GLProgram program){
	HX_STACK_PUSH("GL::getAttachedShaders","openfl/gl/GL.hx",721);
	HX_STACK_ARG(program,"program");
	HX_STACK_LINE(721)
	return program->getShaders();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getAttachedShaders,return )

int GL_obj::getAttribLocation( ::openfl::gl::GLProgram program,::String name){
	HX_STACK_PUSH("GL::getAttribLocation","openfl/gl/GL.hx",726);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(726)
	return ::openfl::gl::GL_obj::lime_gl_get_attrib_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getAttribLocation,return )

Dynamic GL_obj::getBufferParameter( int target,int pname){
	HX_STACK_PUSH("GL::getBufferParameter","openfl/gl/GL.hx",731);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(731)
	return ::openfl::gl::GL_obj::lime_gl_get_buffer_paramerter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferParameter,return )

Dynamic GL_obj::getContextAttributes( ){
	HX_STACK_PUSH("GL::getContextAttributes","openfl/gl/GL.hx",736);
	HX_STACK_LINE(737)
	Dynamic base = ::openfl::gl::GL_obj::lime_gl_get_context_attributes();		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(738)
	base->__FieldRef(HX_CSTRING("premultipliedAlpha")) = false;
	HX_STACK_LINE(739)
	base->__FieldRef(HX_CSTRING("preserveDrawingBuffer")) = false;
	HX_STACK_LINE(740)
	return base;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getContextAttributes,return )

int GL_obj::getError( ){
	HX_STACK_PUSH("GL::getError","openfl/gl/GL.hx",744);
	HX_STACK_LINE(744)
	return ::openfl::gl::GL_obj::lime_gl_get_error();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getError,return )

Dynamic GL_obj::getExtension( ::String name){
	HX_STACK_PUSH("GL::getExtension","openfl/gl/GL.hx",749);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(749)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getExtension,return )

Dynamic GL_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_PUSH("GL::getFramebufferAttachmentParameter","openfl/gl/GL.hx",755);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(attachment,"attachment");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(755)
	return ::openfl::gl::GL_obj::lime_gl_get_framebuffer_attachment_parameter(target,attachment,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getFramebufferAttachmentParameter,return )

Dynamic GL_obj::getParameter( int pname){
	HX_STACK_PUSH("GL::getParameter","openfl/gl/GL.hx",760);
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(760)
	return ::openfl::gl::GL_obj::lime_gl_get_parameter(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getParameter,return )

::String GL_obj::getProgramInfoLog( ::openfl::gl::GLProgram program){
	HX_STACK_PUSH("GL::getProgramInfoLog","openfl/gl/GL.hx",765);
	HX_STACK_ARG(program,"program");
	HX_STACK_LINE(765)
	return ::openfl::gl::GL_obj::lime_gl_get_program_info_log(program->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getProgramInfoLog,return )

int GL_obj::getProgramParameter( ::openfl::gl::GLProgram program,int pname){
	HX_STACK_PUSH("GL::getProgramParameter","openfl/gl/GL.hx",770);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(770)
	return ::openfl::gl::GL_obj::lime_gl_get_program_parameter(program->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramParameter,return )

Dynamic GL_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_PUSH("GL::getRenderbufferParameter","openfl/gl/GL.hx",775);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(775)
	return ::openfl::gl::GL_obj::lime_gl_get_render_buffer_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getRenderbufferParameter,return )

::String GL_obj::getShaderInfoLog( ::openfl::gl::GLShader shader){
	HX_STACK_PUSH("GL::getShaderInfoLog","openfl/gl/GL.hx",780);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_LINE(780)
	return ::openfl::gl::GL_obj::lime_gl_get_shader_info_log(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderInfoLog,return )

int GL_obj::getShaderParameter( ::openfl::gl::GLShader shader,int pname){
	HX_STACK_PUSH("GL::getShaderParameter","openfl/gl/GL.hx",785);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(785)
	return ::openfl::gl::GL_obj::lime_gl_get_shader_parameter(shader->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderParameter,return )

Dynamic GL_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_PUSH("GL::getShaderPrecisionFormat","openfl/gl/GL.hx",790);
	HX_STACK_ARG(shadertype,"shadertype");
	HX_STACK_ARG(precisiontype,"precisiontype");
	HX_STACK_LINE(790)
	return ::openfl::gl::GL_obj::lime_gl_get_shader_precision_format(shadertype,precisiontype);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderPrecisionFormat,return )

::String GL_obj::getShaderSource( ::openfl::gl::GLShader shader){
	HX_STACK_PUSH("GL::getShaderSource","openfl/gl/GL.hx",795);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_LINE(795)
	return ::openfl::gl::GL_obj::lime_gl_get_shader_source(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderSource,return )

Array< ::String > GL_obj::getSupportedExtensions( ){
	HX_STACK_PUSH("GL::getSupportedExtensions","openfl/gl/GL.hx",800);
	HX_STACK_LINE(801)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(802)
	::openfl::gl::GL_obj::lime_gl_get_supported_extensions(result);
	HX_STACK_LINE(803)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getSupportedExtensions,return )

Dynamic GL_obj::getTexParameter( int target,int pname){
	HX_STACK_PUSH("GL::getTexParameter","openfl/gl/GL.hx",807);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(807)
	return ::openfl::gl::GL_obj::lime_gl_get_tex_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameter,return )

Dynamic GL_obj::getUniform( ::openfl::gl::GLProgram program,Dynamic location){
	HX_STACK_PUSH("GL::getUniform","openfl/gl/GL.hx",812);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(location,"location");
	HX_STACK_LINE(812)
	return ::openfl::gl::GL_obj::lime_gl_get_uniform(program->id,location);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniform,return )

Dynamic GL_obj::getUniformLocation( ::openfl::gl::GLProgram program,::String name){
	HX_STACK_PUSH("GL::getUniformLocation","openfl/gl/GL.hx",817);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(817)
	return ::openfl::gl::GL_obj::lime_gl_get_uniform_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformLocation,return )

Dynamic GL_obj::getVertexAttrib( int index,int pname){
	HX_STACK_PUSH("GL::getVertexAttrib","openfl/gl/GL.hx",822);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(822)
	return ::openfl::gl::GL_obj::lime_gl_get_vertex_attrib(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttrib,return )

int GL_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_PUSH("GL::getVertexAttribOffset","openfl/gl/GL.hx",827);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(827)
	return ::openfl::gl::GL_obj::lime_gl_get_vertex_attrib_offset(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribOffset,return )

Void GL_obj::hint( int target,int mode){
{
		HX_STACK_PUSH("GL::hint","openfl/gl/GL.hx",832);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(832)
		::openfl::gl::GL_obj::lime_gl_hint(target,mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,hint,(void))

bool GL_obj::isBuffer( ::openfl::gl::GLBuffer buffer){
	HX_STACK_PUSH("GL::isBuffer","openfl/gl/GL.hx",837);
	HX_STACK_ARG(buffer,"buffer");
	HX_STACK_LINE(837)
	return (bool((bool((buffer != null())) && bool((buffer->id > (int)0)))) && bool(::openfl::gl::GL_obj::lime_gl_is_buffer(buffer->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isBuffer,return )

bool GL_obj::isEnabled( int cap){
	HX_STACK_PUSH("GL::isEnabled","openfl/gl/GL.hx",844);
	HX_STACK_ARG(cap,"cap");
	HX_STACK_LINE(844)
	return ::openfl::gl::GL_obj::lime_gl_is_enabled(cap);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isEnabled,return )

bool GL_obj::isFramebuffer( ::openfl::gl::GLFramebuffer framebuffer){
	HX_STACK_PUSH("GL::isFramebuffer","openfl/gl/GL.hx",849);
	HX_STACK_ARG(framebuffer,"framebuffer");
	HX_STACK_LINE(849)
	return (bool((bool((framebuffer != null())) && bool((framebuffer->id > (int)0)))) && bool(::openfl::gl::GL_obj::lime_gl_is_framebuffer(framebuffer->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isFramebuffer,return )

bool GL_obj::isProgram( ::openfl::gl::GLProgram program){
	HX_STACK_PUSH("GL::isProgram","openfl/gl/GL.hx",854);
	HX_STACK_ARG(program,"program");
	HX_STACK_LINE(854)
	return (bool((bool((program != null())) && bool((program->id > (int)0)))) && bool(::openfl::gl::GL_obj::lime_gl_is_program(program->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isProgram,return )

bool GL_obj::isRenderbuffer( ::openfl::gl::GLRenderbuffer renderbuffer){
	HX_STACK_PUSH("GL::isRenderbuffer","openfl/gl/GL.hx",859);
	HX_STACK_ARG(renderbuffer,"renderbuffer");
	HX_STACK_LINE(859)
	return (bool((bool((renderbuffer != null())) && bool((renderbuffer->id > (int)0)))) && bool(::openfl::gl::GL_obj::lime_gl_is_renderbuffer(renderbuffer->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isRenderbuffer,return )

bool GL_obj::isShader( ::openfl::gl::GLShader shader){
	HX_STACK_PUSH("GL::isShader","openfl/gl/GL.hx",864);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_LINE(864)
	return (bool((bool((shader != null())) && bool((shader->id > (int)0)))) && bool(::openfl::gl::GL_obj::lime_gl_is_shader(shader->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isShader,return )

bool GL_obj::isTexture( ::openfl::gl::GLTexture texture){
	HX_STACK_PUSH("GL::isTexture","openfl/gl/GL.hx",869);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_LINE(869)
	return (bool((bool((texture != null())) && bool((texture->id > (int)0)))) && bool(::openfl::gl::GL_obj::lime_gl_is_texture(texture->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isTexture,return )

Void GL_obj::lineWidth( Float width){
{
		HX_STACK_PUSH("GL::lineWidth","openfl/gl/GL.hx",874);
		HX_STACK_ARG(width,"width");
		HX_STACK_LINE(874)
		::openfl::gl::GL_obj::lime_gl_line_width(width);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,lineWidth,(void))

Void GL_obj::linkProgram( ::openfl::gl::GLProgram program){
{
		HX_STACK_PUSH("GL::linkProgram","openfl/gl/GL.hx",879);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(879)
		::openfl::gl::GL_obj::lime_gl_link_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,linkProgram,(void))

Dynamic GL_obj::load( ::String inName,int inArgCount){
	HX_STACK_PUSH("GL::load","openfl/gl/GL.hx",884);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_ARG(inArgCount,"inArgCount");
	HX_STACK_LINE(884)
	try{
		HX_STACK_LINE(886)
		return ::flash::Lib_obj::load(HX_CSTRING("lime"),inName,inArgCount);
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(891)
				::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("GL.hx"),891,HX_CSTRING("openfl.gl.GL"),HX_CSTRING("load")));
				HX_STACK_LINE(892)
				return null();
			}
		}
	}
	HX_STACK_LINE(884)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,load,return )

Void GL_obj::pixelStorei( int pname,int param){
{
		HX_STACK_PUSH("GL::pixelStorei","openfl/gl/GL.hx",897);
		HX_STACK_ARG(pname,"pname");
		HX_STACK_ARG(param,"param");
		HX_STACK_LINE(897)
		::openfl::gl::GL_obj::lime_gl_pixel_storei(pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,pixelStorei,(void))

Void GL_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_PUSH("GL::polygonOffset","openfl/gl/GL.hx",902);
		HX_STACK_ARG(factor,"factor");
		HX_STACK_ARG(units,"units");
		HX_STACK_LINE(902)
		::openfl::gl::GL_obj::lime_gl_polygon_offset(factor,units);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,polygonOffset,(void))

Void GL_obj::readPixels( int x,int y,int width,int height,int format,int type,::flash::utils::ByteArray pixels){
{
		HX_STACK_PUSH("GL::readPixels","openfl/gl/GL.hx",907);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pixels,"pixels");
		HX_STACK_LINE(907)
		::openfl::gl::GL_obj::lime_gl_read_pixels(x,y,width,height,format,type,(  (((pixels == null()))) ? ::flash::utils::ByteArray(null()) : ::flash::utils::ByteArray(pixels->getByteBuffer()) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,readPixels,(void))

Void GL_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_PUSH("GL::renderbufferStorage","openfl/gl/GL.hx",912);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(912)
		::openfl::gl::GL_obj::lime_gl_renderbuffer_storage(target,internalformat,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,renderbufferStorage,(void))

Void GL_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_PUSH("GL::sampleCoverage","openfl/gl/GL.hx",917);
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(invert,"invert");
		HX_STACK_LINE(917)
		::openfl::gl::GL_obj::lime_gl_sample_coverage(value,invert);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,sampleCoverage,(void))

Void GL_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_PUSH("GL::scissor","openfl/gl/GL.hx",922);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(922)
		::openfl::gl::GL_obj::lime_gl_scissor(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,scissor,(void))

Void GL_obj::shaderSource( ::openfl::gl::GLShader shader,::String source){
{
		HX_STACK_PUSH("GL::shaderSource","openfl/gl/GL.hx",927);
		HX_STACK_ARG(shader,"shader");
		HX_STACK_ARG(source,"source");
		HX_STACK_LINE(927)
		::openfl::gl::GL_obj::lime_gl_shader_source(shader->id,source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,shaderSource,(void))

Void GL_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_PUSH("GL::stencilFunc","openfl/gl/GL.hx",932);
		HX_STACK_ARG(func,"func");
		HX_STACK_ARG(ref,"ref");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(932)
		::openfl::gl::GL_obj::lime_gl_stencil_func(func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilFunc,(void))

Void GL_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_PUSH("GL::stencilFuncSeparate","openfl/gl/GL.hx",937);
		HX_STACK_ARG(face,"face");
		HX_STACK_ARG(func,"func");
		HX_STACK_ARG(ref,"ref");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(937)
		::openfl::gl::GL_obj::lime_gl_stencil_func_separate(face,func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilFuncSeparate,(void))

Void GL_obj::stencilMask( int mask){
{
		HX_STACK_PUSH("GL::stencilMask","openfl/gl/GL.hx",942);
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(942)
		::openfl::gl::GL_obj::lime_gl_stencil_mask(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,stencilMask,(void))

Void GL_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_PUSH("GL::stencilMaskSeparate","openfl/gl/GL.hx",947);
		HX_STACK_ARG(face,"face");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(947)
		::openfl::gl::GL_obj::lime_gl_stencil_mask_separate(face,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,stencilMaskSeparate,(void))

Void GL_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_PUSH("GL::stencilOp","openfl/gl/GL.hx",952);
		HX_STACK_ARG(fail,"fail");
		HX_STACK_ARG(zfail,"zfail");
		HX_STACK_ARG(zpass,"zpass");
		HX_STACK_LINE(952)
		::openfl::gl::GL_obj::lime_gl_stencil_op(fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilOp,(void))

Void GL_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_PUSH("GL::stencilOpSeparate","openfl/gl/GL.hx",957);
		HX_STACK_ARG(face,"face");
		HX_STACK_ARG(fail,"fail");
		HX_STACK_ARG(zfail,"zfail");
		HX_STACK_ARG(zpass,"zpass");
		HX_STACK_LINE(957)
		::openfl::gl::GL_obj::lime_gl_stencil_op_separate(face,fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilOpSeparate,(void))

Void GL_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::openfl::utils::ArrayBufferView pixels){
{
		HX_STACK_PUSH("GL::texImage2D","openfl/gl/GL.hx",962);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(border,"border");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pixels,"pixels");
		HX_STACK_LINE(962)
		::openfl::gl::GL_obj::lime_gl_tex_image_2d(target,level,internalformat,width,height,border,format,type,(  (((pixels == null()))) ? ::flash::utils::ByteArray(null()) : ::flash::utils::ByteArray(pixels->getByteBuffer()) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texImage2D,(void))

Void GL_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_PUSH("GL::texParameterf","openfl/gl/GL.hx",967);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(pname,"pname");
		HX_STACK_ARG(param,"param");
		HX_STACK_LINE(967)
		::openfl::gl::GL_obj::lime_gl_tex_parameterf(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameterf,(void))

Void GL_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_PUSH("GL::texParameteri","openfl/gl/GL.hx",972);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(pname,"pname");
		HX_STACK_ARG(param,"param");
		HX_STACK_LINE(972)
		::openfl::gl::GL_obj::lime_gl_tex_parameteri(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameteri,(void))

Void GL_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::openfl::utils::ArrayBufferView pixels){
{
		HX_STACK_PUSH("GL::texSubImage2D","openfl/gl/GL.hx",977);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(xoffset,"xoffset");
		HX_STACK_ARG(yoffset,"yoffset");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pixels,"pixels");
		HX_STACK_LINE(977)
		::openfl::gl::GL_obj::lime_gl_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,type,(  (((pixels == null()))) ? ::flash::utils::ByteArray(null()) : ::flash::utils::ByteArray(pixels->getByteBuffer()) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texSubImage2D,(void))

Void GL_obj::uniform1f( Dynamic location,Float x){
{
		HX_STACK_PUSH("GL::uniform1f","openfl/gl/GL.hx",982);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(982)
		::openfl::gl::GL_obj::lime_gl_uniform1f(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1f,(void))

Void GL_obj::uniform1fv( Dynamic location,Array< Float > x){
{
		HX_STACK_PUSH("GL::uniform1fv","openfl/gl/GL.hx",987);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(987)
		::openfl::gl::GL_obj::lime_gl_uniform1fv(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1fv,(void))

Void GL_obj::uniform1i( Dynamic location,int x){
{
		HX_STACK_PUSH("GL::uniform1i","openfl/gl/GL.hx",992);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(992)
		::openfl::gl::GL_obj::lime_gl_uniform1i(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1i,(void))

Void GL_obj::uniform1iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform1iv","openfl/gl/GL.hx",997);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(997)
		::openfl::gl::GL_obj::lime_gl_uniform1iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1iv,(void))

Void GL_obj::uniform2f( Dynamic location,Float x,Float y){
{
		HX_STACK_PUSH("GL::uniform2f","openfl/gl/GL.hx",1002);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1002)
		::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2f,(void))

Void GL_obj::uniform2fv( Dynamic location,Array< Float > v){
{
		HX_STACK_PUSH("GL::uniform2fv","openfl/gl/GL.hx",1007);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1007)
		::openfl::gl::GL_obj::lime_gl_uniform2fv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2fv,(void))

Void GL_obj::uniform2i( Dynamic location,int x,int y){
{
		HX_STACK_PUSH("GL::uniform2i","openfl/gl/GL.hx",1012);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1012)
		::openfl::gl::GL_obj::lime_gl_uniform2i(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2i,(void))

Void GL_obj::uniform2iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform2iv","openfl/gl/GL.hx",1017);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1017)
		::openfl::gl::GL_obj::lime_gl_uniform2iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2iv,(void))

Void GL_obj::uniform3f( Dynamic location,Float x,Float y,Float z){
{
		HX_STACK_PUSH("GL::uniform3f","openfl/gl/GL.hx",1022);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(1022)
		::openfl::gl::GL_obj::lime_gl_uniform3f(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3f,(void))

Void GL_obj::uniform3fv( Dynamic location,Array< Float > v){
{
		HX_STACK_PUSH("GL::uniform3fv","openfl/gl/GL.hx",1027);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1027)
		::openfl::gl::GL_obj::lime_gl_uniform3fv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3fv,(void))

Void GL_obj::uniform3i( Dynamic location,int x,int y,int z){
{
		HX_STACK_PUSH("GL::uniform3i","openfl/gl/GL.hx",1032);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(1032)
		::openfl::gl::GL_obj::lime_gl_uniform3i(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3i,(void))

Void GL_obj::uniform3iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform3iv","openfl/gl/GL.hx",1037);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1037)
		::openfl::gl::GL_obj::lime_gl_uniform3iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3iv,(void))

Void GL_obj::uniform4f( Dynamic location,Float x,Float y,Float z,Float w){
{
		HX_STACK_PUSH("GL::uniform4f","openfl/gl/GL.hx",1042);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_ARG(w,"w");
		HX_STACK_LINE(1042)
		::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4f,(void))

Void GL_obj::uniform4fv( Dynamic location,Array< Float > v){
{
		HX_STACK_PUSH("GL::uniform4fv","openfl/gl/GL.hx",1047);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1047)
		::openfl::gl::GL_obj::lime_gl_uniform4fv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4fv,(void))

Void GL_obj::uniform4i( Dynamic location,int x,int y,int z,int w){
{
		HX_STACK_PUSH("GL::uniform4i","openfl/gl/GL.hx",1052);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_ARG(w,"w");
		HX_STACK_LINE(1052)
		::openfl::gl::GL_obj::lime_gl_uniform4i(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4i,(void))

Void GL_obj::uniform4iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform4iv","openfl/gl/GL.hx",1057);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1057)
		::openfl::gl::GL_obj::lime_gl_uniform4iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4iv,(void))

Void GL_obj::uniformMatrix2fv( Dynamic location,bool transpose,::openfl::utils::Float32Array v){
{
		HX_STACK_PUSH("GL::uniformMatrix2fv","openfl/gl/GL.hx",1062);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1062)
		::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,transpose,v->getByteBuffer(),(int)2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix2fv,(void))

Void GL_obj::uniformMatrix3fv( Dynamic location,bool transpose,::openfl::utils::Float32Array v){
{
		HX_STACK_PUSH("GL::uniformMatrix3fv","openfl/gl/GL.hx",1067);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1067)
		::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,transpose,v->getByteBuffer(),(int)3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3fv,(void))

Void GL_obj::uniformMatrix4fv( Dynamic location,bool transpose,::openfl::utils::Float32Array v){
{
		HX_STACK_PUSH("GL::uniformMatrix4fv","openfl/gl/GL.hx",1072);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1072)
		::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,transpose,v->getByteBuffer(),(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix4fv,(void))

Void GL_obj::uniformMatrix3D( Dynamic location,bool transpose,::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("GL::uniformMatrix3D","openfl/gl/GL.hx",1077);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(1077)
		::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,transpose,::openfl::utils::Float32Array_obj::fromMatrix(matrix)->getByteBuffer(),(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3D,(void))

Void GL_obj::useProgram( ::openfl::gl::GLProgram program){
{
		HX_STACK_PUSH("GL::useProgram","openfl/gl/GL.hx",1082);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(1082)
		::openfl::gl::GL_obj::lime_gl_use_program((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,useProgram,(void))

Void GL_obj::validateProgram( ::openfl::gl::GLProgram program){
{
		HX_STACK_PUSH("GL::validateProgram","openfl/gl/GL.hx",1087);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(1087)
		::openfl::gl::GL_obj::lime_gl_validate_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,validateProgram,(void))

Void GL_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_PUSH("GL::vertexAttrib1f","openfl/gl/GL.hx",1092);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1092)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib1f(indx,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1f,(void))

Void GL_obj::vertexAttrib1fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib1fv","openfl/gl/GL.hx",1097);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1097)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib1fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1fv,(void))

Void GL_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_PUSH("GL::vertexAttrib2f","openfl/gl/GL.hx",1102);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1102)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib2f(indx,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,vertexAttrib2f,(void))

Void GL_obj::vertexAttrib2fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib2fv","openfl/gl/GL.hx",1107);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1107)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib2fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib2fv,(void))

Void GL_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_PUSH("GL::vertexAttrib3f","openfl/gl/GL.hx",1112);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(1112)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib3f(indx,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,vertexAttrib3f,(void))

Void GL_obj::vertexAttrib3fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib3fv","openfl/gl/GL.hx",1117);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1117)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib3fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib3fv,(void))

Void GL_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_PUSH("GL::vertexAttrib4f","openfl/gl/GL.hx",1122);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_ARG(w,"w");
		HX_STACK_LINE(1122)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib4f(indx,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttrib4f,(void))

Void GL_obj::vertexAttrib4fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib4fv","openfl/gl/GL.hx",1127);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1127)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib4fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib4fv,(void))

Void GL_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_PUSH("GL::vertexAttribPointer","openfl/gl/GL.hx",1132);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(size,"size");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(normalized,"normalized");
		HX_STACK_ARG(stride,"stride");
		HX_STACK_ARG(offset,"offset");
		HX_STACK_LINE(1132)
		::openfl::gl::GL_obj::lime_gl_vertex_attrib_pointer(indx,size,type,normalized,stride,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,vertexAttribPointer,(void))

Void GL_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_PUSH("GL::viewport","openfl/gl/GL.hx",1137);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1137)
		::openfl::gl::GL_obj::lime_gl_viewport(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,viewport,(void))

int GL_obj::get_drawingBufferHeight( ){
	HX_STACK_PUSH("GL::get_drawingBufferHeight","openfl/gl/GL.hx",1149);
	HX_STACK_LINE(1149)
	return ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_drawingBufferHeight,return )

int GL_obj::get_drawingBufferWidth( ){
	HX_STACK_PUSH("GL::get_drawingBufferWidth","openfl/gl/GL.hx",1150);
	HX_STACK_LINE(1150)
	return ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_drawingBufferWidth,return )

int GL_obj::get_version( ){
	HX_STACK_PUSH("GL::get_version","openfl/gl/GL.hx",1151);
	HX_STACK_LINE(1151)
	return ::openfl::gl::GL_obj::lime_gl_version();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_version,return )

Dynamic GL_obj::lime_gl_active_texture;

Dynamic GL_obj::lime_gl_attach_shader;

Dynamic GL_obj::lime_gl_bind_attrib_location;

Dynamic GL_obj::lime_gl_bind_bitmap_data_texture;

Dynamic GL_obj::lime_gl_bind_buffer;

Dynamic GL_obj::lime_gl_bind_framebuffer;

Dynamic GL_obj::lime_gl_bind_renderbuffer;

Dynamic GL_obj::lime_gl_bind_texture;

Dynamic GL_obj::lime_gl_blend_color;

Dynamic GL_obj::lime_gl_blend_equation;

Dynamic GL_obj::lime_gl_blend_equation_separate;

Dynamic GL_obj::lime_gl_blend_func;

Dynamic GL_obj::lime_gl_blend_func_separate;

Dynamic GL_obj::lime_gl_buffer_data;

Dynamic GL_obj::lime_gl_buffer_sub_data;

Dynamic GL_obj::lime_gl_check_framebuffer_status;

Dynamic GL_obj::lime_gl_clear;

Dynamic GL_obj::lime_gl_clear_color;

Dynamic GL_obj::lime_gl_clear_depth;

Dynamic GL_obj::lime_gl_clear_stencil;

Dynamic GL_obj::lime_gl_color_mask;

Dynamic GL_obj::lime_gl_compile_shader;

Dynamic GL_obj::lime_gl_compressed_tex_image_2d;

Dynamic GL_obj::lime_gl_compressed_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_copy_tex_image_2d;

Dynamic GL_obj::lime_gl_copy_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_create_buffer;

Dynamic GL_obj::lime_gl_create_framebuffer;

Dynamic GL_obj::lime_gl_create_program;

Dynamic GL_obj::lime_gl_create_render_buffer;

Dynamic GL_obj::lime_gl_create_shader;

Dynamic GL_obj::lime_gl_create_texture;

Dynamic GL_obj::lime_gl_delete_buffer;

Dynamic GL_obj::lime_gl_delete_program;

Dynamic GL_obj::lime_gl_delete_shader;

Dynamic GL_obj::lime_gl_delete_texture;

Dynamic GL_obj::lime_gl_depth_func;

Dynamic GL_obj::lime_gl_depth_mask;

Dynamic GL_obj::lime_gl_depth_range;

Dynamic GL_obj::lime_gl_detach_shader;

Dynamic GL_obj::lime_gl_disable;

Dynamic GL_obj::lime_gl_disable_vertex_attrib_array;

Dynamic GL_obj::lime_gl_draw_arrays;

Dynamic GL_obj::lime_gl_draw_elements;

Dynamic GL_obj::lime_gl_enable;

Dynamic GL_obj::lime_gl_enable_vertex_attrib_array;

Dynamic GL_obj::lime_gl_finish;

Dynamic GL_obj::lime_gl_flush;

Dynamic GL_obj::lime_gl_framebuffer_renderbuffer;

Dynamic GL_obj::lime_gl_framebuffer_texture2D;

Dynamic GL_obj::lime_gl_front_face;

Dynamic GL_obj::lime_gl_generate_mipmap;

Dynamic GL_obj::lime_gl_get_active_attrib;

Dynamic GL_obj::lime_gl_get_active_uniform;

Dynamic GL_obj::lime_gl_get_attrib_location;

Dynamic GL_obj::lime_gl_get_buffer_paramerter;

Dynamic GL_obj::lime_gl_get_context_attributes;

Dynamic GL_obj::lime_gl_get_error;

Dynamic GL_obj::lime_gl_get_framebuffer_attachment_parameter;

Dynamic GL_obj::lime_gl_get_parameter;

Dynamic GL_obj::lime_gl_get_program_info_log;

Dynamic GL_obj::lime_gl_get_program_parameter;

Dynamic GL_obj::lime_gl_get_render_buffer_parameter;

Dynamic GL_obj::lime_gl_get_shader_info_log;

Dynamic GL_obj::lime_gl_get_shader_parameter;

Dynamic GL_obj::lime_gl_get_shader_precision_format;

Dynamic GL_obj::lime_gl_get_shader_source;

Dynamic GL_obj::lime_gl_get_supported_extensions;

Dynamic GL_obj::lime_gl_get_tex_parameter;

Dynamic GL_obj::lime_gl_get_uniform;

Dynamic GL_obj::lime_gl_get_uniform_location;

Dynamic GL_obj::lime_gl_get_vertex_attrib;

Dynamic GL_obj::lime_gl_get_vertex_attrib_offset;

Dynamic GL_obj::lime_gl_hint;

Dynamic GL_obj::lime_gl_is_buffer;

Dynamic GL_obj::lime_gl_is_enabled;

Dynamic GL_obj::lime_gl_is_framebuffer;

Dynamic GL_obj::lime_gl_is_program;

Dynamic GL_obj::lime_gl_is_renderbuffer;

Dynamic GL_obj::lime_gl_is_shader;

Dynamic GL_obj::lime_gl_is_texture;

Dynamic GL_obj::lime_gl_line_width;

Dynamic GL_obj::lime_gl_link_program;

Dynamic GL_obj::lime_gl_pixel_storei;

Dynamic GL_obj::lime_gl_polygon_offset;

Dynamic GL_obj::lime_gl_read_pixels;

Dynamic GL_obj::lime_gl_renderbuffer_storage;

Dynamic GL_obj::lime_gl_sample_coverage;

Dynamic GL_obj::lime_gl_scissor;

Dynamic GL_obj::lime_gl_shader_source;

Dynamic GL_obj::lime_gl_stencil_func;

Dynamic GL_obj::lime_gl_stencil_func_separate;

Dynamic GL_obj::lime_gl_stencil_mask;

Dynamic GL_obj::lime_gl_stencil_mask_separate;

Dynamic GL_obj::lime_gl_stencil_op;

Dynamic GL_obj::lime_gl_stencil_op_separate;

Dynamic GL_obj::lime_gl_tex_image_2d;

Dynamic GL_obj::lime_gl_tex_parameterf;

Dynamic GL_obj::lime_gl_tex_parameteri;

Dynamic GL_obj::lime_gl_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_uniform1f;

Dynamic GL_obj::lime_gl_uniform1fv;

Dynamic GL_obj::lime_gl_uniform1i;

Dynamic GL_obj::lime_gl_uniform1iv;

Dynamic GL_obj::lime_gl_uniform2f;

Dynamic GL_obj::lime_gl_uniform2fv;

Dynamic GL_obj::lime_gl_uniform2i;

Dynamic GL_obj::lime_gl_uniform2iv;

Dynamic GL_obj::lime_gl_uniform3f;

Dynamic GL_obj::lime_gl_uniform3fv;

Dynamic GL_obj::lime_gl_uniform3i;

Dynamic GL_obj::lime_gl_uniform3iv;

Dynamic GL_obj::lime_gl_uniform4f;

Dynamic GL_obj::lime_gl_uniform4fv;

Dynamic GL_obj::lime_gl_uniform4i;

Dynamic GL_obj::lime_gl_uniform4iv;

Dynamic GL_obj::lime_gl_uniform_matrix;

Dynamic GL_obj::lime_gl_use_program;

Dynamic GL_obj::lime_gl_validate_program;

Dynamic GL_obj::lime_gl_version;

Dynamic GL_obj::lime_gl_vertex_attrib1f;

Dynamic GL_obj::lime_gl_vertex_attrib1fv;

Dynamic GL_obj::lime_gl_vertex_attrib2f;

Dynamic GL_obj::lime_gl_vertex_attrib2fv;

Dynamic GL_obj::lime_gl_vertex_attrib3f;

Dynamic GL_obj::lime_gl_vertex_attrib3fv;

Dynamic GL_obj::lime_gl_vertex_attrib4f;

Dynamic GL_obj::lime_gl_vertex_attrib4fv;

Dynamic GL_obj::lime_gl_vertex_attrib_pointer;

Dynamic GL_obj::lime_gl_viewport;


GL_obj::GL_obj()
{
}

void GL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GL);
	HX_MARK_END_CLASS();
}

void GL_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic GL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return hint_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? get_version() : version; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"scissor") ) { return scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isShader") ) { return isShader_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return colorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"frontFace") ) { return frontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isProgram") ) { return isProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"isTexture") ) { return isTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { return stencilOp_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { return uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { return uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { return uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { return uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { return uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { return uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { return uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { return uniform4i_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"blendColor") ) { return blendColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthRange") ) { return depthRange_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { return drawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { return texImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { return uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { return uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { return uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { return uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { return uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { return uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { return uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { return uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { return pixelStorei_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { return stencilFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"detachShader") ) { return detachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_hint") ) { return lime_gl_hint; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { return blendEquation_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { return isFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { return polygonOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { return texParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { return texSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_clear") ) { return lime_gl_clear; }
		if (HX_FIELD_EQ(inName,"lime_gl_flush") ) { return lime_gl_flush; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { return copyTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { return generateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { return isRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { return sampleCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { return vertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { return vertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { return vertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { return vertexAttrib4f_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_enable") ) { return lime_gl_enable; }
		if (HX_FIELD_EQ(inName,"lime_gl_finish") ) { return lime_gl_finish; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { return getActiveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { return getShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { return getTexParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { return getVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3D") ) { return uniformMatrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { return validateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { return vertexAttrib1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { return vertexAttrib2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { return vertexAttrib3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { return vertexAttrib4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_disable") ) { return lime_gl_disable; }
		if (HX_FIELD_EQ(inName,"lime_gl_scissor") ) { return lime_gl_scissor; }
		if (HX_FIELD_EQ(inName,"lime_gl_version") ) { return lime_gl_version; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { return getActiveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return getShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { return uniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { return uniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_viewport") ) { return lime_gl_viewport; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { return blendFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { return copyTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { return createFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { return deleteFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return getProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { return stencilOpSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_get_error") ) { return lime_gl_get_error; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_buffer") ) { return lime_gl_is_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_shader") ) { return lime_gl_is_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1f") ) { return lime_gl_uniform1f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1i") ) { return lime_gl_uniform1i; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2f") ) { return lime_gl_uniform2f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2i") ) { return lime_gl_uniform2i; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3f") ) { return lime_gl_uniform3f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3i") ) { return lime_gl_uniform3i; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4f") ) { return lime_gl_uniform4f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4i") ) { return lime_gl_uniform4i; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawingBufferWidth") ) { return inCallProp ? get_drawingBufferWidth() : drawingBufferWidth; }
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { return bindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { return deleteRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { return getAttachedShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { return getBufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func") ) { return lime_gl_blend_func; }
		if (HX_FIELD_EQ(inName,"lime_gl_color_mask") ) { return lime_gl_color_mask; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_func") ) { return lime_gl_depth_func; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_mask") ) { return lime_gl_depth_mask; }
		if (HX_FIELD_EQ(inName,"lime_gl_front_face") ) { return lime_gl_front_face; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_enabled") ) { return lime_gl_is_enabled; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_program") ) { return lime_gl_is_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_texture") ) { return lime_gl_is_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_line_width") ) { return lime_gl_line_width; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op") ) { return lime_gl_stencil_op; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1fv") ) { return lime_gl_uniform1fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1iv") ) { return lime_gl_uniform1iv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2fv") ) { return lime_gl_uniform2fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2iv") ) { return lime_gl_uniform2iv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3fv") ) { return lime_gl_uniform3fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3iv") ) { return lime_gl_uniform3iv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4fv") ) { return lime_gl_uniform4fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4iv") ) { return lime_gl_uniform4iv; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawingBufferHeight") ) { return inCallProp ? get_drawingBufferHeight() : drawingBufferHeight; }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { return renderbufferStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { return stencilFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { return stencilMaskSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_buffer") ) { return lime_gl_bind_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_color") ) { return lime_gl_blend_color; }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_data") ) { return lime_gl_buffer_data; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_color") ) { return lime_gl_clear_color; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_depth") ) { return lime_gl_clear_depth; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_range") ) { return lime_gl_depth_range; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_arrays") ) { return lime_gl_draw_arrays; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform") ) { return lime_gl_get_uniform; }
		if (HX_FIELD_EQ(inName,"lime_gl_read_pixels") ) { return lime_gl_read_pixels; }
		if (HX_FIELD_EQ(inName,"lime_gl_use_program") ) { return lime_gl_use_program; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { return compressedTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { return framebufferTexture2D_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { return getContextAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_texture") ) { return lime_gl_bind_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_link_program") ) { return lime_gl_link_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_pixel_storei") ) { return lime_gl_pixel_storei; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func") ) { return lime_gl_stencil_func; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask") ) { return lime_gl_stencil_mask; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_image_2d") ) { return lime_gl_tex_image_2d; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"bindBitmapDataTexture") ) { return bindBitmapDataTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { return blendEquationSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { return getVertexAttribOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_attach_shader") ) { return lime_gl_attach_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_stencil") ) { return lime_gl_clear_stencil; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_buffer") ) { return lime_gl_create_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_shader") ) { return lime_gl_create_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_buffer") ) { return lime_gl_delete_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_shader") ) { return lime_gl_delete_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_detach_shader") ) { return lime_gl_detach_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_elements") ) { return lime_gl_draw_elements; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_parameter") ) { return lime_gl_get_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_shader_source") ) { return lime_gl_shader_source; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { return checkFramebufferStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { return getSupportedExtensions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_drawingBufferWidth") ) { return get_drawingBufferWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_active_texture") ) { return lime_gl_active_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation") ) { return lime_gl_blend_equation; }
		if (HX_FIELD_EQ(inName,"lime_gl_compile_shader") ) { return lime_gl_compile_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_program") ) { return lime_gl_create_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_texture") ) { return lime_gl_create_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_program") ) { return lime_gl_delete_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_texture") ) { return lime_gl_delete_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_framebuffer") ) { return lime_gl_is_framebuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_polygon_offset") ) { return lime_gl_polygon_offset; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameterf") ) { return lime_gl_tex_parameterf; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameteri") ) { return lime_gl_tex_parameteri; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix") ) { return lime_gl_uniform_matrix; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { return compressedTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { return framebufferRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_drawingBufferHeight") ) { return get_drawingBufferHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_sub_data") ) { return lime_gl_buffer_sub_data; }
		if (HX_FIELD_EQ(inName,"lime_gl_generate_mipmap") ) { return lime_gl_generate_mipmap; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_renderbuffer") ) { return lime_gl_is_renderbuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_sample_coverage") ) { return lime_gl_sample_coverage; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1f") ) { return lime_gl_vertex_attrib1f; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2f") ) { return lime_gl_vertex_attrib2f; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3f") ) { return lime_gl_vertex_attrib3f; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4f") ) { return lime_gl_vertex_attrib4f; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { return getRenderbufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { return getShaderPrecisionFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_framebuffer") ) { return lime_gl_bind_framebuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_sub_image_2d") ) { return lime_gl_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_validate_program") ) { return lime_gl_validate_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1fv") ) { return lime_gl_vertex_attrib1fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2fv") ) { return lime_gl_vertex_attrib2fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3fv") ) { return lime_gl_vertex_attrib3fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4fv") ) { return lime_gl_vertex_attrib4fv; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_renderbuffer") ) { return lime_gl_bind_renderbuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_image_2d") ) { return lime_gl_copy_tex_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_attrib") ) { return lime_gl_get_active_attrib; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_source") ) { return lime_gl_get_shader_source; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameter") ) { return lime_gl_get_tex_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib") ) { return lime_gl_get_vertex_attrib; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gl_create_framebuffer") ) { return lime_gl_create_framebuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_uniform") ) { return lime_gl_get_active_uniform; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func_separate") ) { return lime_gl_blend_func_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attrib_location") ) { return lime_gl_get_attrib_location; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_info_log") ) { return lime_gl_get_shader_info_log; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op_separate") ) { return lime_gl_stencil_op_separate; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_attrib_location") ) { return lime_gl_bind_attrib_location; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_render_buffer") ) { return lime_gl_create_render_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_info_log") ) { return lime_gl_get_program_info_log; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_parameter") ) { return lime_gl_get_shader_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform_location") ) { return lime_gl_get_uniform_location; }
		if (HX_FIELD_EQ(inName,"lime_gl_renderbuffer_storage") ) { return lime_gl_renderbuffer_storage; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_sub_image_2d") ) { return lime_gl_copy_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_texture2D") ) { return lime_gl_framebuffer_texture2D; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_paramerter") ) { return lime_gl_get_buffer_paramerter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_parameter") ) { return lime_gl_get_program_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func_separate") ) { return lime_gl_stencil_func_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask_separate") ) { return lime_gl_stencil_mask_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib_pointer") ) { return lime_gl_vertex_attrib_pointer; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_gl_get_context_attributes") ) { return lime_gl_get_context_attributes; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation_separate") ) { return lime_gl_blend_equation_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_image_2d") ) { return lime_gl_compressed_tex_image_2d; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_bitmap_data_texture") ) { return lime_gl_bind_bitmap_data_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_check_framebuffer_status") ) { return lime_gl_check_framebuffer_status; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_renderbuffer") ) { return lime_gl_framebuffer_renderbuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_supported_extensions") ) { return lime_gl_get_supported_extensions; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib_offset") ) { return lime_gl_get_vertex_attrib_offset; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { return getFramebufferAttachmentParameter_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_gl_enable_vertex_attrib_array") ) { return lime_gl_enable_vertex_attrib_array; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_sub_image_2d") ) { return lime_gl_compressed_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_disable_vertex_attrib_array") ) { return lime_gl_disable_vertex_attrib_array; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_render_buffer_parameter") ) { return lime_gl_get_render_buffer_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_precision_format") ) { return lime_gl_get_shader_precision_format; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameter") ) { return lime_gl_get_framebuffer_attachment_parameter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lime_gl_hint") ) { lime_gl_hint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lime_gl_clear") ) { lime_gl_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_flush") ) { lime_gl_flush=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_gl_enable") ) { lime_gl_enable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_finish") ) { lime_gl_finish=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_gl_disable") ) { lime_gl_disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_scissor") ) { lime_gl_scissor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_version") ) { lime_gl_version=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_gl_viewport") ) { lime_gl_viewport=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_gl_get_error") ) { lime_gl_get_error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_buffer") ) { lime_gl_is_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_shader") ) { lime_gl_is_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1f") ) { lime_gl_uniform1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1i") ) { lime_gl_uniform1i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2f") ) { lime_gl_uniform2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2i") ) { lime_gl_uniform2i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3f") ) { lime_gl_uniform3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3i") ) { lime_gl_uniform3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4f") ) { lime_gl_uniform4f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4i") ) { lime_gl_uniform4i=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawingBufferWidth") ) { drawingBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func") ) { lime_gl_blend_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_color_mask") ) { lime_gl_color_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_func") ) { lime_gl_depth_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_mask") ) { lime_gl_depth_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_front_face") ) { lime_gl_front_face=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_enabled") ) { lime_gl_is_enabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_program") ) { lime_gl_is_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_texture") ) { lime_gl_is_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_line_width") ) { lime_gl_line_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op") ) { lime_gl_stencil_op=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1fv") ) { lime_gl_uniform1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1iv") ) { lime_gl_uniform1iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2fv") ) { lime_gl_uniform2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2iv") ) { lime_gl_uniform2iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3fv") ) { lime_gl_uniform3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3iv") ) { lime_gl_uniform3iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4fv") ) { lime_gl_uniform4fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4iv") ) { lime_gl_uniform4iv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawingBufferHeight") ) { drawingBufferHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_buffer") ) { lime_gl_bind_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_color") ) { lime_gl_blend_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_data") ) { lime_gl_buffer_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_color") ) { lime_gl_clear_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_depth") ) { lime_gl_clear_depth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_range") ) { lime_gl_depth_range=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_arrays") ) { lime_gl_draw_arrays=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform") ) { lime_gl_get_uniform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_read_pixels") ) { lime_gl_read_pixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_use_program") ) { lime_gl_use_program=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_texture") ) { lime_gl_bind_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_link_program") ) { lime_gl_link_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_pixel_storei") ) { lime_gl_pixel_storei=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func") ) { lime_gl_stencil_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask") ) { lime_gl_stencil_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_image_2d") ) { lime_gl_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_gl_attach_shader") ) { lime_gl_attach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_stencil") ) { lime_gl_clear_stencil=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_buffer") ) { lime_gl_create_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_shader") ) { lime_gl_create_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_buffer") ) { lime_gl_delete_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_shader") ) { lime_gl_delete_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_detach_shader") ) { lime_gl_detach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_elements") ) { lime_gl_draw_elements=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_parameter") ) { lime_gl_get_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_shader_source") ) { lime_gl_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_gl_active_texture") ) { lime_gl_active_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation") ) { lime_gl_blend_equation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_compile_shader") ) { lime_gl_compile_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_program") ) { lime_gl_create_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_texture") ) { lime_gl_create_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_program") ) { lime_gl_delete_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_texture") ) { lime_gl_delete_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_framebuffer") ) { lime_gl_is_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_polygon_offset") ) { lime_gl_polygon_offset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameterf") ) { lime_gl_tex_parameterf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameteri") ) { lime_gl_tex_parameteri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix") ) { lime_gl_uniform_matrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_sub_data") ) { lime_gl_buffer_sub_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_generate_mipmap") ) { lime_gl_generate_mipmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_renderbuffer") ) { lime_gl_is_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_sample_coverage") ) { lime_gl_sample_coverage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1f") ) { lime_gl_vertex_attrib1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2f") ) { lime_gl_vertex_attrib2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3f") ) { lime_gl_vertex_attrib3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4f") ) { lime_gl_vertex_attrib4f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_framebuffer") ) { lime_gl_bind_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_sub_image_2d") ) { lime_gl_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_validate_program") ) { lime_gl_validate_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1fv") ) { lime_gl_vertex_attrib1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2fv") ) { lime_gl_vertex_attrib2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3fv") ) { lime_gl_vertex_attrib3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4fv") ) { lime_gl_vertex_attrib4fv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_renderbuffer") ) { lime_gl_bind_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_image_2d") ) { lime_gl_copy_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_attrib") ) { lime_gl_get_active_attrib=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_source") ) { lime_gl_get_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameter") ) { lime_gl_get_tex_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib") ) { lime_gl_get_vertex_attrib=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gl_create_framebuffer") ) { lime_gl_create_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_uniform") ) { lime_gl_get_active_uniform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func_separate") ) { lime_gl_blend_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attrib_location") ) { lime_gl_get_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_info_log") ) { lime_gl_get_shader_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op_separate") ) { lime_gl_stencil_op_separate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_attrib_location") ) { lime_gl_bind_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_render_buffer") ) { lime_gl_create_render_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_info_log") ) { lime_gl_get_program_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_parameter") ) { lime_gl_get_shader_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform_location") ) { lime_gl_get_uniform_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_renderbuffer_storage") ) { lime_gl_renderbuffer_storage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_sub_image_2d") ) { lime_gl_copy_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_texture2D") ) { lime_gl_framebuffer_texture2D=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_paramerter") ) { lime_gl_get_buffer_paramerter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_parameter") ) { lime_gl_get_program_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func_separate") ) { lime_gl_stencil_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask_separate") ) { lime_gl_stencil_mask_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib_pointer") ) { lime_gl_vertex_attrib_pointer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_gl_get_context_attributes") ) { lime_gl_get_context_attributes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation_separate") ) { lime_gl_blend_equation_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_image_2d") ) { lime_gl_compressed_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_bitmap_data_texture") ) { lime_gl_bind_bitmap_data_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_check_framebuffer_status") ) { lime_gl_check_framebuffer_status=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_renderbuffer") ) { lime_gl_framebuffer_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_supported_extensions") ) { lime_gl_get_supported_extensions=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib_offset") ) { lime_gl_get_vertex_attrib_offset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_gl_enable_vertex_attrib_array") ) { lime_gl_enable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_sub_image_2d") ) { lime_gl_compressed_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_disable_vertex_attrib_array") ) { lime_gl_disable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_render_buffer_parameter") ) { lime_gl_get_render_buffer_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_precision_format") ) { lime_gl_get_shader_precision_format=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameter") ) { lime_gl_get_framebuffer_attachment_parameter=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("drawingBufferHeight"),
	HX_CSTRING("drawingBufferWidth"),
	HX_CSTRING("version"),
	HX_CSTRING("activeTexture"),
	HX_CSTRING("attachShader"),
	HX_CSTRING("bindAttribLocation"),
	HX_CSTRING("bindBitmapDataTexture"),
	HX_CSTRING("bindBuffer"),
	HX_CSTRING("bindFramebuffer"),
	HX_CSTRING("bindRenderbuffer"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("blendColor"),
	HX_CSTRING("blendEquation"),
	HX_CSTRING("blendEquationSeparate"),
	HX_CSTRING("blendFunc"),
	HX_CSTRING("blendFuncSeparate"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("bufferSubData"),
	HX_CSTRING("checkFramebufferStatus"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearColor"),
	HX_CSTRING("clearDepth"),
	HX_CSTRING("clearStencil"),
	HX_CSTRING("colorMask"),
	HX_CSTRING("compileShader"),
	HX_CSTRING("compressedTexImage2D"),
	HX_CSTRING("compressedTexSubImage2D"),
	HX_CSTRING("copyTexImage2D"),
	HX_CSTRING("copyTexSubImage2D"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("createFramebuffer"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createRenderbuffer"),
	HX_CSTRING("createShader"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("cullFace"),
	HX_CSTRING("deleteBuffer"),
	HX_CSTRING("deleteFramebuffer"),
	HX_CSTRING("deleteProgram"),
	HX_CSTRING("deleteRenderbuffer"),
	HX_CSTRING("deleteShader"),
	HX_CSTRING("deleteTexture"),
	HX_CSTRING("depthFunc"),
	HX_CSTRING("depthMask"),
	HX_CSTRING("depthRange"),
	HX_CSTRING("detachShader"),
	HX_CSTRING("disable"),
	HX_CSTRING("disableVertexAttribArray"),
	HX_CSTRING("drawArrays"),
	HX_CSTRING("drawElements"),
	HX_CSTRING("enable"),
	HX_CSTRING("enableVertexAttribArray"),
	HX_CSTRING("finish"),
	HX_CSTRING("flush"),
	HX_CSTRING("framebufferRenderbuffer"),
	HX_CSTRING("framebufferTexture2D"),
	HX_CSTRING("frontFace"),
	HX_CSTRING("generateMipmap"),
	HX_CSTRING("getActiveAttrib"),
	HX_CSTRING("getActiveUniform"),
	HX_CSTRING("getAttachedShaders"),
	HX_CSTRING("getAttribLocation"),
	HX_CSTRING("getBufferParameter"),
	HX_CSTRING("getContextAttributes"),
	HX_CSTRING("getError"),
	HX_CSTRING("getExtension"),
	HX_CSTRING("getFramebufferAttachmentParameter"),
	HX_CSTRING("getParameter"),
	HX_CSTRING("getProgramInfoLog"),
	HX_CSTRING("getProgramParameter"),
	HX_CSTRING("getRenderbufferParameter"),
	HX_CSTRING("getShaderInfoLog"),
	HX_CSTRING("getShaderParameter"),
	HX_CSTRING("getShaderPrecisionFormat"),
	HX_CSTRING("getShaderSource"),
	HX_CSTRING("getSupportedExtensions"),
	HX_CSTRING("getTexParameter"),
	HX_CSTRING("getUniform"),
	HX_CSTRING("getUniformLocation"),
	HX_CSTRING("getVertexAttrib"),
	HX_CSTRING("getVertexAttribOffset"),
	HX_CSTRING("hint"),
	HX_CSTRING("isBuffer"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("isFramebuffer"),
	HX_CSTRING("isProgram"),
	HX_CSTRING("isRenderbuffer"),
	HX_CSTRING("isShader"),
	HX_CSTRING("isTexture"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("linkProgram"),
	HX_CSTRING("load"),
	HX_CSTRING("pixelStorei"),
	HX_CSTRING("polygonOffset"),
	HX_CSTRING("readPixels"),
	HX_CSTRING("renderbufferStorage"),
	HX_CSTRING("sampleCoverage"),
	HX_CSTRING("scissor"),
	HX_CSTRING("shaderSource"),
	HX_CSTRING("stencilFunc"),
	HX_CSTRING("stencilFuncSeparate"),
	HX_CSTRING("stencilMask"),
	HX_CSTRING("stencilMaskSeparate"),
	HX_CSTRING("stencilOp"),
	HX_CSTRING("stencilOpSeparate"),
	HX_CSTRING("texImage2D"),
	HX_CSTRING("texParameterf"),
	HX_CSTRING("texParameteri"),
	HX_CSTRING("texSubImage2D"),
	HX_CSTRING("uniform1f"),
	HX_CSTRING("uniform1fv"),
	HX_CSTRING("uniform1i"),
	HX_CSTRING("uniform1iv"),
	HX_CSTRING("uniform2f"),
	HX_CSTRING("uniform2fv"),
	HX_CSTRING("uniform2i"),
	HX_CSTRING("uniform2iv"),
	HX_CSTRING("uniform3f"),
	HX_CSTRING("uniform3fv"),
	HX_CSTRING("uniform3i"),
	HX_CSTRING("uniform3iv"),
	HX_CSTRING("uniform4f"),
	HX_CSTRING("uniform4fv"),
	HX_CSTRING("uniform4i"),
	HX_CSTRING("uniform4iv"),
	HX_CSTRING("uniformMatrix2fv"),
	HX_CSTRING("uniformMatrix3fv"),
	HX_CSTRING("uniformMatrix4fv"),
	HX_CSTRING("uniformMatrix3D"),
	HX_CSTRING("useProgram"),
	HX_CSTRING("validateProgram"),
	HX_CSTRING("vertexAttrib1f"),
	HX_CSTRING("vertexAttrib1fv"),
	HX_CSTRING("vertexAttrib2f"),
	HX_CSTRING("vertexAttrib2fv"),
	HX_CSTRING("vertexAttrib3f"),
	HX_CSTRING("vertexAttrib3fv"),
	HX_CSTRING("vertexAttrib4f"),
	HX_CSTRING("vertexAttrib4fv"),
	HX_CSTRING("vertexAttribPointer"),
	HX_CSTRING("viewport"),
	HX_CSTRING("get_drawingBufferHeight"),
	HX_CSTRING("get_drawingBufferWidth"),
	HX_CSTRING("get_version"),
	HX_CSTRING("lime_gl_active_texture"),
	HX_CSTRING("lime_gl_attach_shader"),
	HX_CSTRING("lime_gl_bind_attrib_location"),
	HX_CSTRING("lime_gl_bind_bitmap_data_texture"),
	HX_CSTRING("lime_gl_bind_buffer"),
	HX_CSTRING("lime_gl_bind_framebuffer"),
	HX_CSTRING("lime_gl_bind_renderbuffer"),
	HX_CSTRING("lime_gl_bind_texture"),
	HX_CSTRING("lime_gl_blend_color"),
	HX_CSTRING("lime_gl_blend_equation"),
	HX_CSTRING("lime_gl_blend_equation_separate"),
	HX_CSTRING("lime_gl_blend_func"),
	HX_CSTRING("lime_gl_blend_func_separate"),
	HX_CSTRING("lime_gl_buffer_data"),
	HX_CSTRING("lime_gl_buffer_sub_data"),
	HX_CSTRING("lime_gl_check_framebuffer_status"),
	HX_CSTRING("lime_gl_clear"),
	HX_CSTRING("lime_gl_clear_color"),
	HX_CSTRING("lime_gl_clear_depth"),
	HX_CSTRING("lime_gl_clear_stencil"),
	HX_CSTRING("lime_gl_color_mask"),
	HX_CSTRING("lime_gl_compile_shader"),
	HX_CSTRING("lime_gl_compressed_tex_image_2d"),
	HX_CSTRING("lime_gl_compressed_tex_sub_image_2d"),
	HX_CSTRING("lime_gl_copy_tex_image_2d"),
	HX_CSTRING("lime_gl_copy_tex_sub_image_2d"),
	HX_CSTRING("lime_gl_create_buffer"),
	HX_CSTRING("lime_gl_create_framebuffer"),
	HX_CSTRING("lime_gl_create_program"),
	HX_CSTRING("lime_gl_create_render_buffer"),
	HX_CSTRING("lime_gl_create_shader"),
	HX_CSTRING("lime_gl_create_texture"),
	HX_CSTRING("lime_gl_delete_buffer"),
	HX_CSTRING("lime_gl_delete_program"),
	HX_CSTRING("lime_gl_delete_shader"),
	HX_CSTRING("lime_gl_delete_texture"),
	HX_CSTRING("lime_gl_depth_func"),
	HX_CSTRING("lime_gl_depth_mask"),
	HX_CSTRING("lime_gl_depth_range"),
	HX_CSTRING("lime_gl_detach_shader"),
	HX_CSTRING("lime_gl_disable"),
	HX_CSTRING("lime_gl_disable_vertex_attrib_array"),
	HX_CSTRING("lime_gl_draw_arrays"),
	HX_CSTRING("lime_gl_draw_elements"),
	HX_CSTRING("lime_gl_enable"),
	HX_CSTRING("lime_gl_enable_vertex_attrib_array"),
	HX_CSTRING("lime_gl_finish"),
	HX_CSTRING("lime_gl_flush"),
	HX_CSTRING("lime_gl_framebuffer_renderbuffer"),
	HX_CSTRING("lime_gl_framebuffer_texture2D"),
	HX_CSTRING("lime_gl_front_face"),
	HX_CSTRING("lime_gl_generate_mipmap"),
	HX_CSTRING("lime_gl_get_active_attrib"),
	HX_CSTRING("lime_gl_get_active_uniform"),
	HX_CSTRING("lime_gl_get_attrib_location"),
	HX_CSTRING("lime_gl_get_buffer_paramerter"),
	HX_CSTRING("lime_gl_get_context_attributes"),
	HX_CSTRING("lime_gl_get_error"),
	HX_CSTRING("lime_gl_get_framebuffer_attachment_parameter"),
	HX_CSTRING("lime_gl_get_parameter"),
	HX_CSTRING("lime_gl_get_program_info_log"),
	HX_CSTRING("lime_gl_get_program_parameter"),
	HX_CSTRING("lime_gl_get_render_buffer_parameter"),
	HX_CSTRING("lime_gl_get_shader_info_log"),
	HX_CSTRING("lime_gl_get_shader_parameter"),
	HX_CSTRING("lime_gl_get_shader_precision_format"),
	HX_CSTRING("lime_gl_get_shader_source"),
	HX_CSTRING("lime_gl_get_supported_extensions"),
	HX_CSTRING("lime_gl_get_tex_parameter"),
	HX_CSTRING("lime_gl_get_uniform"),
	HX_CSTRING("lime_gl_get_uniform_location"),
	HX_CSTRING("lime_gl_get_vertex_attrib"),
	HX_CSTRING("lime_gl_get_vertex_attrib_offset"),
	HX_CSTRING("lime_gl_hint"),
	HX_CSTRING("lime_gl_is_buffer"),
	HX_CSTRING("lime_gl_is_enabled"),
	HX_CSTRING("lime_gl_is_framebuffer"),
	HX_CSTRING("lime_gl_is_program"),
	HX_CSTRING("lime_gl_is_renderbuffer"),
	HX_CSTRING("lime_gl_is_shader"),
	HX_CSTRING("lime_gl_is_texture"),
	HX_CSTRING("lime_gl_line_width"),
	HX_CSTRING("lime_gl_link_program"),
	HX_CSTRING("lime_gl_pixel_storei"),
	HX_CSTRING("lime_gl_polygon_offset"),
	HX_CSTRING("lime_gl_read_pixels"),
	HX_CSTRING("lime_gl_renderbuffer_storage"),
	HX_CSTRING("lime_gl_sample_coverage"),
	HX_CSTRING("lime_gl_scissor"),
	HX_CSTRING("lime_gl_shader_source"),
	HX_CSTRING("lime_gl_stencil_func"),
	HX_CSTRING("lime_gl_stencil_func_separate"),
	HX_CSTRING("lime_gl_stencil_mask"),
	HX_CSTRING("lime_gl_stencil_mask_separate"),
	HX_CSTRING("lime_gl_stencil_op"),
	HX_CSTRING("lime_gl_stencil_op_separate"),
	HX_CSTRING("lime_gl_tex_image_2d"),
	HX_CSTRING("lime_gl_tex_parameterf"),
	HX_CSTRING("lime_gl_tex_parameteri"),
	HX_CSTRING("lime_gl_tex_sub_image_2d"),
	HX_CSTRING("lime_gl_uniform1f"),
	HX_CSTRING("lime_gl_uniform1fv"),
	HX_CSTRING("lime_gl_uniform1i"),
	HX_CSTRING("lime_gl_uniform1iv"),
	HX_CSTRING("lime_gl_uniform2f"),
	HX_CSTRING("lime_gl_uniform2fv"),
	HX_CSTRING("lime_gl_uniform2i"),
	HX_CSTRING("lime_gl_uniform2iv"),
	HX_CSTRING("lime_gl_uniform3f"),
	HX_CSTRING("lime_gl_uniform3fv"),
	HX_CSTRING("lime_gl_uniform3i"),
	HX_CSTRING("lime_gl_uniform3iv"),
	HX_CSTRING("lime_gl_uniform4f"),
	HX_CSTRING("lime_gl_uniform4fv"),
	HX_CSTRING("lime_gl_uniform4i"),
	HX_CSTRING("lime_gl_uniform4iv"),
	HX_CSTRING("lime_gl_uniform_matrix"),
	HX_CSTRING("lime_gl_use_program"),
	HX_CSTRING("lime_gl_validate_program"),
	HX_CSTRING("lime_gl_version"),
	HX_CSTRING("lime_gl_vertex_attrib1f"),
	HX_CSTRING("lime_gl_vertex_attrib1fv"),
	HX_CSTRING("lime_gl_vertex_attrib2f"),
	HX_CSTRING("lime_gl_vertex_attrib2fv"),
	HX_CSTRING("lime_gl_vertex_attrib3f"),
	HX_CSTRING("lime_gl_vertex_attrib3fv"),
	HX_CSTRING("lime_gl_vertex_attrib4f"),
	HX_CSTRING("lime_gl_vertex_attrib4fv"),
	HX_CSTRING("lime_gl_vertex_attrib_pointer"),
	HX_CSTRING("lime_gl_viewport"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_obj::drawingBufferHeight,"drawingBufferHeight");
	HX_MARK_MEMBER_NAME(GL_obj::drawingBufferWidth,"drawingBufferWidth");
	HX_MARK_MEMBER_NAME(GL_obj::version,"version");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_active_texture,"lime_gl_active_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_attach_shader,"lime_gl_attach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_attrib_location,"lime_gl_bind_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_bitmap_data_texture,"lime_gl_bind_bitmap_data_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_buffer,"lime_gl_bind_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_framebuffer,"lime_gl_bind_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_renderbuffer,"lime_gl_bind_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_texture,"lime_gl_bind_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_color,"lime_gl_blend_color");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_equation,"lime_gl_blend_equation");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_equation_separate,"lime_gl_blend_equation_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_func,"lime_gl_blend_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_func_separate,"lime_gl_blend_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_buffer_data,"lime_gl_buffer_data");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_buffer_sub_data,"lime_gl_buffer_sub_data");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_check_framebuffer_status,"lime_gl_check_framebuffer_status");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear,"lime_gl_clear");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_color,"lime_gl_clear_color");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_depth,"lime_gl_clear_depth");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_stencil,"lime_gl_clear_stencil");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_color_mask,"lime_gl_color_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compile_shader,"lime_gl_compile_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_image_2d,"lime_gl_compressed_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_sub_image_2d,"lime_gl_compressed_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_copy_tex_image_2d,"lime_gl_copy_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_copy_tex_sub_image_2d,"lime_gl_copy_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_buffer,"lime_gl_create_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_framebuffer,"lime_gl_create_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_program,"lime_gl_create_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_render_buffer,"lime_gl_create_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_shader,"lime_gl_create_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_texture,"lime_gl_create_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_buffer,"lime_gl_delete_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_program,"lime_gl_delete_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_shader,"lime_gl_delete_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_texture,"lime_gl_delete_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_func,"lime_gl_depth_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_mask,"lime_gl_depth_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_range,"lime_gl_depth_range");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_detach_shader,"lime_gl_detach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_disable,"lime_gl_disable");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_disable_vertex_attrib_array,"lime_gl_disable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_draw_arrays,"lime_gl_draw_arrays");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_draw_elements,"lime_gl_draw_elements");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_enable,"lime_gl_enable");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_enable_vertex_attrib_array,"lime_gl_enable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_finish,"lime_gl_finish");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_flush,"lime_gl_flush");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_framebuffer_renderbuffer,"lime_gl_framebuffer_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_framebuffer_texture2D,"lime_gl_framebuffer_texture2D");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_front_face,"lime_gl_front_face");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_generate_mipmap,"lime_gl_generate_mipmap");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_active_attrib,"lime_gl_get_active_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_active_uniform,"lime_gl_get_active_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_attrib_location,"lime_gl_get_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_buffer_paramerter,"lime_gl_get_buffer_paramerter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_context_attributes,"lime_gl_get_context_attributes");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_error,"lime_gl_get_error");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_framebuffer_attachment_parameter,"lime_gl_get_framebuffer_attachment_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_parameter,"lime_gl_get_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_program_info_log,"lime_gl_get_program_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_program_parameter,"lime_gl_get_program_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_render_buffer_parameter,"lime_gl_get_render_buffer_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_info_log,"lime_gl_get_shader_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_parameter,"lime_gl_get_shader_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_precision_format,"lime_gl_get_shader_precision_format");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_source,"lime_gl_get_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_supported_extensions,"lime_gl_get_supported_extensions");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_tex_parameter,"lime_gl_get_tex_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_uniform,"lime_gl_get_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_uniform_location,"lime_gl_get_uniform_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib,"lime_gl_get_vertex_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib_offset,"lime_gl_get_vertex_attrib_offset");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_hint,"lime_gl_hint");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_buffer,"lime_gl_is_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_enabled,"lime_gl_is_enabled");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_framebuffer,"lime_gl_is_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_program,"lime_gl_is_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_renderbuffer,"lime_gl_is_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_shader,"lime_gl_is_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_texture,"lime_gl_is_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_line_width,"lime_gl_line_width");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_link_program,"lime_gl_link_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_pixel_storei,"lime_gl_pixel_storei");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_polygon_offset,"lime_gl_polygon_offset");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_read_pixels,"lime_gl_read_pixels");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_renderbuffer_storage,"lime_gl_renderbuffer_storage");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_sample_coverage,"lime_gl_sample_coverage");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_scissor,"lime_gl_scissor");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_shader_source,"lime_gl_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_func,"lime_gl_stencil_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_func_separate,"lime_gl_stencil_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_mask,"lime_gl_stencil_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_mask_separate,"lime_gl_stencil_mask_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_op,"lime_gl_stencil_op");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_op_separate,"lime_gl_stencil_op_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_image_2d,"lime_gl_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_parameterf,"lime_gl_tex_parameterf");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_parameteri,"lime_gl_tex_parameteri");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_sub_image_2d,"lime_gl_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1f,"lime_gl_uniform1f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1fv,"lime_gl_uniform1fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1i,"lime_gl_uniform1i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1iv,"lime_gl_uniform1iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2f,"lime_gl_uniform2f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2fv,"lime_gl_uniform2fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2i,"lime_gl_uniform2i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2iv,"lime_gl_uniform2iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3f,"lime_gl_uniform3f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3fv,"lime_gl_uniform3fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3i,"lime_gl_uniform3i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3iv,"lime_gl_uniform3iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4f,"lime_gl_uniform4f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4fv,"lime_gl_uniform4fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4i,"lime_gl_uniform4i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4iv,"lime_gl_uniform4iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform_matrix,"lime_gl_uniform_matrix");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_use_program,"lime_gl_use_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_validate_program,"lime_gl_validate_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_version,"lime_gl_version");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1f,"lime_gl_vertex_attrib1f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1fv,"lime_gl_vertex_attrib1fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2f,"lime_gl_vertex_attrib2f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2fv,"lime_gl_vertex_attrib2fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3f,"lime_gl_vertex_attrib3f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3fv,"lime_gl_vertex_attrib3fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4f,"lime_gl_vertex_attrib4f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4fv,"lime_gl_vertex_attrib4fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib_pointer,"lime_gl_vertex_attrib_pointer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_viewport,"lime_gl_viewport");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_obj::drawingBufferHeight,"drawingBufferHeight");
	HX_VISIT_MEMBER_NAME(GL_obj::drawingBufferWidth,"drawingBufferWidth");
	HX_VISIT_MEMBER_NAME(GL_obj::version,"version");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_active_texture,"lime_gl_active_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_attach_shader,"lime_gl_attach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_attrib_location,"lime_gl_bind_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_bitmap_data_texture,"lime_gl_bind_bitmap_data_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_buffer,"lime_gl_bind_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_framebuffer,"lime_gl_bind_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_renderbuffer,"lime_gl_bind_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_texture,"lime_gl_bind_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_color,"lime_gl_blend_color");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_equation,"lime_gl_blend_equation");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_equation_separate,"lime_gl_blend_equation_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_func,"lime_gl_blend_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_func_separate,"lime_gl_blend_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_buffer_data,"lime_gl_buffer_data");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_buffer_sub_data,"lime_gl_buffer_sub_data");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_check_framebuffer_status,"lime_gl_check_framebuffer_status");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear,"lime_gl_clear");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_color,"lime_gl_clear_color");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_depth,"lime_gl_clear_depth");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_stencil,"lime_gl_clear_stencil");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_color_mask,"lime_gl_color_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compile_shader,"lime_gl_compile_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_image_2d,"lime_gl_compressed_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_sub_image_2d,"lime_gl_compressed_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_copy_tex_image_2d,"lime_gl_copy_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_copy_tex_sub_image_2d,"lime_gl_copy_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_buffer,"lime_gl_create_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_framebuffer,"lime_gl_create_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_program,"lime_gl_create_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_render_buffer,"lime_gl_create_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_shader,"lime_gl_create_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_texture,"lime_gl_create_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_buffer,"lime_gl_delete_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_program,"lime_gl_delete_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_shader,"lime_gl_delete_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_texture,"lime_gl_delete_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_func,"lime_gl_depth_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_mask,"lime_gl_depth_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_range,"lime_gl_depth_range");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_detach_shader,"lime_gl_detach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_disable,"lime_gl_disable");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_disable_vertex_attrib_array,"lime_gl_disable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_draw_arrays,"lime_gl_draw_arrays");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_draw_elements,"lime_gl_draw_elements");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_enable,"lime_gl_enable");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_enable_vertex_attrib_array,"lime_gl_enable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_finish,"lime_gl_finish");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_flush,"lime_gl_flush");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_framebuffer_renderbuffer,"lime_gl_framebuffer_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_framebuffer_texture2D,"lime_gl_framebuffer_texture2D");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_front_face,"lime_gl_front_face");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_generate_mipmap,"lime_gl_generate_mipmap");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_active_attrib,"lime_gl_get_active_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_active_uniform,"lime_gl_get_active_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_attrib_location,"lime_gl_get_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_buffer_paramerter,"lime_gl_get_buffer_paramerter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_context_attributes,"lime_gl_get_context_attributes");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_error,"lime_gl_get_error");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_framebuffer_attachment_parameter,"lime_gl_get_framebuffer_attachment_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_parameter,"lime_gl_get_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_program_info_log,"lime_gl_get_program_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_program_parameter,"lime_gl_get_program_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_render_buffer_parameter,"lime_gl_get_render_buffer_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_info_log,"lime_gl_get_shader_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_parameter,"lime_gl_get_shader_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_precision_format,"lime_gl_get_shader_precision_format");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_source,"lime_gl_get_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_supported_extensions,"lime_gl_get_supported_extensions");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_tex_parameter,"lime_gl_get_tex_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_uniform,"lime_gl_get_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_uniform_location,"lime_gl_get_uniform_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib,"lime_gl_get_vertex_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib_offset,"lime_gl_get_vertex_attrib_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_hint,"lime_gl_hint");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_buffer,"lime_gl_is_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_enabled,"lime_gl_is_enabled");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_framebuffer,"lime_gl_is_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_program,"lime_gl_is_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_renderbuffer,"lime_gl_is_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_shader,"lime_gl_is_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_texture,"lime_gl_is_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_line_width,"lime_gl_line_width");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_link_program,"lime_gl_link_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_pixel_storei,"lime_gl_pixel_storei");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_polygon_offset,"lime_gl_polygon_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_read_pixels,"lime_gl_read_pixels");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_renderbuffer_storage,"lime_gl_renderbuffer_storage");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_sample_coverage,"lime_gl_sample_coverage");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_scissor,"lime_gl_scissor");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_shader_source,"lime_gl_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_func,"lime_gl_stencil_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_func_separate,"lime_gl_stencil_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_mask,"lime_gl_stencil_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_mask_separate,"lime_gl_stencil_mask_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_op,"lime_gl_stencil_op");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_op_separate,"lime_gl_stencil_op_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_image_2d,"lime_gl_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_parameterf,"lime_gl_tex_parameterf");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_parameteri,"lime_gl_tex_parameteri");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_sub_image_2d,"lime_gl_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1f,"lime_gl_uniform1f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1fv,"lime_gl_uniform1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1i,"lime_gl_uniform1i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1iv,"lime_gl_uniform1iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2f,"lime_gl_uniform2f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2fv,"lime_gl_uniform2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2i,"lime_gl_uniform2i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2iv,"lime_gl_uniform2iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3f,"lime_gl_uniform3f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3fv,"lime_gl_uniform3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3i,"lime_gl_uniform3i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3iv,"lime_gl_uniform3iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4f,"lime_gl_uniform4f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4fv,"lime_gl_uniform4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4i,"lime_gl_uniform4i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4iv,"lime_gl_uniform4iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform_matrix,"lime_gl_uniform_matrix");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_use_program,"lime_gl_use_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_validate_program,"lime_gl_validate_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_version,"lime_gl_version");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1f,"lime_gl_vertex_attrib1f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1fv,"lime_gl_vertex_attrib1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2f,"lime_gl_vertex_attrib2f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2fv,"lime_gl_vertex_attrib2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3f,"lime_gl_vertex_attrib3f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3fv,"lime_gl_vertex_attrib3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4f,"lime_gl_vertex_attrib4f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4fv,"lime_gl_vertex_attrib4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib_pointer,"lime_gl_vertex_attrib_pointer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_viewport,"lime_gl_viewport");
};

Class GL_obj::__mClass;

void GL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.gl.GL"), hx::TCanCast< GL_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GL_obj::__boot()
{
	lime_gl_active_texture= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_active_texture"),(int)1);
	lime_gl_attach_shader= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_attach_shader"),(int)2);
	lime_gl_bind_attrib_location= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_bind_attrib_location"),(int)3);
	lime_gl_bind_bitmap_data_texture= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_bind_bitmap_data_texture"),(int)1);
	lime_gl_bind_buffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_bind_buffer"),(int)2);
	lime_gl_bind_framebuffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_bind_framebuffer"),(int)2);
	lime_gl_bind_renderbuffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_bind_renderbuffer"),(int)2);
	lime_gl_bind_texture= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_bind_texture"),(int)2);
	lime_gl_blend_color= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_blend_color"),(int)4);
	lime_gl_blend_equation= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_blend_equation"),(int)1);
	lime_gl_blend_equation_separate= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_blend_equation_separate"),(int)2);
	lime_gl_blend_func= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_blend_func"),(int)2);
	lime_gl_blend_func_separate= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_blend_func_separate"),(int)4);
	lime_gl_buffer_data= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_buffer_data"),(int)5);
	lime_gl_buffer_sub_data= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_buffer_sub_data"),(int)5);
	lime_gl_check_framebuffer_status= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_check_framebuffer_status"),(int)1);
	lime_gl_clear= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_clear"),(int)1);
	lime_gl_clear_color= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_clear_color"),(int)4);
	lime_gl_clear_depth= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_clear_depth"),(int)1);
	lime_gl_clear_stencil= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_clear_stencil"),(int)1);
	lime_gl_color_mask= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_color_mask"),(int)4);
	lime_gl_compile_shader= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_compile_shader"),(int)1);
	lime_gl_compressed_tex_image_2d= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_compressed_tex_image_2d"),(int)-1);
	lime_gl_compressed_tex_sub_image_2d= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_compressed_tex_sub_image_2d"),(int)-1);
	lime_gl_copy_tex_image_2d= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_copy_tex_image_2d"),(int)-1);
	lime_gl_copy_tex_sub_image_2d= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_copy_tex_sub_image_2d"),(int)-1);
	lime_gl_create_buffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_create_buffer"),(int)0);
	lime_gl_create_framebuffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_create_framebuffer"),(int)0);
	lime_gl_create_program= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_create_program"),(int)0);
	lime_gl_create_render_buffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_create_render_buffer"),(int)0);
	lime_gl_create_shader= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_create_shader"),(int)1);
	lime_gl_create_texture= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_create_texture"),(int)0);
	lime_gl_delete_buffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_delete_buffer"),(int)1);
	lime_gl_delete_program= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_delete_program"),(int)1);
	lime_gl_delete_shader= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_delete_shader"),(int)1);
	lime_gl_delete_texture= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_delete_texture"),(int)1);
	lime_gl_depth_func= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_depth_func"),(int)1);
	lime_gl_depth_mask= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_depth_mask"),(int)1);
	lime_gl_depth_range= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_depth_range"),(int)2);
	lime_gl_detach_shader= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_detach_shader"),(int)2);
	lime_gl_disable= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_disable"),(int)1);
	lime_gl_disable_vertex_attrib_array= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_disable_vertex_attrib_array"),(int)1);
	lime_gl_draw_arrays= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_draw_arrays"),(int)3);
	lime_gl_draw_elements= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_draw_elements"),(int)4);
	lime_gl_enable= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_enable"),(int)1);
	lime_gl_enable_vertex_attrib_array= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_enable_vertex_attrib_array"),(int)1);
	lime_gl_finish= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_finish"),(int)0);
	lime_gl_flush= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_flush"),(int)0);
	lime_gl_framebuffer_renderbuffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_framebuffer_renderbuffer"),(int)4);
	lime_gl_framebuffer_texture2D= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_framebuffer_texture2D"),(int)5);
	lime_gl_front_face= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_front_face"),(int)1);
	lime_gl_generate_mipmap= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_generate_mipmap"),(int)1);
	lime_gl_get_active_attrib= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_active_attrib"),(int)2);
	lime_gl_get_active_uniform= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_active_uniform"),(int)2);
	lime_gl_get_attrib_location= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_attrib_location"),(int)2);
	lime_gl_get_buffer_paramerter= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_buffer_paramerter"),(int)2);
	lime_gl_get_context_attributes= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_context_attributes"),(int)0);
	lime_gl_get_error= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_error"),(int)0);
	lime_gl_get_framebuffer_attachment_parameter= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_framebuffer_attachment_parameter"),(int)3);
	lime_gl_get_parameter= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_parameter"),(int)1);
	lime_gl_get_program_info_log= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_program_info_log"),(int)1);
	lime_gl_get_program_parameter= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_program_parameter"),(int)2);
	lime_gl_get_render_buffer_parameter= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_render_buffer_parameter"),(int)2);
	lime_gl_get_shader_info_log= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_shader_info_log"),(int)1);
	lime_gl_get_shader_parameter= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_shader_parameter"),(int)2);
	lime_gl_get_shader_precision_format= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_shader_precision_format"),(int)2);
	lime_gl_get_shader_source= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_shader_source"),(int)1);
	lime_gl_get_supported_extensions= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_supported_extensions"),(int)1);
	lime_gl_get_tex_parameter= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_tex_parameter"),(int)2);
	lime_gl_get_uniform= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_uniform"),(int)2);
	lime_gl_get_uniform_location= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_uniform_location"),(int)2);
	lime_gl_get_vertex_attrib= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_vertex_attrib"),(int)2);
	lime_gl_get_vertex_attrib_offset= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_get_vertex_attrib_offset"),(int)2);
	lime_gl_hint= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_hint"),(int)2);
	lime_gl_is_buffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_is_buffer"),(int)1);
	lime_gl_is_enabled= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_is_enabled"),(int)1);
	lime_gl_is_framebuffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_is_framebuffer"),(int)1);
	lime_gl_is_program= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_is_program"),(int)1);
	lime_gl_is_renderbuffer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_is_renderbuffer"),(int)1);
	lime_gl_is_shader= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_is_shader"),(int)1);
	lime_gl_is_texture= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_is_texture"),(int)1);
	lime_gl_line_width= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_line_width"),(int)1);
	lime_gl_link_program= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_link_program"),(int)1);
	lime_gl_pixel_storei= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_pixel_storei"),(int)2);
	lime_gl_polygon_offset= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_polygon_offset"),(int)2);
	lime_gl_read_pixels= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_read_pixels"),(int)-1);
	lime_gl_renderbuffer_storage= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_renderbuffer_storage"),(int)4);
	lime_gl_sample_coverage= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_sample_coverage"),(int)2);
	lime_gl_scissor= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_scissor"),(int)4);
	lime_gl_shader_source= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_shader_source"),(int)2);
	lime_gl_stencil_func= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_stencil_func"),(int)3);
	lime_gl_stencil_func_separate= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_stencil_func_separate"),(int)4);
	lime_gl_stencil_mask= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_stencil_mask"),(int)1);
	lime_gl_stencil_mask_separate= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_stencil_mask_separate"),(int)2);
	lime_gl_stencil_op= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_stencil_op"),(int)3);
	lime_gl_stencil_op_separate= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_stencil_op_separate"),(int)4);
	lime_gl_tex_image_2d= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_tex_image_2d"),(int)-1);
	lime_gl_tex_parameterf= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_tex_parameterf"),(int)3);
	lime_gl_tex_parameteri= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_tex_parameteri"),(int)3);
	lime_gl_tex_sub_image_2d= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_tex_sub_image_2d"),(int)-1);
	lime_gl_uniform1f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform1f"),(int)2);
	lime_gl_uniform1fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform1fv"),(int)2);
	lime_gl_uniform1i= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform1i"),(int)2);
	lime_gl_uniform1iv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform1iv"),(int)2);
	lime_gl_uniform2f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform2f"),(int)3);
	lime_gl_uniform2fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform2fv"),(int)2);
	lime_gl_uniform2i= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform2i"),(int)3);
	lime_gl_uniform2iv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform2iv"),(int)2);
	lime_gl_uniform3f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform3f"),(int)4);
	lime_gl_uniform3fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform3fv"),(int)2);
	lime_gl_uniform3i= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform3i"),(int)4);
	lime_gl_uniform3iv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform3iv"),(int)2);
	lime_gl_uniform4f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform4f"),(int)5);
	lime_gl_uniform4fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform4fv"),(int)2);
	lime_gl_uniform4i= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform4i"),(int)5);
	lime_gl_uniform4iv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform4iv"),(int)2);
	lime_gl_uniform_matrix= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_uniform_matrix"),(int)4);
	lime_gl_use_program= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_use_program"),(int)1);
	lime_gl_validate_program= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_validate_program"),(int)1);
	lime_gl_version= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_version"),(int)0);
	lime_gl_vertex_attrib1f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib1f"),(int)2);
	lime_gl_vertex_attrib1fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib1fv"),(int)2);
	lime_gl_vertex_attrib2f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib2f"),(int)3);
	lime_gl_vertex_attrib2fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib2fv"),(int)2);
	lime_gl_vertex_attrib3f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib3f"),(int)4);
	lime_gl_vertex_attrib3fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib3fv"),(int)2);
	lime_gl_vertex_attrib4f= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib4f"),(int)5);
	lime_gl_vertex_attrib4fv= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib4fv"),(int)2);
	lime_gl_vertex_attrib_pointer= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_vertex_attrib_pointer"),(int)-1);
	lime_gl_viewport= ::openfl::gl::GL_obj::load(HX_CSTRING("lime_gl_viewport"),(int)4);
}

} // end namespace openfl
} // end namespace gl
