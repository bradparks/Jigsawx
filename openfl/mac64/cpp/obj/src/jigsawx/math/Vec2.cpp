#include <hxcpp.h>

#ifndef INCLUDED_jigsawx_math_Vec2
#include <jigsawx/math/Vec2.h>
#endif
namespace jigsawx{
namespace math{

Void Vec2_obj::__construct(hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_)
{
HX_STACK_PUSH("Vec2::new","jigsawx/math/Vec2.hx",42);
Float x_ = __o_x_.Default(.0);
Float y_ = __o_y_.Default(.0);
{
	HX_STACK_LINE(43)
	this->x = x_;
	HX_STACK_LINE(44)
	this->y = y_;
}
;
	return null();
}

Vec2_obj::~Vec2_obj() { }

Dynamic Vec2_obj::__CreateEmpty() { return  new Vec2_obj; }
hx::ObjectPtr< Vec2_obj > Vec2_obj::__new(hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_)
{  hx::ObjectPtr< Vec2_obj > result = new Vec2_obj();
	result->__construct(__o_x_,__o_y_);
	return result;}

Dynamic Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2_obj > result = new Vec2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Vec2_obj::Vec2_obj()
{
}

void Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Vec2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

Class Vec2_obj::__mClass;

void Vec2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.math.Vec2"), hx::TCanCast< Vec2_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Vec2_obj::__boot()
{
}

} // end namespace jigsawx
} // end namespace math
