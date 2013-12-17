package jigsawxtargets.hxjava;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class UpdateTask extends java.util.TimerTask implements haxe.lang.IHxObject
{
	public    UpdateTask(haxe.lang.EmptyObject empty)
	{
		super();
	}
	
	
	public    UpdateTask()
	{
		super();
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawxtargets.hxjava.UpdateTask(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawxtargets.hxjava.UpdateTask();
	}
	
	
	public  boolean limitingFPS;
	
	public  boolean syncingUpdates;
	
	public  long oldTime;
	
	public  long nanoseconds;
	
	public  int frames;
	
	public  int updates;
	
	public  int fps;
	
	public  int ups;
	
	public  javax.swing.JPanel jpanel;
	
	public  java.lang.Object mutex;
	
	public   void newMore(javax.swing.JPanel jpanel_, java.lang.Object mutex_)
	{
		this.jpanel = jpanel_;
		this.mutex = mutex_;
		this.init();
	}
	
	
	public   void init()
	{
		{
			long a = java.lang.System.nanoTime();
			this.oldTime = ((long) (a) );
		}
		
		this.limitingFPS = true;
		this.syncingUpdates = true;
		this.nanoseconds = ((long) (((int) (0) )) );
		this.frames = 0;
		this.updates = 0;
		this.fps = 0;
		this.ups = 0;
	}
	
	
	public   void run()
	{
		synchronized(this.mutex)
		{
			boolean __temp_stmt119 = false;
			{
				long j = this.nanoseconds;
				long k = ((long) (((int) (1000000000) )) );
				__temp_stmt119 = ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
			}
			
			if (__temp_stmt119) 
			{
				this.fps = this.frames;
				this.ups = this.updates;
				{
					long j = this.nanoseconds;
					long k = ((long) (((int) (1000000000) )) );
					this.nanoseconds = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
				}
				
				this.frames = 0;
				this.updates = 0;
			}
			
			long elapsedTime = 0L;
			{
				long a = java.lang.System.nanoTime();
				elapsedTime = ((long) (a) );
			}
			
			{
				long j = elapsedTime;
				long k = this.oldTime;
				elapsedTime = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
			}
			
			{
				long j = this.oldTime;
				long k = elapsedTime;
				this.oldTime = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
			}
			
			{
				long j = this.nanoseconds;
				long k = elapsedTime;
				this.nanoseconds = ((long) (( ((long) (j) ) + ((long) (k) ) )) );
			}
			
			this.updates++;
			this.jpanel.repaint();
			int __temp_expr120 = 1;
		}
		;
	}
	
	
	public   boolean __hx_deleteField(java.lang.String field)
	{
		return false;
	}
	
	
	public   java.lang.Object __hx_lookupField(java.lang.String field, boolean throwErrors, boolean isCheck)
	{
		if (isCheck) 
		{
			return haxe.lang.Runtime.undefined;
		}
		 else 
		{
			if (throwErrors) 
			{
				throw haxe.lang.HaxeException.wrap("Field not found.");
			}
			 else 
			{
				return null;
			}
			
		}
		
	}
	
	
	public   double __hx_lookupField_f(java.lang.String field, boolean throwErrors)
	{
		if (throwErrors) 
		{
			throw haxe.lang.HaxeException.wrap("Field not found or incompatible field type.");
		}
		 else 
		{
			return 0.0;
		}
		
	}
	
	
	public   java.lang.Object __hx_lookupSetField(java.lang.String field, java.lang.Object value)
	{
		throw haxe.lang.HaxeException.wrap("Cannot access field for writing.");
	}
	
	
	public   double __hx_lookupSetField_f(java.lang.String field, double value)
	{
		throw haxe.lang.HaxeException.wrap("Cannot access field for writing or incompatible type.");
	}
	
	
	public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef121 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef121 = false;
						this.mutex = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef121 = false;
						this.oldTime = ((long) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef121 = false;
						this.ups = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef121 = false;
						this.nanoseconds = ((long) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef121 = false;
						this.fps = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef121 = false;
						this.frames = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef121 = false;
						this.updates = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef121) 
			{
				return this.__hx_lookupSetField_f(field, value);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	public   java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef122 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef122 = false;
						this.mutex = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1893148962:
				{
					if (field.equals("limitingFPS")) 
					{
						__temp_executeDef122 = false;
						this.limitingFPS = haxe.lang.Runtime.toBool(value);
						return value;
					}
					
					break;
				}
				
				
				case -1153844262:
				{
					if (field.equals("jpanel")) 
					{
						__temp_executeDef122 = false;
						this.jpanel = ((javax.swing.JPanel) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 498430819:
				{
					if (field.equals("syncingUpdates")) 
					{
						__temp_executeDef122 = false;
						this.syncingUpdates = haxe.lang.Runtime.toBool(value);
						return value;
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef122 = false;
						this.ups = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef122 = false;
						this.oldTime = ((long) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef122 = false;
						this.fps = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef122 = false;
						this.nanoseconds = ((long) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef122 = false;
						this.updates = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef122 = false;
						this.frames = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef122) 
			{
				return this.__hx_lookupSetField(field, value);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	public   java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		{
			boolean __temp_executeDef123 = true;
			switch (field.hashCode())
			{
				case 1881290328:
				{
					if (field.equals("scheduledExecutionTime")) 
					{
						__temp_executeDef123 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("scheduledExecutionTime"))) );
					}
					
					break;
				}
				
				
				case 1893148962:
				{
					if (field.equals("limitingFPS")) 
					{
						__temp_executeDef123 = false;
						return this.limitingFPS;
					}
					
					break;
				}
				
				
				case -1367724422:
				{
					if (field.equals("cancel")) 
					{
						__temp_executeDef123 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("cancel"))) );
					}
					
					break;
				}
				
				
				case 498430819:
				{
					if (field.equals("syncingUpdates")) 
					{
						__temp_executeDef123 = false;
						return this.syncingUpdates;
					}
					
					break;
				}
				
				
				case 113291:
				{
					if (field.equals("run")) 
					{
						__temp_executeDef123 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("run"))) );
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef123 = false;
						return this.oldTime;
					}
					
					break;
				}
				
				
				case 3237136:
				{
					if (field.equals("init")) 
					{
						__temp_executeDef123 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("init"))) );
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef123 = false;
						return this.nanoseconds;
					}
					
					break;
				}
				
				
				case 1845004565:
				{
					if (field.equals("newMore")) 
					{
						__temp_executeDef123 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("newMore"))) );
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef123 = false;
						return this.frames;
					}
					
					break;
				}
				
				
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef123 = false;
						return this.mutex;
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef123 = false;
						return this.updates;
					}
					
					break;
				}
				
				
				case -1153844262:
				{
					if (field.equals("jpanel")) 
					{
						__temp_executeDef123 = false;
						return this.jpanel;
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef123 = false;
						return this.fps;
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef123 = false;
						return this.ups;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef123) 
			{
				return this.__hx_lookupField(field, throwErrors, isCheck);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	public   double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		{
			boolean __temp_executeDef124 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef124 = false;
						return ((double) (haxe.lang.Runtime.toDouble(this.mutex)) );
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef124 = false;
						return ((double) (this.oldTime) );
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef124 = false;
						return ((double) (this.ups) );
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef124 = false;
						return ((double) (this.nanoseconds) );
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef124 = false;
						return ((double) (this.fps) );
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef124 = false;
						return ((double) (this.frames) );
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef124 = false;
						return ((double) (this.updates) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef124) 
			{
				return this.__hx_lookupField_f(field, throwErrors);
			}
			 else 
			{
				throw null;
			}
			
		}
		
	}
	
	
	public   java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		{
			int __temp_hash126 = field.hashCode();
			boolean __temp_executeDef125 = true;
			switch (__temp_hash126)
			{
				case 1881290328:case -1367724422:
				{
					if (( (( ( __temp_hash126 == 1881290328 ) && field.equals("scheduledExecutionTime") )) || field.equals("cancel") )) 
					{
						__temp_executeDef125 = false;
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					break;
				}
				
				
				case 1845004565:
				{
					if (field.equals("newMore")) 
					{
						__temp_executeDef125 = false;
						this.newMore(((javax.swing.JPanel) (dynargs.__get(0)) ), dynargs.__get(1));
					}
					
					break;
				}
				
				
				case 113291:
				{
					if (field.equals("run")) 
					{
						__temp_executeDef125 = false;
						this.run();
					}
					
					break;
				}
				
				
				case 3237136:
				{
					if (field.equals("init")) 
					{
						__temp_executeDef125 = false;
						this.init();
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef125) 
			{
				return ((haxe.lang.Function) (this.__hx_getField(field, true, false, false)) ).__hx_invokeDynamic(dynargs);
			}
			
		}
		
		return null;
	}
	
	
	public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("mutex");
		baseArr.push("jpanel");
		baseArr.push("ups");
		baseArr.push("fps");
		baseArr.push("updates");
		baseArr.push("frames");
		baseArr.push("nanoseconds");
		baseArr.push("oldTime");
		baseArr.push("syncingUpdates");
		baseArr.push("limitingFPS");
	}
	
	
}


