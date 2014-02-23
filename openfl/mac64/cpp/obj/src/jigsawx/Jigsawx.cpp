#include <hxcpp.h>

#ifndef INCLUDED_jigsawx_JigsawPiece
#include <jigsawx/JigsawPiece.h>
#endif
#ifndef INCLUDED_jigsawx_JigsawSideData
#include <jigsawx/JigsawSideData.h>
#endif
#ifndef INCLUDED_jigsawx_Jigsawx
#include <jigsawx/Jigsawx.h>
#endif
#ifndef INCLUDED_jigsawx_math_Vec2
#include <jigsawx/math/Vec2.h>
#endif
namespace jigsawx{

Void Jigsawx_obj::__construct(Float dx_,Float dy_,int rows_,int cols_)
{
HX_STACK_PUSH("Jigsawx::new","jigsawx/Jigsawx.hx",63);
{
	HX_STACK_LINE(65)
	this->pieces = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(66)
	this->jigs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->sides = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(68)
	this->dx = dx_;
	HX_STACK_LINE(69)
	this->dy = dy_;
	HX_STACK_LINE(70)
	this->rows = rows_;
	HX_STACK_LINE(71)
	this->cols = cols_;
	HX_STACK_LINE(74)
	::jigsawx::math::Vec2 xy = ::jigsawx::math::Vec2_obj::__new((int)20,(int)20);		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(75)
	::jigsawx::math::Vec2 lt = ::jigsawx::math::Vec2_obj::__new((int)20,(int)20);		HX_STACK_VAR(lt,"lt");
	HX_STACK_LINE(76)
	::jigsawx::math::Vec2 rt = ::jigsawx::math::Vec2_obj::__new(((int)20 + this->dx),(int)20);		HX_STACK_VAR(rt,"rt");
	HX_STACK_LINE(77)
	::jigsawx::math::Vec2 rb = ::jigsawx::math::Vec2_obj::__new(((int)20 + this->dx),(this->dy + (int)20));		HX_STACK_VAR(rb,"rb");
	HX_STACK_LINE(78)
	::jigsawx::math::Vec2 lb = ::jigsawx::math::Vec2_obj::__new((int)20,(this->dy + (int)20));		HX_STACK_VAR(lb,"lb");
	HX_STACK_LINE(79)
	this->length = (int)0;
	HX_STACK_LINE(81)
	Dynamic last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while(((_g1 < _g))){
			HX_STACK_LINE(83)
			int row = (_g1)++;		HX_STACK_VAR(row,"row");
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","jigsawx/Jigsawx.hx",86);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("north") , null(),false);
						__result->Add(HX_CSTRING("east") , null(),false);
						__result->Add(HX_CSTRING("south") , null(),false);
						__result->Add(HX_CSTRING("west") , null(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(86)
			last = _Function_3_1::Block();
			HX_STACK_LINE(88)
			this->sides->__Field(HX_CSTRING("push"),true)(Dynamic( Array_obj<Dynamic>::__new() ));
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->cols;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(90)
				while(((_g3 < _g2))){
					HX_STACK_LINE(90)
					int col = (_g3)++;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(93)
					Dynamic jigsawPiece = ::jigsawx::JigsawSideData_obj::halfPieceData();		HX_STACK_VAR(jigsawPiece,"jigsawPiece");
					HX_STACK_LINE(95)
					if (((last->__Field(HX_CSTRING("east"),true) != null()))){
						HX_STACK_LINE(95)
						jigsawPiece->__FieldRef(HX_CSTRING("west")) = ::jigsawx::JigsawSideData_obj::reflect(last->__Field(HX_CSTRING("east"),true));
					}
					HX_STACK_LINE(96)
					if (((col == (this->cols - (int)1)))){
						HX_STACK_LINE(96)
						jigsawPiece->__FieldRef(HX_CSTRING("east")) = null();
					}
					HX_STACK_LINE(98)
					hx::IndexRef((this->sides->__GetItem(row)).mPtr,col) = jigsawPiece;
					HX_STACK_LINE(99)
					last = jigsawPiece;
					HX_STACK_LINE(100)
					(this->length)++;
				}
			}
		}
	}
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->cols;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		while(((_g1 < _g))){
			HX_STACK_LINE(106)
			int col = (_g1)++;		HX_STACK_VAR(col,"col");
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","jigsawx/Jigsawx.hx",109);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("north") , null(),false);
						__result->Add(HX_CSTRING("east") , null(),false);
						__result->Add(HX_CSTRING("south") , null(),false);
						__result->Add(HX_CSTRING("west") , null(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(109)
			last = _Function_3_1::Block();
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->rows;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(111)
				while(((_g3 < _g2))){
					HX_STACK_LINE(111)
					int row = (_g3)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(114)
					Dynamic jigsawPiece = this->sides->__GetItem(row)->__GetItem(col);		HX_STACK_VAR(jigsawPiece,"jigsawPiece");
					HX_STACK_LINE(116)
					if (((last->__Field(HX_CSTRING("south"),true) != null()))){
						HX_STACK_LINE(116)
						jigsawPiece->__FieldRef(HX_CSTRING("north")) = ::jigsawx::JigsawSideData_obj::reflect(last->__Field(HX_CSTRING("south"),true));
					}
					HX_STACK_LINE(117)
					if (((row == (this->rows - (int)1)))){
						HX_STACK_LINE(117)
						jigsawPiece->__FieldRef(HX_CSTRING("south")) = null();
					}
					HX_STACK_LINE(119)
					last = jigsawPiece;
				}
			}
		}
	}
	HX_STACK_LINE(125)
	::jigsawx::JigsawPiece jig;		HX_STACK_VAR(jig,"jig");
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		while(((_g1 < _g))){
			HX_STACK_LINE(127)
			int row = (_g1)++;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(130)
			this->pieces->push(Array_obj< ::Dynamic >::__new());
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->cols;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(132)
				while(((_g3 < _g2))){
					HX_STACK_LINE(132)
					int col = (_g3)++;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(135)
					jig = ::jigsawx::JigsawPiece_obj::__new(xy,row,col,lt,rt,rb,lb,this->sides->__GetItem(row)->__GetItem(col));
					HX_STACK_LINE(136)
					this->pieces->__get(row).StaticCast< Array< ::Dynamic > >()[col] = jig;
					HX_STACK_LINE(137)
					this->jigs->push(jig);
					HX_STACK_LINE(139)
					hx::AddEq(xy->x,this->dx);
				}
			}
			HX_STACK_LINE(143)
			xy->x = (int)20;
			HX_STACK_LINE(144)
			hx::AddEq(xy->y,this->dy);
		}
	}
}
;
	return null();
}

