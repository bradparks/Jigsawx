package jigsawx;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class JigsawSideData extends haxe.lang.HxObject
{
	public    JigsawSideData(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    JigsawSideData()
	{
		jigsawx.JigsawSideData.__hx_ctor_jigsawx_JigsawSideData(this);
	}
	
	
	public static   void __hx_ctor_jigsawx_JigsawSideData(jigsawx.JigsawSideData __temp_me15)
	{
		{
		}
		
	}
	
	
	public static   java.lang.Object halfPieceData()
	{
		{
			jigsawx.JigsawSideData __temp_odecl116 = jigsawx.JigsawSideData.create();
			jigsawx.JigsawSideData __temp_odecl117 = jigsawx.JigsawSideData.create();
			return new haxe.lang.DynamicObject(new haxe.root.Array<java.lang.String>(new java.lang.String[]{"east", "north", "south", "west"}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{__temp_odecl116, null, __temp_odecl117, null}), new haxe.root.Array<java.lang.String>(new java.lang.String[]{}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{}));
		}
		
	}
	
	
	public static   jigsawx.Bubble createBubble()
	{
		if (( ((int) (java.lang.Math.round(java.lang.Math.random())) ) == 1 )) 
		{
			return jigsawx.Bubble.IN;
		}
		 else 
		{
			return jigsawx.Bubble.OUT;
		}
		
	}
	
	
	public static   jigsawx.Bubble swapBubble(jigsawx.Bubble bubble)
	{
		if (( bubble == jigsawx.Bubble.OUT )) 
		{
			return jigsawx.Bubble.IN;
		}
		
		if (( bubble == jigsawx.Bubble.IN )) 
		{
			return jigsawx.Bubble.OUT;
		}
		
		return null;
	}
	
	
	public static   jigsawx.JigsawSideData reflect(jigsawx.JigsawSideData j)
	{
		jigsawx.JigsawSideData side = new jigsawx.JigsawSideData();
		side.bubble = jigsawx.JigsawSideData.swapBubble(j.bubble);
		side.squew = j.squew;
		side.inout = j.inout;
		side.leftWide = j.rightWide;
		side.leftHi = j.rightHi;
		side.centreWide = j.centreWide;
		side.centreHi = j.centreHi;
		side.rightWide = j.leftWide;
		side.rightHi = j.leftHi;
		return side;
	}
	
	
	public static   jigsawx.JigsawSideData createSimple()
	{
		jigsawx.JigsawSideData side = new jigsawx.JigsawSideData();
		side.bubble = jigsawx.JigsawSideData.createBubble();
		side.squew = 0.5;
		side.inout = 0.5;
		side.leftWide = 0.5;
		side.leftHi = 0.5;
		side.centreWide = 0.5;
		side.centreHi = 0.5;
		side.rightWide = 0.5;
		side.rightHi = 0.5;
		return side;
	}
	
	
	public static   jigsawx.JigsawSideData create()
	{
		jigsawx.JigsawSideData side = new jigsawx.JigsawSideData();
		side.bubble = jigsawx.JigsawSideData.createBubble();
		side.squew = java.lang.Math.random();
		side.inout = java.lang.Math.random();
		side.leftWide = java.lang.Math.random();
		side.leftHi = java.lang.Math.random();
		side.centreWide = java.lang.Math.random();
		side.centreHi = java.lang.Math.random();
		side.rightWide = java.lang.Math.random();
		side.rightHi = java.lang.Math.random();
		return side;
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawx.JigsawSideData(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawx.JigsawSideData();
	}
	
	
	public  jigsawx.Bubble bubble;
	
	public  double squew;
	
	public  double inout;
	
	public  double leftWide;
	
	public  double leftHi;
	
	public  double centreWide;
	
	public  double centreHi;
	
	public  double rightWide;
	
	public  double rightHi;
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef112 = true;
			switch (field.hashCode())
			{
				case 1200600125:
				{
					if (field.equals("rightHi")) 
					{
						__temp_executeDef112 = false;
						this.rightHi = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 109686985:
				{
					if (field.equals("squew")) 
					{
						__temp_executeDef112 = false;
						this.squew = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1569032433:
				{
					if (field.equals("rightWide")) 
					{
						__temp_executeDef112 = false;
						this.rightWide = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 100357129:
				{
					if (field.equals("inout")) 
					{
						__temp_executeDef112 = false;
						this.inout = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -852046788:
				{
					if (field.equals("centreHi")) 
					{
						__temp_executeDef112 = false;
						this.centreHi = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1718511482:
				{
					if (field.equals("leftWide")) 
					{
						__temp_executeDef112 = false;
						this.leftWide = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1522240334:
				{
					if (field.equals("centreWide")) 
					{
						__temp_executeDef112 = false;
						this.centreWide = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1106590872:
				{
					if (field.equals("leftHi")) 
					{
						__temp_executeDef112 = false;
						this.leftHi = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef112) 
			{
				return super.__hx_setField_f(field, value, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef113 = true;
			switch (field.hashCode())
			{
				case 1200600125:
				{
					if (field.equals("rightHi")) 
					{
						__temp_executeDef113 = false;
						this.rightHi = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1378241396:
				{
					if (field.equals("bubble")) 
					{
						__temp_executeDef113 = false;
						this.bubble = ((jigsawx.Bubble) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1569032433:
				{
					if (field.equals("rightWide")) 
					{
						__temp_executeDef113 = false;
						this.rightWide = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 109686985:
				{
					if (field.equals("squew")) 
					{
						__temp_executeDef113 = false;
						this.squew = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -852046788:
				{
					if (field.equals("centreHi")) 
					{
						__temp_executeDef113 = false;
						this.centreHi = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 100357129:
				{
					if (field.equals("inout")) 
					{
						__temp_executeDef113 = false;
						this.inout = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 1522240334:
				{
					if (field.equals("centreWide")) 
					{
						__temp_executeDef113 = false;
						this.centreWide = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 1718511482:
				{
					if (field.equals("leftWide")) 
					{
						__temp_executeDef113 = false;
						this.leftWide = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1106590872:
				{
					if (field.equals("leftHi")) 
					{
						__temp_executeDef113 = false;
						this.leftHi = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef113) 
			{
				return super.__hx_setField(field, value, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		{
			boolean __temp_executeDef114 = true;
			switch (field.hashCode())
			{
				case 1200600125:
				{
					if (field.equals("rightHi")) 
					{
						__temp_executeDef114 = false;
						return this.rightHi;
					}
					
					break;
				}
				
				
				case -1378241396:
				{
					if (field.equals("bubble")) 
					{
						__temp_executeDef114 = false;
						return this.bubble;
					}
					
					break;
				}
				
				
				case -1569032433:
				{
					if (field.equals("rightWide")) 
					{
						__temp_executeDef114 = false;
						return this.rightWide;
					}
					
					break;
				}
				
				
				case 109686985:
				{
					if (field.equals("squew")) 
					{
						__temp_executeDef114 = false;
						return this.squew;
					}
					
					break;
				}
				
				
				case -852046788:
				{
					if (field.equals("centreHi")) 
					{
						__temp_executeDef114 = false;
						return this.centreHi;
					}
					
					break;
				}
				
				
				case 100357129:
				{
					if (field.equals("inout")) 
					{
						__temp_executeDef114 = false;
						return this.inout;
					}
					
					break;
				}
				
				
				case 1522240334:
				{
					if (field.equals("centreWide")) 
					{
						__temp_executeDef114 = false;
						return this.centreWide;
					}
					
					break;
				}
				
				
				case 1718511482:
				{
					if (field.equals("leftWide")) 
					{
						__temp_executeDef114 = false;
						return this.leftWide;
					}
					
					break;
				}
				
				
				case -1106590872:
				{
					if (field.equals("leftHi")) 
					{
						__temp_executeDef114 = false;
						return this.leftHi;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef114) 
			{
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		{
			boolean __temp_executeDef115 = true;
			switch (field.hashCode())
			{
				case 1200600125:
				{
					if (field.equals("rightHi")) 
					{
						__temp_executeDef115 = false;
						return this.rightHi;
					}
					
					break;
				}
				
				
				case 109686985:
				{
					if (field.equals("squew")) 
					{
						__temp_executeDef115 = false;
						return this.squew;
					}
					
					break;
				}
				
				
				case -1569032433:
				{
					if (field.equals("rightWide")) 
					{
						__temp_executeDef115 = false;
						return this.rightWide;
					}
					
					break;
				}
				
				
				case 100357129:
				{
					if (field.equals("inout")) 
					{
						__temp_executeDef115 = false;
						return this.inout;
					}
					
					break;
				}
				
				
				case -852046788:
				{
					if (field.equals("centreHi")) 
					{
						__temp_executeDef115 = false;
						return this.centreHi;
					}
					
					break;
				}
				
				
				case 1718511482:
				{
					if (field.equals("leftWide")) 
					{
						__temp_executeDef115 = false;
						return this.leftWide;
					}
					
					break;
				}
				
				
				case 1522240334:
				{
					if (field.equals("centreWide")) 
					{
						__temp_executeDef115 = false;
						return this.centreWide;
					}
					
					break;
				}
				
				
				case -1106590872:
				{
					if (field.equals("leftHi")) 
					{
						__temp_executeDef115 = false;
						return this.leftHi;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef115) 
			{
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("rightHi");
		baseArr.push("rightWide");
		baseArr.push("centreHi");
		baseArr.push("centreWide");
		baseArr.push("leftHi");
		baseArr.push("leftWide");
		baseArr.push("inout");
		baseArr.push("squew");
		baseArr.push("bubble");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


