#ifndef INCLUDED_jigsawx_JigsawPiece
#define INCLUDED_jigsawx_JigsawPiece

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jigsawx,Compass)
HX_DECLARE_CLASS1(jigsawx,JigsawPiece)
HX_DECLARE_CLASS1(jigsawx,JigsawSideData)
HX_DECLARE_CLASS1(jigsawx,OpenEllipse)
HX_DECLARE_CLASS2(jigsawx,math,Vec2)
namespace jigsawx{


class HXCPP_CLASS_ATTRIBUTES  JigsawPiece_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JigsawPiece_obj OBJ_;
		JigsawPiece_obj();
		Void __construct(::jigsawx::math::Vec2 xy_,int row,int col,::jigsawx::math::Vec2 lt,::jigsawx::math::Vec2 rt,::jigsawx::math::Vec2 rb,::jigsawx::math::Vec2 lb,Dynamic sideData_);

	public:
		static hx::ObjectPtr< JigsawPiece_obj > __new(::jigsawx::math::Vec2 xy_,int row,int col,::jigsawx::math::Vec2 lt,::jigsawx::math::Vec2 rt,::jigsawx::math::Vec2 rb,::jigsawx::math::Vec2 lb,Dynamic sideData_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JigsawPiece_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JigsawPiece"); }

		virtual Void drawSide( Float dx,Float dy,::jigsawx::JigsawSideData sideData,::jigsawx::Compass compass);
		Dynamic drawSide_dyn();

		virtual Void createHoriSide( ::jigsawx::math::Vec2 A,::jigsawx::math::Vec2 B,::jigsawx::JigsawSideData side,::jigsawx::Compass compass);
		Dynamic createHoriSide_dyn();

		virtual Void createVertSide( ::jigsawx::math::Vec2 A,::jigsawx::math::Vec2 B,::jigsawx::JigsawSideData side,::jigsawx::Compass compass);
		Dynamic createVertSide_dyn();

		virtual ::jigsawx::math::Vec2 getFirst( );
		Dynamic getFirst_dyn();

		virtual Array< ::Dynamic > getPoints( );
		Dynamic getPoints_dyn();

		int col;
		int row;
		::jigsawx::math::Vec2 xy;
		::jigsawx::math::Vec2 first;
		Dynamic sideData;
		Array< ::Dynamic > points;
		::jigsawx::math::Vec2 centre;
		Float stepAngle;
		::jigsawx::OpenEllipse curveBuilder;
		bool enabled;
};

} // end namespace jigsawx

#endif /* INCLUDED_jigsawx_JigsawPiece */ 
