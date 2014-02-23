#include <hxcpp.h>

#ifndef INCLUDED_jigsawx_ds_Sign
#include <jigsawx/ds/Sign.h>
#endif
namespace jigsawx{
namespace ds{

::jigsawx::ds::Sign Sign_obj::DOWN;

::jigsawx::ds::Sign Sign_obj::UP;

HX_DEFINE_CREATE_ENUM(Sign_obj)

int Sign_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DOWN")) return 1;
	if (inName==HX_CSTRING("UP")) return 0;
	return super::__FindIndex(inName);
}

int Sign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DOWN")) return 0;
	if (inName==HX_CSTRING("UP")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Sign_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DOWN")) return DOWN;
	if (inName==HX_CSTRING("UP")) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sign_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Sign_obj::UP,"UP");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sign_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Sign_obj::UP,"UP");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Sign_obj::__mClass;

Dynamic __Create_Sign_obj() { return new Sign_obj; }

void Sign_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.ds.Sign"), hx::TCanCast< Sign_obj >,sStaticFields,sMemberFields,
	&__Create_Sign_obj, &__Create,
	&super::__SGetClass(), &CreateSign_obj, sMarkStatics, sVisitStatic);
}

void Sign_obj::__boot()
{
hx::Static(DOWN) = hx::CreateEnum< Sign_obj >(HX_CSTRING("DOWN"),1);
hx::Static(UP) = hx::CreateEnum< Sign_obj >(HX_CSTRING("UP"),0);
}


} // end namespace jigsawx
} // end namespace ds
