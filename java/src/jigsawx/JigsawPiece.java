package jigsawx;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class JigsawPiece extends haxe.lang.HxObject
{
	public    JigsawPiece(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    JigsawPiece(jigsawx.math.Vec2 xy_, int row, int col, jigsawx.math.Vec2 lt, jigsawx.math.Vec2 rt, jigsawx.math.Vec2 rb, jigsawx.math.Vec2 lb, java.lang.Object sideData_)
	{
		jigsawx.JigsawPiece.__hx_ctor_jigsawx_JigsawPiece(this, xy_, row, col, lt, rt, rb, lb, sideData_);
	}
	
	
	public static   void __hx_ctor_jigsawx_JigsawPiece(jigsawx.JigsawPiece __temp_me13, jigsawx.math.Vec2 xy_, int row, int col, jigsawx.math.Vec2 lt, jigsawx.math.Vec2 rt, jigsawx.math.Vec2 rb, jigsawx.math.Vec2 lb, java.lang.Object sideData_)
	{
		__temp_me13.enabled = true;
		__temp_me13.xy = new jigsawx.math.Vec2(((java.lang.Object) (xy_.x) ), ((java.lang.Object) (xy_.y) ));
		__temp_me13.sideData = sideData_;
		__temp_me13.points = new haxe.root.Array<jigsawx.math.Vec2>(new jigsawx.math.Vec2[]{});
		__temp_me13.stepAngle = ( ( ((double) (10) ) * java.lang.Math.PI ) / 180 );
		__temp_me13.first = lt;
		if (( ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "north", true)) ) != null )) 
		{
			__temp_me13.createVertSide(lt, rt, ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "north", true)) ), jigsawx.Compass.NORTH);
		}
		
		__temp_me13.points.push(rt);
		if (( ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "east", true)) ) != null )) 
		{
			__temp_me13.createHoriSide(rt, rb, ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "east", true)) ), jigsawx.Compass.EAST);
		}
		
		__temp_me13.points.push(rb);
		if (( ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "south", true)) ) != null )) 
		{
			__temp_me13.createVertSide(rb, lb, ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "south", true)) ), jigsawx.Compass.SOUTH);
		}
		
		__temp_me13.points.push(lb);
		if (( ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "west", true)) ) != null )) 
		{
			__temp_me13.createHoriSide(lb, lt, ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(__temp_me13.sideData, "west", true)) ), jigsawx.Compass.WEST);
		}
		
		__temp_me13.points.push(lt);
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawx.JigsawPiece(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawx.JigsawPiece(((jigsawx.math.Vec2) (arr.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(1))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(2))) ), ((jigsawx.math.Vec2) (arr.__get(3)) ), ((jigsawx.math.Vec2) (arr.__get(4)) ), ((jigsawx.math.Vec2) (arr.__get(5)) ), ((jigsawx.math.Vec2) (arr.__get(6)) ), ((java.lang.Object) (arr.__get(7)) ));
	}
	
	
	public  boolean enabled;
	
	public  jigsawx.OpenEllipse curveBuilder;
	
	public  double stepAngle;
	
	public  jigsawx.math.Vec2 centre;
	
	public  haxe.root.Array<jigsawx.math.Vec2> points;
	
	public  java.lang.Object sideData;
	
	public  jigsawx.math.Vec2 first;
	
	public  jigsawx.math.Vec2 xy;
	
	public  int row;
	
	public  int col;
	
	public   haxe.root.Array<jigsawx.math.Vec2> getPoints()
	{
		return this.points;
	}
	
	
	public   jigsawx.math.Vec2 getFirst()
	{
		return this.first;
	}
	
	
	public   void createVertSide(jigsawx.math.Vec2 A, jigsawx.math.Vec2 B, jigsawx.JigsawSideData side, jigsawx.Compass compass)
	{
		this.drawSide(( ( ( A.x + ( (( B.x - A.x )) / 2 ) ) + ( ((double) (24) ) / 2 ) ) - ( side.squew * ((double) (24) ) ) ), ( ( ( A.y + ( (( B.y - A.y )) / 2 ) ) + ( ((double) (10) ) / 2 ) ) - ( side.inout * ((double) (10) ) ) ), side, compass);
	}
	
	
	public   void createHoriSide(jigsawx.math.Vec2 A, jigsawx.math.Vec2 B, jigsawx.JigsawSideData side, jigsawx.Compass compass)
	{
		this.drawSide(( ( ( A.x + ( (( B.x - A.x )) / 2 ) ) + ( ((double) (10) ) / 2 ) ) - ( side.inout * ((double) (10) ) ) ), ( ( ( A.y + ( (( B.y - A.y )) / 2 ) ) + ( ((double) (24) ) / 2 ) ) - ( side.squew * ((double) (24) ) ) ), side, compass);
	}
	
	
	public   void drawSide(double dx, double dy, jigsawx.JigsawSideData sideData, jigsawx.Compass compass)
	{
		double halfPI = ( java.lang.Math.PI / 2 );
		jigsawx.math.Vec2 dimensions = new jigsawx.math.Vec2(((java.lang.Object) (null) ), ((java.lang.Object) (null) ));
		jigsawx.math.Vec2 offsetCentre = new jigsawx.math.Vec2(((java.lang.Object) (null) ), ((java.lang.Object) (null) ));
		jigsawx.Bubble bubble = sideData.bubble;
		switch (haxe.root.Type.enumIndex(compass))
		{
			case 0:
			{
				int __temp_stmt57 = 0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt57 = 1;
						break;
					}
					
					
					case 1:
					{
						__temp_stmt57 = -1;
						break;
					}
					
					
				}
				
				this.centre = new jigsawx.math.Vec2(((java.lang.Object) (dx) ), ((java.lang.Object) (( dy + ( 6 * __temp_stmt57 ) )) ));
				break;
			}
			
			
			case 2:
			{
				int __temp_stmt58 = 0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt58 = 1;
						break;
					}
					
					
					case 1:
					{
						__temp_stmt58 = -1;
						break;
					}
					
					
				}
				
				this.centre = new jigsawx.math.Vec2(((java.lang.Object) (( dx - ( 6 * __temp_stmt58 ) )) ), ((java.lang.Object) (dy) ));
				break;
			}
			
			
			case 1:
			{
				int __temp_stmt59 = 0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt59 = 1;
						break;
					}
					
					
					case 1:
					{
						__temp_stmt59 = -1;
						break;
					}
					
					
				}
				
				this.centre = new jigsawx.math.Vec2(((java.lang.Object) (dx) ), ((java.lang.Object) (( dy - ( 6 * __temp_stmt59 ) )) ));
				break;
			}
			
			
			case 3:
			{
				int __temp_stmt60 = 0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt60 = 1;
						break;
					}
					
					
					case 1:
					{
						__temp_stmt60 = -1;
						break;
					}
					
					
				}
				
				this.centre = new jigsawx.math.Vec2(((java.lang.Object) (( dx + ( 6 * __temp_stmt60 ) )) ), ((java.lang.Object) (dy) ));
				break;
			}
			
			
		}
		
		this.curveBuilder = new jigsawx.OpenEllipse();
		this.curveBuilder.centre = this.centre;
		dimensions.x = ( (( 1 + ( (( 0.5 - sideData.centreWide )) / 2 ) )) * 11.25 );
		dimensions.y = ( (( 1 + ( (( 0.5 - sideData.centreHi )) / 2 ) )) * 11.25 );
		this.curveBuilder.dimensions = dimensions;
		this.curveBuilder.beginAngle = ( java.lang.Math.PI / 8 );
		this.curveBuilder.finishAngle = (  - (java.lang.Math.PI)  / 8 );
		this.curveBuilder.stepAngle = this.stepAngle;
		switch (haxe.root.Type.enumIndex(bubble))
		{
			case 0:
			{
				this.curveBuilder.rotation = ((double) (0) );
				break;
			}
			
			
			case 1:
			{
				this.curveBuilder.rotation = java.lang.Math.PI;
				break;
			}
			
			
		}
		
		switch (haxe.root.Type.enumIndex(compass))
		{
			case 0:
			{
				{
				}
				
				break;
			}
			
			
			case 2:
			{
				this.curveBuilder.rotation += halfPI;
				break;
			}
			
			
			case 1:
			{
				this.curveBuilder.rotation += java.lang.Math.PI;
				break;
			}
			
			
			case 3:
			{
				this.curveBuilder.rotation += ( 3 * halfPI );
				break;
			}
			
			
		}
		
		haxe.root.Array<jigsawx.math.Vec2> secondPoints = this.curveBuilder.getRenderList();
		if (( bubble == jigsawx.Bubble.IN )) 
		{
			secondPoints.reverse();
		}
		
		double theta = ( ( this.curveBuilder.beginAngle - this.curveBuilder.finishAngle ) + java.lang.Math.PI );
		double cosTheta = java.lang.Math.cos(theta);
		double sinTheta = java.lang.Math.sin(theta);
		double hyp = this.curveBuilder.getBeginRadius();
		dimensions.x = ( (( 1 + ( (( 0.5 - sideData.leftWide )) / 2 ) )) * 6. );
		dimensions.y = ( (( 1 + ( (( 0.5 - sideData.leftHi )) / 2 ) )) * 3.66666666666666652 );
		this.curveBuilder.dimensions = dimensions;
		this.curveBuilder.beginAngle = halfPI;
		this.curveBuilder.finishAngle =  - (halfPI) ;
		this.curveBuilder.stepAngle = this.stepAngle;
		double __temp_stmt61 = 0.0;
		switch (haxe.root.Type.enumIndex(bubble))
		{
			case 0:
			{
				__temp_stmt61 = ((double) (0) );
				break;
			}
			
			
			case 1:
			{
				__temp_stmt61 = halfPI;
				break;
			}
			
			
		}
		
		this.curveBuilder.rotation = ( theta + __temp_stmt61 );
		switch (haxe.root.Type.enumIndex(compass))
		{
			case 0:
			{
				{
				}
				
				break;
			}
			
			
			case 2:
			{
				this.curveBuilder.rotation += halfPI;
				break;
			}
			
			
			case 1:
			{
				this.curveBuilder.rotation += java.lang.Math.PI;
				break;
			}
			
			
			case 3:
			{
				this.curveBuilder.rotation += ( 3 * halfPI );
				break;
			}
			
			
		}
		
		double hypLeft = ( hyp + this.curveBuilder.dimensions.x );
		switch (haxe.root.Type.enumIndex(compass))
		{
			case 0:
			{
				offsetCentre.x = ( this.centre.x + ( hypLeft * cosTheta ) );
				double __temp_stmt62 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt62 = ( hypLeft * sinTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt62 = (  - (hypLeft)  * sinTheta );
						break;
					}
					
					
				}
				
				offsetCentre.y = ( this.centre.y + __temp_stmt62 );
				break;
			}
			
			
			case 2:
			{
				double __temp_stmt63 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt63 = (  - (hypLeft)  * cosTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt63 = ( hypLeft * cosTheta );
						break;
					}
					
					
				}
				
				offsetCentre.x = ( this.centre.x + __temp_stmt63 );
				offsetCentre.y = ( this.centre.y + ( hypLeft * sinTheta ) );
				break;
			}
			
			
			case 1:
			{
				offsetCentre.x = ( this.centre.x - ( hypLeft * cosTheta ) );
				double __temp_stmt64 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt64 = ( hypLeft * sinTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt64 = (  - (hypLeft)  * sinTheta );
						break;
					}
					
					
				}
				
				offsetCentre.y = ( this.centre.y - __temp_stmt64 );
				break;
			}
			
			
			case 3:
			{
				double __temp_stmt65 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt65 = ( hypLeft * cosTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt65 = (  - (hypLeft)  * cosTheta );
						break;
					}
					
					
				}
				
				offsetCentre.x = ( this.centre.x + __temp_stmt65 );
				offsetCentre.y = ( this.centre.y - ( hypLeft * sinTheta ) );
				break;
			}
			
			
		}
		
		this.curveBuilder.centre = offsetCentre;
		jigsawx.math.Vec2 startPoint = this.curveBuilder.getBegin();
		haxe.root.Array<jigsawx.math.Vec2> firstPoints = this.curveBuilder.getRenderList();
		if (( sideData.bubble == jigsawx.Bubble.OUT )) 
		{
			firstPoints.reverse();
		}
		
		firstPoints.pop();
		firstPoints.pop();
		secondPoints.shift();
		secondPoints.shift();
		secondPoints.shift();
		this.points = this.points.concat(firstPoints.concat(secondPoints));
		dimensions.x = ( (( 1 + ( (( 0.5 - sideData.rightWide )) / 2 ) )) * 6. );
		dimensions.y = ( (( 1 + ( (( 0.5 - sideData.rightHi )) / 2 ) )) * 3.66666666666666652 );
		this.curveBuilder.dimensions = dimensions;
		this.curveBuilder.beginAngle = halfPI;
		this.curveBuilder.finishAngle =  - (halfPI) ;
		this.curveBuilder.stepAngle = this.stepAngle;
		double __temp_stmt66 = 0.0;
		switch (haxe.root.Type.enumIndex(bubble))
		{
			case 0:
			{
				__temp_stmt66 =  - (halfPI) ;
				break;
			}
			
			
			case 1:
			{
				__temp_stmt66 = java.lang.Math.PI;
				break;
			}
			
			
		}
		
		this.curveBuilder.rotation = ( theta + __temp_stmt66 );
		switch (haxe.root.Type.enumIndex(compass))
		{
			case 0:
			{
				{
				}
				
				break;
			}
			
			
			case 2:
			{
				this.curveBuilder.rotation += halfPI;
				break;
			}
			
			
			case 1:
			{
				this.curveBuilder.rotation += java.lang.Math.PI;
				break;
			}
			
			
			case 3:
			{
				this.curveBuilder.rotation += ( 3 * halfPI );
				break;
			}
			
			
		}
		
		double hypRight = ( hyp + this.curveBuilder.dimensions.x );
		switch (haxe.root.Type.enumIndex(compass))
		{
			case 0:
			{
				offsetCentre.x = ( this.centre.x - ( hypRight * cosTheta ) );
				double __temp_stmt67 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt67 = ( hypRight * sinTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt67 = (  - (hypRight)  * sinTheta );
						break;
					}
					
					
				}
				
				offsetCentre.y = ( this.centre.y + __temp_stmt67 );
				break;
			}
			
			
			case 2:
			{
				double __temp_stmt68 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt68 = (  - (hypLeft)  * cosTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt68 = ( hypLeft * cosTheta );
						break;
					}
					
					
				}
				
				offsetCentre.x = ( this.centre.x + __temp_stmt68 );
				offsetCentre.y = ( this.centre.y - ( hypLeft * sinTheta ) );
				break;
			}
			
			
			case 1:
			{
				offsetCentre.x = ( this.centre.x + ( hypRight * cosTheta ) );
				double __temp_stmt69 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt69 = ( hypRight * sinTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt69 = (  - (hypRight)  * sinTheta );
						break;
					}
					
					
				}
				
				offsetCentre.y = ( this.centre.y - __temp_stmt69 );
				break;
			}
			
			
			case 3:
			{
				double __temp_stmt70 = 0.0;
				switch (haxe.root.Type.enumIndex(bubble))
				{
					case 0:
					{
						__temp_stmt70 = ( hypLeft * cosTheta );
						break;
					}
					
					
					case 1:
					{
						__temp_stmt70 = (  - (hypLeft)  * cosTheta );
						break;
					}
					
					
				}
				
				offsetCentre.x = ( this.centre.x + __temp_stmt70 );
				offsetCentre.y = ( this.centre.y + ( hypLeft * sinTheta ) );
				break;
			}
			
			
		}
		
		this.curveBuilder.centre = offsetCentre;
		haxe.root.Array<jigsawx.math.Vec2> thirdPoints = this.curveBuilder.getRenderList();
		if (( bubble == jigsawx.Bubble.OUT )) 
		{
			thirdPoints.reverse();
		}
		
		thirdPoints.shift();
		thirdPoints.shift();
		this.points.pop();
		this.points.pop();
		this.points.pop();
		this.points = this.points.concat(thirdPoints);
	}
	
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef71 = true;
			switch (field.hashCode())
			{
				case 98688:
				{
					if (field.equals("col")) 
					{
						__temp_executeDef71 = false;
						this.col = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef71 = false;
						this.stepAngle = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 113114:
				{
					if (field.equals("row")) 
					{
						__temp_executeDef71 = false;
						this.row = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 216645025:
				{
					if (field.equals("sideData")) 
					{
						__temp_executeDef71 = false;
						this.sideData = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef71) 
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
			boolean __temp_executeDef72 = true;
			switch (field.hashCode())
			{
				case 98688:
				{
					if (field.equals("col")) 
					{
						__temp_executeDef72 = false;
						this.col = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1609594047:
				{
					if (field.equals("enabled")) 
					{
						__temp_executeDef72 = false;
						this.enabled = haxe.lang.Runtime.toBool(value);
						return value;
					}
					
					break;
				}
				
				
				case 113114:
				{
					if (field.equals("row")) 
					{
						__temp_executeDef72 = false;
						this.row = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1823773780:
				{
					if (field.equals("curveBuilder")) 
					{
						__temp_executeDef72 = false;
						this.curveBuilder = ((jigsawx.OpenEllipse) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3841:
				{
					if (field.equals("xy")) 
					{
						__temp_executeDef72 = false;
						this.xy = ((jigsawx.math.Vec2) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef72 = false;
						this.stepAngle = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 97440432:
				{
					if (field.equals("first")) 
					{
						__temp_executeDef72 = false;
						this.first = ((jigsawx.math.Vec2) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1364013605:
				{
					if (field.equals("centre")) 
					{
						__temp_executeDef72 = false;
						this.centre = ((jigsawx.math.Vec2) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 216645025:
				{
					if (field.equals("sideData")) 
					{
						__temp_executeDef72 = false;
						this.sideData = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -982754077:
				{
					if (field.equals("points")) 
					{
						__temp_executeDef72 = false;
						this.points = ((haxe.root.Array<jigsawx.math.Vec2>) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef72) 
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
			boolean __temp_executeDef73 = true;
			switch (field.hashCode())
			{
				case -826917701:
				{
					if (field.equals("drawSide")) 
					{
						__temp_executeDef73 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("drawSide"))) );
					}
					
					break;
				}
				
				
				case -1609594047:
				{
					if (field.equals("enabled")) 
					{
						__temp_executeDef73 = false;
						return this.enabled;
					}
					
					break;
				}
				
				
				case 583180561:
				{
					if (field.equals("createHoriSide")) 
					{
						__temp_executeDef73 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createHoriSide"))) );
					}
					
					break;
				}
				
				
				case -1823773780:
				{
					if (field.equals("curveBuilder")) 
					{
						__temp_executeDef73 = false;
						return this.curveBuilder;
					}
					
					break;
				}
				
				
				case -1062222012:
				{
					if (field.equals("createVertSide")) 
					{
						__temp_executeDef73 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createVertSide"))) );
					}
					
					break;
				}
				
				
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef73 = false;
						return this.stepAngle;
					}
					
					break;
				}
				
				
				case 1953265914:
				{
					if (field.equals("getFirst")) 
					{
						__temp_executeDef73 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFirst"))) );
					}
					
					break;
				}
				
				
				case -1364013605:
				{
					if (field.equals("centre")) 
					{
						__temp_executeDef73 = false;
						return this.centre;
					}
					
					break;
				}
				
				
				case 713261017:
				{
					if (field.equals("getPoints")) 
					{
						__temp_executeDef73 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getPoints"))) );
					}
					
					break;
				}
				
				
				case -982754077:
				{
					if (field.equals("points")) 
					{
						__temp_executeDef73 = false;
						return this.points;
					}
					
					break;
				}
				
				
				case 98688:
				{
					if (field.equals("col")) 
					{
						__temp_executeDef73 = false;
						return this.col;
					}
					
					break;
				}
				
				
				case 216645025:
				{
					if (field.equals("sideData")) 
					{
						__temp_executeDef73 = false;
						return this.sideData;
					}
					
					break;
				}
				
				
				case 113114:
				{
					if (field.equals("row")) 
					{
						__temp_executeDef73 = false;
						return this.row;
					}
					
					break;
				}
				
				
				case 97440432:
				{
					if (field.equals("first")) 
					{
						__temp_executeDef73 = false;
						return this.first;
					}
					
					break;
				}
				
				
				case 3841:
				{
					if (field.equals("xy")) 
					{
						__temp_executeDef73 = false;
						return this.xy;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef73) 
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
			boolean __temp_executeDef74 = true;
			switch (field.hashCode())
			{
				case 98688:
				{
					if (field.equals("col")) 
					{
						__temp_executeDef74 = false;
						return ((double) (this.col) );
					}
					
					break;
				}
				
				
				case 1317134695:
				{
					if (field.equals("stepAngle")) 
					{
						__temp_executeDef74 = false;
						return this.stepAngle;
					}
					
					break;
				}
				
				
				case 113114:
				{
					if (field.equals("row")) 
					{
						__temp_executeDef74 = false;
						return ((double) (this.row) );
					}
					
					break;
				}
				
				
				case 216645025:
				{
					if (field.equals("sideData")) 
					{
						__temp_executeDef74 = false;
						return ((double) (haxe.lang.Runtime.toDouble(this.sideData)) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef74) 
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
			boolean __temp_executeDef75 = true;
			switch (field.hashCode())
			{
				case -826917701:
				{
					if (field.equals("drawSide")) 
					{
						__temp_executeDef75 = false;
						this.drawSide(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ), ((jigsawx.JigsawSideData) (dynargs.__get(2)) ), ((jigsawx.Compass) (dynargs.__get(3)) ));
					}
					
					break;
				}
				
				
				case 713261017:
				{
					if (field.equals("getPoints")) 
					{
						__temp_executeDef75 = false;
						return this.getPoints();
					}
					
					break;
				}
				
				
				case 583180561:
				{
					if (field.equals("createHoriSide")) 
					{
						__temp_executeDef75 = false;
						this.createHoriSide(((jigsawx.math.Vec2) (dynargs.__get(0)) ), ((jigsawx.math.Vec2) (dynargs.__get(1)) ), ((jigsawx.JigsawSideData) (dynargs.__get(2)) ), ((jigsawx.Compass) (dynargs.__get(3)) ));
					}
					
					break;
				}
				
				
				case 1953265914:
				{
					if (field.equals("getFirst")) 
					{
						__temp_executeDef75 = false;
						return this.getFirst();
					}
					
					break;
				}
				
				
				case -1062222012:
				{
					if (field.equals("createVertSide")) 
					{
						__temp_executeDef75 = false;
						this.createVertSide(((jigsawx.math.Vec2) (dynargs.__get(0)) ), ((jigsawx.math.Vec2) (dynargs.__get(1)) ), ((jigsawx.JigsawSideData) (dynargs.__get(2)) ), ((jigsawx.Compass) (dynargs.__get(3)) ));
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef75) 
			{
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		return null;
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("col");
		baseArr.push("row");
		baseArr.push("xy");
		baseArr.push("first");
		baseArr.push("sideData");
		baseArr.push("points");
		baseArr.push("centre");
		baseArr.push("stepAngle");
		baseArr.push("curveBuilder");
		baseArr.push("enabled");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


