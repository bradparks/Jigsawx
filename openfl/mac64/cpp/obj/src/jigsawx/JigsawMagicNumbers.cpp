#include <hxcpp.h>

#ifndef INCLUDED_jigsawx_JigsawMagicNumbers
#include <jigsawx/JigsawMagicNumbers.h>
#endif
namespace jigsawx{

Void JigsawMagicNumbers_obj::__construct()
{
	return null();
}

JigsawMagicNumbers_obj::~JigsawMagicNumbers_obj() { }

Dynamic JigsawMagicNumbers_obj::__CreateEmpty() { return  new JigsawMagicNumbers_obj; }
hx::ObjectPtr< JigsawMagicNumbers_obj > JigsawMagicNumbers_obj::__new()
{  hx::ObjectPtr< JigsawMagicNumbers_obj > result = new JigsawMagicNumbers_obj();
	result->__construct();
	return result;}

Dynamic JigsawMagicNumbers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JigsawMagicNumbers_obj > result = new JigsawMagicNumbers_obj();
	result->__construct();
	return result;}


JigsawMagicNumbers_obj::JigsawMagicNumbers_obj()
{
}

void JigsawMagicNumbers_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JigsawMagicNumbers);
	HX_MARK_END_CLASS();
}

void JigsawMagicNumbers_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic JigsawMagicNumbers_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic JigsawMagicNumbers_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void JigsawMagicNumbers_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JigsawMagicNumbers_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JigsawMagicNumbers_obj::__mClass,"__mClass");
};

Class JigsawMagicNumbers_obj::__mClass;

void JigsawMagicNumbers_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.JigsawMagicNumbers"), hx::TCanCast< JigsawMagicNumbers_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JigsawMagicNumbers_obj::__boot()
{
}

} // end namespace jigsawx
