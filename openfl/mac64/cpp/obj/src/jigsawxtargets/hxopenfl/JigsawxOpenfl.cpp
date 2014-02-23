#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_Loader
#include <flash/display/Loader.h>
#endif
#ifndef INCLUDED_flash_display_LoaderInfo
#include <flash/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_system_LoaderContext
#include <flash/system/LoaderContext.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jigsawx_JigsawPiece
#include <jigsawx/JigsawPiece.h>
#endif
#ifndef INCLUDED_jigsawx_Jigsawx
#include <jigsawx/Jigsawx.h>
#endif
#ifndef INCLUDED_jigsawx_math_Vec2
#include <jigsawx/math/Vec2.h>
#endif
#ifndef INCLUDED_jigsawxtargets_hxopenfl_JigsawxOpenfl
#include <jigsawxtargets/hxopenfl/JigsawxOpenfl.h>
#endif
namespace jigsawxtargets{
namespace hxopenfl{

Void JigsawxOpenfl_obj::__construct()
{
HX_STACK_PUSH("JigsawxOpenfl::new","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",85);
{
	HX_STACK_LINE(86)
	super::__construct();
	HX_STACK_LINE(87)
	this->current = ::flash::Lib_obj::get_current();
	HX_STACK_LINE(88)
	this->holder = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(89)
	this->holder->set_x((int)0);
	HX_STACK_LINE(90)
	this->holder->set_y((int)0);
	HX_STACK_LINE(92)
	this->current->addChild(this->holder);
	HX_STACK_LINE(93)
	this->count = (int)0;
	HX_STACK_LINE(94)
	this->rows = (int)7;
	HX_STACK_LINE(95)
	this->cols = (int)10;
	HX_STACK_LINE(96)
	this->wid = (int)45;
	HX_STACK_LINE(97)
	this->hi = (int)45;
	HX_STACK_LINE(99)
	this->createVisuals();
	HX_STACK_LINE(100)
	this->tableClothDisplay();
	HX_STACK_LINE(101)
	::flash::Lib_obj::get_current()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->allTilesStop_dyn(),null(),null(),null());
}
;
	return null();
}

JigsawxOpenfl_obj::~JigsawxOpenfl_obj() { }

Dynamic JigsawxOpenfl_obj::__CreateEmpty() { return  new JigsawxOpenfl_obj; }
hx::ObjectPtr< JigsawxOpenfl_obj > JigsawxOpenfl_obj::__new()
{  hx::ObjectPtr< JigsawxOpenfl_obj > result = new JigsawxOpenfl_obj();
	result->__construct();
	return result;}

Dynamic JigsawxOpenfl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JigsawxOpenfl_obj > result = new JigsawxOpenfl_obj();
	result->__construct();
	return result;}

