#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jigsawx_Bubble
#include <jigsawx/Bubble.h>
#endif
#ifndef INCLUDED_jigsawx_JigsawSideData
#include <jigsawx/JigsawSideData.h>
#endif
namespace jigsawx{

Void JigsawSideData_obj::__construct()
{
HX_STACK_PUSH("JigsawSideData::new","jigsawx/JigsawSideData.hx",179);
{
}
;
	return null();
}

JigsawSideData_obj::~JigsawSideData_obj() { }

Dynamic JigsawSideData_obj::__CreateEmpty() { return  new JigsawSideData_obj; }
hx::ObjectPtr< JigsawSideData_obj > JigsawSideData_obj::__new()
{  hx::ObjectPtr< JigsawSideData_obj > result = new JigsawSideData_obj();
	result->__construct();
	return result;}

Dynamic JigsawSideData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JigsawSideData_obj > result = new JigsawSideData_obj();
	result->__construct();
	return result;}

Dynamic JigsawSideData_obj::halfPieceData( ){
	HX_STACK_PUSH("JigsawSideData::halfPieceData","jigsawx/JigsawSideData.hx",75);
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_PUSH("*::closure","jigsawx/JigsawSideData.hx",77);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("north") , null(),false);
				__result->Add(HX_CSTRING("east") , ::jigsawx::JigsawSideData_obj::create(),false);
				__result->Add(HX_CSTRING("south") , ::jigsawx::JigsawSideData_obj::create(),false);
				__result->Add(HX_CSTRING("west") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(75)
	return _Function_1_1::Block();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JigsawSideData_obj,halfPieceData,return )

::jigsawx::Bubble JigsawSideData_obj::createBubble( ){
	HX_STACK_PUSH("JigsawSideData::createBubble","jigsawx/JigsawSideData.hx",87);
	HX_STACK_LINE(87)
	return (  (((::Math_obj::round(::Math_obj::random()) == (int)1))) ? ::jigsawx::Bubble(::jigsawx::Bubble_obj::IN) : ::jigsawx::Bubble(::jigsawx::Bubble_obj::OUT) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JigsawSideData_obj,createBubble,return )

::jigsawx::Bubble JigsawSideData_obj::swapBubble( ::jigsawx::Bubble bubble){
	HX_STACK_PUSH("JigsawSideData::swapBubble","jigsawx/JigsawSideData.hx",95);
	HX_STACK_ARG(bubble,"bubble");
	HX_STACK_LINE(97)
	if (((bubble == ::jigsawx::Bubble_obj::OUT))){
		HX_STACK_LINE(97)
		return ::jigsawx::Bubble_obj::IN;
	}
	HX_STACK_LINE(98)
	if (((bubble == ::jigsawx::Bubble_obj::IN))){
		HX_STACK_LINE(98)
		return ::jigsawx::Bubble_obj::OUT;
	}
	HX_STACK_LINE(99)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JigsawSideData_obj,swapBubble,return )

::jigsawx::JigsawSideData JigsawSideData_obj::reflect( ::jigsawx::JigsawSideData j){
	HX_STACK_PUSH("JigsawSideData::reflect","jigsawx/JigsawSideData.hx",106);
	HX_STACK_ARG(j,"j");
	HX_STACK_LINE(108)
	::jigsawx::JigsawSideData side = ::jigsawx::JigsawSideData_obj::__new();		HX_STACK_VAR(side,"side");
	HX_STACK_LINE(109)
	side->bubble = ::jigsawx::JigsawSideData_obj::swapBubble(j->bubble);
	HX_STACK_LINE(112)
	side->squew = j->squew;
	HX_STACK_LINE(115)
	side->inout = j->inout;
	HX_STACK_LINE(118)
	side->leftWide = j->rightWide;
	HX_STACK_LINE(119)
	side->leftHi = j->rightHi;
	HX_STACK_LINE(120)
	side->centreWide = j->centreWide;
	HX_STACK_LINE(121)
	side->centreHi = j->centreHi;
	HX_STACK_LINE(122)
	side->rightWide = j->leftWide;
	HX_STACK_LINE(123)
	side->rightHi = j->leftHi;
	HX_STACK_LINE(125)
	return side;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JigsawSideData_obj,reflect,return )

::jigsawx::JigsawSideData JigsawSideData_obj::createSimple( ){
	HX_STACK_PUSH("JigsawSideData::createSimple","jigsawx/JigsawSideData.hx",132);
	HX_STACK_LINE(134)
	::jigsawx::JigsawSideData side = ::jigsawx::JigsawSideData_obj::__new();		HX_STACK_VAR(side,"side");
	HX_STACK_LINE(135)
	side->bubble = ::jigsawx::JigsawSideData_obj::createBubble();
	HX_STACK_LINE(138)
	side->squew = 0.5;
	HX_STACK_LINE(141)
	side->inout = 0.5;
	HX_STACK_LINE(144)
	side->leftWide = 0.5;
	HX_STACK_LINE(145)
	side->leftHi = 0.5;
	HX_STACK_LINE(146)
	side->centreWide = 0.5;
	HX_STACK_LINE(147)
	side->centreHi = 0.5;
	HX_STACK_LINE(148)
	side->rightWide = 0.5;
	HX_STACK_LINE(149)
	side->rightHi = 0.5;
	HX_STACK_LINE(151)
	return side;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JigsawSideData_obj,createSimple,return )

::jigsawx::JigsawSideData JigsawSideData_obj::create( ){
	HX_STACK_PUSH("JigsawSideData::create","jigsawx/JigsawSideData.hx",157);
	HX_STACK_LINE(159)
	::jigsawx::JigsawSideData side = ::jigsawx::JigsawSideData_obj::__new();		HX_STACK_VAR(side,"side");
	HX_STACK_LINE(160)
	side->bubble = ::jigsawx::JigsawSideData_obj::createBubble();
	HX_STACK_LINE(163)
	side->squew = ::Math_obj::random();
	HX_STACK_LINE(165)
	side->inout = ::Math_obj::random();
	HX_STACK_LINE(167)
	side->leftWide = ::Math_obj::random();
	HX_STACK_LINE(168)
	side->leftHi = ::Math_obj::random();
	HX_STACK_LINE(169)
	side->centreWide = ::Math_obj::random();
	HX_STACK_LINE(170)
	side->centreHi = ::Math_obj::random();
	HX_STACK_LINE(171)
	side->rightWide = ::Math_obj::random();
	HX_STACK_LINE(172)
	side->rightHi = ::Math_obj::random();
	HX_STACK_LINE(174)
	return side;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JigsawSideData_obj,create,return )


JigsawSideData_obj::JigsawSideData_obj()
{
}

void JigsawSideData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JigsawSideData);
	HX_MARK_MEMBER_NAME(rightHi,"rightHi");
	HX_MARK_MEMBER_NAME(rightWide,"rightWide");
	HX_MARK_MEMBER_NAME(centreHi,"centreHi");
	HX_MARK_MEMBER_NAME(centreWide,"centreWide");
	HX_MARK_MEMBER_NAME(leftHi,"leftHi");
	HX_MARK_MEMBER_NAME(leftWide,"leftWide");
	HX_MARK_MEMBER_NAME(inout,"inout");
	HX_MARK_MEMBER_NAME(squew,"squew");
	HX_MARK_MEMBER_NAME(bubble,"bubble");
	HX_MARK_END_CLASS();
}

