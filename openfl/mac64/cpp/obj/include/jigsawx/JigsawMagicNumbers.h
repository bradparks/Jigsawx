#ifndef INCLUDED_jigsawx_JigsawMagicNumbers
#define INCLUDED_jigsawx_JigsawMagicNumbers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jigsawx,JigsawMagicNumbers)
namespace jigsawx{


class HXCPP_CLASS_ATTRIBUTES  JigsawMagicNumbers_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JigsawMagicNumbers_obj OBJ_;
		JigsawMagicNumbers_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< JigsawMagicNumbers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JigsawMagicNumbers_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JigsawMagicNumbers"); }

};

} // end namespace jigsawx

#endif /* INCLUDED_jigsawx_JigsawMagicNumbers */ 
