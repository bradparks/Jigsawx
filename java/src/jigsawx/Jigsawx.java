package jigsawx;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class Jigsawx extends haxe.lang.HxObject
{
	public    Jigsawx(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    Jigsawx(double dx_, double dy_, int rows_, int cols_)
	{
		jigsawx.Jigsawx.__hx_ctor_jigsawx_Jigsawx(this, dx_, dy_, rows_, cols_);
	}
	
	
	public static   void __hx_ctor_jigsawx_Jigsawx(jigsawx.Jigsawx __temp_me16, double dx_, double dy_, int rows_, int cols_)
	{
		__temp_me16.pieces = new haxe.root.Array<haxe.root.Array>(new haxe.root.Array[]{});
		__temp_me16.jigs = new haxe.root.Array<jigsawx.JigsawPiece>(new jigsawx.JigsawPiece[]{});
		__temp_me16.sides = new haxe.root.Array<haxe.root.Array>(new haxe.root.Array[]{});
		__temp_me16.dx = dx_;
		__temp_me16.dy = dy_;
		__temp_me16.rows = rows_;
		__temp_me16.cols = cols_;
		jigsawx.math.Vec2 xy = new jigsawx.math.Vec2(((java.lang.Object) (20) ), ((java.lang.Object) (20) ));
		jigsawx.math.Vec2 lt = new jigsawx.math.Vec2(((java.lang.Object) (20) ), ((java.lang.Object) (20) ));
		jigsawx.math.Vec2 rt = new jigsawx.math.Vec2(((java.lang.Object) (( 20 + __temp_me16.dx )) ), ((java.lang.Object) (20) ));
		jigsawx.math.Vec2 rb = new jigsawx.math.Vec2(((java.lang.Object) (( 20 + __temp_me16.dx )) ), ((java.lang.Object) (( __temp_me16.dy + 20 )) ));
		jigsawx.math.Vec2 lb = new jigsawx.math.Vec2(((java.lang.Object) (20) ), ((java.lang.Object) (( __temp_me16.dy + 20 )) ));
		__temp_me16.length = 0;
		java.lang.Object last = null;
		{
			int _g1 = 0;
			int _g = __temp_me16.rows;
			while (( _g1 < _g ))
			{
				int row = _g1++;
				last = new haxe.lang.DynamicObject(new haxe.root.Array<java.lang.String>(new java.lang.String[]{"east", "north", "south", "west"}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{null, null, null, null}), new haxe.root.Array<java.lang.String>(new java.lang.String[]{}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{}));
				__temp_me16.sides.push(new haxe.root.Array<java.lang.Object>());
				{
					int _g3 = 0;
					int _g2 = __temp_me16.cols;
					while (( _g3 < _g2 ))
					{
						int col = _g3++;
						java.lang.Object jigsawPiece = jigsawx.JigsawSideData.halfPieceData();
						if (( ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(last, "east", true)) ) != null )) 
						{
							haxe.lang.Runtime.setField(jigsawPiece, "west", jigsawx.JigsawSideData.reflect(((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(last, "east", true)) )));
						}
						
						if (( col == ( __temp_me16.cols - 1 ) )) 
						{
							haxe.lang.Runtime.setField(jigsawPiece, "east", null);
						}
						
						__temp_me16.sides.__get(row).__set(col, jigsawPiece);
						last = jigsawPiece;
						__temp_me16.length++;
					}
					
				}
				
			}
			
		}
		
		{
			int _g1 = 0;
			int _g = __temp_me16.cols;
			while (( _g1 < _g ))
			{
				int col = _g1++;
				last = new haxe.lang.DynamicObject(new haxe.root.Array<java.lang.String>(new java.lang.String[]{"east", "north", "south", "west"}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{null, null, null, null}), new haxe.root.Array<java.lang.String>(new java.lang.String[]{}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{}));
				{
					int _g3 = 0;
					int _g2 = __temp_me16.rows;
					while (( _g3 < _g2 ))
					{
						int row = _g3++;
						java.lang.Object jigsawPiece = __temp_me16.sides.__get(row).__get(col);
						if (( ((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(last, "south", true)) ) != null )) 
						{
							haxe.lang.Runtime.setField(jigsawPiece, "north", jigsawx.JigsawSideData.reflect(((jigsawx.JigsawSideData) (haxe.lang.Runtime.getField(last, "south", true)) )));
						}
						
						if (( row == ( __temp_me16.rows - 1 ) )) 
						{
							haxe.lang.Runtime.setField(jigsawPiece, "south", null);
						}
						
						last = jigsawPiece;
					}
					
				}
				
			}
			
		}
		
		jigsawx.JigsawPiece jig = null;
		{
			int _g1 = 0;
			int _g = __temp_me16.rows;
			while (( _g1 < _g ))
			{
				int row = _g1++;
				__temp_me16.pieces.push(((haxe.root.Array) (new haxe.root.Array<jigsawx.JigsawPiece>()) ));
				{
					int _g3 = 0;
					int _g2 = __temp_me16.cols;
					while (( _g3 < _g2 ))
					{
						int col = _g3++;
						jig = new jigsawx.JigsawPiece(((jigsawx.math.Vec2) (xy) ), ((int) (row) ), ((int) (col) ), ((jigsawx.math.Vec2) (lt) ), ((jigsawx.math.Vec2) (rt) ), ((jigsawx.math.Vec2) (rb) ), ((jigsawx.math.Vec2) (lb) ), ((java.lang.Object) (__temp_me16.sides.__get(row).__get(col)) ));
						((haxe.root.Array<jigsawx.JigsawPiece>) (((haxe.root.Array) (__temp_me16.pieces.__get(row)) )) ).__set(col, jig);
						__temp_me16.jigs.push(jig);
						xy.x += __temp_me16.dx;
					}
					
				}
				
				xy.x = ((double) (20) );
				xy.y += __temp_me16.dy;
			}
			
		}
		
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawx.Jigsawx(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawx.Jigsawx(((double) (haxe.lang.Runtime.toDouble(arr.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(1))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(2))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(3))) ));
	}
	
	
	public  int rows;
	
	public  int cols;
	
	public  haxe.root.Array<haxe.root.Array> pieces;
	
	public  haxe.root.Array<jigsawx.JigsawPiece> jigs;
	
	public  haxe.root.Array<haxe.root.Array> sides;
	
	public  double lt;
	
	public  double rt;
	
	public  double rb;
	
	public  double lb;
	
	public  double dx;
	
	public  double dy;
	
	public  int length;
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef118 = true;
			switch (field.hashCode())
			{
				case -1106363674:
				{
					if (field.equals("length")) 
					{
						__temp_executeDef118 = false;
						this.length = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef118 = false;
						this.rows = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3221:
				{
					if (field.equals("dy")) 
					{
						__temp_executeDef118 = false;
						this.dy = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef118 = false;
						this.cols = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3220:
				{
					if (field.equals("dx")) 
					{
						__temp_executeDef118 = false;
						this.dx = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3464:
				{
					if (field.equals("lt")) 
					{
						__temp_executeDef118 = false;
						this.lt = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3446:
				{
					if (field.equals("lb")) 
					{
						__temp_executeDef118 = false;
						this.lb = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3650:
				{
					if (field.equals("rt")) 
					{
						__temp_executeDef118 = false;
						this.rt = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3632:
				{
					if (field.equals("rb")) 
					{
						__temp_executeDef118 = false;
						this.rb = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef118) 
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
			boolean __temp_executeDef119 = true;
			switch (field.hashCode())
			{
				case -1106363674:
				{
					if (field.equals("length")) 
					{
						__temp_executeDef119 = false;
						this.length = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef119 = false;
						this.rows = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3221:
				{
					if (field.equals("dy")) 
					{
						__temp_executeDef119 = false;
						this.dy = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef119 = false;
						this.cols = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3220:
				{
					if (field.equals("dx")) 
					{
						__temp_executeDef119 = false;
						this.dx = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -988425403:
				{
					if (field.equals("pieces")) 
					{
						__temp_executeDef119 = false;
						this.pieces = ((haxe.root.Array<haxe.root.Array>) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3446:
				{
					if (field.equals("lb")) 
					{
						__temp_executeDef119 = false;
						this.lb = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3262059:
				{
					if (field.equals("jigs")) 
					{
						__temp_executeDef119 = false;
						this.jigs = ((haxe.root.Array<jigsawx.JigsawPiece>) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3632:
				{
					if (field.equals("rb")) 
					{
						__temp_executeDef119 = false;
						this.rb = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 109432316:
				{
					if (field.equals("sides")) 
					{
						__temp_executeDef119 = false;
						this.sides = ((haxe.root.Array<haxe.root.Array>) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3650:
				{
					if (field.equals("rt")) 
					{
						__temp_executeDef119 = false;
						this.rt = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3464:
				{
					if (field.equals("lt")) 
					{
						__temp_executeDef119 = false;
						this.lt = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef119) 
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
			boolean __temp_executeDef120 = true;
			switch (field.hashCode())
			{
				case -1106363674:
				{
					if (field.equals("length")) 
					{
						__temp_executeDef120 = false;
						return this.length;
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef120 = false;
						return this.rows;
					}
					
					break;
				}
				
				
				case 3221:
				{
					if (field.equals("dy")) 
					{
						__temp_executeDef120 = false;
						return this.dy;
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef120 = false;
						return this.cols;
					}
					
					break;
				}
				
				
				case 3220:
				{
					if (field.equals("dx")) 
					{
						__temp_executeDef120 = false;
						return this.dx;
					}
					
					break;
				}
				
				
				case -988425403:
				{
					if (field.equals("pieces")) 
					{
						__temp_executeDef120 = false;
						return this.pieces;
					}
					
					break;
				}
				
				
				case 3446:
				{
					if (field.equals("lb")) 
					{
						__temp_executeDef120 = false;
						return this.lb;
					}
					
					break;
				}
				
				
				case 3262059:
				{
					if (field.equals("jigs")) 
					{
						__temp_executeDef120 = false;
						return this.jigs;
					}
					
					break;
				}
				
				
				case 3632:
				{
					if (field.equals("rb")) 
					{
						__temp_executeDef120 = false;
						return this.rb;
					}
					
					break;
				}
				
				
				case 109432316:
				{
					if (field.equals("sides")) 
					{
						__temp_executeDef120 = false;
						return this.sides;
					}
					
					break;
				}
				
				
				case 3650:
				{
					if (field.equals("rt")) 
					{
						__temp_executeDef120 = false;
						return this.rt;
					}
					
					break;
				}
				
				
				case 3464:
				{
					if (field.equals("lt")) 
					{
						__temp_executeDef120 = false;
						return this.lt;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef120) 
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
			boolean __temp_executeDef121 = true;
			switch (field.hashCode())
			{
				case -1106363674:
				{
					if (field.equals("length")) 
					{
						__temp_executeDef121 = false;
						return ((double) (this.length) );
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef121 = false;
						return ((double) (this.rows) );
					}
					
					break;
				}
				
				
				case 3221:
				{
					if (field.equals("dy")) 
					{
						__temp_executeDef121 = false;
						return this.dy;
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef121 = false;
						return ((double) (this.cols) );
					}
					
					break;
				}
				
				
				case 3220:
				{
					if (field.equals("dx")) 
					{
						__temp_executeDef121 = false;
						return this.dx;
					}
					
					break;
				}
				
				
				case 3464:
				{
					if (field.equals("lt")) 
					{
						__temp_executeDef121 = false;
						return this.lt;
					}
					
					break;
				}
				
				
				case 3446:
				{
					if (field.equals("lb")) 
					{
						__temp_executeDef121 = false;
						return this.lb;
					}
					
					break;
				}
				
				
				case 3650:
				{
					if (field.equals("rt")) 
					{
						__temp_executeDef121 = false;
						return this.rt;
					}
					
					break;
				}
				
				
				case 3632:
				{
					if (field.equals("rb")) 
					{
						__temp_executeDef121 = false;
						return this.rb;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef121) 
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
		baseArr.push("length");
		baseArr.push("dy");
		baseArr.push("dx");
		baseArr.push("lb");
		baseArr.push("rb");
		baseArr.push("rt");
		baseArr.push("lt");
		baseArr.push("sides");
		baseArr.push("jigs");
		baseArr.push("pieces");
		baseArr.push("cols");
		baseArr.push("rows");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


