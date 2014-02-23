#ifndef INCLUDED_jigsawxtargets_hxopenfl_JigsawxOpenfl
#define INCLUDED_jigsawxtargets_hxopenfl_JigsawxOpenfl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Loader)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS1(jigsawx,JigsawPiece)
HX_DECLARE_CLASS1(jigsawx,Jigsawx)
HX_DECLARE_CLASS2(jigsawx,math,Vec2)
HX_DECLARE_CLASS2(jigsawxtargets,hxopenfl,JigsawxOpenfl)
namespace jigsawxtargets{
namespace hxopenfl{


class HXCPP_CLASS_ATTRIBUTES  JigsawxOpenfl_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef JigsawxOpenfl_obj OBJ_;
		JigsawxOpenfl_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< JigsawxOpenfl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JigsawxOpenfl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JigsawxOpenfl"); }

		virtual Void drawEdge( ::flash::display::Graphics surface,::jigsawx::JigsawPiece jig,int c);
		Dynamic drawEdge_dyn();

		virtual Void createVisuals( );
		Dynamic createVisuals_dyn();

		virtual Void copyAcross( ::flash::events::Event e);
		Dynamic copyAcross_dyn();

		virtual Void tableClothDisplay( );
		Dynamic tableClothDisplay_dyn();

		virtual Void allTilesStop( ::flash::events::MouseEvent e);
		Dynamic allTilesStop_dyn();

		::flash::display::Loader loader;
		::flash::display::Sprite spCloth;
		::flash::display::Sprite current;
		Array< ::Dynamic > offset;
		Array< ::Dynamic > surfaces;
		Array< ::Dynamic > tiles;
		int depth;
		::haxe::Timer atimer;
		int count;
		int cols;
		int rows;
		Float hi;
		Float wid;
		::flash::display::Sprite videoSource;
		::jigsawx::Jigsawx jigsawx;
		::flash::display::Sprite hit;
		::flash::display::Sprite holder;
};

} // end namespace jigsawxtargets
} // end namespace hxopenfl

#endif /* INCLUDED_jigsawxtargets_hxopenfl_JigsawxOpenfl */ 
