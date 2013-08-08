package jigsawxtargets.hxjava;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class UpdateTask extends java.util.TimerTask implements haxe.lang.IHxObject
{
	public    UpdateTask(haxe.lang.EmptyObject empty)
	{
		super();
	}
	
	
	public    UpdateTask(javax.swing.JPanel jpanel_, java.lang.Object mutex_)
	{
		super();
		this.jpanel = jpanel_;
		this.mutex = mutex_;
		this.init();
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawxtargets.hxjava.UpdateTask(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawxtargets.hxjava.UpdateTask(((javax.swing.JPanel) (arr.__get(0)) ), ((java.lang.Object) (arr.__get(1)) ));
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
	
	public   void init()
	{
		this.oldTime = ((long) (java.lang.System.nanoTime()) );
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
			boolean __temp_stmt155 = false;
			{
				long j = this.nanoseconds;
				long k = ((long) (((int) (1000000000) )) );
				__temp_stmt155 = ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
			}
			
			if (__temp_stmt155) 
			{
				this.fps = this.frames;
				this.ups = this.updates;
				long __temp_stmt156 = 0L;
				{
					long j = this.nanoseconds;
					long k = ((long) (((int) (1000000000) )) );
					__temp_stmt156 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
				}
				
				this.nanoseconds = ((long) (__temp_stmt156) );
				this.frames = 0;
				this.updates = 0;
			}
			
			long elapsedTime = ((long) (java.lang.System.nanoTime()) );
			long __temp_stmt157 = 0L;
			{
				long j = elapsedTime;
				long k = this.oldTime;
				__temp_stmt157 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
			}
			
			elapsedTime = ((long) (__temp_stmt157) );
			long __temp_stmt158 = 0L;
			{
				long j = this.oldTime;
				long k = elapsedTime;
				__temp_stmt158 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
			}
			
			this.oldTime = ((long) (__temp_stmt158) );
			long __temp_stmt159 = 0L;
			{
				long j = this.nanoseconds;
				long k = elapsedTime;
				__temp_stmt159 = ((long) (( ((long) (j) ) + ((long) (k) ) )) );
			}
			
			this.nanoseconds = ((long) (__temp_stmt159) );
			this.updates++;
			this.jpanel.repaint();
			int __temp_expr160 = 1;
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
			boolean __temp_executeDef161 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef161 = false;
						this.mutex = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef161 = false;
						this.oldTime = ((long) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef161 = false;
						this.ups = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef161 = false;
						this.nanoseconds = ((long) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef161 = false;
						this.fps = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef161 = false;
						this.frames = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef161 = false;
						this.updates = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef161) 
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
			boolean __temp_executeDef162 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef162 = false;
						this.mutex = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1893148962:
				{
					if (field.equals("limitingFPS")) 
					{
						__temp_executeDef162 = false;
						this.limitingFPS = haxe.lang.Runtime.toBool(value);
						return value;
					}
					
					break;
				}
				
				
				case -1153844262:
				{
					if (field.equals("jpanel")) 
					{
						__temp_executeDef162 = false;
						this.jpanel = ((javax.swing.JPanel) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 498430819:
				{
					if (field.equals("syncingUpdates")) 
					{
						__temp_executeDef162 = false;
						this.syncingUpdates = haxe.lang.Runtime.toBool(value);
						return value;
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef162 = false;
						this.ups = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef162 = false;
						this.oldTime = ((long) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef162 = false;
						this.fps = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef162 = false;
						this.nanoseconds = ((long) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef162 = false;
						this.updates = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef162 = false;
						this.frames = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef162) 
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
			boolean __temp_executeDef163 = true;
			switch (field.hashCode())
			{
				case 1881290328:
				{
					if (field.equals("scheduledExecutionTime")) 
					{
						__temp_executeDef163 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("scheduledExecutionTime"))) );
					}
					
					break;
				}
				
				
				case 1893148962:
				{
					if (field.equals("limitingFPS")) 
					{
						__temp_executeDef163 = false;
						return this.limitingFPS;
					}
					
					break;
				}
				
				
				case -1367724422:
				{
					if (field.equals("cancel")) 
					{
						__temp_executeDef163 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("cancel"))) );
					}
					
					break;
				}
				
				
				case 498430819:
				{
					if (field.equals("syncingUpdates")) 
					{
						__temp_executeDef163 = false;
						return this.syncingUpdates;
					}
					
					break;
				}
				
				
				case 113291:
				{
					if (field.equals("run")) 
					{
						__temp_executeDef163 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("run"))) );
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef163 = false;
						return this.oldTime;
					}
					
					break;
				}
				
				
				case 3237136:
				{
					if (field.equals("init")) 
					{
						__temp_executeDef163 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("init"))) );
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef163 = false;
						return this.nanoseconds;
					}
					
					break;
				}
				
				
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef163 = false;
						return this.mutex;
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef163 = false;
						return this.frames;
					}
					
					break;
				}
				
				
				case -1153844262:
				{
					if (field.equals("jpanel")) 
					{
						__temp_executeDef163 = false;
						return this.jpanel;
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef163 = false;
						return this.updates;
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef163 = false;
						return this.ups;
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef163 = false;
						return this.fps;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef163) 
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
			boolean __temp_executeDef164 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef164 = false;
						return ((double) (haxe.lang.Runtime.toDouble(this.mutex)) );
					}
					
					break;
				}
				
				
				case -1379399276:
				{
					if (field.equals("oldTime")) 
					{
						__temp_executeDef164 = false;
						return ((double) (this.oldTime) );
					}
					
					break;
				}
				
				
				case 116024:
				{
					if (field.equals("ups")) 
					{
						__temp_executeDef164 = false;
						return ((double) (this.ups) );
					}
					
					break;
				}
				
				
				case -1081074357:
				{
					if (field.equals("nanoseconds")) 
					{
						__temp_executeDef164 = false;
						return ((double) (this.nanoseconds) );
					}
					
					break;
				}
				
				
				case 101609:
				{
					if (field.equals("fps")) 
					{
						__temp_executeDef164 = false;
						return ((double) (this.fps) );
					}
					
					break;
				}
				
				
				case -1266514778:
				{
					if (field.equals("frames")) 
					{
						__temp_executeDef164 = false;
						return ((double) (this.frames) );
					}
					
					break;
				}
				
				
				case -234430262:
				{
					if (field.equals("updates")) 
					{
						__temp_executeDef164 = false;
						return ((double) (this.updates) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef164) 
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
			int __temp_hash166 = field.hashCode();
			boolean __temp_executeDef165 = true;
			switch (__temp_hash166)
			{
				case 1881290328:case -1367724422:
				{
					if (( (( ( __temp_hash166 == 1881290328 ) && field.equals("scheduledExecutionTime") )) || field.equals("cancel") )) 
					{
						__temp_executeDef165 = false;
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					break;
				}
				
				
				case 3237136:
				{
					if (field.equals("init")) 
					{
						__temp_executeDef165 = false;
						this.init();
					}
					
					break;
				}
				
				
				case 113291:
				{
					if (field.equals("run")) 
					{
						__temp_executeDef165 = false;
						this.run();
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef165) 
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


