#include <hxcpp.h>

#ifndef INCLUDED_jigsawx_Bubble
#include <jigsawx/Bubble.h>
#endif
namespace jigsawx{

::jigsawx::Bubble Bubble_obj::IN;

::jigsawx::Bubble Bubble_obj::OUT;

HX_DEFINE_CREATE_ENUM(Bubble_obj)

int Bubble_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("IN")) return 0;
	if (inName==HX_CSTRING("OUT")) return 1;
	return super::__FindIndex(inName);
}

int Bubble_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("IN")) return 0;
	if (inName==HX_CSTRING("OUT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Bubble_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("IN")) return IN;
	if (inName==HX_CSTRING("OUT")) return OUT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("IN"),
	HX_CSTRING("OUT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bubble_obj::IN,"IN");
	HX_MARK_MEMBER_NAME(Bubble_obj::OUT,"OUT");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bubble_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bubble_obj::IN,"IN");
	HX_VISIT_MEMBER_NAME(Bubble_obj::OUT,"OUT");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Bubble_obj::__mClass;

Dynamic __Create_Bubble_obj() { return new Bubble_obj; }

void Bubble_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.Bubble"), hx::TCanCast< Bubble_obj >,sStaticFields,sMemberFields,
	&__Create_Bubble_obj, &__Create,
	&super::__SGetClass(), &CreateBubble_obj, sMarkStatics, sVisitStatic);
}

void Bubble_obj::__boot()
{
hx::Static(IN) = hx::CreateEnum< Bubble_obj >(HX_CSTRING("IN"),0);
hx::Static(OUT) = hx::CreateEnum< Bubble_obj >(HX_CSTRING("OUT"),1);
}


} // end namespace jigsawx
