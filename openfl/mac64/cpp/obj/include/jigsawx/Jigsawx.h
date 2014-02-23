#ifndef INCLUDED_jigsawx_Jigsawx
#define INCLUDED_jigsawx_Jigsawx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jigsawx,JigsawPiece)
HX_DECLARE_CLASS1(jigsawx,Jigsawx)
namespace jigsawx{


class HXCPP_CLASS_ATTRIBUTES  Jigsawx_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Jigsawx_obj OBJ_;
		Jigsawx_obj();
		Void __construct(Float dx_,Float dy_,int rows_,int cols_);

	public:
		static hx::ObjectPtr< Jigsawx_obj > __new(Float dx_,Float dy_,int rows_,int cols_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Jigsawx_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Jigsawx"); }

		int length;
		Float dy;
		Float dx;
		Float lb;
		Float rb;
		Float rt;
		Float lt;
		Dynamic sides;
		Array< ::Dynamic > jigs;
		Array< ::Dynamic > pieces;
		int cols;
		int rows;
};

} // end namespace jigsawx

#endif /* INCLUDED_jigsawx_Jigsawx */ 
