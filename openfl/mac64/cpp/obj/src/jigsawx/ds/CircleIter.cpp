#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jigsawx_ds_CircleIter
#include <jigsawx/ds/CircleIter.h>
#endif
#ifndef INCLUDED_jigsawx_ds_Sign
#include <jigsawx/ds/Sign.h>
#endif
namespace jigsawx{
namespace ds{

Void CircleIter_obj::__construct(Float begin_,Float fin_,Float step_,Float min_,Float max_)
{
HX_STACK_PUSH("CircleIter::new","jigsawx/ds/CircleIter.hx",82);
{
	HX_STACK_LINE(84)
	this->begin = begin_;
	HX_STACK_LINE(85)
	this->current = this->begin;
	HX_STACK_LINE(86)
	this->fin = fin_;
	HX_STACK_LINE(87)
	this->step = step_;
	HX_STACK_LINE(88)
	this->min = min_;
	HX_STACK_LINE(89)
	this->max = max_;
	HX_STACK_LINE(90)
	this->onDirection = (  (((this->step > (int)0))) ? ::jigsawx::ds::Sign(::jigsawx::ds::Sign_obj::UP) : ::jigsawx::ds::Sign(::jigsawx::ds::Sign_obj::DOWN) );
}
;
	return null();
}

CircleIter_obj::~CircleIter_obj() { }

Dynamic CircleIter_obj::__CreateEmpty() { return  new CircleIter_obj; }
hx::ObjectPtr< CircleIter_obj > CircleIter_obj::__new(Float begin_,Float fin_,Float step_,Float min_,Float max_)
{  hx::ObjectPtr< CircleIter_obj > result = new CircleIter_obj();
	result->__construct(begin_,fin_,step_,min_,max_);
	return result;}

Dynamic CircleIter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleIter_obj > result = new CircleIter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Float CircleIter_obj::next( ){
	HX_STACK_PUSH("CircleIter::next","jigsawx/ds/CircleIter.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_LINE(123)
	hx::AddEq(this->current,this->step);
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::jigsawx::ds::CircleIter _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		{
			::jigsawx::ds::Sign _switch_1 = (_g->onDirection);
			switch((_switch_1)->GetIndex()){
				case 0: {
					HX_STACK_LINE(127)
					if (((this->current > this->max))){
						HX_STACK_LINE(127)
						this->current = ((this->min + this->current) - this->max);
					}
				}
				;break;
				case 1: {
					HX_STACK_LINE(128)
					if (((this->current < this->min))){
						HX_STACK_LINE(128)
						this->current = ((this->max + this->current) - this->min);
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(131)
	if ((!(this->hasNext()))){
		HX_STACK_LINE(131)
		return this->fin;
	}
	HX_STACK_LINE(133)
	return this->current;
}


HX_DEFINE_DYNAMIC_FUNC0(CircleIter_obj,next,return )

bool CircleIter_obj::hasNext( ){
	HX_STACK_PUSH("CircleIter::hasNext","jigsawx/ds/CircleIter.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_LINE(107)
	::jigsawx::ds::CircleIter _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(107)
	{
		::jigsawx::ds::Sign _switch_2 = (_g->onDirection);
		switch((_switch_2)->GetIndex()){
			case 0: {
				HX_STACK_LINE(109)
				return (  (((bool((bool((this->current < this->fin)) && bool(((this->current + this->step) > this->fin)))) || bool((this->current == this->fin))))) ? bool(false) : bool(true) );
			}
			;break;
			case 1: {
				HX_STACK_LINE(112)
				return (  (((bool((bool((this->current > this->fin)) && bool(((this->current - this->step) < this->fin)))) || bool((this->current == this->fin))))) ? bool(false) : bool(true) );
			}
			;break;
		}
	}
	HX_STACK_LINE(107)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(CircleIter_obj,hasNext,return )

::jigsawx::ds::CircleIter CircleIter_obj::reset( ){
	HX_STACK_PUSH("CircleIter::reset","jigsawx/ds/CircleIter.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_LINE(98)
	this->current = this->begin;
	HX_STACK_LINE(99)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(CircleIter_obj,reset,return )

::jigsawx::ds::CircleIter CircleIter_obj::pi2( Float begin_,Float fin_,Float step_){
	HX_STACK_PUSH("CircleIter::pi2","jigsawx/ds/CircleIter.hx",58);
	HX_STACK_ARG(begin_,"begin_");
	HX_STACK_ARG(fin_,"fin_");
	HX_STACK_ARG(step_,"step_");
	HX_STACK_LINE(58)
	return ::jigsawx::ds::CircleIter_obj::__new(begin_,fin_,step_,(int)0,((int)2 * ::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CircleIter_obj,pi2,return )

::jigsawx::ds::CircleIter CircleIter_obj::pi2pi( Float begin_,Float fin_,Float step_){
	HX_STACK_PUSH("CircleIter::pi2pi","jigsawx/ds/CircleIter.hx",69);
	HX_STACK_ARG(begin_,"begin_");
	HX_STACK_ARG(fin_,"fin_");
	HX_STACK_ARG(step_,"step_");
	HX_STACK_LINE(69)
	return ::jigsawx::ds::CircleIter_obj::__new(begin_,fin_,step_,-(::Math_obj::PI),::Math_obj::PI);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CircleIter_obj,pi2pi,return )


CircleIter_obj::CircleIter_obj()
{
}

void CircleIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircleIter);
	HX_MARK_MEMBER_NAME(onDirection,"onDirection");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(step,"step");
	HX_MARK_MEMBER_NAME(fin,"fin");
	HX_MARK_MEMBER_NAME(begin,"begin");
	HX_MARK_END_CLASS();
}

void CircleIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onDirection,"onDirection");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(step,"step");
	HX_VISIT_MEMBER_NAME(fin,"fin");
	HX_VISIT_MEMBER_NAME(begin,"begin");
}

Dynamic CircleIter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pi2") ) { return pi2_dyn(); }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"fin") ) { return fin; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pi2pi") ) { return pi2pi_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onDirection") ) { return onDirection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleIter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fin") ) { fin=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { step=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { begin=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onDirection") ) { onDirection=inValue.Cast< ::jigsawx::ds::Sign >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("onDirection"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("step"));
	outFields->push(HX_CSTRING("fin"));
	outFields->push(HX_CSTRING("begin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("pi2"),
	HX_CSTRING("pi2pi"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("reset"),
	HX_CSTRING("onDirection"),
	HX_CSTRING("current"),
	HX_CSTRING("max"),
	HX_CSTRING("min"),
	HX_CSTRING("step"),
	HX_CSTRING("fin"),
	HX_CSTRING("begin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleIter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleIter_obj::__mClass,"__mClass");
};

Class CircleIter_obj::__mClass;

void CircleIter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.ds.CircleIter"), hx::TCanCast< CircleIter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircleIter_obj::__boot()
{
}

} // end namespace jigsawx
} // end namespace ds
