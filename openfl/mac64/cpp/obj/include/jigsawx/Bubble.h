#ifndef INCLUDED_jigsawx_Bubble
#define INCLUDED_jigsawx_Bubble

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jigsawx,Bubble)
namespace jigsawx{


class Bubble_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Bubble_obj OBJ_;

	public:
		Bubble_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("jigsawx.Bubble"); }
		::String __ToString() const { return HX_CSTRING("Bubble.") + tag; }

		static ::jigsawx::Bubble IN;
		static inline ::jigsawx::Bubble IN_dyn() { return IN; }
		static ::jigsawx::Bubble OUT;
		static inline ::jigsawx::Bubble OUT_dyn() { return OUT; }
};

} // end namespace jigsawx

#endif /* INCLUDED_jigsawx_Bubble */ 
