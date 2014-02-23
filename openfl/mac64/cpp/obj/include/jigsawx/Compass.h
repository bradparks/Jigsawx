#ifndef INCLUDED_jigsawx_Compass
#define INCLUDED_jigsawx_Compass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jigsawx,Compass)
namespace jigsawx{


class Compass_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Compass_obj OBJ_;

	public:
		Compass_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("jigsawx.Compass"); }
		::String __ToString() const { return HX_CSTRING("Compass.") + tag; }

		static ::jigsawx::Compass EAST;
		static inline ::jigsawx::Compass EAST_dyn() { return EAST; }
		static ::jigsawx::Compass NORTH;
		static inline ::jigsawx::Compass NORTH_dyn() { return NORTH; }
		static ::jigsawx::Compass SOUTH;
		static inline ::jigsawx::Compass SOUTH_dyn() { return SOUTH; }
		static ::jigsawx::Compass WEST;
		static inline ::jigsawx::Compass WEST_dyn() { return WEST; }
};

} // end namespace jigsawx

#endif /* INCLUDED_jigsawx_Compass */ 