void JigsawSideData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rightHi,"rightHi");
	HX_VISIT_MEMBER_NAME(rightWide,"rightWide");
	HX_VISIT_MEMBER_NAME(centreHi,"centreHi");
	HX_VISIT_MEMBER_NAME(centreWide,"centreWide");
	HX_VISIT_MEMBER_NAME(leftHi,"leftHi");
	HX_VISIT_MEMBER_NAME(leftWide,"leftWide");
	HX_VISIT_MEMBER_NAME(inout,"inout");
	HX_VISIT_MEMBER_NAME(squew,"squew");
	HX_VISIT_MEMBER_NAME(bubble,"bubble");
}

Dynamic JigsawSideData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inout") ) { return inout; }
		if (HX_FIELD_EQ(inName,"squew") ) { return squew; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"leftHi") ) { return leftHi; }
		if (HX_FIELD_EQ(inName,"bubble") ) { return bubble; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reflect") ) { return reflect_dyn(); }
		if (HX_FIELD_EQ(inName,"rightHi") ) { return rightHi; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centreHi") ) { return centreHi; }
		if (HX_FIELD_EQ(inName,"leftWide") ) { return leftWide; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightWide") ) { return rightWide; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swapBubble") ) { return swapBubble_dyn(); }
		if (HX_FIELD_EQ(inName,"centreWide") ) { return centreWide; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBubble") ) { return createBubble_dyn(); }
		if (HX_FIELD_EQ(inName,"createSimple") ) { return createSimple_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"halfPieceData") ) { return halfPieceData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JigsawSideData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inout") ) { inout=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"squew") ) { squew=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"leftHi") ) { leftHi=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bubble") ) { bubble=inValue.Cast< ::jigsawx::Bubble >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rightHi") ) { rightHi=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centreHi") ) { centreHi=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftWide") ) { leftWide=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightWide") ) { rightWide=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"centreWide") ) { centreWide=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JigsawSideData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rightHi"));
	outFields->push(HX_CSTRING("rightWide"));
	outFields->push(HX_CSTRING("centreHi"));
	outFields->push(HX_CSTRING("centreWide"));
	outFields->push(HX_CSTRING("leftHi"));
	outFields->push(HX_CSTRING("leftWide"));
	outFields->push(HX_CSTRING("inout"));
	outFields->push(HX_CSTRING("squew"));
	outFields->push(HX_CSTRING("bubble"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("halfPieceData"),
	HX_CSTRING("createBubble"),
	HX_CSTRING("swapBubble"),
	HX_CSTRING("reflect"),
	HX_CSTRING("createSimple"),
	HX_CSTRING("create"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("rightHi"),
	HX_CSTRING("rightWide"),
	HX_CSTRING("centreHi"),
	HX_CSTRING("centreWide"),
	HX_CSTRING("leftHi"),
	HX_CSTRING("leftWide"),
	HX_CSTRING("inout"),
	HX_CSTRING("squew"),
	HX_CSTRING("bubble"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JigsawSideData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JigsawSideData_obj::__mClass,"__mClass");
};

Class JigsawSideData_obj::__mClass;

void JigsawSideData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.JigsawSideData"), hx::TCanCast< JigsawSideData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JigsawSideData_obj::__boot()
{
}

} // end namespace jigsawx