Jigsawx_obj::~Jigsawx_obj() { }

Dynamic Jigsawx_obj::__CreateEmpty() { return  new Jigsawx_obj; }
hx::ObjectPtr< Jigsawx_obj > Jigsawx_obj::__new(Float dx_,Float dy_,int rows_,int cols_)
{  hx::ObjectPtr< Jigsawx_obj > result = new Jigsawx_obj();
	result->__construct(dx_,dy_,rows_,cols_);
	return result;}

Dynamic Jigsawx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Jigsawx_obj > result = new Jigsawx_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


Jigsawx_obj::Jigsawx_obj()
{
}

void Jigsawx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Jigsawx);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(lb,"lb");
	HX_MARK_MEMBER_NAME(rb,"rb");
	HX_MARK_MEMBER_NAME(rt,"rt");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(sides,"sides");
	HX_MARK_MEMBER_NAME(jigs,"jigs");
	HX_MARK_MEMBER_NAME(pieces,"pieces");
	HX_MARK_MEMBER_NAME(cols,"cols");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_END_CLASS();
}

void Jigsawx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(dy,"dy");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(lb,"lb");
	HX_VISIT_MEMBER_NAME(rb,"rb");
	HX_VISIT_MEMBER_NAME(rt,"rt");
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(sides,"sides");
	HX_VISIT_MEMBER_NAME(jigs,"jigs");
	HX_VISIT_MEMBER_NAME(pieces,"pieces");
	HX_VISIT_MEMBER_NAME(cols,"cols");
	HX_VISIT_MEMBER_NAME(rows,"rows");
}

Dynamic Jigsawx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dy") ) { return dy; }
		if (HX_FIELD_EQ(inName,"dx") ) { return dx; }
		if (HX_FIELD_EQ(inName,"lb") ) { return lb; }
		if (HX_FIELD_EQ(inName,"rb") ) { return rb; }
		if (HX_FIELD_EQ(inName,"rt") ) { return rt; }
		if (HX_FIELD_EQ(inName,"lt") ) { return lt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jigs") ) { return jigs; }
		if (HX_FIELD_EQ(inName,"cols") ) { return cols; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sides") ) { return sides; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"pieces") ) { return pieces; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Jigsawx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lb") ) { lb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rb") ) { rb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt") ) { rt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jigs") ) { jigs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cols") ) { cols=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sides") ) { sides=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pieces") ) { pieces=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Jigsawx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("dy"));
	outFields->push(HX_CSTRING("dx"));
	outFields->push(HX_CSTRING("lb"));
	outFields->push(HX_CSTRING("rb"));
	outFields->push(HX_CSTRING("rt"));
	outFields->push(HX_CSTRING("lt"));
	outFields->push(HX_CSTRING("sides"));
	outFields->push(HX_CSTRING("jigs"));
	outFields->push(HX_CSTRING("pieces"));
	outFields->push(HX_CSTRING("cols"));
	outFields->push(HX_CSTRING("rows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("dy"),
	HX_CSTRING("dx"),
	HX_CSTRING("lb"),
	HX_CSTRING("rb"),
	HX_CSTRING("rt"),
	HX_CSTRING("lt"),
	HX_CSTRING("sides"),
	HX_CSTRING("jigs"),
	HX_CSTRING("pieces"),
	HX_CSTRING("cols"),
	HX_CSTRING("rows"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Jigsawx_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Jigsawx_obj::__mClass,"__mClass");
};

Class Jigsawx_obj::__mClass;

void Jigsawx_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.Jigsawx"), hx::TCanCast< Jigsawx_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Jigsawx_obj::__boot()
{
}

} // end namespace jigsawx
