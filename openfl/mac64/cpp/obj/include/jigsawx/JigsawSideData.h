#ifndef INCLUDED_jigsawx_JigsawSideData
#define INCLUDED_jigsawx_JigsawSideData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jigsawx,Bubble)
HX_DECLARE_CLASS1(jigsawx,JigsawSideData)
namespace jigsawx{


class HXCPP_CLASS_ATTRIBUTES  JigsawSideData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JigsawSideData_obj OBJ_;
		JigsawSideData_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< JigsawSideData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JigsawSideData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JigsawSideData"); }

		Float rightHi;
		Float rightWide;
		Float centreHi;
		Float centreWide;
		Float leftHi;
		Float leftWide;
		Float inout;
		Float squew;
		::jigsawx::Bubble bubble;
		static Dynamic halfPieceData( );
		static Dynamic halfPieceData_dyn();

		static ::jigsawx::Bubble createBubble( );
		static Dynamic createBubble_dyn();

		static ::jigsawx::Bubble swapBubble( ::jigsawx::Bubble bubble);
		static Dynamic swapBubble_dyn();

		static ::jigsawx::JigsawSideData reflect( ::jigsawx::JigsawSideData j);
		static Dynamic reflect_dyn();

		static ::jigsawx::JigsawSideData createSimple( );
		static Dynamic createSimple_dyn();

		static ::jigsawx::JigsawSideData create( );
		static Dynamic create_dyn();

};

} // end namespace jigsawx

#endif /* INCLUDED_jigsawx_JigsawSideData */ 
