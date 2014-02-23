#ifndef INCLUDED_jigsawx_math_Vec2
#define INCLUDED_jigsawx_math_Vec2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(jigsawx,math,Vec2)
namespace jigsawx{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vec2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vec2_obj OBJ_;
		Vec2_obj();
		Void __construct(hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_);

	public:
		static hx::ObjectPtr< Vec2_obj > __new(hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vec2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vec2"); }

		Float y;
		Float x;
};

} // end namespace jigsawx
} // end namespace math

#endif /* INCLUDED_jigsawx_math_Vec2 */ 