Void JigsawxOpenfl_obj::drawEdge( ::flash::display::Graphics surface,::jigsawx::JigsawPiece jig,int c){
{
		HX_STACK_PUSH("JigsawxOpenfl::drawEdge","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(surface,"surface");
		HX_STACK_ARG(jig,"jig");
		HX_STACK_ARG(c,"c");
		HX_STACK_LINE(294)
		surface->lineStyle((int)1,c,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(295)
		surface->beginFill(c,(int)1);
		HX_STACK_LINE(296)
		::jigsawx::math::Vec2 first = jig->getFirst();		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(298)
		surface->moveTo(first->x,first->y);
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = jig->getPoints();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(300)
			while(((_g < _g1->length))){
				HX_STACK_LINE(300)
				::jigsawx::math::Vec2 v = _g1->__get(_g).StaticCast< ::jigsawx::math::Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(300)
				++(_g);
				HX_STACK_LINE(300)
				surface->lineTo(v->x,v->y);
			}
		}
		HX_STACK_LINE(302)
		surface->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(JigsawxOpenfl_obj,drawEdge,(void))

Void JigsawxOpenfl_obj::createVisuals( ){
{
		HX_STACK_PUSH("JigsawxOpenfl::createVisuals","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_LINE(171)
		::flash::display::Sprite sp;		HX_STACK_VAR(sp,"sp");
		HX_STACK_LINE(172)
		::flash::display::Sprite maskSp;		HX_STACK_VAR(maskSp,"maskSp");
		HX_STACK_LINE(173)
		::flash::display::Sprite tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(175)
		::flash::display::Graphics surface;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(176)
		this->tiles = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(177)
		this->surfaces = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(178)
		this->offset = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(179)
		::jigsawx::math::Vec2 first;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(181)
		this->jigsawx = ::jigsawx::Jigsawx_obj::__new(this->wid,this->hi,this->rows,this->cols);
		HX_STACK_LINE(182)
		this->depth = (int)0;
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->jigsawx->jigs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			while(((_g < _g1->length))){
				HX_STACK_LINE(184)
				Array< ::Dynamic > jig = Array_obj< ::Dynamic >::__new().Add(_g1->__get(_g).StaticCast< ::jigsawx::JigsawPiece >());		HX_STACK_VAR(jig,"jig");
				HX_STACK_LINE(184)
				++(_g);
				HX_STACK_LINE(189)
				sp = ::flash::display::Sprite_obj::__new();
				HX_STACK_LINE(190)
				this->tiles->push(sp);
				HX_STACK_LINE(191)
				this->holder->addChild(sp);
				HX_STACK_LINE(192)
				tile = ::flash::display::Sprite_obj::__new();
				HX_STACK_LINE(193)
				sp->addChild(tile);
				HX_STACK_LINE(197)
				sp->set_x(jig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->xy->x);
				HX_STACK_LINE(198)
				sp->set_y(jig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->xy->y);
				HX_STACK_LINE(199)
				maskSp = ::flash::display::Sprite_obj::__new();
				HX_STACK_LINE(200)
				tile->set_mask(maskSp);
				HX_STACK_LINE(201)
				maskSp->set_x((Float(-(this->wid)) / Float((int)2)));
				HX_STACK_LINE(202)
				maskSp->set_y((Float(-(this->hi)) / Float((int)2)));
				HX_STACK_LINE(203)
				surface = maskSp->get_graphics();
				HX_STACK_LINE(205)
				sp->addChild(maskSp);
				HX_STACK_LINE(208)
				Array< ::Dynamic > tempSp = Array_obj< ::Dynamic >::__new().Add(sp);		HX_STACK_VAR(tempSp,"tempSp");
				HX_STACK_LINE(209)
				Array< Float > wid_ = Array_obj< Float >::__new().Add((Float(this->wid) / Float((int)2)));		HX_STACK_VAR(wid_,"wid_");
				HX_STACK_LINE(210)
				Array< Float > hi_ = Array_obj< Float >::__new().Add((Float(this->hi) / Float((int)2)));		HX_STACK_VAR(hi_,"hi_");
				HX_STACK_LINE(211)
				Array< ::Dynamic > ajig = Array_obj< ::Dynamic >::__new().Add(jig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >());		HX_STACK_VAR(ajig,"ajig");
				HX_STACK_LINE(214)
				if ((((::Math_obj::random() * (int)5) > (int)2))){
					HX_STACK_LINE(217)
					sp->set_x(((int)900 - (::Math_obj::random() * (int)400)));
					HX_STACK_LINE(218)
					sp->set_y(((int)400 - (::Math_obj::random() * (int)400)));
					HX_STACK_LINE(219)
					sp->set_alpha(0.7);
					HX_STACK_LINE(221)
					this->drawEdge(surface,jig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >(),(int)255);

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,tempSp)
					Void run(::flash::events::MouseEvent e){
						HX_STACK_PUSH("*::_Function_4_1","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",224);
						HX_STACK_ARG(e,"e");
						{
							HX_STACK_LINE(226)
							tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->get_parent()->addChild(tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >());
							HX_STACK_LINE(227)
							tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->startDrag(null(),null());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(223)
					sp->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN, Dynamic(new _Function_4_1(tempSp)),null(),null(),null());

					HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_4_2,Array< Float >,wid_,Array< Float >,hi_,Array< ::Dynamic >,tempSp,Array< ::Dynamic >,jig,Array< ::Dynamic >,ajig)
					Void run(::flash::events::MouseEvent e){
						HX_STACK_PUSH("*::_Function_4_2","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",233);
						HX_STACK_ARG(e,"e");
						{
							HX_STACK_LINE(235)
							if (((bool((::Math_obj::abs((ajig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->xy->x - tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->get_x())) < (Float(((wid_->__get((int)0) + hi_->__get((int)0)))) / Float((int)4)))) && bool((::Math_obj::abs((ajig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->xy->y - tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->get_y())) < (Float(((wid_->__get((int)0) + hi_->__get((int)0)))) / Float((int)4))))))){
								HX_STACK_LINE(238)
								tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->set_x(ajig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->xy->x);
								HX_STACK_LINE(239)
								tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->set_y(ajig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->xy->y);
								HX_STACK_LINE(240)
								tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->set_alpha((int)1);
								HX_STACK_LINE(241)
								jig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->enabled = false;
								HX_STACK_LINE(242)
								tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->set_mouseEnabled(false);
								HX_STACK_LINE(243)
								tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->set_mouseChildren(false);
								HX_STACK_LINE(244)
								tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->buttonMode = false;
								HX_STACK_LINE(245)
								tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->useHandCursor = false;
							}
							HX_STACK_LINE(249)
							tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->stopDrag();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(232)
					sp->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP, Dynamic(new _Function_4_2(wid_,hi_,tempSp,jig,ajig)),null(),null(),null());
				}
				else{
					HX_STACK_LINE(257)
					maskSp->set_alpha((int)0);
					HX_STACK_LINE(258)
					jig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >()->enabled = false;
					HX_STACK_LINE(259)
					tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->set_mouseEnabled(true);
					HX_STACK_LINE(260)
					tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->set_mouseChildren(true);
					HX_STACK_LINE(261)
					tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->buttonMode = true;
					HX_STACK_LINE(262)
					tempSp->__get((int)0).StaticCast< ::flash::display::Sprite >()->useHandCursor = true;
					HX_STACK_LINE(264)
					this->drawEdge(surface,jig->__get((int)0).StaticCast< ::jigsawx::JigsawPiece >(),(int)0);
				}
				HX_STACK_LINE(269)
				::flash::geom::Rectangle bounds = maskSp->getBounds(sp);		HX_STACK_VAR(bounds,"bounds");
				HX_STACK_LINE(270)
				tile->set_x(bounds->x);
				HX_STACK_LINE(271)
				tile->set_y(bounds->y);
				HX_STACK_LINE(273)
				int tileW = ::Std_obj::_int(maskSp->get_width());		HX_STACK_VAR(tileW,"tileW");
				HX_STACK_LINE(274)
				int tileH = ::Std_obj::_int(maskSp->get_height());		HX_STACK_VAR(tileH,"tileH");
				HX_STACK_LINE(276)
				::flash::display::BitmapData bd = ::flash::display::BitmapData_obj::__new(tileW,tileH,true,(int)-1,null());		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(277)
				::flash::display::Bitmap bm = ::flash::display::Bitmap_obj::__new(bd,::flash::display::PixelSnapping_obj::ALWAYS,true);		HX_STACK_VAR(bm,"bm");
				HX_STACK_LINE(280)
				bd->fillRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,tileW,tileH),(int)255);
				HX_STACK_LINE(282)
				tile->addChild(bm);
				HX_STACK_LINE(283)
				this->surfaces->push(bm);
				HX_STACK_LINE(284)
				this->offset->push(::jigsawx::math::Vec2_obj::__new(bounds->x,bounds->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JigsawxOpenfl_obj,createVisuals,(void))

Void JigsawxOpenfl_obj::copyAcross( ::flash::events::Event e){
{
		HX_STACK_PUSH("JigsawxOpenfl::copyAcross","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",132);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(133)
		(this->count)++;
		HX_STACK_LINE(134)
		::flash::display::Bitmap bmp = this->loader->content;		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(136)
		this->spCloth->addChild(::flash::display::Bitmap_obj::__new(bmp->bitmapData,null(),null()));
		HX_STACK_LINE(140)
		::jigsawx::math::Vec2 off;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(141)
		::jigsawx::math::Vec2 xy = ::jigsawx::math::Vec2_obj::__new((int)0,(int)0);		HX_STACK_VAR(xy,"xy");
		HX_STACK_LINE(142)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(144)
			while(((_g1 < _g))){
				HX_STACK_LINE(144)
				int row = (_g1)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(147)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->cols;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(147)
					while(((_g3 < _g2))){
						HX_STACK_LINE(147)
						int col = (_g3)++;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(150)
						off = this->offset->__get(count).StaticCast< ::jigsawx::math::Vec2 >();
						HX_STACK_LINE(153)
						this->surfaces->__get(count).StaticCast< ::flash::display::Bitmap >()->bitmapData->draw(this->spCloth,::flash::geom::Matrix_obj::__new(1.2,(int)0,(int)0,1.2,(-(xy->x) - off->x),(-(xy->y) - off->y)),null(),null(),null(),null());
						HX_STACK_LINE(155)
						hx::AddEq(xy->x,this->wid);
						HX_STACK_LINE(156)
						(count)++;
					}
				}
				HX_STACK_LINE(160)
				xy->x = (int)0;
				HX_STACK_LINE(161)
				hx::AddEq(xy->y,this->hi);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JigsawxOpenfl_obj,copyAcross,(void))

Void JigsawxOpenfl_obj::tableClothDisplay( ){
{
		HX_STACK_PUSH("JigsawxOpenfl::tableClothDisplay","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_LINE(118)
		this->spCloth = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(119)
		this->loader = ::flash::display::Loader_obj::__new();
		HX_STACK_LINE(121)
		this->loader->contentLoaderInfo->addEventListener(::flash::events::Event_obj::COMPLETE,this->copyAcross_dyn(),null(),null(),null());
		HX_STACK_LINE(122)
		this->loader->load(::flash::net::URLRequest_obj::__new(HX_CSTRING("tablecloth.jpg")),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JigsawxOpenfl_obj,tableClothDisplay,(void))

Void JigsawxOpenfl_obj::allTilesStop( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("JigsawxOpenfl::allTilesStop","jigsawxtargets/hxopenfl/JigsawxOpenfl.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(110)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->tiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		while(((_g < _g1->length))){
			HX_STACK_LINE(110)
			::flash::display::Sprite all = _g1->__get(_g).StaticCast< ::flash::display::Sprite >();		HX_STACK_VAR(all,"all");
			HX_STACK_LINE(110)
			++(_g);
			HX_STACK_LINE(110)
			all->stopDrag();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JigsawxOpenfl_obj,allTilesStop,(void))


JigsawxOpenfl_obj::JigsawxOpenfl_obj()
{
}

void JigsawxOpenfl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JigsawxOpenfl);
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(spCloth,"spCloth");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(surfaces,"surfaces");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(atimer,"atimer");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(cols,"cols");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(hi,"hi");
	HX_MARK_MEMBER_NAME(wid,"wid");
	HX_MARK_MEMBER_NAME(videoSource,"videoSource");
	HX_MARK_MEMBER_NAME(jigsawx,"jigsawx");
	HX_MARK_MEMBER_NAME(hit,"hit");
	HX_MARK_MEMBER_NAME(holder,"holder");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JigsawxOpenfl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(spCloth,"spCloth");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(surfaces,"surfaces");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(atimer,"atimer");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(cols,"cols");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(hi,"hi");
	HX_VISIT_MEMBER_NAME(wid,"wid");
	HX_VISIT_MEMBER_NAME(videoSource,"videoSource");
	HX_VISIT_MEMBER_NAME(jigsawx,"jigsawx");
	HX_VISIT_MEMBER_NAME(hit,"hit");
	HX_VISIT_MEMBER_NAME(holder,"holder");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic JigsawxOpenfl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"hi") ) { return hi; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"wid") ) { return wid; }
		if (HX_FIELD_EQ(inName,"hit") ) { return hit; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cols") ) { return cols; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"atimer") ) { return atimer; }
		if (HX_FIELD_EQ(inName,"holder") ) { return holder; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spCloth") ) { return spCloth; }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"jigsawx") ) { return jigsawx; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawEdge") ) { return drawEdge_dyn(); }
		if (HX_FIELD_EQ(inName,"surfaces") ) { return surfaces; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyAcross") ) { return copyAcross_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoSource") ) { return videoSource; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allTilesStop") ) { return allTilesStop_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createVisuals") ) { return createVisuals_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tableClothDisplay") ) { return tableClothDisplay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JigsawxOpenfl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"hi") ) { hi=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"wid") ) { wid=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hit") ) { hit=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cols") ) { cols=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::flash::display::Loader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atimer") ) { atimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holder") ) { holder=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spCloth") ) { spCloth=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jigsawx") ) { jigsawx=inValue.Cast< ::jigsawx::Jigsawx >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"surfaces") ) { surfaces=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoSource") ) { videoSource=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JigsawxOpenfl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("loader"));
	outFields->push(HX_CSTRING("spCloth"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("surfaces"));
	outFields->push(HX_CSTRING("tiles"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("atimer"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("cols"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("hi"));
	outFields->push(HX_CSTRING("wid"));
	outFields->push(HX_CSTRING("videoSource"));
	outFields->push(HX_CSTRING("jigsawx"));
	outFields->push(HX_CSTRING("hit"));
	outFields->push(HX_CSTRING("holder"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawEdge"),
	HX_CSTRING("createVisuals"),
	HX_CSTRING("copyAcross"),
	HX_CSTRING("tableClothDisplay"),
	HX_CSTRING("allTilesStop"),
	HX_CSTRING("loader"),
	HX_CSTRING("spCloth"),
	HX_CSTRING("current"),
	HX_CSTRING("offset"),
	HX_CSTRING("surfaces"),
	HX_CSTRING("tiles"),
	HX_CSTRING("depth"),
	HX_CSTRING("atimer"),
	HX_CSTRING("count"),
	HX_CSTRING("cols"),
	HX_CSTRING("rows"),
	HX_CSTRING("hi"),
	HX_CSTRING("wid"),
	HX_CSTRING("videoSource"),
	HX_CSTRING("jigsawx"),
	HX_CSTRING("hit"),
	HX_CSTRING("holder"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JigsawxOpenfl_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JigsawxOpenfl_obj::__mClass,"__mClass");
};

Class JigsawxOpenfl_obj::__mClass;

void JigsawxOpenfl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawxtargets.hxopenfl.JigsawxOpenfl"), hx::TCanCast< JigsawxOpenfl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JigsawxOpenfl_obj::__boot()
{
}

} // end namespace jigsawxtargets
} // end namespace hxopenfl
