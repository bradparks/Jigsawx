package jigsawx;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class OpenEllipse extends haxe.lang.HxObject
{
	public    OpenEllipse(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    OpenEllipse()
	{
		jigsawx.OpenEllipse.__hx_ctor_jigsawx_OpenEllipse(this);
	}
	
	
	public static   void __hx_ctor_jigsawx_OpenEllipse(jigsawx.OpenEllipse __temp_me17)
	{
		{
		}
		
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawx.OpenEllipse(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawx.OpenEllipse();
	}
	
	
	public  double rotation;
	
	public  double beginAngle;
	
	public  double finishAngle;
	
	public  double stepAngle;
	
	public  jigsawx.math.Vec2 centre;
	
	public  jigsawx.math.Vec2 dimensions;
	
	public  jigsawx.ds.CircleIter circleIter;
	
	public  haxe.root.Array<jigsawx.math.Vec2> _points;
	
	public   jigsawx.math.Vec2 getBegin()
	{
		return this.createPoint(this.centre, this.dimensions, this.beginAngle);
	}
	
	
	public   jigsawx.math.Vec2 getFinish()
	{
		return this.createPoint(this.centre, this.dimensions, this.finishAngle);
	}
	
	
	public   double getBeginRadius()
	{
		return this.pointDistance(this.centre, this.getBegin());
	}
	
	
	public   double getFinishRadius()
	{
		return this.pointDistance(this.centre, this.getFinish());
	}
	
	
	public   double pointDistance(jigsawx.math.Vec2 A, jigsawx.math.Vec2 B)
	{
		double dx = ( A.x - B.x );
		double dy = ( A.y - B.y );
		return java.lang.Math.sqrt(( ( dx * dx ) + ( dy * dy ) ));
	}
	
	
	public   void setUp()
	{
		this.circleIter = jigsawx.ds.CircleIter.pi2pi(this.beginAngle, this.finishAngle, this.stepAngle);
	}
	
	
	public   haxe.root.Array<jigsawx.math.Vec2> getRenderList()
	{
		this._points = new haxe.root.Array<jigsawx.math.Vec2>();
		if (( this.circleIter == null )) 
		{
			this.setUp();
		}
		
		this._points.push(this.createPoint(this.centre, this.dimensions, this.beginAngle));
		{
			jigsawx.ds.CircleIter __temp_iterator28 = jigsawx.ds.CircleIter.pi2pi(this.beginAngle, this.finishAngle, this.stepAngle).reset();
			while (__temp_iterator28.hasNext())
			{
				double theta = __temp_iterator28.next();
				this._points.push(this.createPoint(this.centre, this.dimensions, theta));
			}
			
		}
		
		return this._points;
	}
	
	
	public   jigsawx.math.Vec2 createPoint(jigsawx.math.Vec2 centre, jigsawx.math.Vec2 dimensions, double theta)
	{
		double offSetA = ( ( ( 3 * java.lang.Math.PI ) / 2 ) - this.rotation );
		double dx = ( dimensions.x * java.lang.Math.sin(theta) );
		double dy = (  - (dimensions.y)  * java.lang.Math.cos(theta) );
		double dxNew = ( ( centre.x - ( dx * java.lang.Math.sin(offSetA) ) ) + ( dy * java.lang.Math.cos(offSetA) ) );
		double dyNew = ( ( centre.y - ( dx * java.lang.Math.cos(offSetA) ) ) - ( dy * java.lang.Math.sin(offSetA) ) );
		return new jigsawx.math.Vec2(((java.lang.Object) (dxNew) ), ((java.lang.Object) (dyNew) ));
	}
	
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef122 = true;
			switch (field.hashCode())
			{
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef122 = false;
						this.stepAngle = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -40300674:
				{
					if (field.equals("rotation")) 
					{
						__temp_executeDef122 = false;
						this.rotation = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1320017920:
				{
					if (field.equals("finishAngle")) 
					{
						__temp_executeDef122 = false;
						this.finishAngle = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1084297642:
				{
					if (field.equals("beginAngle")) 
					{
						__temp_executeDef122 = false;
						this.beginAngle = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef122) 
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
			boolean __temp_executeDef123 = true;
			switch (field.hashCode())
			{
				case 1725716994:
				{
					if (field.equals("_points")) 
					{
						__temp_executeDef123 = false;
						this._points = ((haxe.root.Array<jigsawx.math.Vec2>) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -40300674:
				{
					if (field.equals("rotation")) 
					{
						__temp_executeDef123 = false;
						this.rotation = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1111178232:
				{
					if (field.equals("circleIter")) 
					{
						__temp_executeDef123 = false;
						this.circleIter = ((jigsawx.ds.CircleIter) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1084297642:
				{
					if (field.equals("beginAngle")) 
					{
						__temp_executeDef123 = false;
						this.beginAngle = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 414334925:
				{
					if (field.equals("dimensions")) 
					{
						__temp_executeDef123 = false;
						this.dimensions = ((jigsawx.math.Vec2) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1320017920:
				{
					if (field.equals("finishAngle")) 
					{
						__temp_executeDef123 = false;
						this.finishAngle = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1364013605:
				{
					if (field.equals("centre")) 
					{
						__temp_executeDef123 = false;
						this.centre = ((jigsawx.math.Vec2) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef123 = false;
						this.stepAngle = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef123) 
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
			boolean __temp_executeDef124 = true;
			switch (field.hashCode())
			{
				case -507575820:
				{
					if (field.equals("createPoint")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createPoint"))) );
					}
					
					break;
				}
				
				
				case -40300674:
				{
					if (field.equals("rotation")) 
					{
						__temp_executeDef124 = false;
						return this.rotation;
					}
					
					break;
				}
				
				
				case 896099146:
				{
					if (field.equals("getRenderList")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getRenderList"))) );
					}
					
					break;
				}
				
				
				case 1084297642:
				{
					if (field.equals("beginAngle")) 
					{
						__temp_executeDef124 = false;
						return this.beginAngle;
					}
					
					break;
				}
				
				
				case 109328029:
				{
					if (field.equals("setUp")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setUp"))) );
					}
					
					break;
				}
				
				
				case 1320017920:
				{
					if (field.equals("finishAngle")) 
					{
						__temp_executeDef124 = false;
						return this.finishAngle;
					}
					
					break;
				}
				
				
				case -54282843:
				{
					if (field.equals("pointDistance")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("pointDistance"))) );
					}
					
					break;
				}
				
				
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef124 = false;
						return this.stepAngle;
					}
					
					break;
				}
				
				
				case 71990651:
				{
					if (field.equals("getFinishRadius")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFinishRadius"))) );
					}
					
					break;
				}
				
				
				case -1364013605:
				{
					if (field.equals("centre")) 
					{
						__temp_executeDef124 = false;
						return this.centre;
					}
					
					break;
				}
				
				
				case -912181915:
				{
					if (field.equals("getBeginRadius")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getBeginRadius"))) );
					}
					
					break;
				}
				
				
				case 414334925:
				{
					if (field.equals("dimensions")) 
					{
						__temp_executeDef124 = false;
						return this.dimensions;
					}
					
					break;
				}
				
				
				case 421572489:
				{
					if (field.equals("getFinish")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFinish"))) );
					}
					
					break;
				}
				
				
				case -1111178232:
				{
					if (field.equals("circleIter")) 
					{
						__temp_executeDef124 = false;
						return this.circleIter;
					}
					
					break;
				}
				
				
				case 1949441779:
				{
					if (field.equals("getBegin")) 
					{
						__temp_executeDef124 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getBegin"))) );
					}
					
					break;
				}
				
				
				case 1725716994:
				{
					if (field.equals("_points")) 
					{
						__temp_executeDef124 = false;
						return this._points;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef124) 
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
			boolean __temp_executeDef125 = true;
			switch (field.hashCode())
			{
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef125 = false;
						return this.stepAngle;
					}
					
					break;
				}
				
				
				case -40300674:
				{
					if (field.equals("rotation")) 
					{
						__temp_executeDef125 = false;
						return this.rotation;
					}
					
					break;
				}
				
				
				case 1320017920:
				{
					if (field.equals("finishAngle")) 
					{
						__temp_executeDef125 = false;
						return this.finishAngle;
					}
					
					break;
				}
				
				
				case 1084297642:
				{
					if (field.equals("beginAngle")) 
					{
						__temp_executeDef125 = false;
						return this.beginAngle;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef125) 
			{
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		{
			boolean __temp_executeDef126 = true;
			switch (field.hashCode())
			{
				case -507575820:
				{
					if (field.equals("createPoint")) 
					{
						__temp_executeDef126 = false;
						return this.createPoint(((jigsawx.math.Vec2) (dynargs.__get(0)) ), ((jigsawx.math.Vec2) (dynargs.__get(1)) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					break;
				}
				
				
				case 1949441779:
				{
					if (field.equals("getBegin")) 
					{
						__temp_executeDef126 = false;
						return this.getBegin();
					}
					
					break;
				}
				
				
				case 896099146:
				{
					if (field.equals("getRenderList")) 
					{
						__temp_executeDef126 = false;
						return this.getRenderList();
					}
					
					break;
				}
				
				
				case 421572489:
				{
					if (field.equals("getFinish")) 
					{
						__temp_executeDef126 = false;
						return this.getFinish();
					}
					
					break;
				}
				
				
				case 109328029:
				{
					if (field.equals("setUp")) 
					{
						__temp_executeDef126 = false;
						this.setUp();
					}
					
					break;
				}
				
				
				case -912181915:
				{
					if (field.equals("getBeginRadius")) 
					{
						__temp_executeDef126 = false;
						return this.getBeginRadius();
					}
					
					break;
				}
				
				
				case -54282843:
				{
					if (field.equals("pointDistance")) 
					{
						__temp_executeDef126 = false;
						return this.pointDistance(((jigsawx.math.Vec2) (dynargs.__get(0)) ), ((jigsawx.math.Vec2) (dynargs.__get(1)) ));
					}
					
					break;
				}
				
				
				case 71990651:
				{
					if (field.equals("getFinishRadius")) 
					{
						__temp_executeDef126 = false;
						return this.getFinishRadius();
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef126) 
			{
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		return null;
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("_points");
		baseArr.push("circleIter");
		baseArr.push("dimensions");
		baseArr.push("centre");
		baseArr.push("stepAngle");
		baseArr.push("finishAngle");
		baseArr.push("beginAngle");
		baseArr.push("rotation");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


