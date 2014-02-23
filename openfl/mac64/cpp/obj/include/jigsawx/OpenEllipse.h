#ifndef INCLUDED_jigsawx_OpenEllipse
#define INCLUDED_jigsawx_OpenEllipse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jigsawx,OpenEllipse)
HX_DECLARE_CLASS2(jigsawx,ds,CircleIter)
HX_DECLARE_CLASS2(jigsawx,math,Vec2)
namespace jigsawx{


class HXCPP_CLASS_ATTRIBUTES  OpenEllipse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpenEllipse_obj OBJ_;
		OpenEllipse_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< OpenEllipse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OpenEllipse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpenEllipse"); }

		virtual ::jigsawx::math::Vec2 createPoint( ::jigsawx::math::Vec2 centre,::jigsawx::math::Vec2 dimensions,Float theta);
		Dynamic createPoint_dyn();

		virtual Array< ::Dynamic > getRenderList( );
		Dynamic getRenderList_dyn();

		virtual Void setUp( );
		Dynamic setUp_dyn();

		virtual Float pointDistance( ::jigsawx::math::Vec2 A,::jigsawx::math::Vec2 B);
		Dynamic pointDistance_dyn();

		virtual Float getFinishRadius( );
		Dynamic getFinishRadius_dyn();

		virtual Float getBeginRadius( );
		Dynamic getBeginRadius_dyn();

		virtual ::jigsawx::math::Vec2 getFinish( );
		Dynamic getFinish_dyn();

		virtual ::jigsawx::math::Vec2 getBegin( );
		Dynamic getBegin_dyn();

		Array< ::Dynamic > _points;
		::jigsawx::ds::CircleIter circleIter;
		::jigsawx::math::Vec2 dimensions;
		::jigsawx::math::Vec2 centre;
		Float stepAngle;
		Float finishAngle;
		Float beginAngle;
		Float rotation;
};

} // end namespace jigsawx

#endif /* INCLUDED_jigsawx_OpenEllipse */ 
