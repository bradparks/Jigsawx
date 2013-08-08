package jigsawx.ds;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class CircleIter extends haxe.lang.HxObject
{
	public    CircleIter(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    CircleIter(double begin_, double fin_, double step_, double min_, double max_)
	{
		jigsawx.ds.CircleIter.__hx_ctor_jigsawx_ds_CircleIter(this, begin_, fin_, step_, min_, max_);
	}
	
	
	public static   void __hx_ctor_jigsawx_ds_CircleIter(jigsawx.ds.CircleIter __temp_me18, double begin_, double fin_, double step_, double min_, double max_)
	{
		__temp_me18.begin = begin_;
		__temp_me18.current = __temp_me18.begin;
		__temp_me18.fin = fin_;
		__temp_me18.step = step_;
		__temp_me18.min = min_;
		__temp_me18.max = max_;
		if (( __temp_me18.step > 0 )) 
		{
			__temp_me18.onDirection = jigsawx.ds.Sign.UP;
		}
		 else 
		{
			__temp_me18.onDirection = jigsawx.ds.Sign.DOWN;
		}
		
	}
	
	
	public static   jigsawx.ds.CircleIter pi2(double begin_, double fin_, double step_)
	{
		return new jigsawx.ds.CircleIter(((double) (begin_) ), ((double) (fin_) ), ((double) (step_) ), ((double) (0) ), ((double) (( 2 * java.lang.Math.PI )) ));
	}
	
	
	public static   jigsawx.ds.CircleIter pi2pi(double begin_, double fin_, double step_)
	{
		return new jigsawx.ds.CircleIter(((double) (begin_) ), ((double) (fin_) ), ((double) (step_) ), ((double) ( - (java.lang.Math.PI) ) ), ((double) (java.lang.Math.PI) ));
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawx.ds.CircleIter(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawx.ds.CircleIter(((double) (haxe.lang.Runtime.toDouble(arr.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(1))) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(2))) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(3))) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(4))) ));
	}
	
	
	public  double begin;
	
	public  double fin;
	
	public  double step;
	
	public  double min;
	
	public  double max;
	
	public  double current;
	
	public  jigsawx.ds.Sign onDirection;
	
	public   jigsawx.ds.CircleIter reset()
	{
		this.current = this.begin;
		return this;
	}
	
	
	public   boolean hasNext()
	{
		jigsawx.ds.CircleIter _g = this;
		switch (haxe.root.Type.enumIndex(_g.onDirection))
		{
			case 0:
			{
				if (( ( ( this.current < this.fin ) && ( ( this.current + this.step ) > this.fin ) ) || ( this.current == this.fin ) )) 
				{
					return false;
				}
				 else 
				{
					return true;
				}
				
			}
			
			
			case 1:
			{
				if (( ( ( this.current > this.fin ) && ( ( this.current - this.step ) < this.fin ) ) || ( this.current == this.fin ) )) 
				{
					return false;
				}
				 else 
				{
					return true;
				}
				
			}
			
			
		}
		
		return false;
	}
	
	
	public   double next()
	{
		this.current += this.step;
		{
			jigsawx.ds.CircleIter _g = this;
			switch (haxe.root.Type.enumIndex(_g.onDirection))
			{
				case 0:
				{
					if (( this.current > this.max )) 
					{
						this.current = ( ( this.min + this.current ) - this.max );
					}
					
					break;
				}
				
				
				case 1:
				{
					if (( this.current < this.min )) 
					{
						this.current = ( ( this.max + this.current ) - this.min );
					}
					
					break;
				}
				
				
			}
			
		}
		
		if ( ! (this.hasNext()) ) 
		{
			return this.fin;
		}
		
		return this.current;
	}
	
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef127 = true;
			switch (field.hashCode())
			{
				case 1126940025:
				{
					if (field.equals("current")) 
					{
						__temp_executeDef127 = false;
						this.current = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 93616297:
				{
					if (field.equals("begin")) 
					{
						__temp_executeDef127 = false;
						this.begin = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 107876:
				{
					if (field.equals("max")) 
					{
						__temp_executeDef127 = false;
						this.max = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 101387:
				{
					if (field.equals("fin")) 
					{
						__temp_executeDef127 = false;
						this.fin = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 108114:
				{
					if (field.equals("min")) 
					{
						__temp_executeDef127 = false;
						this.min = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3540684:
				{
					if (field.equals("step")) 
					{
						__temp_executeDef127 = false;
						this.step = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef127) 
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
			boolean __temp_executeDef128 = true;
			switch (field.hashCode())
			{
				case -993377184:
				{
					if (field.equals("onDirection")) 
					{
						__temp_executeDef128 = false;
						this.onDirection = ((jigsawx.ds.Sign) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 93616297:
				{
					if (field.equals("begin")) 
					{
						__temp_executeDef128 = false;
						this.begin = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 1126940025:
				{
					if (field.equals("current")) 
					{
						__temp_executeDef128 = false;
						this.current = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 101387:
				{
					if (field.equals("fin")) 
					{
						__temp_executeDef128 = false;
						this.fin = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 107876:
				{
					if (field.equals("max")) 
					{
						__temp_executeDef128 = false;
						this.max = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3540684:
				{
					if (field.equals("step")) 
					{
						__temp_executeDef128 = false;
						this.step = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 108114:
				{
					if (field.equals("min")) 
					{
						__temp_executeDef128 = false;
						this.min = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef128) 
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
			boolean __temp_executeDef129 = true;
			switch (field.hashCode())
			{
				case 3377907:
				{
					if (field.equals("next")) 
					{
						__temp_executeDef129 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("next"))) );
					}
					
					break;
				}
				
				
				case 93616297:
				{
					if (field.equals("begin")) 
					{
						__temp_executeDef129 = false;
						return this.begin;
					}
					
					break;
				}
				
				
				case 696759469:
				{
					if (field.equals("hasNext")) 
					{
						__temp_executeDef129 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("hasNext"))) );
					}
					
					break;
				}
				
				
				case 101387:
				{
					if (field.equals("fin")) 
					{
						__temp_executeDef129 = false;
						return this.fin;
					}
					
					break;
				}
				
				
				case 108404047:
				{
					if (field.equals("reset")) 
					{
						__temp_executeDef129 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("reset"))) );
					}
					
					break;
				}
				
				
				case 3540684:
				{
					if (field.equals("step")) 
					{
						__temp_executeDef129 = false;
						return this.step;
					}
					
					break;
				}
				
				
				case -993377184:
				{
					if (field.equals("onDirection")) 
					{
						__temp_executeDef129 = false;
						return this.onDirection;
					}
					
					break;
				}
				
				
				case 108114:
				{
					if (field.equals("min")) 
					{
						__temp_executeDef129 = false;
						return this.min;
					}
					
					break;
				}
				
				
				case 1126940025:
				{
					if (field.equals("current")) 
					{
						__temp_executeDef129 = false;
						return this.current;
					}
					
					break;
				}
				
				
				case 107876:
				{
					if (field.equals("max")) 
					{
						__temp_executeDef129 = false;
						return this.max;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef129) 
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
			boolean __temp_executeDef130 = true;
			switch (field.hashCode())
			{
				case 1126940025:
				{
					if (field.equals("current")) 
					{
						__temp_executeDef130 = false;
						return this.current;
					}
					
					break;
				}
				
				
				case 93616297:
				{
					if (field.equals("begin")) 
					{
						__temp_executeDef130 = false;
						return this.begin;
					}
					
					break;
				}
				
				
				case 107876:
				{
					if (field.equals("max")) 
					{
						__temp_executeDef130 = false;
						return this.max;
					}
					
					break;
				}
				
				
				case 101387:
				{
					if (field.equals("fin")) 
					{
						__temp_executeDef130 = false;
						return this.fin;
					}
					
					break;
				}
				
				
				case 108114:
				{
					if (field.equals("min")) 
					{
						__temp_executeDef130 = false;
						return this.min;
					}
					
					break;
				}
				
				
				case 3540684:
				{
					if (field.equals("step")) 
					{
						__temp_executeDef130 = false;
						return this.step;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef130) 
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
			boolean __temp_executeDef131 = true;
			switch (field.hashCode())
			{
				case 3377907:
				{
					if (field.equals("next")) 
					{
						__temp_executeDef131 = false;
						return this.next();
					}
					
					break;
				}
				
				
				case 108404047:
				{
					if (field.equals("reset")) 
					{
						__temp_executeDef131 = false;
						return this.reset();
					}
					
					break;
				}
				
				
				case 696759469:
				{
					if (field.equals("hasNext")) 
					{
						__temp_executeDef131 = false;
						return this.hasNext();
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef131) 
			{
				return super.__hx_invokeField(field, dynargs);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("onDirection");
		baseArr.push("current");
		baseArr.push("max");
		baseArr.push("min");
		baseArr.push("step");
		baseArr.push("fin");
		baseArr.push("begin");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


