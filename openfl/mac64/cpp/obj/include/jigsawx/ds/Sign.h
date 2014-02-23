#ifndef INCLUDED_jigsawx_ds_Sign
#define INCLUDED_jigsawx_ds_Sign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(jigsawx,ds,Sign)
namespace jigsawx{
namespace ds{


class Sign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Sign_obj OBJ_;

	public:
		Sign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("jigsawx.ds.Sign"); }
		::String __ToString() const { return HX_CSTRING("Sign.") + tag; }

		static ::jigsawx::ds::Sign DOWN;
		static inline ::jigsawx::ds::Sign DOWN_dyn() { return DOWN; }
		static ::jigsawx::ds::Sign UP;
		static inline ::jigsawx::ds::Sign UP_dyn() { return UP; }
};

} // end namespace jigsawx
} // end namespace ds

#endif /* INCLUDED_jigsawx_ds_Sign */ 
