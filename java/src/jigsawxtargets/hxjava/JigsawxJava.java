package jigsawxtargets.hxjava;
import haxe.root.*;
import jigsawx.math.Vec2;
import jigsawx.JigsawPiece;
import jigsawx.Jigsawx;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class JigsawxJava extends javax.swing.JFrame implements haxe.lang.IHxObject, java.awt.event.MouseMotionListener, java.awt.event.MouseListener, java.awt.event.KeyListener
{
	public static void main(String[] args)
	{
		main();
	}
	public    JigsawxJava(haxe.lang.EmptyObject empty)
	{
		super();
	}
	
	
	public    JigsawxJava()
	{
		super(haxe.lang.Runtime.toString("Jigsawx Java Example"));
		java.lang.System.setProperty(haxe.lang.Runtime.toString("sun.java2d.opengl"), haxe.lang.Runtime.toString("True"));
		this.setup();
		this.createSurface();
		this.setVisible(haxe.lang.Runtime.toBool(true));
	}
	
	
	public static  long slowUpdateSpeed;
	
	
	
	public static   void main()
	{
		new jigsawxtargets.hxjava.JigsawxJava();
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawxtargets.hxjava.JigsawxJava(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawxtargets.hxjava.JigsawxJava();
	}
	
	
	public  int wid;
	
	public  int hi;
	
	public  int rows;
	
	public  int cols;
	
	public  Jigsawx jigsawx;
	
	public  jigsawxtargets.hxjava.Surface surface;
	
	public  jigsawxtargets.hxjava.GraphicsTexture currentGraphic;
	
	public  java.awt.Point pressPoint;
	
	public  boolean enabledMove;
	
	public  java.lang.Object mutex;
	
	public  jigsawxtargets.hxjava.UpdateTask updateTask;
	
	public  java.util.Timer updateTimer;
	
	public   void setup()
	{
		this.setSize(((int) (700) ), ((int) (500) ));
		this.setDefaultCloseOperation(((int) (javax.swing.JFrame.EXIT_ON_CLOSE) ));
		this.setBackground(((java.awt.Color) (java.awt.Color.black) ));
	}
	
	
	public   void createSurface()
	{
		java.lang.Object mutex = new haxe.lang.DynamicObject(new haxe.root.Array<java.lang.String>(new java.lang.String[]{}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{}), new haxe.root.Array<java.lang.String>(new java.lang.String[]{}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{}));
		this.surface = new jigsawxtargets.hxjava.Surface();
		this.surface.mutex = mutex;
		this.surface.graphicsTextures = this.createGraphicsTextures();
		this.getContentPane().add(((java.awt.Component) (this.surface) ));
		this.surface.addKeyListener(((java.awt.event.KeyListener) (this) ));
		this.surface.setFocusable(haxe.lang.Runtime.toBool(true));
		this.surface.requestFocusInWindow();
		this.addMouseListener(((java.awt.event.MouseListener) (this) ));
		this.addMouseMotionListener(((java.awt.event.MouseMotionListener) (this) ));
		this.updateTimer = new java.util.Timer();
		this.updateTask = new jigsawxtargets.hxjava.UpdateTask();
		this.updateTask.newMore(this.surface, mutex);
		this.updateTask.oldTime = java.lang.System.nanoTime();
		jigsawxtargets.hxjava.JigsawxJava.slowUpdateSpeed = ((long) (((int) (20) )) );
		long startAt = ((long) (((int) (0) )) );
		this.updateTimer.schedule(((java.util.TimerTask) (this.updateTask) ), ((long) (startAt) ), ((long) (jigsawxtargets.hxjava.JigsawxJava.slowUpdateSpeed) ));
	}
	
	
	public   void mousePressed(java.awt.event.MouseEvent e)
	{
		int _g = 0;
		haxe.root.Array<jigsawxtargets.hxjava.GraphicsTexture> _g1 = this.surface.graphicsTextures;
		while (( _g < _g1.length ))
		{
			jigsawxtargets.hxjava.GraphicsTexture graphicsTexture = _g1.__get(_g);
			 ++ _g;
			if (( graphicsTexture.jig.enabled == true )) 
			{
				java.awt.Point point = e.getPoint();
				this.pressPoint = new java.awt.Point(((int) (( graphicsTexture.getLocation().x - point.x )) ), ((int) (( graphicsTexture.getLocation().y - point.y )) ));
				point.y -= 20;
				if (graphicsTexture.generalPath.contains(((java.awt.geom.Point2D) (point) ))) 
				{
					this.currentGraphic = graphicsTexture;
					this.surface.moveToTop(graphicsTexture);
					this.enabledMove = true;
				}
				
			}
			
		}
		
	}
	
	
	public   void mouseDragged(java.awt.event.MouseEvent e)
	{
		if (( this.enabledMove == true )) 
		{
			int x = e.getX();
			int y = e.getY();
			if (( this.checkLock(new java.awt.Point(((int) (x) ), ((int) (y) ))) == true )) 
			{
				return ;
			}
			
			this.currentGraphic.setLocation(((double) (( x + this.pressPoint.x )) ), ((double) (( y + this.pressPoint.y )) ));
		}
		
	}
	
	
	public   void mouseExited(java.awt.event.MouseEvent e)
	{
		this.enabledMove = false;
	}
	
	
	public   void mouseMoved(java.awt.event.MouseEvent e)
	{
		this.overCheck(e);
	}
	
	
	public   void overCheck(java.awt.event.MouseEvent e)
	{
		boolean showCursor = false;
		{
			int _g = 0;
			haxe.root.Array<jigsawxtargets.hxjava.GraphicsTexture> _g1 = this.surface.graphicsTextures;
			while (( _g < _g1.length ))
			{
				jigsawxtargets.hxjava.GraphicsTexture graphicsTexture = _g1.__get(_g);
				 ++ _g;
				if (( this.currentGraphic.jig.enabled == true )) 
				{
					java.awt.Point point = e.getPoint();
					point.y -= 20;
					if (graphicsTexture.generalPath.contains(((java.awt.geom.Point2D) (point) ))) 
					{
						showCursor = true;
					}
					
				}
				
			}
			
		}
		
		if (showCursor) 
		{
			e.getComponent().setCursor(((java.awt.Cursor) (java.awt.Cursor.getPredefinedCursor(((int) (java.awt.Cursor.HAND_CURSOR) ))) ));
		}
		 else 
		{
			e.getComponent().setCursor(((java.awt.Cursor) (java.awt.Cursor.getPredefinedCursor(((int) (java.awt.Cursor.DEFAULT_CURSOR) ))) ));
		}
		
	}
	
	
	public   void mouseEntered(java.awt.event.MouseEvent e)
	{
		{
		}
		
	}
	
	
	public   void mouseClicked(java.awt.event.MouseEvent e)
	{
		{
		}
		
	}
	
	
	public   void mouseReleased(java.awt.event.MouseEvent e)
	{
		this.enabledMove = false;
	}
	
	
	public   boolean checkLock(java.awt.Point tempSp)
	{
		if ( ! (this.enabledMove) ) 
		{
			return true;
		}
		
		JigsawPiece jig = this.currentGraphic.jig;
		if (( jig == null )) 
		{
			return true;
		}
		
		if (( ( java.lang.Math.abs(( jig.xy.x - (( tempSp.x - this.wid )) )) < ( ((double) ((( this.wid + this.hi ))) ) / 7 ) ) && ( java.lang.Math.abs(( jig.xy.y - (( tempSp.y - this.hi )) )) < ( ((double) ((( this.wid + this.hi ))) ) / 7 ) ) )) 
		{
			this.currentGraphic.setLocation(jig.xy.x, jig.xy.y);
			this.currentGraphic.set_alpha(((double) (1) ));
			jig.enabled = false;
			this.enabledMove = false;
			return true;
		}
		
		return false;
	}
	
	
	public   void keyTyped(java.awt.event.KeyEvent e)
	{
		{
		}
		
	}
	
	
	public   void keyReleased(java.awt.event.KeyEvent e)
	{
		{
		}
		
	}
	
	
	public   void keyPressed(java.awt.event.KeyEvent e)
	{
		this.nudge(e);
	}
	
	
	public   void nudge(java.awt.event.KeyEvent e)
	{
		Vec2 location = this.currentGraphic.getLocation();
		{
			int _g = e.getKeyCode();
			{
				int __temp_switch142 = (_g);
				if (( __temp_switch142 == java.awt.event.KeyEvent.VK_UP )) 
				{
					this.currentGraphic.setLocation(location.x, ( location.y - 1 ));
				}
				 else 
				{
					if (( __temp_switch142 == java.awt.event.KeyEvent.VK_DOWN )) 
					{
						this.currentGraphic.setLocation(location.x, ( location.y + 1 ));
					}
					 else 
					{
						if (( __temp_switch142 == java.awt.event.KeyEvent.VK_LEFT )) 
						{
							this.currentGraphic.setLocation(( location.x - 1 ), location.y);
						}
						 else 
						{
							if (( __temp_switch142 == java.awt.event.KeyEvent.VK_RIGHT )) 
							{
								this.currentGraphic.setLocation(( location.x + 1 ), location.y);
							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	
	public   haxe.root.Array<jigsawxtargets.hxjava.GraphicsTexture> createGraphicsTextures()
	{
		haxe.root.Array<jigsawxtargets.hxjava.GraphicsTexture> arr = new haxe.root.Array<jigsawxtargets.hxjava.GraphicsTexture>();
		this.rows = 3;
		this.cols = 5;
		this.wid = 100;
		this.hi = 100;
		this.jigsawx = new Jigsawx(((double) (this.wid) ), ((double) (this.hi) ), ((int) (this.rows) ), ((int) (this.cols) ));
		int count = 0;
		boolean isRandom = false;
		haxe.root.Array<jigsawxtargets.hxjava.GraphicsTexture> unCompletedPieces = new haxe.root.Array<jigsawxtargets.hxjava.GraphicsTexture>();
		{
			int _g = 0;
			haxe.root.Array<JigsawPiece> _g1 = this.jigsawx.jigs;
			while (( _g < _g1.length ))
			{
				JigsawPiece jig = _g1.__get(_g);
				 ++ _g;
				java.awt.Rectangle rec = new java.awt.Rectangle(( this.wid / 2 ), ( this.hi / 2 ), ((int) (540) ), ((int) (360) ));
				jigsawxtargets.hxjava.GraphicsTexture graphicsTexture = new jigsawxtargets.hxjava.GraphicsTexture(((JigsawPiece) (jig) ), haxe.lang.Runtime.toString("tablecloth.jpg"), ((java.awt.Rectangle) (rec) ), ((double) (jig.xy.x) ), ((double) (jig.xy.y) ));
				double randX = 0.;
				double randY = 0.;
				if (( ( java.lang.Math.random() * 5 ) > 2 )) 
				{
					randX = ( java.lang.Math.random() * 200 );
					randY = ( java.lang.Math.random() * 100 );
					isRandom = true;
					graphicsTexture.set_alpha(0.6);
				}
				 else 
				{
					isRandom = false;
					graphicsTexture.jig.enabled = false;
				}
				
				graphicsTexture.setLocation(( jig.xy.x + randX ), ( jig.xy.y + randY ));
				if (isRandom) 
				{
					unCompletedPieces.push(graphicsTexture);
				}
				 else 
				{
					arr.push(graphicsTexture);
				}
				
				count++;
			}
			
		}
		
		this.currentGraphic = arr.__get(0);
		{
			int _g = 0;
			while (( _g < unCompletedPieces.length ))
			{
				jigsawxtargets.hxjava.GraphicsTexture graphicsTexture = unCompletedPieces.__get(_g);
				 ++ _g;
				arr.push(graphicsTexture);
			}
			
		}
		
		return arr;
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
			boolean __temp_executeDef143 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef143 = false;
						this.mutex = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 117714:
				{
					if (field.equals("wid")) 
					{
						__temp_executeDef143 = false;
						this.wid = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef143 = false;
						this.cols = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3329:
				{
					if (field.equals("hi")) 
					{
						__temp_executeDef143 = false;
						this.hi = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef143 = false;
						this.rows = ((int) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef143) 
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
			boolean __temp_executeDef144 = true;
			switch (field.hashCode())
			{
				case -166979734:
				{
					if (field.equals("rootPane")) 
					{
						__temp_executeDef144 = false;
						this.rootPane = ((javax.swing.JRootPane) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 117714:
				{
					if (field.equals("wid")) 
					{
						__temp_executeDef144 = false;
						this.wid = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 2108891965:
				{
					if (field.equals("rootPaneCheckingEnabled")) 
					{
						__temp_executeDef144 = false;
						this.rootPaneCheckingEnabled = haxe.lang.Runtime.toBool(value);
						return value;
					}
					
					break;
				}
				
				
				case 3329:
				{
					if (field.equals("hi")) 
					{
						__temp_executeDef144 = false;
						this.hi = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -61228775:
				{
					if (field.equals("accessibleContext")) 
					{
						__temp_executeDef144 = false;
						this.accessibleContext = ((javax.accessibility.AccessibleContext) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef144 = false;
						this.rows = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -583928836:
				{
					if (field.equals("updateTimer")) 
					{
						__temp_executeDef144 = false;
						this.updateTimer = ((java.util.Timer) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef144 = false;
						this.cols = ((int) (haxe.lang.Runtime.toInt(value)) );
						return value;
					}
					
					break;
				}
				
				
				case -295938578:
				{
					if (field.equals("updateTask")) 
					{
						__temp_executeDef144 = false;
						this.updateTask = ((jigsawxtargets.hxjava.UpdateTask) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1604151113:
				{
					if (field.equals("jigsawx")) 
					{
						__temp_executeDef144 = false;
						this.jigsawx = ((Jigsawx) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef144 = false;
						this.mutex = ((java.lang.Object) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1853231955:
				{
					if (field.equals("surface")) 
					{
						__temp_executeDef144 = false;
						this.surface = ((jigsawxtargets.hxjava.Surface) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1425362254:
				{
					if (field.equals("enabledMove")) 
					{
						__temp_executeDef144 = false;
						this.enabledMove = haxe.lang.Runtime.toBool(value);
						return value;
					}
					
					break;
				}
				
				
				case -1309531345:
				{
					if (field.equals("currentGraphic")) 
					{
						__temp_executeDef144 = false;
						this.currentGraphic = ((jigsawxtargets.hxjava.GraphicsTexture) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 1857483533:
				{
					if (field.equals("pressPoint")) 
					{
						__temp_executeDef144 = false;
						this.pressPoint = ((java.awt.Point) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef144) 
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
			boolean __temp_executeDef145 = true;
			switch (field.hashCode())
			{
				case -132109047:
				{
					if (field.equals("getComponentOrientation")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getComponentOrientation"))) );
					}
					
					break;
				}
				
				
				case 117714:
				{
					if (field.equals("wid")) 
					{
						__temp_executeDef145 = false;
						return this.wid;
					}
					
					break;
				}
				
				
				case 1920162837:
				{
					if (field.equals("setComponentOrientation")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setComponentOrientation"))) );
					}
					
					break;
				}
				
				
				case 3329:
				{
					if (field.equals("hi")) 
					{
						__temp_executeDef145 = false;
						return this.hi;
					}
					
					break;
				}
				
				
				case -2036853317:
				{
					if (field.equals("firePropertyChange")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("firePropertyChange"))) );
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef145 = false;
						return this.rows;
					}
					
					break;
				}
				
				
				case 1053245860:
				{
					if (field.equals("getPropertyChangeListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getPropertyChangeListeners"))) );
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef145 = false;
						return this.cols;
					}
					
					break;
				}
				
				
				case -1645115555:
				{
					if (field.equals("removePropertyChangeListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removePropertyChangeListener"))) );
					}
					
					break;
				}
				
				
				case -1604151113:
				{
					if (field.equals("jigsawx")) 
					{
						__temp_executeDef145 = false;
						return this.jigsawx;
					}
					
					break;
				}
				
				
				case -1776922004:
				{
					if (field.equals("toString")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("toString"))) );
					}
					
					break;
				}
				
				
				case -1853231955:
				{
					if (field.equals("surface")) 
					{
						__temp_executeDef145 = false;
						return this.surface;
					}
					
					break;
				}
				
				
				case 1115025797:
				{
					if (field.equals("isFocusOwner")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocusOwner"))) );
					}
					
					break;
				}
				
				
				case -1309531345:
				{
					if (field.equals("currentGraphic")) 
					{
						__temp_executeDef145 = false;
						return this.currentGraphic;
					}
					
					break;
				}
				
				
				case 117596766:
				{
					if (field.equals("hasFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("hasFocus"))) );
					}
					
					break;
				}
				
				
				case 1857483533:
				{
					if (field.equals("pressPoint")) 
					{
						__temp_executeDef145 = false;
						return this.pressPoint;
					}
					
					break;
				}
				
				
				case 122660510:
				{
					if (field.equals("transferFocusUpCycle")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("transferFocusUpCycle"))) );
					}
					
					break;
				}
				
				
				case -1425362254:
				{
					if (field.equals("enabledMove")) 
					{
						__temp_executeDef145 = false;
						return this.enabledMove;
					}
					
					break;
				}
				
				
				case 1229986480:
				{
					if (field.equals("transferFocusBackward")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("transferFocusBackward"))) );
					}
					
					break;
				}
				
				
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef145 = false;
						return this.mutex;
					}
					
					break;
				}
				
				
				case 1193982373:
				{
					if (field.equals("nextFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("nextFocus"))) );
					}
					
					break;
				}
				
				
				case -295938578:
				{
					if (field.equals("updateTask")) 
					{
						__temp_executeDef145 = false;
						return this.updateTask;
					}
					
					break;
				}
				
				
				case -2037192787:
				{
					if (field.equals("transferFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("transferFocus"))) );
					}
					
					break;
				}
				
				
				case -583928836:
				{
					if (field.equals("updateTimer")) 
					{
						__temp_executeDef145 = false;
						return this.updateTimer;
					}
					
					break;
				}
				
				
				case -132373474:
				{
					if (field.equals("requestFocusInWindow")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("requestFocusInWindow"))) );
					}
					
					break;
				}
				
				
				case 109329021:
				{
					if (field.equals("setup")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setup"))) );
					}
					
					break;
				}
				
				
				case 1280029577:
				{
					if (field.equals("requestFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("requestFocus"))) );
					}
					
					break;
				}
				
				
				case 393285649:
				{
					if (field.equals("createSurface")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createSurface"))) );
					}
					
					break;
				}
				
				
				case -1338154671:
				{
					if (field.equals("getFocusTraversalKeysEnabled")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFocusTraversalKeysEnabled"))) );
					}
					
					break;
				}
				
				
				case 1647473597:
				{
					if (field.equals("mousePressed")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mousePressed"))) );
					}
					
					break;
				}
				
				
				case -100025915:
				{
					if (field.equals("setFocusTraversalKeysEnabled")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFocusTraversalKeysEnabled"))) );
					}
					
					break;
				}
				
				
				case -416699091:
				{
					if (field.equals("mouseDragged")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseDragged"))) );
					}
					
					break;
				}
				
				
				case -1126567952:
				{
					if (field.equals("setFocusable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFocusable"))) );
					}
					
					break;
				}
				
				
				case 436621122:
				{
					if (field.equals("mouseExited")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseExited"))) );
					}
					
					break;
				}
				
				
				case -1487536088:
				{
					if (field.equals("isFocusable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocusable"))) );
					}
					
					break;
				}
				
				
				case 991047950:
				{
					if (field.equals("mouseMoved")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseMoved"))) );
					}
					
					break;
				}
				
				
				case -1426705793:
				{
					if (field.equals("isFocusTraversable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocusTraversable"))) );
					}
					
					break;
				}
				
				
				case -793404268:
				{
					if (field.equals("overCheck")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("overCheck"))) );
					}
					
					break;
				}
				
				
				case 619607060:
				{
					if (field.equals("lostFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("lostFocus"))) );
					}
					
					break;
				}
				
				
				case 373785874:
				{
					if (field.equals("mouseEntered")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseEntered"))) );
					}
					
					break;
				}
				
				
				case -2056434772:
				{
					if (field.equals("gotFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("gotFocus"))) );
					}
					
					break;
				}
				
				
				case -1468704830:
				{
					if (field.equals("mouseClicked")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseClicked"))) );
					}
					
					break;
				}
				
				
				case -1422950858:
				{
					if (field.equals("action")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("action"))) );
					}
					
					break;
				}
				
				
				case 257033474:
				{
					if (field.equals("mouseReleased")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseReleased"))) );
					}
					
					break;
				}
				
				
				case 101944666:
				{
					if (field.equals("keyUp")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("keyUp"))) );
					}
					
					break;
				}
				
				
				case 398350931:
				{
					if (field.equals("checkLock")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("checkLock"))) );
					}
					
					break;
				}
				
				
				case -815927391:
				{
					if (field.equals("keyDown")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("keyDown"))) );
					}
					
					break;
				}
				
				
				case 491121995:
				{
					if (field.equals("keyTyped")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("keyTyped"))) );
					}
					
					break;
				}
				
				
				case 585928547:
				{
					if (field.equals("mouseExit")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseExit"))) );
					}
					
					break;
				}
				
				
				case -1813574468:
				{
					if (field.equals("keyReleased")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("keyReleased"))) );
					}
					
					break;
				}
				
				
				case 983628083:
				{
					if (field.equals("mouseEnter")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseEnter"))) );
					}
					
					break;
				}
				
				
				case 56659139:
				{
					if (field.equals("keyPressed")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("keyPressed"))) );
					}
					
					break;
				}
				
				
				case 586158614:
				{
					if (field.equals("mouseMove")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseMove"))) );
					}
					
					break;
				}
				
				
				case 105172251:
				{
					if (field.equals("nudge")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("nudge"))) );
					}
					
					break;
				}
				
				
				case 1243066912:
				{
					if (field.equals("mouseUp")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseUp"))) );
					}
					
					break;
				}
				
				
				case 1712754559:
				{
					if (field.equals("createGraphicsTextures")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createGraphicsTextures"))) );
					}
					
					break;
				}
				
				
				case 585892729:
				{
					if (field.equals("mouseDrag")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseDrag"))) );
					}
					
					break;
				}
				
				
				case 1094177291:
				{
					if (field.equals("repaint")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("repaint"))) );
					}
					
					break;
				}
				
				
				case 585890535:
				{
					if (field.equals("mouseDown")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("mouseDown"))) );
					}
					
					break;
				}
				
				
				case -2116360191:
				{
					if (field.equals("getGraphics")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getGraphics"))) );
					}
					
					break;
				}
				
				
				case 1469558098:
				{
					if (field.equals("handleEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("handleEvent"))) );
					}
					
					break;
				}
				
				
				case 371675692:
				{
					if (field.equals("setLayout")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setLayout"))) );
					}
					
					break;
				}
				
				
				case -2051715969:
				{
					if (field.equals("processHierarchyBoundsEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processHierarchyBoundsEvent"))) );
					}
					
					break;
				}
				
				
				case -934610812:
				{
					if (field.equals("remove")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("remove"))) );
					}
					
					break;
				}
				
				
				case 584549812:
				{
					if (field.equals("processHierarchyEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processHierarchyEvent"))) );
					}
					
					break;
				}
				
				
				case -1148905887:
				{
					if (field.equals("addImpl")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addImpl"))) );
					}
					
					break;
				}
				
				
				case 2117937310:
				{
					if (field.equals("processInputMethodEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processInputMethodEvent"))) );
					}
					
					break;
				}
				
				
				case -838846263:
				{
					if (field.equals("update")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("update"))) );
					}
					
					break;
				}
				
				
				case -1880947691:
				{
					if (field.equals("processMouseWheelEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processMouseWheelEvent"))) );
					}
					
					break;
				}
				
				
				case 64494235:
				{
					if (field.equals("processWindowEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processWindowEvent"))) );
					}
					
					break;
				}
				
				
				case 2065058606:
				{
					if (field.equals("processMouseMotionEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processMouseMotionEvent"))) );
					}
					
					break;
				}
				
				
				case 1334722659:
				{
					if (field.equals("getAccessibleContext")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getAccessibleContext"))) );
					}
					
					break;
				}
				
				
				case 786391236:
				{
					if (field.equals("processMouseEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processMouseEvent"))) );
					}
					
					break;
				}
				
				
				case 820971262:
				{
					if (field.equals("paramString")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("paramString"))) );
					}
					
					break;
				}
				
				
				case 2139532042:
				{
					if (field.equals("processKeyEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processKeyEvent"))) );
					}
					
					break;
				}
				
				
				case 128422432:
				{
					if (field.equals("setIconImage")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setIconImage"))) );
					}
					
					break;
				}
				
				
				case -1262981007:
				{
					if (field.equals("processFocusEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processFocusEvent"))) );
					}
					
					break;
				}
				
				
				case 544801821:
				{
					if (field.equals("frameInit")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("frameInit"))) );
					}
					
					break;
				}
				
				
				case 1944745964:
				{
					if (field.equals("processComponentEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processComponentEvent"))) );
					}
					
					break;
				}
				
				
				case 755589254:
				{
					if (field.equals("createRootPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createRootPane"))) );
					}
					
					break;
				}
				
				
				case 23978912:
				{
					if (field.equals("coalesceEvents")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("coalesceEvents"))) );
					}
					
					break;
				}
				
				
				case -2034896978:
				{
					if (field.equals("setDefaultCloseOperation")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setDefaultCloseOperation"))) );
					}
					
					break;
				}
				
				
				case -1240522207:
				{
					if (field.equals("disableEvents")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("disableEvents"))) );
					}
					
					break;
				}
				
				
				case -1230815942:
				{
					if (field.equals("getDefaultCloseOperation")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getDefaultCloseOperation"))) );
					}
					
					break;
				}
				
				
				case -2086501252:
				{
					if (field.equals("enableEvents")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("enableEvents"))) );
					}
					
					break;
				}
				
				
				case -1691618275:
				{
					if (field.equals("setTransferHandler")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setTransferHandler"))) );
					}
					
					break;
				}
				
				
				case 150256377:
				{
					if (field.equals("getInputMethodRequests")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getInputMethodRequests"))) );
					}
					
					break;
				}
				
				
				case 1683315369:
				{
					if (field.equals("getTransferHandler")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getTransferHandler"))) );
					}
					
					break;
				}
				
				
				case -1549673046:
				{
					if (field.equals("getInputMethodListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getInputMethodListeners"))) );
					}
					
					break;
				}
				
				
				case 363645164:
				{
					if (field.equals("setJMenuBar")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setJMenuBar"))) );
					}
					
					break;
				}
				
				
				case -910517253:
				{
					if (field.equals("removeInputMethodListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeInputMethodListener"))) );
					}
					
					break;
				}
				
				
				case 452224992:
				{
					if (field.equals("getJMenuBar")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getJMenuBar"))) );
					}
					
					break;
				}
				
				
				case -1026988866:
				{
					if (field.equals("addInputMethodListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addInputMethodListener"))) );
					}
					
					break;
				}
				
				
				case -1543323981:
				{
					if (field.equals("isRootPaneCheckingEnabled")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isRootPaneCheckingEnabled"))) );
					}
					
					break;
				}
				
				
				case 2003512819:
				{
					if (field.equals("getMouseWheelListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMouseWheelListeners"))) );
					}
					
					break;
				}
				
				
				case 1675849851:
				{
					if (field.equals("setRootPaneCheckingEnabled")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setRootPaneCheckingEnabled"))) );
					}
					
					break;
				}
				
				
				case -25699282:
				{
					if (field.equals("removeMouseWheelListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeMouseWheelListener"))) );
					}
					
					break;
				}
				
				
				case 1910920416:
				{
					if (field.equals("getRootPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getRootPane"))) );
					}
					
					break;
				}
				
				
				case 1910206219:
				{
					if (field.equals("addMouseWheelListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addMouseWheelListener"))) );
					}
					
					break;
				}
				
				
				case 1822340588:
				{
					if (field.equals("setRootPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setRootPane"))) );
					}
					
					break;
				}
				
				
				case 1929852986:
				{
					if (field.equals("getMouseMotionListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMouseMotionListeners"))) );
					}
					
					break;
				}
				
				
				case -1029542325:
				{
					if (field.equals("getContentPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getContentPane"))) );
					}
					
					break;
				}
				
				
				case 33009515:
				{
					if (field.equals("removeMouseMotionListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeMouseMotionListener"))) );
					}
					
					break;
				}
				
				
				case 1493688767:
				{
					if (field.equals("setContentPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setContentPane"))) );
					}
					
					break;
				}
				
				
				case -83462098:
				{
					if (field.equals("addMouseMotionListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addMouseMotionListener"))) );
					}
					
					break;
				}
				
				
				case -1965320190:
				{
					if (field.equals("getLayeredPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getLayeredPane"))) );
					}
					
					break;
				}
				
				
				case 2072701968:
				{
					if (field.equals("getMouseListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMouseListeners"))) );
					}
					
					break;
				}
				
				
				case 557910902:
				{
					if (field.equals("setLayeredPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setLayeredPane"))) );
					}
					
					break;
				}
				
				
				case -2119295403:
				{
					if (field.equals("removeMouseListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeMouseListener"))) );
					}
					
					break;
				}
				
				
				case 1340682830:
				{
					if (field.equals("getGlassPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getGlassPane"))) );
					}
					
					break;
				}
				
				
				case 2091349336:
				{
					if (field.equals("addMouseListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addMouseListener"))) );
					}
					
					break;
				}
				
				
				case -1405291838:
				{
					if (field.equals("setGlassPane")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setGlassPane"))) );
					}
					
					break;
				}
				
				
				case -68050666:
				{
					if (field.equals("getKeyListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getKeyListeners"))) );
					}
					
					break;
				}
				
				
				case -61228775:
				{
					if (field.equals("accessibleContext")) 
					{
						__temp_executeDef145 = false;
						return this.accessibleContext;
					}
					
					break;
				}
				
				
				case 2108484879:
				{
					if (field.equals("removeKeyListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeKeyListener"))) );
					}
					
					break;
				}
				
				
				case 2108891965:
				{
					if (field.equals("rootPaneCheckingEnabled")) 
					{
						__temp_executeDef145 = false;
						return this.rootPaneCheckingEnabled;
					}
					
					break;
				}
				
				
				case 705046738:
				{
					if (field.equals("addKeyListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addKeyListener"))) );
					}
					
					break;
				}
				
				
				case -166979734:
				{
					if (field.equals("rootPane")) 
					{
						__temp_executeDef145 = false;
						return this.rootPane;
					}
					
					break;
				}
				
				
				case -292872821:
				{
					if (field.equals("getHierarchyBoundsListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getHierarchyBoundsListeners"))) );
					}
					
					break;
				}
				
				
				case -1001125651:
				{
					if (field.equals("removeNotify")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeNotify"))) );
					}
					
					break;
				}
				
				
				case 1695089402:
				{
					if (field.equals("removeHierarchyBoundsListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeHierarchyBoundsListener"))) );
					}
					
					break;
				}
				
				
				case -855811280:
				{
					if (field.equals("setBackground")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setBackground"))) );
					}
					
					break;
				}
				
				
				case 875541053:
				{
					if (field.equals("addHierarchyBoundsListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addHierarchyBoundsListener"))) );
					}
					
					break;
				}
				
				
				case 1404112991:
				{
					if (field.equals("setShape")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setShape"))) );
					}
					
					break;
				}
				
				
				case -300913280:
				{
					if (field.equals("getHierarchyListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getHierarchyListeners"))) );
					}
					
					break;
				}
				
				
				case 1706459465:
				{
					if (field.equals("setOpacity")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setOpacity"))) );
					}
					
					break;
				}
				
				
				case -2019322395:
				{
					if (field.equals("removeHierarchyListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeHierarchyListener"))) );
					}
					
					break;
				}
				
				
				case -146849974:
				{
					if (field.equals("addNotify")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addNotify"))) );
					}
					
					break;
				}
				
				
				case 675525480:
				{
					if (field.equals("addHierarchyListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addHierarchyListener"))) );
					}
					
					break;
				}
				
				
				case 1966196898:
				{
					if (field.equals("getTitle")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getTitle"))) );
					}
					
					break;
				}
				
				
				case 1237998909:
				{
					if (field.equals("getFocusListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFocusListeners"))) );
					}
					
					break;
				}
				
				
				case 1405084438:
				{
					if (field.equals("setTitle")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setTitle"))) );
					}
					
					break;
				}
				
				
				case -2007673976:
				{
					if (field.equals("removeFocusListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeFocusListener"))) );
					}
					
					break;
				}
				
				
				case -1420570196:
				{
					if (field.equals("getIconImage")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getIconImage"))) );
					}
					
					break;
				}
				
				
				case -2091996533:
				{
					if (field.equals("addFocusListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addFocusListener"))) );
					}
					
					break;
				}
				
				
				case 1987197438:
				{
					if (field.equals("getMenuBar")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMenuBar"))) );
					}
					
					break;
				}
				
				
				case -1150319688:
				{
					if (field.equals("getComponentListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getComponentListeners"))) );
					}
					
					break;
				}
				
				
				case -370964622:
				{
					if (field.equals("setMenuBar")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setMenuBar"))) );
					}
					
					break;
				}
				
				
				case 862771373:
				{
					if (field.equals("removeComponentListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeComponentListener"))) );
					}
					
					break;
				}
				
				
				case -972315487:
				{
					if (field.equals("isResizable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isResizable"))) );
					}
					
					break;
				}
				
				
				case -737348048:
				{
					if (field.equals("addComponentListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addComponentListener"))) );
					}
					
					break;
				}
				
				
				case -611347351:
				{
					if (field.equals("setResizable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setResizable"))) );
					}
					
					break;
				}
				
				
				case -2140931520:
				{
					if (field.equals("dispatchEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("dispatchEvent"))) );
					}
					
					break;
				}
				
				
				case 1404470607:
				{
					if (field.equals("setState")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setState"))) );
					}
					
					break;
				}
				
				
				case -1183789060:
				{
					if (field.equals("inside")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("inside"))) );
					}
					
					break;
				}
				
				
				case -1251547754:
				{
					if (field.equals("setExtendedState")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setExtendedState"))) );
					}
					
					break;
				}
				
				
				case -567445985:
				{
					if (field.equals("contains")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("contains"))) );
					}
					
					break;
				}
				
				
				case 1965583067:
				{
					if (field.equals("getState")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getState"))) );
					}
					
					break;
				}
				
				
				case 913594403:
				{
					if (field.equals("getIgnoreRepaint")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getIgnoreRepaint"))) );
					}
					
					break;
				}
				
				
				case 579895074:
				{
					if (field.equals("getExtendedState")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getExtendedState"))) );
					}
					
					break;
				}
				
				
				case -917848425:
				{
					if (field.equals("setIgnoreRepaint")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setIgnoreRepaint"))) );
					}
					
					break;
				}
				
				
				case 1154159403:
				{
					if (field.equals("setMaximizedBounds")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setMaximizedBounds"))) );
					}
					
					break;
				}
				
				
				case -538855117:
				{
					if (field.equals("checkImage")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("checkImage"))) );
					}
					
					break;
				}
				
				
				case 234125751:
				{
					if (field.equals("getMaximizedBounds")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMaximizedBounds"))) );
					}
					
					break;
				}
				
				
				case -2048673644:
				{
					if (field.equals("prepareImage")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("prepareImage"))) );
					}
					
					break;
				}
				
				
				case -1815527748:
				{
					if (field.equals("setUndecorated")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setUndecorated"))) );
					}
					
					break;
				}
				
				
				case -746920573:
				{
					if (field.equals("createVolatileImage")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createVolatileImage"))) );
					}
					
					break;
				}
				
				
				case -813555468:
				{
					if (field.equals("isUndecorated")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isUndecorated"))) );
					}
					
					break;
				}
				
				
				case -514107969:
				{
					if (field.equals("createImage")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createImage"))) );
					}
					
					break;
				}
				
				
				case 132278872:
				{
					if (field.equals("setCursor")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setCursor"))) );
					}
					
					break;
				}
				
				
				case -2066473468:
				{
					if (field.equals("imageUpdate")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("imageUpdate"))) );
					}
					
					break;
				}
				
				
				case -210160730:
				{
					if (field.equals("getCursorType")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getCursorType"))) );
					}
					
					break;
				}
				
				
				case -1166363724:
				{
					if (field.equals("printAll")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("printAll"))) );
					}
					
					break;
				}
				
				
				case -336661013:
				{
					if (field.equals("isOpaque")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isOpaque"))) );
					}
					
					break;
				}
				
				
				case 925942883:
				{
					if (field.equals("paintAll")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("paintAll"))) );
					}
					
					break;
				}
				
				
				case -1629942492:
				{
					if (field.equals("getBackground")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getBackground"))) );
					}
					
					break;
				}
				
				
				case 1873980194:
				{
					if (field.equals("isCursorSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isCursorSet"))) );
					}
					
					break;
				}
				
				
				case 98192823:
				{
					if (field.equals("setBounds")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setBounds"))) );
					}
					
					break;
				}
				
				
				case 346895948:
				{
					if (field.equals("getCursor")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getCursor"))) );
					}
					
					break;
				}
				
				
				case 1487521595:
				{
					if (field.equals("isShowing")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isShowing"))) );
					}
					
					break;
				}
				
				
				case 2087644222:
				{
					if (field.equals("getFontMetrics")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFontMetrics"))) );
					}
					
					break;
				}
				
				
				case 1979010522:
				{
					if (field.equals("postEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("postEvent"))) );
					}
					
					break;
				}
				
				
				case -218282935:
				{
					if (field.equals("revalidate")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("revalidate"))) );
					}
					
					break;
				}
				
				
				case 564387289:
				{
					if (field.equals("getFocusCycleRootAncestor")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFocusCycleRootAncestor"))) );
					}
					
					break;
				}
				
				
				case -2053764159:
				{
					if (field.equals("getBaselineResizeBehavior")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getBaselineResizeBehavior"))) );
					}
					
					break;
				}
				
				
				case -730558213:
				{
					if (field.equals("getInputContext")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getInputContext"))) );
					}
					
					break;
				}
				
				
				case 357114811:
				{
					if (field.equals("getBaseline")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getBaseline"))) );
					}
					
					break;
				}
				
				
				case 598552912:
				{
					if (field.equals("getLocale")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getLocale"))) );
					}
					
					break;
				}
				
				
				case -1057546709:
				{
					if (field.equals("isMaximumSizeSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isMaximumSizeSet"))) );
					}
					
					break;
				}
				
				
				case -103224824:
				{
					if (field.equals("getToolkit")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getToolkit"))) );
					}
					
					break;
				}
				
				
				case -726354817:
				{
					if (field.equals("setMaximumSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setMaximumSize"))) );
					}
					
					break;
				}
				
				
				case 3202370:
				{
					if (field.equals("hide")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("hide"))) );
					}
					
					break;
				}
				
				
				case -400630659:
				{
					if (field.equals("isMinimumSizeSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isMinimumSizeSet"))) );
					}
					
					break;
				}
				
				
				case 3529469:
				{
					if (field.equals("show")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("show"))) );
					}
					
					break;
				}
				
				
				case -1787544022:
				{
					if (field.equals("isPreferredSizeSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isPreferredSizeSet"))) );
					}
					
					break;
				}
				
				
				case -854558288:
				{
					if (field.equals("setVisible")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setVisible"))) );
					}
					
					break;
				}
				
				
				case 737172192:
				{
					if (field.equals("setPreferredSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setPreferredSize"))) );
					}
					
					break;
				}
				
				
				case 1097148750:
				{
					if (field.equals("reshape")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("reshape"))) );
					}
					
					break;
				}
				
				
				case 1387686788:
				{
					if (field.equals("isLightweight")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isLightweight"))) );
					}
					
					break;
				}
				
				
				case -404603337:
				{
					if (field.equals("setLocation")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setLocation"))) );
					}
					
					break;
				}
				
				
				case 474985501:
				{
					if (field.equals("getHeight")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getHeight"))) );
					}
					
					break;
				}
				
				
				case 1984958339:
				{
					if (field.equals("setSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setSize"))) );
					}
					
					break;
				}
				
				
				case 1968952336:
				{
					if (field.equals("getWidth")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getWidth"))) );
					}
					
					break;
				}
				
				
				case -1403787411:
				{
					if (field.equals("setMinimumSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setMinimumSize"))) );
					}
					
					break;
				}
				
				
				case 3169219:
				{
					if (field.equals("getY")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getY"))) );
					}
					
					break;
				}
				
				
				case 106428510:
				{
					if (field.equals("paint")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("paint"))) );
					}
					
					break;
				}
				
				
				case 3169218:
				{
					if (field.equals("getX")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getX"))) );
					}
					
					break;
				}
				
				
				case 319849826:
				{
					if (field.equals("isValidateRoot")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isValidateRoot"))) );
					}
					
					break;
				}
				
				
				case -1383205195:
				{
					if (field.equals("bounds")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("bounds"))) );
					}
					
					break;
				}
				
				
				case -1117363270:
				{
					if (field.equals("addPropertyChangeListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addPropertyChangeListener"))) );
					}
					
					break;
				}
				
				
				case 312809899:
				{
					if (field.equals("getBounds")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getBounds"))) );
					}
					
					break;
				}
				
				
				case -311299910:
				{
					if (field.equals("isFocusCycleRoot")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocusCycleRoot"))) );
					}
					
					break;
				}
				
				
				case -934437708:
				{
					if (field.equals("resize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("resize"))) );
					}
					
					break;
				}
				
				
				case -44786190:
				{
					if (field.equals("setFocusCycleRoot")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFocusCycleRoot"))) );
					}
					
					break;
				}
				
				
				case 3530753:
				{
					if (field.equals("size")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("size"))) );
					}
					
					break;
				}
				
				
				case 123688912:
				{
					if (field.equals("getFocusTraversalKeys")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFocusTraversalKeys"))) );
					}
					
					break;
				}
				
				
				case -75151241:
				{
					if (field.equals("getSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getSize"))) );
					}
					
					break;
				}
				
				
				case 1969426795:
				{
					if (field.equals("processEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processEvent"))) );
					}
					
					break;
				}
				
				
				case 3357649:
				{
					if (field.equals("move")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("move"))) );
					}
					
					break;
				}
				
				
				case -1228323959:
				{
					if (field.equals("getListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getListeners"))) );
					}
					
					break;
				}
				
				
				case 1901043637:
				{
					if (field.equals("location")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("location"))) );
					}
					
					break;
				}
				
				
				case -1088003001:
				{
					if (field.equals("getIconImages")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getIconImages"))) );
					}
					
					break;
				}
				
				
				case 204504438:
				{
					if (field.equals("getLocationOnScreen")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getLocationOnScreen"))) );
					}
					
					break;
				}
				
				
				case -313871789:
				{
					if (field.equals("setIconImages")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setIconImages"))) );
					}
					
					break;
				}
				
				
				case -316023509:
				{
					if (field.equals("getLocation")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getLocation"))) );
					}
					
					break;
				}
				
				
				case 3432985:
				{
					if (field.equals("pack")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("pack"))) );
					}
					
					break;
				}
				
				
				case 975157628:
				{
					if (field.equals("getColorModel")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getColorModel"))) );
					}
					
					break;
				}
				
				
				case 1671767583:
				{
					if (field.equals("dispose")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("dispose"))) );
					}
					
					break;
				}
				
				
				case 383935836:
				{
					if (field.equals("setLocale")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setLocale"))) );
					}
					
					break;
				}
				
				
				case -1177766802:
				{
					if (field.equals("toFront")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("toFront"))) );
					}
					
					break;
				}
				
				
				case -1260721911:
				{
					if (field.equals("isFontSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFontSet"))) );
					}
					
					break;
				}
				
				
				case -869412350:
				{
					if (field.equals("toBack")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("toBack"))) );
					}
					
					break;
				}
				
				
				case -75533115:
				{
					if (field.equals("getFont")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFont"))) );
					}
					
					break;
				}
				
				
				case 464294679:
				{
					if (field.equals("getWarningString")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getWarningString"))) );
					}
					
					break;
				}
				
				
				case 274796362:
				{
					if (field.equals("isBackgroundSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isBackgroundSet"))) );
					}
					
					break;
				}
				
				
				case 1961990397:
				{
					if (field.equals("getOwner")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getOwner"))) );
					}
					
					break;
				}
				
				
				case 902956821:
				{
					if (field.equals("isForegroundSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isForegroundSet"))) );
					}
					
					break;
				}
				
				
				case -1418426732:
				{
					if (field.equals("getOwnedWindows")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getOwnedWindows"))) );
					}
					
					break;
				}
				
				
				case -1834127547:
				{
					if (field.equals("setForeground")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setForeground"))) );
					}
					
					break;
				}
				
				
				case 880460925:
				{
					if (field.equals("setModalExclusionType")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setModalExclusionType"))) );
					}
					
					break;
				}
				
				
				case 1686708537:
				{
					if (field.equals("getForeground")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getForeground"))) );
					}
					
					break;
				}
				
				
				case -1655750031:
				{
					if (field.equals("getModalExclusionType")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getModalExclusionType"))) );
					}
					
					break;
				}
				
				
				case -174300757:
				{
					if (field.equals("enableInputMethods")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("enableInputMethods"))) );
					}
					
					break;
				}
				
				
				case 9710533:
				{
					if (field.equals("addWindowListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addWindowListener"))) );
					}
					
					break;
				}
				
				
				case 116955034:
				{
					if (field.equals("isDoubleBuffered")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isDoubleBuffered"))) );
					}
					
					break;
				}
				
				
				case 1586767860:
				{
					if (field.equals("addWindowStateListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addWindowStateListener"))) );
					}
					
					break;
				}
				
				
				case 1671308008:
				{
					if (field.equals("disable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("disable"))) );
					}
					
					break;
				}
				
				
				case 1430618427:
				{
					if (field.equals("addWindowFocusListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addWindowFocusListener"))) );
					}
					
					break;
				}
				
				
				case -1298848381:
				{
					if (field.equals("enable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("enable"))) );
					}
					
					break;
				}
				
				
				case -1671257496:
				{
					if (field.equals("removeWindowListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeWindowListener"))) );
					}
					
					break;
				}
				
				
				case 1364071551:
				{
					if (field.equals("setEnabled")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setEnabled"))) );
					}
					
					break;
				}
				
				
				case 1703239473:
				{
					if (field.equals("removeWindowStateListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeWindowStateListener"))) );
					}
					
					break;
				}
				
				
				case 2105594551:
				{
					if (field.equals("isEnabled")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isEnabled"))) );
					}
					
					break;
				}
				
				
				case 1547090040:
				{
					if (field.equals("removeWindowFocusListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeWindowFocusListener"))) );
					}
					
					break;
				}
				
				
				case -113035288:
				{
					if (field.equals("isVisible")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isVisible"))) );
					}
					
					break;
				}
				
				
				case 388257273:
				{
					if (field.equals("getWindowListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getWindowListeners"))) );
					}
					
					break;
				}
				
				
				case 304683410:
				{
					if (field.equals("isDisplayable")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isDisplayable"))) );
					}
					
					break;
				}
				
				
				case 1621709005:
				{
					if (field.equals("getWindowFocusListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getWindowFocusListeners"))) );
					}
					
					break;
				}
				
				
				case 2073378034:
				{
					if (field.equals("isValid")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isValid"))) );
					}
					
					break;
				}
				
				
				case -2127593164:
				{
					if (field.equals("getWindowStateListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getWindowStateListeners"))) );
					}
					
					break;
				}
				
				
				case -831132833:
				{
					if (field.equals("getTreeLock")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getTreeLock"))) );
					}
					
					break;
				}
				
				
				case -1796627135:
				{
					if (field.equals("processWindowFocusEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processWindowFocusEvent"))) );
					}
					
					break;
				}
				
				
				case 1406043765:
				{
					if (field.equals("getGraphicsConfiguration")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getGraphicsConfiguration"))) );
					}
					
					break;
				}
				
				
				case -982638296:
				{
					if (field.equals("processWindowStateEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processWindowStateEvent"))) );
					}
					
					break;
				}
				
				
				case 631903574:
				{
					if (field.equals("getDropTarget")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getDropTarget"))) );
					}
					
					break;
				}
				
				
				case -73620379:
				{
					if (field.equals("setAlwaysOnTop")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setAlwaysOnTop"))) );
					}
					
					break;
				}
				
				
				case 1406034786:
				{
					if (field.equals("setDropTarget")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setDropTarget"))) );
					}
					
					break;
				}
				
				
				case -254833007:
				{
					if (field.equals("isAlwaysOnTopSupported")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isAlwaysOnTopSupported"))) );
					}
					
					break;
				}
				
				
				case -75245096:
				{
					if (field.equals("getPeer")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getPeer"))) );
					}
					
					break;
				}
				
				
				case 928351901:
				{
					if (field.equals("isAlwaysOnTop")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isAlwaysOnTop"))) );
					}
					
					break;
				}
				
				
				case 700591008:
				{
					if (field.equals("getParent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getParent"))) );
					}
					
					break;
				}
				
				
				case -1353995087:
				{
					if (field.equals("getFocusOwner")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFocusOwner"))) );
					}
					
					break;
				}
				
				
				case 1984801293:
				{
					if (field.equals("setName")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setName"))) );
					}
					
					break;
				}
				
				
				case 2041116559:
				{
					if (field.equals("getMostRecentFocusOwner")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMostRecentFocusOwner"))) );
					}
					
					break;
				}
				
				
				case -75308287:
				{
					if (field.equals("getName")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getName"))) );
					}
					
					break;
				}
				
				
				case -748916528:
				{
					if (field.equals("isActive")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isActive"))) );
					}
					
					break;
				}
				
				
				case -606755785:
				{
					if (field.equals("transferFocusDownCycle")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("transferFocusDownCycle"))) );
					}
					
					break;
				}
				
				
				case -1270820115:
				{
					if (field.equals("isFocused")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocused"))) );
					}
					
					break;
				}
				
				
				case -1708753933:
				{
					if (field.equals("isFocusTraversalPolicyProvider")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocusTraversalPolicyProvider"))) );
					}
					
					break;
				}
				
				
				case 759171640:
				{
					if (field.equals("isFocusableWindow")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocusableWindow"))) );
					}
					
					break;
				}
				
				
				case 626370347:
				{
					if (field.equals("setFocusTraversalPolicyProvider")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFocusTraversalPolicyProvider"))) );
					}
					
					break;
				}
				
				
				case 1543774565:
				{
					if (field.equals("getFocusableWindowState")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFocusableWindowState"))) );
					}
					
					break;
				}
				
				
				case 602541344:
				{
					if (field.equals("isFocusTraversalPolicySet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isFocusTraversalPolicySet"))) );
					}
					
					break;
				}
				
				
				case -698920847:
				{
					if (field.equals("setFocusableWindowState")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFocusableWindowState"))) );
					}
					
					break;
				}
				
				
				case -1242052594:
				{
					if (field.equals("getFocusTraversalPolicy")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getFocusTraversalPolicy"))) );
					}
					
					break;
				}
				
				
				case -288894118:
				{
					if (field.equals("setAutoRequestFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setAutoRequestFocus"))) );
					}
					
					break;
				}
				
				
				case 810219290:
				{
					if (field.equals("setFocusTraversalPolicy")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFocusTraversalPolicy"))) );
					}
					
					break;
				}
				
				
				case 1289458722:
				{
					if (field.equals("isAutoRequestFocus")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isAutoRequestFocus"))) );
					}
					
					break;
				}
				
				
				case -1671141420:
				{
					if (field.equals("isAncestorOf")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isAncestorOf"))) );
					}
					
					break;
				}
				
				
				case 2128401726:
				{
					if (field.equals("applyResourceBundle")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("applyResourceBundle"))) );
					}
					
					break;
				}
				
				
				case 398126743:
				{
					if (field.equals("findComponentAt")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("findComponentAt"))) );
					}
					
					break;
				}
				
				
				case 1985003196:
				{
					if (field.equals("setType")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setType"))) );
					}
					
					break;
				}
				
				
				case 438337848:
				{
					if (field.equals("getMousePosition")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMousePosition"))) );
					}
					
					break;
				}
				
				
				case -75106384:
				{
					if (field.equals("getType")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getType"))) );
					}
					
					break;
				}
				
				
				case 1430084328:
				{
					if (field.equals("processContainerEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("processContainerEvent"))) );
					}
					
					break;
				}
				
				
				case -1098808322:
				{
					if (field.equals("setLocationRelativeTo")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setLocationRelativeTo"))) );
					}
					
					break;
				}
				
				
				case 576751796:
				{
					if (field.equals("getContainerListeners")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getContainerListeners"))) );
					}
					
					break;
				}
				
				
				case 1742626799:
				{
					if (field.equals("createBufferStrategy")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createBufferStrategy"))) );
					}
					
					break;
				}
				
				
				case 1611220017:
				{
					if (field.equals("removeContainerListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeContainerListener"))) );
					}
					
					break;
				}
				
				
				case -1591400247:
				{
					if (field.equals("getBufferStrategy")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getBufferStrategy"))) );
					}
					
					break;
				}
				
				
				case 11100596:
				{
					if (field.equals("addContainerListener")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("addContainerListener"))) );
					}
					
					break;
				}
				
				
				case -659647615:
				{
					if (field.equals("setLocationByPlatform")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setLocationByPlatform"))) );
					}
					
					break;
				}
				
				
				case -627286621:
				{
					if (field.equals("printComponents")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("printComponents"))) );
					}
					
					break;
				}
				
				
				case 13976137:
				{
					if (field.equals("isLocationByPlatform")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("isLocationByPlatform"))) );
					}
					
					break;
				}
				
				
				case -622724588:
				{
					if (field.equals("paintComponents")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("paintComponents"))) );
					}
					
					break;
				}
				
				
				case -230345771:
				{
					if (field.equals("getOpacity")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getOpacity"))) );
					}
					
					break;
				}
				
				
				case 1081247188:
				{
					if (field.equals("validateTree")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("validateTree"))) );
					}
					
					break;
				}
				
				
				case 1965225451:
				{
					if (field.equals("getShape")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getShape"))) );
					}
					
					break;
				}
				
				
				case 586292768:
				{
					if (field.equals("getLayout")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getLayout"))) );
					}
					
					break;
				}
				
				
				case -679533279:
				{
					if (field.equals("applyComponentOrientation")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("applyComponentOrientation"))) );
					}
					
					break;
				}
				
				
				case 1282345597:
				{
					if (field.equals("removeAll")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("removeAll"))) );
					}
					
					break;
				}
				
				
				case -355296716:
				{
					if (field.equals("areFocusTraversalKeysSet")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("areFocusTraversalKeysSet"))) );
					}
					
					break;
				}
				
				
				case -1109967845:
				{
					if (field.equals("getComponentZOrder")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getComponentZOrder"))) );
					}
					
					break;
				}
				
				
				case -1635067428:
				{
					if (field.equals("setFocusTraversalKeys")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFocusTraversalKeys"))) );
					}
					
					break;
				}
				
				
				case -189934193:
				{
					if (field.equals("setComponentZOrder")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setComponentZOrder"))) );
					}
					
					break;
				}
				
				
				case 3322014:
				{
					if (field.equals("list")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("list"))) );
					}
					
					break;
				}
				
				
				case 96417:
				{
					if (field.equals("add")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("add"))) );
					}
					
					break;
				}
				
				
				case -1626201894:
				{
					if (field.equals("getComponentAt")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getComponentAt"))) );
					}
					
					break;
				}
				
				
				case -1183792394:
				{
					if (field.equals("insets")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("insets"))) );
					}
					
					break;
				}
				
				
				case -1097461934:
				{
					if (field.equals("locate")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("locate"))) );
					}
					
					break;
				}
				
				
				case 512222700:
				{
					if (field.equals("getInsets")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getInsets"))) );
					}
					
					break;
				}
				
				
				case 634939509:
				{
					if (field.equals("deliverEvent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("deliverEvent"))) );
					}
					
					break;
				}
				
				
				case -745194740:
				{
					if (field.equals("getComponents")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getComponents"))) );
					}
					
					break;
				}
				
				
				case 106934957:
				{
					if (field.equals("print")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("print"))) );
					}
					
					break;
				}
				
				
				case -1409511865:
				{
					if (field.equals("getComponent")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getComponent"))) );
					}
					
					break;
				}
				
				
				case -1328196916:
				{
					if (field.equals("getAlignmentY")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getAlignmentY"))) );
					}
					
					break;
				}
				
				
				case -754783867:
				{
					if (field.equals("countComponents")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("countComponents"))) );
					}
					
					break;
				}
				
				
				case -1328196917:
				{
					if (field.equals("getAlignmentX")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getAlignmentX"))) );
					}
					
					break;
				}
				
				
				case 1052288776:
				{
					if (field.equals("getComponentCount")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getComponentCount"))) );
					}
					
					break;
				}
				
				
				case 1045381387:
				{
					if (field.equals("getMaximumSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMaximumSize"))) );
					}
					
					break;
				}
				
				
				case 185147285:
				{
					if (field.equals("doLayout")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("doLayout"))) );
					}
					
					break;
				}
				
				
				case 1008217391:
				{
					if (field.equals("minimumSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("minimumSize"))) );
					}
					
					break;
				}
				
				
				case -1109722326:
				{
					if (field.equals("layout")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("layout"))) );
					}
					
					break;
				}
				
				
				case 367948793:
				{
					if (field.equals("getMinimumSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getMinimumSize"))) );
					}
					
					break;
				}
				
				
				case -1831849669:
				{
					if (field.equals("invalidate")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("invalidate"))) );
					}
					
					break;
				}
				
				
				case -608552926:
				{
					if (field.equals("preferredSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("preferredSize"))) );
					}
					
					break;
				}
				
				
				case -1421272810:
				{
					if (field.equals("validate")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("validate"))) );
					}
					
					break;
				}
				
				
				case -1726352276:
				{
					if (field.equals("getPreferredSize")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getPreferredSize"))) );
					}
					
					break;
				}
				
				
				case 1984576465:
				{
					if (field.equals("setFont")) 
					{
						__temp_executeDef145 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setFont"))) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef145) 
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
			boolean __temp_executeDef146 = true;
			switch (field.hashCode())
			{
				case 104264063:
				{
					if (field.equals("mutex")) 
					{
						__temp_executeDef146 = false;
						return ((double) (haxe.lang.Runtime.toDouble(this.mutex)) );
					}
					
					break;
				}
				
				
				case 117714:
				{
					if (field.equals("wid")) 
					{
						__temp_executeDef146 = false;
						return ((double) (this.wid) );
					}
					
					break;
				}
				
				
				case 3059443:
				{
					if (field.equals("cols")) 
					{
						__temp_executeDef146 = false;
						return ((double) (this.cols) );
					}
					
					break;
				}
				
				
				case 3329:
				{
					if (field.equals("hi")) 
					{
						__temp_executeDef146 = false;
						return ((double) (this.hi) );
					}
					
					break;
				}
				
				
				case 3506649:
				{
					if (field.equals("rows")) 
					{
						__temp_executeDef146 = false;
						return ((double) (this.rows) );
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef146) 
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
			int __temp_hash148 = field.hashCode();
			boolean __temp_executeDef147 = true;
			switch (__temp_hash148)
			{
				case -132109047:case 1920162837:case -2036853317:case 1053245860:case -1645115555:case -1776922004:case 1115025797:case 117596766:case 122660510:case 1229986480:case 1193982373:case -2037192787:case -132373474:case 1280029577:case -1338154671:case -100025915:case -1126567952:case -1487536088:case -1426705793:case 619607060:case -2056434772:case -1422950858:case 101944666:case -815927391:case 585928547:case 983628083:case 586158614:case 1243066912:case 585892729:case 585890535:case 1469558098:case -2051715969:case 584549812:case 2117937310:case -1880947691:case 2065058606:case 786391236:case 2139532042:case -1262981007:case 1944745964:case 23978912:case -1240522207:case -2086501252:case 150256377:case -1549673046:case -910517253:case -1026988866:case 2003512819:case -25699282:case 1910206219:case 1929852986:case 33009515:case -83462098:case 2072701968:case -2119295403:case 2091349336:case -68050666:case 2108484879:case 705046738:case -292872821:case 1695089402:case 875541053:case -300913280:case -2019322395:case 675525480:case 1237998909:case -2007673976:case -2091996533:case -1150319688:case 862771373:case -737348048:case -2140931520:case -1183789060:case -567445985:case 913594403:case -917848425:case -538855117:case -2048673644:case -746920573:case -514107969:case -2066473468:case -1166363724:case 925942883:case 1873980194:case 346895948:case 2087644222:case -218282935:case -2053764159:case 357114811:case -1057546709:case -726354817:case -400630659:case -1787544022:case 737172192:case 1387686788:case 474985501:case 1968952336:case 3169219:case 3169218:case -1383205195:case 312809899:case -934437708:case 3530753:case -75151241:case 3357649:case 1901043637:case 204504438:case -316023509:case 975157628:case 383935836:case -1260721911:case -75533115:case 274796362:case 902956821:case -1834127547:case 1686708537:case -174300757:case 116955034:case 1671308008:case -1298848381:case 1364071551:case 2105594551:case -113035288:case 304683410:case 2073378034:case -831132833:case 1406043765:case 631903574:case 1406034786:case -75245096:case 700591008:case 1984801293:case -75308287:case -606755785:case -1708753933:case 626370347:case 602541344:case -1242052594:case 810219290:case -1671141420:case 398126743:case 438337848:case 1430084328:case 576751796:case 1611220017:case 11100596:case -627286621:case -622724588:case 1081247188:case 586292768:case 1282345597:case -1109967845:case -189934193:case 96417:case -1183792394:case 512222700:case -745194740:case -1409511865:case -754783867:case 1052288776:case 185147285:case -1109722326:case -1831849669:case -1421272810:case 1984576465:case -1726352276:case -608552926:case 367948793:case 1008217391:case 1045381387:case -1328196917:case -1328196916:case 106934957:case 634939509:case -1097461934:case -1626201894:case 3322014:case -1635067428:case -355296716:case -679533279:case 1965225451:case -230345771:case 13976137:case -659647615:case -1591400247:case 1742626799:case -1098808322:case -75106384:case 1985003196:case 2128401726:case 1289458722:case -288894118:case -698920847:case 1543774565:case 759171640:case -1270820115:case -748916528:case 2041116559:case -1353995087:case 928351901:case -254833007:case -73620379:case -982638296:case -1796627135:case -2127593164:case 1621709005:case 388257273:case 1547090040:case 1703239473:case -1671257496:case 1430618427:case 1586767860:case 9710533:case -1655750031:case 880460925:case -1418426732:case 1961990397:case 464294679:case -869412350:case -1177766802:case 1671767583:case 3432985:case -313871789:case -1088003001:case -1228323959:case 1969426795:case 123688912:case -44786190:case -311299910:case -1117363270:case 319849826:case 106428510:case -1403787411:case 1984958339:case -404603337:case 1097148750:case -854558288:case 3529469:case 3202370:case -103224824:case 598552912:case -730558213:case 564387289:case 1979010522:case 1487521595:case 98192823:case -1629942492:case -336661013:case -210160730:case 132278872:case -813555468:case -1815527748:case 234125751:case 1154159403:case 579895074:case 1965583067:case -1251547754:case 1404470607:case -611347351:case -972315487:case -370964622:case 1987197438:case -1420570196:case 1405084438:case 1966196898:case -146849974:case 1706459465:case 1404112991:case -855811280:case -1001125651:case -1405291838:case 1340682830:case 557910902:case -1965320190:case 1493688767:case -1029542325:case 1822340588:case 1910920416:case 1675849851:case -1543323981:case 452224992:case 363645164:case 1683315369:case -1691618275:case -1230815942:case -2034896978:case 755589254:case 544801821:case 128422432:case 820971262:case 1334722659:case 64494235:case -838846263:case -1148905887:case -934610812:case 371675692:case -2116360191:case 1094177291:
				{
					if (( (( ( __temp_hash148 == -132109047 ) && field.equals("getComponentOrientation") )) || ( (( ( __temp_hash148 == 1920162837 ) && field.equals("setComponentOrientation") )) || ( (( ( __temp_hash148 == -2036853317 ) && field.equals("firePropertyChange") )) || ( (( ( __temp_hash148 == 1053245860 ) && field.equals("getPropertyChangeListeners") )) || ( (( ( __temp_hash148 == -1645115555 ) && field.equals("removePropertyChangeListener") )) || ( (( ( __temp_hash148 == -1776922004 ) && field.equals("toString") )) || ( (( ( __temp_hash148 == 1115025797 ) && field.equals("isFocusOwner") )) || ( (( ( __temp_hash148 == 117596766 ) && field.equals("hasFocus") )) || ( (( ( __temp_hash148 == 122660510 ) && field.equals("transferFocusUpCycle") )) || ( (( ( __temp_hash148 == 1229986480 ) && field.equals("transferFocusBackward") )) || ( (( ( __temp_hash148 == 1193982373 ) && field.equals("nextFocus") )) || ( (( ( __temp_hash148 == -2037192787 ) && field.equals("transferFocus") )) || ( (( ( __temp_hash148 == -132373474 ) && field.equals("requestFocusInWindow") )) || ( (( ( __temp_hash148 == 1280029577 ) && field.equals("requestFocus") )) || ( (( ( __temp_hash148 == -1338154671 ) && field.equals("getFocusTraversalKeysEnabled") )) || ( (( ( __temp_hash148 == -100025915 ) && field.equals("setFocusTraversalKeysEnabled") )) || ( (( ( __temp_hash148 == -1126567952 ) && field.equals("setFocusable") )) || ( (( ( __temp_hash148 == -1487536088 ) && field.equals("isFocusable") )) || ( (( ( __temp_hash148 == -1426705793 ) && field.equals("isFocusTraversable") )) || ( (( ( __temp_hash148 == 619607060 ) && field.equals("lostFocus") )) || ( (( ( __temp_hash148 == -2056434772 ) && field.equals("gotFocus") )) || ( (( ( __temp_hash148 == -1422950858 ) && field.equals("action") )) || ( (( ( __temp_hash148 == 101944666 ) && field.equals("keyUp") )) || ( (( ( __temp_hash148 == -815927391 ) && field.equals("keyDown") )) || ( (( ( __temp_hash148 == 585928547 ) && field.equals("mouseExit") )) || ( (( ( __temp_hash148 == 983628083 ) && field.equals("mouseEnter") )) || ( (( ( __temp_hash148 == 586158614 ) && field.equals("mouseMove") )) || ( (( ( __temp_hash148 == 1243066912 ) && field.equals("mouseUp") )) || ( (( ( __temp_hash148 == 585892729 ) && field.equals("mouseDrag") )) || ( (( ( __temp_hash148 == 585890535 ) && field.equals("mouseDown") )) || ( (( ( __temp_hash148 == 1469558098 ) && field.equals("handleEvent") )) || ( (( ( __temp_hash148 == -2051715969 ) && field.equals("processHierarchyBoundsEvent") )) || ( (( ( __temp_hash148 == 584549812 ) && field.equals("processHierarchyEvent") )) || ( (( ( __temp_hash148 == 2117937310 ) && field.equals("processInputMethodEvent") )) || ( (( ( __temp_hash148 == -1880947691 ) && field.equals("processMouseWheelEvent") )) || ( (( ( __temp_hash148 == 2065058606 ) && field.equals("processMouseMotionEvent") )) || ( (( ( __temp_hash148 == 786391236 ) && field.equals("processMouseEvent") )) || ( (( ( __temp_hash148 == 2139532042 ) && field.equals("processKeyEvent") )) || ( (( ( __temp_hash148 == -1262981007 ) && field.equals("processFocusEvent") )) || ( (( ( __temp_hash148 == 1944745964 ) && field.equals("processComponentEvent") )) || ( (( ( __temp_hash148 == 23978912 ) && field.equals("coalesceEvents") )) || ( (( ( __temp_hash148 == -1240522207 ) && field.equals("disableEvents") )) || ( (( ( __temp_hash148 == -2086501252 ) && field.equals("enableEvents") )) || ( (( ( __temp_hash148 == 150256377 ) && field.equals("getInputMethodRequests") )) || ( (( ( __temp_hash148 == -1549673046 ) && field.equals("getInputMethodListeners") )) || ( (( ( __temp_hash148 == -910517253 ) && field.equals("removeInputMethodListener") )) || ( (( ( __temp_hash148 == -1026988866 ) && field.equals("addInputMethodListener") )) || ( (( ( __temp_hash148 == 2003512819 ) && field.equals("getMouseWheelListeners") )) || ( (( ( __temp_hash148 == -25699282 ) && field.equals("removeMouseWheelListener") )) || ( (( ( __temp_hash148 == 1910206219 ) && field.equals("addMouseWheelListener") )) || ( (( ( __temp_hash148 == 1929852986 ) && field.equals("getMouseMotionListeners") )) || ( (( ( __temp_hash148 == 33009515 ) && field.equals("removeMouseMotionListener") )) || ( (( ( __temp_hash148 == -83462098 ) && field.equals("addMouseMotionListener") )) || ( (( ( __temp_hash148 == 2072701968 ) && field.equals("getMouseListeners") )) || ( (( ( __temp_hash148 == -2119295403 ) && field.equals("removeMouseListener") )) || ( (( ( __temp_hash148 == 2091349336 ) && field.equals("addMouseListener") )) || ( (( ( __temp_hash148 == -68050666 ) && field.equals("getKeyListeners") )) || ( (( ( __temp_hash148 == 2108484879 ) && field.equals("removeKeyListener") )) || ( (( ( __temp_hash148 == 705046738 ) && field.equals("addKeyListener") )) || ( (( ( __temp_hash148 == -292872821 ) && field.equals("getHierarchyBoundsListeners") )) || ( (( ( __temp_hash148 == 1695089402 ) && field.equals("removeHierarchyBoundsListener") )) || ( (( ( __temp_hash148 == 875541053 ) && field.equals("addHierarchyBoundsListener") )) || ( (( ( __temp_hash148 == -300913280 ) && field.equals("getHierarchyListeners") )) || ( (( ( __temp_hash148 == -2019322395 ) && field.equals("removeHierarchyListener") )) || ( (( ( __temp_hash148 == 675525480 ) && field.equals("addHierarchyListener") )) || ( (( ( __temp_hash148 == 1237998909 ) && field.equals("getFocusListeners") )) || ( (( ( __temp_hash148 == -2007673976 ) && field.equals("removeFocusListener") )) || ( (( ( __temp_hash148 == -2091996533 ) && field.equals("addFocusListener") )) || ( (( ( __temp_hash148 == -1150319688 ) && field.equals("getComponentListeners") )) || ( (( ( __temp_hash148 == 862771373 ) && field.equals("removeComponentListener") )) || ( (( ( __temp_hash148 == -737348048 ) && field.equals("addComponentListener") )) || ( (( ( __temp_hash148 == -2140931520 ) && field.equals("dispatchEvent") )) || ( (( ( __temp_hash148 == -1183789060 ) && field.equals("inside") )) || ( (( ( __temp_hash148 == -567445985 ) && field.equals("contains") )) || ( (( ( __temp_hash148 == 913594403 ) && field.equals("getIgnoreRepaint") )) || ( (( ( __temp_hash148 == -917848425 ) && field.equals("setIgnoreRepaint") )) || ( (( ( __temp_hash148 == -538855117 ) && field.equals("checkImage") )) || ( (( ( __temp_hash148 == -2048673644 ) && field.equals("prepareImage") )) || ( (( ( __temp_hash148 == -746920573 ) && field.equals("createVolatileImage") )) || ( (( ( __temp_hash148 == -514107969 ) && field.equals("createImage") )) || ( (( ( __temp_hash148 == -2066473468 ) && field.equals("imageUpdate") )) || ( (( ( __temp_hash148 == -1166363724 ) && field.equals("printAll") )) || ( (( ( __temp_hash148 == 925942883 ) && field.equals("paintAll") )) || ( (( ( __temp_hash148 == 1873980194 ) && field.equals("isCursorSet") )) || ( (( ( __temp_hash148 == 346895948 ) && field.equals("getCursor") )) || ( (( ( __temp_hash148 == 2087644222 ) && field.equals("getFontMetrics") )) || ( (( ( __temp_hash148 == -218282935 ) && field.equals("revalidate") )) || ( (( ( __temp_hash148 == -2053764159 ) && field.equals("getBaselineResizeBehavior") )) || ( (( ( __temp_hash148 == 357114811 ) && field.equals("getBaseline") )) || ( (( ( __temp_hash148 == -1057546709 ) && field.equals("isMaximumSizeSet") )) || ( (( ( __temp_hash148 == -726354817 ) && field.equals("setMaximumSize") )) || ( (( ( __temp_hash148 == -400630659 ) && field.equals("isMinimumSizeSet") )) || ( (( ( __temp_hash148 == -1787544022 ) && field.equals("isPreferredSizeSet") )) || ( (( ( __temp_hash148 == 737172192 ) && field.equals("setPreferredSize") )) || ( (( ( __temp_hash148 == 1387686788 ) && field.equals("isLightweight") )) || ( (( ( __temp_hash148 == 474985501 ) && field.equals("getHeight") )) || ( (( ( __temp_hash148 == 1968952336 ) && field.equals("getWidth") )) || ( (( ( __temp_hash148 == 3169219 ) && field.equals("getY") )) || ( (( ( __temp_hash148 == 3169218 ) && field.equals("getX") )) || ( (( ( __temp_hash148 == -1383205195 ) && field.equals("bounds") )) || ( (( ( __temp_hash148 == 312809899 ) && field.equals("getBounds") )) || ( (( ( __temp_hash148 == -934437708 ) && field.equals("resize") )) || ( (( ( __temp_hash148 == 3530753 ) && field.equals("size") )) || ( (( ( __temp_hash148 == -75151241 ) && field.equals("getSize") )) || ( (( ( __temp_hash148 == 3357649 ) && field.equals("move") )) || ( (( ( __temp_hash148 == 1901043637 ) && field.equals("location") )) || ( (( ( __temp_hash148 == 204504438 ) && field.equals("getLocationOnScreen") )) || ( (( ( __temp_hash148 == -316023509 ) && field.equals("getLocation") )) || ( (( ( __temp_hash148 == 975157628 ) && field.equals("getColorModel") )) || ( (( ( __temp_hash148 == 383935836 ) && field.equals("setLocale") )) || ( (( ( __temp_hash148 == -1260721911 ) && field.equals("isFontSet") )) || ( (( ( __temp_hash148 == -75533115 ) && field.equals("getFont") )) || ( (( ( __temp_hash148 == 274796362 ) && field.equals("isBackgroundSet") )) || ( (( ( __temp_hash148 == 902956821 ) && field.equals("isForegroundSet") )) || ( (( ( __temp_hash148 == -1834127547 ) && field.equals("setForeground") )) || ( (( ( __temp_hash148 == 1686708537 ) && field.equals("getForeground") )) || ( (( ( __temp_hash148 == -174300757 ) && field.equals("enableInputMethods") )) || ( (( ( __temp_hash148 == 116955034 ) && field.equals("isDoubleBuffered") )) || ( (( ( __temp_hash148 == 1671308008 ) && field.equals("disable") )) || ( (( ( __temp_hash148 == -1298848381 ) && field.equals("enable") )) || ( (( ( __temp_hash148 == 1364071551 ) && field.equals("setEnabled") )) || ( (( ( __temp_hash148 == 2105594551 ) && field.equals("isEnabled") )) || ( (( ( __temp_hash148 == -113035288 ) && field.equals("isVisible") )) || ( (( ( __temp_hash148 == 304683410 ) && field.equals("isDisplayable") )) || ( (( ( __temp_hash148 == 2073378034 ) && field.equals("isValid") )) || ( (( ( __temp_hash148 == -831132833 ) && field.equals("getTreeLock") )) || ( (( ( __temp_hash148 == 1406043765 ) && field.equals("getGraphicsConfiguration") )) || ( (( ( __temp_hash148 == 631903574 ) && field.equals("getDropTarget") )) || ( (( ( __temp_hash148 == 1406034786 ) && field.equals("setDropTarget") )) || ( (( ( __temp_hash148 == -75245096 ) && field.equals("getPeer") )) || ( (( ( __temp_hash148 == 700591008 ) && field.equals("getParent") )) || ( (( ( __temp_hash148 == 1984801293 ) && field.equals("setName") )) || ( (( ( __temp_hash148 == -75308287 ) && field.equals("getName") )) || ( (( ( __temp_hash148 == -606755785 ) && field.equals("transferFocusDownCycle") )) || ( (( ( __temp_hash148 == -1708753933 ) && field.equals("isFocusTraversalPolicyProvider") )) || ( (( ( __temp_hash148 == 626370347 ) && field.equals("setFocusTraversalPolicyProvider") )) || ( (( ( __temp_hash148 == 602541344 ) && field.equals("isFocusTraversalPolicySet") )) || ( (( ( __temp_hash148 == -1242052594 ) && field.equals("getFocusTraversalPolicy") )) || ( (( ( __temp_hash148 == 810219290 ) && field.equals("setFocusTraversalPolicy") )) || ( (( ( __temp_hash148 == -1671141420 ) && field.equals("isAncestorOf") )) || ( (( ( __temp_hash148 == 398126743 ) && field.equals("findComponentAt") )) || ( (( ( __temp_hash148 == 438337848 ) && field.equals("getMousePosition") )) || ( (( ( __temp_hash148 == 1430084328 ) && field.equals("processContainerEvent") )) || ( (( ( __temp_hash148 == 576751796 ) && field.equals("getContainerListeners") )) || ( (( ( __temp_hash148 == 1611220017 ) && field.equals("removeContainerListener") )) || ( (( ( __temp_hash148 == 11100596 ) && field.equals("addContainerListener") )) || ( (( ( __temp_hash148 == -627286621 ) && field.equals("printComponents") )) || ( (( ( __temp_hash148 == -622724588 ) && field.equals("paintComponents") )) || ( (( ( __temp_hash148 == 1081247188 ) && field.equals("validateTree") )) || ( (( ( __temp_hash148 == 586292768 ) && field.equals("getLayout") )) || ( (( ( __temp_hash148 == 1282345597 ) && field.equals("removeAll") )) || ( (( ( __temp_hash148 == -1109967845 ) && field.equals("getComponentZOrder") )) || ( (( ( __temp_hash148 == -189934193 ) && field.equals("setComponentZOrder") )) || ( (( ( __temp_hash148 == 96417 ) && field.equals("add") )) || ( (( ( __temp_hash148 == -1183792394 ) && field.equals("insets") )) || ( (( ( __temp_hash148 == 512222700 ) && field.equals("getInsets") )) || ( (( ( __temp_hash148 == -745194740 ) && field.equals("getComponents") )) || ( (( ( __temp_hash148 == -1409511865 ) && field.equals("getComponent") )) || ( (( ( __temp_hash148 == -754783867 ) && field.equals("countComponents") )) || ( (( ( __temp_hash148 == 1052288776 ) && field.equals("getComponentCount") )) || ( (( ( __temp_hash148 == 185147285 ) && field.equals("doLayout") )) || ( (( ( __temp_hash148 == -1109722326 ) && field.equals("layout") )) || ( (( ( __temp_hash148 == -1831849669 ) && field.equals("invalidate") )) || ( (( ( __temp_hash148 == -1421272810 ) && field.equals("validate") )) || ( (( ( __temp_hash148 == 1984576465 ) && field.equals("setFont") )) || ( (( ( __temp_hash148 == -1726352276 ) && field.equals("getPreferredSize") )) || ( (( ( __temp_hash148 == -608552926 ) && field.equals("preferredSize") )) || ( (( ( __temp_hash148 == 367948793 ) && field.equals("getMinimumSize") )) || ( (( ( __temp_hash148 == 1008217391 ) && field.equals("minimumSize") )) || ( (( ( __temp_hash148 == 1045381387 ) && field.equals("getMaximumSize") )) || ( (( ( __temp_hash148 == -1328196917 ) && field.equals("getAlignmentX") )) || ( (( ( __temp_hash148 == -1328196916 ) && field.equals("getAlignmentY") )) || ( (( ( __temp_hash148 == 106934957 ) && field.equals("print") )) || ( (( ( __temp_hash148 == 634939509 ) && field.equals("deliverEvent") )) || ( (( ( __temp_hash148 == -1097461934 ) && field.equals("locate") )) || ( (( ( __temp_hash148 == -1626201894 ) && field.equals("getComponentAt") )) || ( (( ( __temp_hash148 == 3322014 ) && field.equals("list") )) || ( (( ( __temp_hash148 == -1635067428 ) && field.equals("setFocusTraversalKeys") )) || ( (( ( __temp_hash148 == -355296716 ) && field.equals("areFocusTraversalKeysSet") )) || ( (( ( __temp_hash148 == -679533279 ) && field.equals("applyComponentOrientation") )) || ( (( ( __temp_hash148 == 1965225451 ) && field.equals("getShape") )) || ( (( ( __temp_hash148 == -230345771 ) && field.equals("getOpacity") )) || ( (( ( __temp_hash148 == 13976137 ) && field.equals("isLocationByPlatform") )) || ( (( ( __temp_hash148 == -659647615 ) && field.equals("setLocationByPlatform") )) || ( (( ( __temp_hash148 == -1591400247 ) && field.equals("getBufferStrategy") )) || ( (( ( __temp_hash148 == 1742626799 ) && field.equals("createBufferStrategy") )) || ( (( ( __temp_hash148 == -1098808322 ) && field.equals("setLocationRelativeTo") )) || ( (( ( __temp_hash148 == -75106384 ) && field.equals("getType") )) || ( (( ( __temp_hash148 == 1985003196 ) && field.equals("setType") )) || ( (( ( __temp_hash148 == 2128401726 ) && field.equals("applyResourceBundle") )) || ( (( ( __temp_hash148 == 1289458722 ) && field.equals("isAutoRequestFocus") )) || ( (( ( __temp_hash148 == -288894118 ) && field.equals("setAutoRequestFocus") )) || ( (( ( __temp_hash148 == -698920847 ) && field.equals("setFocusableWindowState") )) || ( (( ( __temp_hash148 == 1543774565 ) && field.equals("getFocusableWindowState") )) || ( (( ( __temp_hash148 == 759171640 ) && field.equals("isFocusableWindow") )) || ( (( ( __temp_hash148 == -1270820115 ) && field.equals("isFocused") )) || ( (( ( __temp_hash148 == -748916528 ) && field.equals("isActive") )) || ( (( ( __temp_hash148 == 2041116559 ) && field.equals("getMostRecentFocusOwner") )) || ( (( ( __temp_hash148 == -1353995087 ) && field.equals("getFocusOwner") )) || ( (( ( __temp_hash148 == 928351901 ) && field.equals("isAlwaysOnTop") )) || ( (( ( __temp_hash148 == -254833007 ) && field.equals("isAlwaysOnTopSupported") )) || ( (( ( __temp_hash148 == -73620379 ) && field.equals("setAlwaysOnTop") )) || ( (( ( __temp_hash148 == -982638296 ) && field.equals("processWindowStateEvent") )) || ( (( ( __temp_hash148 == -1796627135 ) && field.equals("processWindowFocusEvent") )) || ( (( ( __temp_hash148 == -2127593164 ) && field.equals("getWindowStateListeners") )) || ( (( ( __temp_hash148 == 1621709005 ) && field.equals("getWindowFocusListeners") )) || ( (( ( __temp_hash148 == 388257273 ) && field.equals("getWindowListeners") )) || ( (( ( __temp_hash148 == 1547090040 ) && field.equals("removeWindowFocusListener") )) || ( (( ( __temp_hash148 == 1703239473 ) && field.equals("removeWindowStateListener") )) || ( (( ( __temp_hash148 == -1671257496 ) && field.equals("removeWindowListener") )) || ( (( ( __temp_hash148 == 1430618427 ) && field.equals("addWindowFocusListener") )) || ( (( ( __temp_hash148 == 1586767860 ) && field.equals("addWindowStateListener") )) || ( (( ( __temp_hash148 == 9710533 ) && field.equals("addWindowListener") )) || ( (( ( __temp_hash148 == -1655750031 ) && field.equals("getModalExclusionType") )) || ( (( ( __temp_hash148 == 880460925 ) && field.equals("setModalExclusionType") )) || ( (( ( __temp_hash148 == -1418426732 ) && field.equals("getOwnedWindows") )) || ( (( ( __temp_hash148 == 1961990397 ) && field.equals("getOwner") )) || ( (( ( __temp_hash148 == 464294679 ) && field.equals("getWarningString") )) || ( (( ( __temp_hash148 == -869412350 ) && field.equals("toBack") )) || ( (( ( __temp_hash148 == -1177766802 ) && field.equals("toFront") )) || ( (( ( __temp_hash148 == 1671767583 ) && field.equals("dispose") )) || ( (( ( __temp_hash148 == 3432985 ) && field.equals("pack") )) || ( (( ( __temp_hash148 == -313871789 ) && field.equals("setIconImages") )) || ( (( ( __temp_hash148 == -1088003001 ) && field.equals("getIconImages") )) || ( (( ( __temp_hash148 == -1228323959 ) && field.equals("getListeners") )) || ( (( ( __temp_hash148 == 1969426795 ) && field.equals("processEvent") )) || ( (( ( __temp_hash148 == 123688912 ) && field.equals("getFocusTraversalKeys") )) || ( (( ( __temp_hash148 == -44786190 ) && field.equals("setFocusCycleRoot") )) || ( (( ( __temp_hash148 == -311299910 ) && field.equals("isFocusCycleRoot") )) || ( (( ( __temp_hash148 == -1117363270 ) && field.equals("addPropertyChangeListener") )) || ( (( ( __temp_hash148 == 319849826 ) && field.equals("isValidateRoot") )) || ( (( ( __temp_hash148 == 106428510 ) && field.equals("paint") )) || ( (( ( __temp_hash148 == -1403787411 ) && field.equals("setMinimumSize") )) || ( (( ( __temp_hash148 == 1984958339 ) && field.equals("setSize") )) || ( (( ( __temp_hash148 == -404603337 ) && field.equals("setLocation") )) || ( (( ( __temp_hash148 == 1097148750 ) && field.equals("reshape") )) || ( (( ( __temp_hash148 == -854558288 ) && field.equals("setVisible") )) || ( (( ( __temp_hash148 == 3529469 ) && field.equals("show") )) || ( (( ( __temp_hash148 == 3202370 ) && field.equals("hide") )) || ( (( ( __temp_hash148 == -103224824 ) && field.equals("getToolkit") )) || ( (( ( __temp_hash148 == 598552912 ) && field.equals("getLocale") )) || ( (( ( __temp_hash148 == -730558213 ) && field.equals("getInputContext") )) || ( (( ( __temp_hash148 == 564387289 ) && field.equals("getFocusCycleRootAncestor") )) || ( (( ( __temp_hash148 == 1979010522 ) && field.equals("postEvent") )) || ( (( ( __temp_hash148 == 1487521595 ) && field.equals("isShowing") )) || ( (( ( __temp_hash148 == 98192823 ) && field.equals("setBounds") )) || ( (( ( __temp_hash148 == -1629942492 ) && field.equals("getBackground") )) || ( (( ( __temp_hash148 == -336661013 ) && field.equals("isOpaque") )) || ( (( ( __temp_hash148 == -210160730 ) && field.equals("getCursorType") )) || ( (( ( __temp_hash148 == 132278872 ) && field.equals("setCursor") )) || ( (( ( __temp_hash148 == -813555468 ) && field.equals("isUndecorated") )) || ( (( ( __temp_hash148 == -1815527748 ) && field.equals("setUndecorated") )) || ( (( ( __temp_hash148 == 234125751 ) && field.equals("getMaximizedBounds") )) || ( (( ( __temp_hash148 == 1154159403 ) && field.equals("setMaximizedBounds") )) || ( (( ( __temp_hash148 == 579895074 ) && field.equals("getExtendedState") )) || ( (( ( __temp_hash148 == 1965583067 ) && field.equals("getState") )) || ( (( ( __temp_hash148 == -1251547754 ) && field.equals("setExtendedState") )) || ( (( ( __temp_hash148 == 1404470607 ) && field.equals("setState") )) || ( (( ( __temp_hash148 == -611347351 ) && field.equals("setResizable") )) || ( (( ( __temp_hash148 == -972315487 ) && field.equals("isResizable") )) || ( (( ( __temp_hash148 == -370964622 ) && field.equals("setMenuBar") )) || ( (( ( __temp_hash148 == 1987197438 ) && field.equals("getMenuBar") )) || ( (( ( __temp_hash148 == -1420570196 ) && field.equals("getIconImage") )) || ( (( ( __temp_hash148 == 1405084438 ) && field.equals("setTitle") )) || ( (( ( __temp_hash148 == 1966196898 ) && field.equals("getTitle") )) || ( (( ( __temp_hash148 == -146849974 ) && field.equals("addNotify") )) || ( (( ( __temp_hash148 == 1706459465 ) && field.equals("setOpacity") )) || ( (( ( __temp_hash148 == 1404112991 ) && field.equals("setShape") )) || ( (( ( __temp_hash148 == -855811280 ) && field.equals("setBackground") )) || ( (( ( __temp_hash148 == -1001125651 ) && field.equals("removeNotify") )) || ( (( ( __temp_hash148 == -1405291838 ) && field.equals("setGlassPane") )) || ( (( ( __temp_hash148 == 1340682830 ) && field.equals("getGlassPane") )) || ( (( ( __temp_hash148 == 557910902 ) && field.equals("setLayeredPane") )) || ( (( ( __temp_hash148 == -1965320190 ) && field.equals("getLayeredPane") )) || ( (( ( __temp_hash148 == 1493688767 ) && field.equals("setContentPane") )) || ( (( ( __temp_hash148 == -1029542325 ) && field.equals("getContentPane") )) || ( (( ( __temp_hash148 == 1822340588 ) && field.equals("setRootPane") )) || ( (( ( __temp_hash148 == 1910920416 ) && field.equals("getRootPane") )) || ( (( ( __temp_hash148 == 1675849851 ) && field.equals("setRootPaneCheckingEnabled") )) || ( (( ( __temp_hash148 == -1543323981 ) && field.equals("isRootPaneCheckingEnabled") )) || ( (( ( __temp_hash148 == 452224992 ) && field.equals("getJMenuBar") )) || ( (( ( __temp_hash148 == 363645164 ) && field.equals("setJMenuBar") )) || ( (( ( __temp_hash148 == 1683315369 ) && field.equals("getTransferHandler") )) || ( (( ( __temp_hash148 == -1691618275 ) && field.equals("setTransferHandler") )) || ( (( ( __temp_hash148 == -1230815942 ) && field.equals("getDefaultCloseOperation") )) || ( (( ( __temp_hash148 == -2034896978 ) && field.equals("setDefaultCloseOperation") )) || ( (( ( __temp_hash148 == 755589254 ) && field.equals("createRootPane") )) || ( (( ( __temp_hash148 == 544801821 ) && field.equals("frameInit") )) || ( (( ( __temp_hash148 == 128422432 ) && field.equals("setIconImage") )) || ( (( ( __temp_hash148 == 820971262 ) && field.equals("paramString") )) || ( (( ( __temp_hash148 == 1334722659 ) && field.equals("getAccessibleContext") )) || ( (( ( __temp_hash148 == 64494235 ) && field.equals("processWindowEvent") )) || ( (( ( __temp_hash148 == -838846263 ) && field.equals("update") )) || ( (( ( __temp_hash148 == -1148905887 ) && field.equals("addImpl") )) || ( (( ( __temp_hash148 == -934610812 ) && field.equals("remove") )) || ( (( ( __temp_hash148 == 371675692 ) && field.equals("setLayout") )) || ( (( ( __temp_hash148 == -2116360191 ) && field.equals("getGraphics") )) || field.equals("repaint") ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) )) 
					{
						__temp_executeDef147 = false;
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					break;
				}
				
				
				case 109329021:
				{
					if (field.equals("setup")) 
					{
						__temp_executeDef147 = false;
						this.setup();
					}
					
					break;
				}
				
				
				case 1712754559:
				{
					if (field.equals("createGraphicsTextures")) 
					{
						__temp_executeDef147 = false;
						return this.createGraphicsTextures();
					}
					
					break;
				}
				
				
				case 393285649:
				{
					if (field.equals("createSurface")) 
					{
						__temp_executeDef147 = false;
						this.createSurface();
					}
					
					break;
				}
				
				
				case 105172251:
				{
					if (field.equals("nudge")) 
					{
						__temp_executeDef147 = false;
						this.nudge(((java.awt.event.KeyEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 1647473597:
				{
					if (field.equals("mousePressed")) 
					{
						__temp_executeDef147 = false;
						this.mousePressed(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 56659139:
				{
					if (field.equals("keyPressed")) 
					{
						__temp_executeDef147 = false;
						this.keyPressed(((java.awt.event.KeyEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case -416699091:
				{
					if (field.equals("mouseDragged")) 
					{
						__temp_executeDef147 = false;
						this.mouseDragged(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case -1813574468:
				{
					if (field.equals("keyReleased")) 
					{
						__temp_executeDef147 = false;
						this.keyReleased(((java.awt.event.KeyEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 436621122:
				{
					if (field.equals("mouseExited")) 
					{
						__temp_executeDef147 = false;
						this.mouseExited(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 491121995:
				{
					if (field.equals("keyTyped")) 
					{
						__temp_executeDef147 = false;
						this.keyTyped(((java.awt.event.KeyEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 991047950:
				{
					if (field.equals("mouseMoved")) 
					{
						__temp_executeDef147 = false;
						this.mouseMoved(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 398350931:
				{
					if (field.equals("checkLock")) 
					{
						__temp_executeDef147 = false;
						return this.checkLock(((java.awt.Point) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case -793404268:
				{
					if (field.equals("overCheck")) 
					{
						__temp_executeDef147 = false;
						this.overCheck(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 257033474:
				{
					if (field.equals("mouseReleased")) 
					{
						__temp_executeDef147 = false;
						this.mouseReleased(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 373785874:
				{
					if (field.equals("mouseEntered")) 
					{
						__temp_executeDef147 = false;
						this.mouseEntered(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case -1468704830:
				{
					if (field.equals("mouseClicked")) 
					{
						__temp_executeDef147 = false;
						this.mouseClicked(((java.awt.event.MouseEvent) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef147) 
			{
				return ((haxe.lang.Function) (this.__hx_getField(field, true, false, false)) ).__hx_invokeDynamic(dynargs);
			}
			
		}
		
		return null;
	}
	
	
	public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("rootPane");
		baseArr.push("rootPaneCheckingEnabled");
		baseArr.push("accessibleContext");
		baseArr.push("updateTimer");
		baseArr.push("updateTask");
		baseArr.push("mutex");
		baseArr.push("enabledMove");
		baseArr.push("pressPoint");
		baseArr.push("currentGraphic");
		baseArr.push("surface");
		baseArr.push("jigsawx");
		baseArr.push("cols");
		baseArr.push("rows");
		baseArr.push("hi");
		baseArr.push("wid");
	}
	
	
}


