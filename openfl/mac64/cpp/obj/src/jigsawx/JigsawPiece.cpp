#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jigsawx_Bubble
#include <jigsawx/Bubble.h>
#endif
#ifndef INCLUDED_jigsawx_Compass
#include <jigsawx/Compass.h>
#endif
#ifndef INCLUDED_jigsawx_JigsawPiece
#include <jigsawx/JigsawPiece.h>
#endif
#ifndef INCLUDED_jigsawx_JigsawSideData
#include <jigsawx/JigsawSideData.h>
#endif
#ifndef INCLUDED_jigsawx_OpenEllipse
#include <jigsawx/OpenEllipse.h>
#endif
#ifndef INCLUDED_jigsawx_math_Vec2
#include <jigsawx/math/Vec2.h>
#endif
namespace jigsawx{

Void JigsawPiece_obj::__construct(::jigsawx::math::Vec2 xy_,int row,int col,::jigsawx::math::Vec2 lt,::jigsawx::math::Vec2 rt,::jigsawx::math::Vec2 rb,::jigsawx::math::Vec2 lb,Dynamic sideData_)
{
HX_STACK_PUSH("JigsawPiece::new","jigsawx/JigsawPiece.hx",70);
{
	HX_STACK_LINE(72)
	this->enabled = true;
	HX_STACK_LINE(73)
	this->xy = ::jigsawx::math::Vec2_obj::__new(xy_->x,xy_->y);
	HX_STACK_LINE(74)
	this->sideData = sideData_;
	HX_STACK_LINE(75)
	this->points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(76)
	this->stepAngle = (Float(((Float((int)10) / Float(1.5)) * ::Math_obj::PI)) / Float((int)180));
	HX_STACK_LINE(77)
	this->first = lt;
	HX_STACK_LINE(80)
	if (((this->sideData->__Field(HX_CSTRING("north"),true) != null()))){
		HX_STACK_LINE(80)
		this->createVertSide(lt,rt,this->sideData->__Field(HX_CSTRING("north"),true),::jigsawx::Compass_obj::NORTH);
	}
	HX_STACK_LINE(81)
	this->points->push(rt);
	HX_STACK_LINE(84)
	if (((this->sideData->__Field(HX_CSTRING("east"),true) != null()))){
		HX_STACK_LINE(84)
		this->createHoriSide(rt,rb,this->sideData->__Field(HX_CSTRING("east"),true),::jigsawx::Compass_obj::EAST);
	}
	HX_STACK_LINE(85)
	this->points->push(rb);
	HX_STACK_LINE(88)
	if (((this->sideData->__Field(HX_CSTRING("south"),true) != null()))){
		HX_STACK_LINE(88)
		this->createVertSide(rb,lb,this->sideData->__Field(HX_CSTRING("south"),true),::jigsawx::Compass_obj::SOUTH);
	}
	HX_STACK_LINE(89)
	this->points->push(lb);
	HX_STACK_LINE(92)
	if (((this->sideData->__Field(HX_CSTRING("west"),true) != null()))){
		HX_STACK_LINE(92)
		this->createHoriSide(lb,lt,this->sideData->__Field(HX_CSTRING("west"),true),::jigsawx::Compass_obj::WEST);
	}
	HX_STACK_LINE(93)
	this->points->push(lt);
}
;
	return null();
}

JigsawPiece_obj::~JigsawPiece_obj() { }

Dynamic JigsawPiece_obj::__CreateEmpty() { return  new JigsawPiece_obj; }
hx::ObjectPtr< JigsawPiece_obj > JigsawPiece_obj::__new(::jigsawx::math::Vec2 xy_,int row,int col,::jigsawx::math::Vec2 lt,::jigsawx::math::Vec2 rt,::jigsawx::math::Vec2 rb,::jigsawx::math::Vec2 lb,Dynamic sideData_)
{  hx::ObjectPtr< JigsawPiece_obj > result = new JigsawPiece_obj();
	result->__construct(xy_,row,col,lt,rt,rb,lb,sideData_);
	return result;}

Dynamic JigsawPiece_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JigsawPiece_obj > result = new JigsawPiece_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void JigsawPiece_obj::drawSide( Float dx,Float dy,::jigsawx::JigsawSideData sideData,::jigsawx::Compass compass){
{
		HX_STACK_PUSH("JigsawPiece::drawSide","jigsawx/JigsawPiece.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_ARG(dy,"dy");
		HX_STACK_ARG(sideData,"sideData");
		HX_STACK_ARG(compass,"compass");
		HX_STACK_LINE(149)
		Float halfPI = (Float(::Math_obj::PI) / Float((int)2));		HX_STACK_VAR(halfPI,"halfPI");
		HX_STACK_LINE(150)
		::jigsawx::math::Vec2 dimensions = ::jigsawx::math::Vec2_obj::__new(null(),null());		HX_STACK_VAR(dimensions,"dimensions");
		HX_STACK_LINE(151)
		::jigsawx::math::Vec2 offsetCentre = ::jigsawx::math::Vec2_obj::__new(null(),null());		HX_STACK_VAR(offsetCentre,"offsetCentre");
		HX_STACK_LINE(152)
		::jigsawx::Bubble bubble = sideData->bubble;		HX_STACK_VAR(bubble,"bubble");
		struct _Function_1_1{
			inline static ::jigsawx::math::Vec2 Block( Float &dy,::jigsawx::Compass &compass,Float &dx,::jigsawx::Bubble &bubble){
				HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",155);
				{
					HX_STACK_LINE(155)
					{
						::jigsawx::Compass _switch_1 = (compass);
						switch((_switch_1)->GetIndex()){
							case 0: {
								struct _Function_3_1{
									inline static int Block( ::jigsawx::Bubble &bubble){
										HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",157);
										{
											HX_STACK_LINE(157)
											{
												::jigsawx::Bubble _switch_2 = (bubble);
												switch((_switch_2)->GetIndex()){
													case 0: {
														HX_STACK_LINE(157)
														return (int)1;
													}
													;break;
													case 1: {
														HX_STACK_LINE(157)
														return (int)-1;
													}
													;break;
												}
											}
										}
										return null();
									}
								};
								HX_STACK_LINE(157)
								return ::jigsawx::math::Vec2_obj::__new(dx,(dy + ((int)6 * _Function_3_1::Block(bubble))));
							}
							;break;
							case 2: {
								struct _Function_3_1{
									inline static int Block( ::jigsawx::Bubble &bubble){
										HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",158);
										{
											HX_STACK_LINE(158)
											{
												::jigsawx::Bubble _switch_3 = (bubble);
												switch((_switch_3)->GetIndex()){
													case 0: {
														HX_STACK_LINE(158)
														return (int)1;
													}
													;break;
													case 1: {
														HX_STACK_LINE(158)
														return (int)-1;
													}
													;break;
												}
											}
										}
										return null();
									}
								};
								HX_STACK_LINE(158)
								return ::jigsawx::math::Vec2_obj::__new((dx - ((int)6 * _Function_3_1::Block(bubble))),dy);
							}
							;break;
							case 1: {
								struct _Function_3_1{
									inline static int Block( ::jigsawx::Bubble &bubble){
										HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",159);
										{
											HX_STACK_LINE(159)
											{
												::jigsawx::Bubble _switch_4 = (bubble);
												switch((_switch_4)->GetIndex()){
													case 0: {
														HX_STACK_LINE(159)
														return (int)1;
													}
													;break;
													case 1: {
														HX_STACK_LINE(159)
														return (int)-1;
													}
													;break;
												}
											}
										}
										return null();
									}
								};
								HX_STACK_LINE(159)
								return ::jigsawx::math::Vec2_obj::__new(dx,(dy - ((int)6 * _Function_3_1::Block(bubble))));
							}
							;break;
							case 3: {
								struct _Function_3_1{
									inline static int Block( ::jigsawx::Bubble &bubble){
										HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",160);
										{
											HX_STACK_LINE(160)
											{
												::jigsawx::Bubble _switch_5 = (bubble);
												switch((_switch_5)->GetIndex()){
													case 0: {
														HX_STACK_LINE(160)
														return (int)1;
													}
													;break;
													case 1: {
														HX_STACK_LINE(160)
														return (int)-1;
													}
													;break;
												}
											}
										}
										return null();
									}
								};
								HX_STACK_LINE(160)
								return ::jigsawx::math::Vec2_obj::__new((dx + ((int)6 * _Function_3_1::Block(bubble))),dy);
							}
							;break;
						}
					}
				}
				return null();
			}
		};
		HX_STACK_LINE(154)
		this->centre = _Function_1_1::Block(dy,compass,dx,bubble);
		HX_STACK_LINE(163)
		this->curveBuilder = ::jigsawx::OpenEllipse_obj::__new();
		HX_STACK_LINE(164)
		this->curveBuilder->centre = this->centre;
		HX_STACK_LINE(167)
		dimensions->x = ((((int)1 + (Float(((0.5 - sideData->centreWide))) / Float((int)2)))) * 7.5);
		HX_STACK_LINE(168)
		dimensions->y = ((((int)1 + (Float(((0.5 - sideData->centreHi))) / Float((int)2)))) * 7.5);
		HX_STACK_LINE(170)
		this->curveBuilder->dimensions = dimensions;
		HX_STACK_LINE(171)
		this->curveBuilder->beginAngle = (Float(::Math_obj::PI) / Float((int)8));
		HX_STACK_LINE(172)
		this->curveBuilder->finishAngle = (Float(-(::Math_obj::PI)) / Float((int)8));
		HX_STACK_LINE(173)
		this->curveBuilder->stepAngle = this->stepAngle;
		struct _Function_1_2{
			inline static Float Block( ::jigsawx::Bubble &bubble){
				HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",174);
				{
					HX_STACK_LINE(174)
					{
						::jigsawx::Bubble _switch_6 = (bubble);
						switch((_switch_6)->GetIndex()){
							case 0: {
								HX_STACK_LINE(174)
								return (int)0;
							}
							;break;
							case 1: {
								HX_STACK_LINE(174)
								return ::Math_obj::PI;
							}
							;break;
						}
					}
				}
				return null();
			}
		};
		HX_STACK_LINE(174)
		this->curveBuilder->rotation = _Function_1_2::Block(bubble);
		HX_STACK_LINE(176)
		{
			::jigsawx::Compass _switch_7 = (compass);
			switch((_switch_7)->GetIndex()){
				case 0: {
				}
				;break;
				case 2: {
					HX_STACK_LINE(179)
					hx::AddEq(this->curveBuilder->rotation,halfPI);
				}
				;break;
				case 1: {
					HX_STACK_LINE(180)
					hx::AddEq(this->curveBuilder->rotation,::Math_obj::PI);
				}
				;break;
				case 3: {
					HX_STACK_LINE(181)
					hx::AddEq(this->curveBuilder->rotation,((int)3 * halfPI));
				}
				;break;
			}
		}
		HX_STACK_LINE(184)
		Array< ::Dynamic > secondPoints = this->curveBuilder->getRenderList();		HX_STACK_VAR(secondPoints,"secondPoints");
		HX_STACK_LINE(186)
		if (((bubble == ::jigsawx::Bubble_obj::IN))){
			HX_STACK_LINE(186)
			secondPoints->reverse();
		}
		HX_STACK_LINE(188)
		Float theta = ((this->curveBuilder->beginAngle - this->curveBuilder->finishAngle) + ::Math_obj::PI);		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(189)
		Float cosTheta = ::Math_obj::cos(theta);		HX_STACK_VAR(cosTheta,"cosTheta");
		HX_STACK_LINE(190)
		Float sinTheta = ::Math_obj::sin(theta);		HX_STACK_VAR(sinTheta,"sinTheta");
		HX_STACK_LINE(192)
		Float hyp = this->curveBuilder->getBeginRadius();		HX_STACK_VAR(hyp,"hyp");
		HX_STACK_LINE(194)
		dimensions->x = ((((int)1 + (Float(((0.5 - sideData->leftWide))) / Float((int)2)))) * 4.);
		HX_STACK_LINE(195)
		dimensions->y = ((((int)1 + (Float(((0.5 - sideData->leftHi))) / Float((int)2)))) * ((Float((Float((int)22) / Float((int)6))) / Float(1.5))));
		HX_STACK_LINE(197)
		this->curveBuilder->dimensions = dimensions;
		HX_STACK_LINE(198)
		this->curveBuilder->beginAngle = halfPI;
		HX_STACK_LINE(199)
		this->curveBuilder->finishAngle = -(halfPI);
		HX_STACK_LINE(200)
		this->curveBuilder->stepAngle = this->stepAngle;
		struct _Function_1_3{
			inline static Float Block( ::jigsawx::Bubble &bubble,Float &halfPI){
				HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",201);
				{
					HX_STACK_LINE(201)
					{
						::jigsawx::Bubble _switch_8 = (bubble);
						switch((_switch_8)->GetIndex()){
							case 0: {
								HX_STACK_LINE(201)
								return (int)0;
							}
							;break;
							case 1: {
								HX_STACK_LINE(201)
								return halfPI;
							}
							;break;
						}
					}
				}
				return null();
			}
		};
		HX_STACK_LINE(201)
		this->curveBuilder->rotation = (theta + _Function_1_3::Block(bubble,halfPI));
		HX_STACK_LINE(203)
		{
			::jigsawx::Compass _switch_9 = (compass);
			switch((_switch_9)->GetIndex()){
				case 0: {
				}
				;break;
				case 2: {
					HX_STACK_LINE(206)
					hx::AddEq(this->curveBuilder->rotation,halfPI);
				}
				;break;
				case 1: {
					HX_STACK_LINE(207)
					hx::AddEq(this->curveBuilder->rotation,::Math_obj::PI);
				}
				;break;
				case 3: {
					HX_STACK_LINE(208)
					hx::AddEq(this->curveBuilder->rotation,((int)3 * halfPI));
				}
				;break;
			}
		}
		HX_STACK_LINE(211)
		Float hypLeft = (hyp + this->curveBuilder->dimensions->x);		HX_STACK_VAR(hypLeft,"hypLeft");
		HX_STACK_LINE(213)
		{
			::jigsawx::Compass _switch_10 = (compass);
			switch((_switch_10)->GetIndex()){
				case 0: {
					HX_STACK_LINE(216)
					offsetCentre->x = (this->centre->x + (hypLeft * cosTheta));
					struct _Function_2_1{
						inline static Float Block( Float &sinTheta,::jigsawx::Bubble &bubble,Float &hypLeft){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",217);
							{
								HX_STACK_LINE(217)
								{
									::jigsawx::Bubble _switch_11 = (bubble);
									switch((_switch_11)->GetIndex()){
										case 0: {
											HX_STACK_LINE(217)
											return (hypLeft * sinTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(217)
											return (-(hypLeft) * sinTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(217)
					offsetCentre->y = (this->centre->y + _Function_2_1::Block(sinTheta,bubble,hypLeft));
				}
				;break;
				case 2: {
					struct _Function_2_1{
						inline static Float Block( ::jigsawx::Bubble &bubble,Float &hypLeft,Float &cosTheta){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",220);
							{
								HX_STACK_LINE(220)
								{
									::jigsawx::Bubble _switch_12 = (bubble);
									switch((_switch_12)->GetIndex()){
										case 0: {
											HX_STACK_LINE(220)
											return (-(hypLeft) * cosTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(220)
											return (hypLeft * cosTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(220)
					offsetCentre->x = (this->centre->x + _Function_2_1::Block(bubble,hypLeft,cosTheta));
					HX_STACK_LINE(221)
					offsetCentre->y = (this->centre->y + (hypLeft * sinTheta));
				}
				;break;
				case 1: {
					HX_STACK_LINE(224)
					offsetCentre->x = (this->centre->x - (hypLeft * cosTheta));
					struct _Function_2_1{
						inline static Float Block( Float &sinTheta,::jigsawx::Bubble &bubble,Float &hypLeft){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",225);
							{
								HX_STACK_LINE(225)
								{
									::jigsawx::Bubble _switch_13 = (bubble);
									switch((_switch_13)->GetIndex()){
										case 0: {
											HX_STACK_LINE(225)
											return (hypLeft * sinTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(225)
											return (-(hypLeft) * sinTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(225)
					offsetCentre->y = (this->centre->y - _Function_2_1::Block(sinTheta,bubble,hypLeft));
				}
				;break;
				case 3: {
					struct _Function_2_1{
						inline static Float Block( ::jigsawx::Bubble &bubble,Float &hypLeft,Float &cosTheta){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",228);
							{
								HX_STACK_LINE(228)
								{
									::jigsawx::Bubble _switch_14 = (bubble);
									switch((_switch_14)->GetIndex()){
										case 0: {
											HX_STACK_LINE(228)
											return (hypLeft * cosTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(228)
											return (-(hypLeft) * cosTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(228)
					offsetCentre->x = (this->centre->x + _Function_2_1::Block(bubble,hypLeft,cosTheta));
					HX_STACK_LINE(229)
					offsetCentre->y = (this->centre->y - (hypLeft * sinTheta));
				}
				;break;
			}
		}
		HX_STACK_LINE(233)
		this->curveBuilder->centre = offsetCentre;
		HX_STACK_LINE(234)
		::jigsawx::math::Vec2 startPoint = this->curveBuilder->getBegin();		HX_STACK_VAR(startPoint,"startPoint");
		HX_STACK_LINE(235)
		Array< ::Dynamic > firstPoints = this->curveBuilder->getRenderList();		HX_STACK_VAR(firstPoints,"firstPoints");
		HX_STACK_LINE(237)
		if (((sideData->bubble == ::jigsawx::Bubble_obj::OUT))){
			HX_STACK_LINE(237)
			firstPoints->reverse();
		}
		HX_STACK_LINE(238)
		firstPoints->pop().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(239)
		firstPoints->pop().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(240)
		secondPoints->shift().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(241)
		secondPoints->shift().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(242)
		secondPoints->shift().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(243)
		this->points = this->points->concat(firstPoints->concat(secondPoints));
		HX_STACK_LINE(246)
		dimensions->x = ((((int)1 + (Float(((0.5 - sideData->rightWide))) / Float((int)2)))) * 4.);
		HX_STACK_LINE(247)
		dimensions->y = ((((int)1 + (Float(((0.5 - sideData->rightHi))) / Float((int)2)))) * ((Float((Float((int)22) / Float((int)6))) / Float(1.5))));
		HX_STACK_LINE(248)
		this->curveBuilder->dimensions = dimensions;
		HX_STACK_LINE(249)
		this->curveBuilder->beginAngle = halfPI;
		HX_STACK_LINE(250)
		this->curveBuilder->finishAngle = -(halfPI);
		HX_STACK_LINE(251)
		this->curveBuilder->stepAngle = this->stepAngle;
		struct _Function_1_4{
			inline static Float Block( ::jigsawx::Bubble &bubble,Float &halfPI){
				HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",252);
				{
					HX_STACK_LINE(252)
					{
						::jigsawx::Bubble _switch_15 = (bubble);
						switch((_switch_15)->GetIndex()){
							case 0: {
								HX_STACK_LINE(252)
								return -(halfPI);
							}
							;break;
							case 1: {
								HX_STACK_LINE(252)
								return ::Math_obj::PI;
							}
							;break;
						}
					}
				}
				return null();
			}
		};
		HX_STACK_LINE(252)
		this->curveBuilder->rotation = (theta + _Function_1_4::Block(bubble,halfPI));
		HX_STACK_LINE(254)
		{
			::jigsawx::Compass _switch_16 = (compass);
			switch((_switch_16)->GetIndex()){
				case 0: {
				}
				;break;
				case 2: {
					HX_STACK_LINE(257)
					hx::AddEq(this->curveBuilder->rotation,halfPI);
				}
				;break;
				case 1: {
					HX_STACK_LINE(258)
					hx::AddEq(this->curveBuilder->rotation,::Math_obj::PI);
				}
				;break;
				case 3: {
					HX_STACK_LINE(259)
					hx::AddEq(this->curveBuilder->rotation,((int)3 * halfPI));
				}
				;break;
			}
		}
		HX_STACK_LINE(262)
		Float hypRight = (hyp + this->curveBuilder->dimensions->x);		HX_STACK_VAR(hypRight,"hypRight");
		HX_STACK_LINE(264)
		{
			::jigsawx::Compass _switch_17 = (compass);
			switch((_switch_17)->GetIndex()){
				case 0: {
					HX_STACK_LINE(267)
					offsetCentre->x = (this->centre->x - (hypRight * cosTheta));
					struct _Function_2_1{
						inline static Float Block( Float &sinTheta,::jigsawx::Bubble &bubble,Float &hypRight){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",268);
							{
								HX_STACK_LINE(268)
								{
									::jigsawx::Bubble _switch_18 = (bubble);
									switch((_switch_18)->GetIndex()){
										case 0: {
											HX_STACK_LINE(268)
											return (hypRight * sinTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(268)
											return (-(hypRight) * sinTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(268)
					offsetCentre->y = (this->centre->y + _Function_2_1::Block(sinTheta,bubble,hypRight));
				}
				;break;
				case 2: {
					struct _Function_2_1{
						inline static Float Block( ::jigsawx::Bubble &bubble,Float &hypLeft,Float &cosTheta){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",271);
							{
								HX_STACK_LINE(271)
								{
									::jigsawx::Bubble _switch_19 = (bubble);
									switch((_switch_19)->GetIndex()){
										case 0: {
											HX_STACK_LINE(271)
											return (-(hypLeft) * cosTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(271)
											return (hypLeft * cosTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(271)
					offsetCentre->x = (this->centre->x + _Function_2_1::Block(bubble,hypLeft,cosTheta));
					HX_STACK_LINE(272)
					offsetCentre->y = (this->centre->y - (hypLeft * sinTheta));
				}
				;break;
				case 1: {
					HX_STACK_LINE(275)
					offsetCentre->x = (this->centre->x + (hypRight * cosTheta));
					struct _Function_2_1{
						inline static Float Block( Float &sinTheta,::jigsawx::Bubble &bubble,Float &hypRight){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",276);
							{
								HX_STACK_LINE(276)
								{
									::jigsawx::Bubble _switch_20 = (bubble);
									switch((_switch_20)->GetIndex()){
										case 0: {
											HX_STACK_LINE(276)
											return (hypRight * sinTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(276)
											return (-(hypRight) * sinTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(276)
					offsetCentre->y = (this->centre->y - _Function_2_1::Block(sinTheta,bubble,hypRight));
				}
				;break;
				case 3: {
					struct _Function_2_1{
						inline static Float Block( ::jigsawx::Bubble &bubble,Float &hypLeft,Float &cosTheta){
							HX_STACK_PUSH("*::closure","jigsawx/JigsawPiece.hx",279);
							{
								HX_STACK_LINE(279)
								{
									::jigsawx::Bubble _switch_21 = (bubble);
									switch((_switch_21)->GetIndex()){
										case 0: {
											HX_STACK_LINE(279)
											return (hypLeft * cosTheta);
										}
										;break;
										case 1: {
											HX_STACK_LINE(279)
											return (-(hypLeft) * cosTheta);
										}
										;break;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(279)
					offsetCentre->x = (this->centre->x + _Function_2_1::Block(bubble,hypLeft,cosTheta));
					HX_STACK_LINE(280)
					offsetCentre->y = (this->centre->y + (hypLeft * sinTheta));
				}
				;break;
			}
		}
		HX_STACK_LINE(284)
		this->curveBuilder->centre = offsetCentre;
		HX_STACK_LINE(285)
		Array< ::Dynamic > thirdPoints = this->curveBuilder->getRenderList();		HX_STACK_VAR(thirdPoints,"thirdPoints");
		HX_STACK_LINE(286)
		if (((bubble == ::jigsawx::Bubble_obj::OUT))){
			HX_STACK_LINE(286)
			thirdPoints->reverse();
		}
		HX_STACK_LINE(287)
		thirdPoints->shift().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(288)
		thirdPoints->shift().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(289)
		this->points->pop().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(290)
		this->points->pop().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(291)
		this->points->pop().StaticCast< ::jigsawx::math::Vec2 >();
		HX_STACK_LINE(292)
		this->points = this->points->concat(thirdPoints);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(JigsawPiece_obj,drawSide,(void))

Void JigsawPiece_obj::createHoriSide( ::jigsawx::math::Vec2 A,::jigsawx::math::Vec2 B,::jigsawx::JigsawSideData side,::jigsawx::Compass compass){
{
		HX_STACK_PUSH("JigsawPiece::createHoriSide","jigsawx/JigsawPiece.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_ARG(B,"B");
		HX_STACK_ARG(side,"side");
		HX_STACK_ARG(compass,"compass");
		HX_STACK_LINE(135)
		this->drawSide((((A->x + (Float(((B->x - A->x))) / Float((int)2))) + (Float((Float((int)10) / Float(1.5))) / Float((int)2))) - (side->inout * ((Float((int)10) / Float(1.5))))),(((A->y + (Float(((B->y - A->y))) / Float((int)2))) + 8.) - (side->squew * 16.)),side,compass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(JigsawPiece_obj,createHoriSide,(void))

Void JigsawPiece_obj::createVertSide( ::jigsawx::math::Vec2 A,::jigsawx::math::Vec2 B,::jigsawx::JigsawSideData side,::jigsawx::Compass compass){
{
		HX_STACK_PUSH("JigsawPiece::createVertSide","jigsawx/JigsawPiece.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_ARG(B,"B");
		HX_STACK_ARG(side,"side");
		HX_STACK_ARG(compass,"compass");
		HX_STACK_LINE(119)
		this->drawSide((((A->x + (Float(((B->x - A->x))) / Float((int)2))) + 8.) - (side->squew * 16.)),(((A->y + (Float(((B->y - A->y))) / Float((int)2))) + (Float((Float((int)10) / Float(1.5))) / Float((int)2))) - (side->inout * ((Float((int)10) / Float(1.5))))),side,compass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(JigsawPiece_obj,createVertSide,(void))

::jigsawx::math::Vec2 JigsawPiece_obj::getFirst( ){
	HX_STACK_PUSH("JigsawPiece::getFirst","jigsawx/JigsawPiece.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(107)
	return this->first;
}


HX_DEFINE_DYNAMIC_FUNC0(JigsawPiece_obj,getFirst,return )

Array< ::Dynamic > JigsawPiece_obj::getPoints( ){
	HX_STACK_PUSH("JigsawPiece::getPoints","jigsawx/JigsawPiece.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_LINE(99)
	return this->points;
}


HX_DEFINE_DYNAMIC_FUNC0(JigsawPiece_obj,getPoints,return )


JigsawPiece_obj::JigsawPiece_obj()
{
}

void JigsawPiece_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JigsawPiece);
	HX_MARK_MEMBER_NAME(col,"col");
	HX_MARK_MEMBER_NAME(row,"row");
	HX_MARK_MEMBER_NAME(xy,"xy");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(sideData,"sideData");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(centre,"centre");
	HX_MARK_MEMBER_NAME(stepAngle,"stepAngle");
	HX_MARK_MEMBER_NAME(curveBuilder,"curveBuilder");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_END_CLASS();
}

void JigsawPiece_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(col,"col");
	HX_VISIT_MEMBER_NAME(row,"row");
	HX_VISIT_MEMBER_NAME(xy,"xy");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(sideData,"sideData");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(centre,"centre");
	HX_VISIT_MEMBER_NAME(stepAngle,"stepAngle");
	HX_VISIT_MEMBER_NAME(curveBuilder,"curveBuilder");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
}

Dynamic JigsawPiece_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return xy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { return col; }
		if (HX_FIELD_EQ(inName,"row") ) { return row; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"centre") ) { return centre; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawSide") ) { return drawSide_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirst") ) { return getFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"sideData") ) { return sideData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPoints") ) { return getPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"stepAngle") ) { return stepAngle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curveBuilder") ) { return curveBuilder; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createHoriSide") ) { return createHoriSide_dyn(); }
		if (HX_FIELD_EQ(inName,"createVertSide") ) { return createVertSide_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JigsawPiece_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { xy=inValue.Cast< ::jigsawx::math::Vec2 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { col=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"row") ) { row=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< ::jigsawx::math::Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centre") ) { centre=inValue.Cast< ::jigsawx::math::Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sideData") ) { sideData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepAngle") ) { stepAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curveBuilder") ) { curveBuilder=inValue.Cast< ::jigsawx::OpenEllipse >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JigsawPiece_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("col"));
	outFields->push(HX_CSTRING("row"));
	outFields->push(HX_CSTRING("xy"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("sideData"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("centre"));
	outFields->push(HX_CSTRING("stepAngle"));
	outFields->push(HX_CSTRING("curveBuilder"));
	outFields->push(HX_CSTRING("enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawSide"),
	HX_CSTRING("createHoriSide"),
	HX_CSTRING("createVertSide"),
	HX_CSTRING("getFirst"),
	HX_CSTRING("getPoints"),
	HX_CSTRING("col"),
	HX_CSTRING("row"),
	HX_CSTRING("xy"),
	HX_CSTRING("first"),
	HX_CSTRING("sideData"),
	HX_CSTRING("points"),
	HX_CSTRING("centre"),
	HX_CSTRING("stepAngle"),
	HX_CSTRING("curveBuilder"),
	HX_CSTRING("enabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JigsawPiece_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JigsawPiece_obj::__mClass,"__mClass");
};

Class JigsawPiece_obj::__mClass;

void JigsawPiece_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jigsawx.JigsawPiece"), hx::TCanCast< JigsawPiece_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JigsawPiece_obj::__boot()
{
}

} // end namespace jigsawx
