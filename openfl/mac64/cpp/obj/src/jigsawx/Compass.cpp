#include <hxcpp.h>

#ifndef INCLUDED_jigsawx_Compass
#include <jigsawx/Compass.h>
#endif
namespace jigsawx{

::jigsawx::Compass Compass_obj::EAST;

::jigsawx::Compass Compass_obj::NORTH;

::jigsawx::Compass Compass_obj::SOUTH;

::jigsawx::Compass Compass_obj::WEST;

HX_DEFINE_CREATE_ENUM(Compass_obj)

int Compass_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("EAST")) return 2;
	if (inName==HX_CSTRING("NORTH")) return 0;
	if (inName==HX_CSTRING("SOUTH")) return 1;
	if (inName==HX_CSTRING("WEST")) return 3;
	return super::__FindIndex(inName);
}

int Compass_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("EAST")) return 0;
	if (inName==HX_CSTRING("NORTH")) return 0;
	if (inName==HX_CSTRING("SOUTH")) return 0;
	if (inName==HX_CSTRING("WEST")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Compass_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("EAST")) return EAST;
	if (inName==HX_CSTRING("NORTH")) return NORTH;
	if (inName==HX_CSTRING("SOUTH")) return SOUTH;
	if (inName==HX_CSTRING("WEST")) return WEST;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NORTH"),
	HX_CSTRING("SOUTH"),
	HX_CSTRING("EAST"),
	HX_CSTRING("WEST"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Compass_obj::EAST,"EAST");
	HX_MARK_MEMBER_NAME(Compass_obj::NORTH,"NORTH");
	HX_MARK_MEMBER_NAME(Compass_obj::SOUTH,"SOUTH");
	HX_MARK_MEMBER_NAME(Compass_obj::WEST,"WEST");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compass_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Compass_obj::EAST,"EAST");
	HX_VISIT_MEMBER_NAME(Compass_obj::NORTH,"NORTH");
	HX_VISIT_MEMBER_NAME(Compass_obj::SOUTH,"SOUTH");
	HX_VISIT_MEMBER_NAME(Compass_obj::WEST,"WEST");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Compass_obj::__mClass;

Dynamic __Create_Compass_obj() { return new Compass_obj; }

void Compass_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.Compass"), hx::TCanCast< Compass_obj >,sStaticFields,sMemberFields,
	&__Create_Compass_obj, &__Create,
	&super::__SGetClass(), &CreateCompass_obj, sMarkStatics, sVisitStatic);
}

void Compass_obj::__boot()
{
hx::Static(EAST) = hx::CreateEnum< Compass_obj >(HX_CSTRING("EAST"),2);
hx::Static(NORTH) = hx::CreateEnum< Compass_obj >(HX_CSTRING("NORTH"),0);
hx::Static(SOUTH) = hx::CreateEnum< Compass_obj >(HX_CSTRING("SOUTH"),1);
hx::Static(WEST) = hx::CreateEnum< Compass_obj >(HX_CSTRING("WEST"),3);
}


} // end namespace jigsawx
