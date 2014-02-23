#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jigsawx_OpenEllipse
#include <jigsawx/OpenEllipse.h>
#endif
#ifndef INCLUDED_jigsawx_ds_CircleIter
#include <jigsawx/ds/CircleIter.h>
#endif
#ifndef INCLUDED_jigsawx_math_Vec2
#include <jigsawx/math/Vec2.h>
#endif
namespace jigsawx{

Void OpenEllipse_obj::__construct()
{
HX_STACK_PUSH("OpenEllipse::new","jigsawx/OpenEllipse.hx",53);
{
}
;
	return null();
}

OpenEllipse_obj::~OpenEllipse_obj() { }

Dynamic OpenEllipse_obj::__CreateEmpty() { return  new OpenEllipse_obj; }
hx::ObjectPtr< OpenEllipse_obj > OpenEllipse_obj::__new()
{  hx::ObjectPtr< OpenEllipse_obj > result = new OpenEllipse_obj();
	result->__construct();
	return result;}

Dynamic OpenEllipse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenEllipse_obj > result = new OpenEllipse_obj();
	result->__construct();
	return result;}

::jigsawx::math::Vec2 OpenEllipse_obj::createPoint( ::jigsawx::math::Vec2 centre,::jigsawx::math::Vec2 dimensions,Float theta){
	HX_STACK_PUSH("OpenEllipse::createPoint","jigsawx/OpenEllipse.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_ARG(centre,"centre");
	HX_STACK_ARG(dimensions,"dimensions");
	HX_STACK_ARG(theta,"theta");
	HX_STACK_LINE(130)
	Float offSetA = ((Float(((int)3 * ::Math_obj::PI)) / Float((int)2)) - this->rotation);		HX_STACK_VAR(offSetA,"offSetA");
	HX_STACK_LINE(131)
	Float dx = (dimensions->x * ::Math_obj::sin(theta));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(132)
	Float dy = (-(dimensions->y) * ::Math_obj::cos(theta));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(133)
	Float dxNew = ((centre->x - (dx * ::Math_obj::sin(offSetA))) + (dy * ::Math_obj::cos(offSetA)));		HX_STACK_VAR(dxNew,"dxNew");
	HX_STACK_LINE(134)
	Float dyNew = ((centre->y - (dx * ::Math_obj::cos(offSetA))) - (dy * ::Math_obj::sin(offSetA)));		HX_STACK_VAR(dyNew,"dyNew");
	HX_STACK_LINE(136)
	return ::jigsawx::math::Vec2_obj::__new(dxNew,dyNew);
}


HX_DEFINE_DYNAMIC_FUNC3(OpenEllipse_obj,createPoint,return )

Array< ::Dynamic > OpenEllipse_obj::getRenderList( ){
	HX_STACK_PUSH("OpenEllipse::getRenderList","jigsawx/OpenEllipse.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_LINE(110)
	this->_points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(112)
	if (((this->circleIter == null()))){
		HX_STACK_LINE(112)
		this->setUp();
	}
	HX_STACK_LINE(114)
	this->_points->push(this->createPoint(this->centre,this->dimensions,this->beginAngle));
	HX_STACK_LINE(116)
	for(::cpp::FastIterator_obj< Float > *__it = ::cpp::CreateFastIterator< Float >(::jigsawx::ds::CircleIter_obj::pi2pi(this->beginAngle,this->finishAngle,this->stepAngle)->reset());  __it->hasNext(); ){
		Float theta = __it->next();
		this->_points->push(this->createPoint(this->centre,this->dimensions,theta));
	}
	HX_STACK_LINE(122)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(OpenEllipse_obj,getRenderList,return )

Void OpenEllipse_obj::setUp( ){
{
		HX_STACK_PUSH("OpenEllipse::setUp","jigsawx/OpenEllipse.hx",100);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		this->circleIter = ::jigsawx::ds::CircleIter_obj::pi2pi(this->beginAngle,this->finishAngle,this->stepAngle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OpenEllipse_obj,setUp,(void))

Float OpenEllipse_obj::pointDistance( ::jigsawx::math::Vec2 A,::jigsawx::math::Vec2 B){
	HX_STACK_PUSH("OpenEllipse::pointDistance","jigsawx/OpenEllipse.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(B,"B");
	HX_STACK_LINE(91)
	Float dx = (A->x - B->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(92)
	Float dy = (A->y - B->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(94)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


HX_DEFINE_DYNAMIC_FUNC2(OpenEllipse_obj,pointDistance,return )

Float OpenEllipse_obj::getFinishRadius( ){
	HX_STACK_PUSH("OpenEllipse::getFinishRadius","jigsawx/OpenEllipse.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_LINE(81)
	return this->pointDistance(this->centre,this->getFinish());
}


HX_DEFINE_DYNAMIC_FUNC0(OpenEllipse_obj,getFinishRadius,return )

Float OpenEllipse_obj::getBeginRadius( ){
	HX_STACK_PUSH("OpenEllipse::getBeginRadius","jigsawx/OpenEllipse.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->pointDistance(this->centre,this->getBegin());
}


HX_DEFINE_DYNAMIC_FUNC0(OpenEllipse_obj,getBeginRadius,return )

::jigsawx::math::Vec2 OpenEllipse_obj::getFinish( ){
	HX_STACK_PUSH("OpenEllipse::getFinish","jigsawx/OpenEllipse.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	return this->createPoint(this->centre,this->dimensions,this->finishAngle);
}


HX_DEFINE_DYNAMIC_FUNC0(OpenEllipse_obj,getFinish,return )

::jigsawx::math::Vec2 OpenEllipse_obj::getBegin( ){
	HX_STACK_PUSH("OpenEllipse::getBegin","jigsawx/OpenEllipse.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return this->createPoint(this->centre,this->dimensions,this->beginAngle);
}


HX_DEFINE_DYNAMIC_FUNC0(OpenEllipse_obj,getBegin,return )


OpenEllipse_obj::OpenEllipse_obj()
{
}

void OpenEllipse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpenEllipse);
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(circleIter,"circleIter");
	HX_MARK_MEMBER_NAME(dimensions,"dimensions");
	HX_MARK_MEMBER_NAME(centre,"centre");
	HX_MARK_MEMBER_NAME(stepAngle,"stepAngle");
	HX_MARK_MEMBER_NAME(finishAngle,"finishAngle");
	HX_MARK_MEMBER_NAME(beginAngle,"beginAngle");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_END_CLASS();
}

void OpenEllipse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(circleIter,"circleIter");
	HX_VISIT_MEMBER_NAME(dimensions,"dimensions");
	HX_VISIT_MEMBER_NAME(centre,"centre");
	HX_VISIT_MEMBER_NAME(stepAngle,"stepAngle");
	HX_VISIT_MEMBER_NAME(finishAngle,"finishAngle");
	HX_VISIT_MEMBER_NAME(beginAngle,"beginAngle");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
}

Dynamic OpenEllipse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setUp") ) { return setUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"centre") ) { return centre; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBegin") ) { return getBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFinish") ) { return getFinish_dyn(); }
		if (HX_FIELD_EQ(inName,"stepAngle") ) { return stepAngle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"circleIter") ) { return circleIter; }
		if (HX_FIELD_EQ(inName,"dimensions") ) { return dimensions; }
		if (HX_FIELD_EQ(inName,"beginAngle") ) { return beginAngle; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createPoint") ) { return createPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"finishAngle") ) { return finishAngle; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRenderList") ) { return getRenderList_dyn(); }
		if (HX_FIELD_EQ(inName,"pointDistance") ) { return pointDistance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBeginRadius") ) { return getBeginRadius_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFinishRadius") ) { return getFinishRadius_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpenEllipse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"centre") ) { centre=inValue.Cast< ::jigsawx::math::Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepAngle") ) { stepAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"circleIter") ) { circleIter=inValue.Cast< ::jigsawx::ds::CircleIter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dimensions") ) { dimensions=inValue.Cast< ::jigsawx::math::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beginAngle") ) { beginAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishAngle") ) { finishAngle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenEllipse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("circleIter"));
	outFields->push(HX_CSTRING("dimensions"));
	outFields->push(HX_CSTRING("centre"));
	outFields->push(HX_CSTRING("stepAngle"));
	outFields->push(HX_CSTRING("finishAngle"));
	outFields->push(HX_CSTRING("beginAngle"));
	outFields->push(HX_CSTRING("rotation"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createPoint"),
	HX_CSTRING("getRenderList"),
	HX_CSTRING("setUp"),
	HX_CSTRING("pointDistance"),
	HX_CSTRING("getFinishRadius"),
	HX_CSTRING("getBeginRadius"),
	HX_CSTRING("getFinish"),
	HX_CSTRING("getBegin"),
	HX_CSTRING("_points"),
	HX_CSTRING("circleIter"),
	HX_CSTRING("dimensions"),
	HX_CSTRING("centre"),
	HX_CSTRING("stepAngle"),
	HX_CSTRING("finishAngle"),
	HX_CSTRING("beginAngle"),
	HX_CSTRING("rotation"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenEllipse_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenEllipse_obj::__mClass,"__mClass");
};

Class OpenEllipse_obj::__mClass;

void OpenEllipse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.OpenEllipse"), hx::TCanCast< OpenEllipse_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void OpenEllipse_obj::__boot()
{
}

} // end namespace jigsawx
