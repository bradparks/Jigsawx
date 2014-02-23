package jigsawxtargets.hxjava;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class GraphicsTexture extends haxe.lang.HxObject
{
	public    GraphicsTexture(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    GraphicsTexture(jigsawx.JigsawPiece jig_, java.lang.String imageSrc, java.awt.Rectangle textureRectangle_, double sx_, double sy_)
	{
		jigsawxtargets.hxjava.GraphicsTexture.__hx_ctor_jigsawxtargets_hxjava_GraphicsTexture(this, jig_, imageSrc, textureRectangle_, sx_, sy_);
	}
	
	
	public static   void __hx_ctor_jigsawxtargets_hxjava_GraphicsTexture(jigsawxtargets.hxjava.GraphicsTexture __temp_me22, jigsawx.JigsawPiece jig_, java.lang.String imageSrc, java.awt.Rectangle textureRectangle_, double sx_, double sy_)
	{
		__temp_me22.y = ((double) (0) );
		__temp_me22.x = ((double) (0) );
		__temp_me22.jig = jig_;
		__temp_me22.createPath(jig_);
		__temp_me22.sx = sx_;
		__temp_me22.sy = sy_;
		__temp_me22.set_alpha(1.);
		__temp_me22.image = jigsawxtargets.hxjava.GraphicsTexture.bufferedImage(imageSrc);
		__temp_me22.textureRectangle = textureRectangle_;
	}
	
	
	public static   java.awt.image.BufferedImage bufferedImage(java.lang.String imageSrc)
	{
		try 
		{
			java.awt.image.BufferedImage alphaImage = new java.awt.image.BufferedImage(((int) (100) ), ((int) (50) ), ((int) (java.awt.image.BufferedImage.TYPE_INT_ARGB) ));
			java.io.File file = new java.io.File(haxe.lang.Runtime.toString(imageSrc));
			java.awt.image.BufferedImage loadedImg = javax.imageio.ImageIO.read(((java.io.File) (file) ));
			alphaImage = new java.awt.image.BufferedImage(((int) (loadedImg.getWidth(((java.awt.image.ImageObserver) (null) ))) ), ((int) (loadedImg.getHeight(((java.awt.image.ImageObserver) (null) ))) ), ((int) (java.awt.image.BufferedImage.TYPE_INT_ARGB) ));
			alphaImage.getGraphics().drawImage(((java.awt.Image) (loadedImg) ), ((int) (0) ), ((int) (0) ), ((java.awt.image.ImageObserver) (null) ));
			return alphaImage;
		}
		catch (java.io.IOException e)
		{
			haxe.Log.trace.__hx_invoke2_o(0.0, 0.0, "image load fail", new haxe.lang.DynamicObject(new haxe.root.Array<java.lang.String>(new java.lang.String[]{"className", "fileName", "methodName"}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{"jigsawxtargets.hxjava.GraphicsTexture", "GraphicsTexture.hx", "bufferedImage"}), new haxe.root.Array<java.lang.String>(new java.lang.String[]{"lineNumber"}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (((double) (188) )) )})));
		}
		
		
		return new java.awt.image.BufferedImage(((int) (100) ), ((int) (50) ), ((int) (java.awt.image.BufferedImage.TYPE_INT_ARGB) ));
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new jigsawxtargets.hxjava.GraphicsTexture(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new jigsawxtargets.hxjava.GraphicsTexture(((jigsawx.JigsawPiece) (arr.__get(0)) ), haxe.lang.Runtime.toString(arr.__get(1)), ((java.awt.Rectangle) (arr.__get(2)) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(3))) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(4))) ));
	}
	
	
	public  java.awt.Rectangle textureRectangle;
	
	public  java.awt.geom.GeneralPath generalPath;
	
	public  double x;
	
	public  double y;
	
	public  double sx;
	
	public  double sy;
	
	public  jigsawx.JigsawPiece jig;
	
	public  java.awt.image.BufferedImage image;
	
	public  java.awt.TexturePaint texturePaint;
	
	public  double alpha;
	
	public   double get_alpha()
	{
		return this.alpha;
	}
	
	
	public   double set_alpha(double alpha_)
	{
		this.alpha = alpha_;
		return this.get_alpha();
	}
	
	
	public   void createPath(jigsawx.JigsawPiece jig)
	{
		this.generalPath = new java.awt.geom.GeneralPath();
		jigsawx.math.Vec2 first = jig.getFirst();
		this.generalPath.moveTo(((double) (first.x) ), ((double) (first.y) ));
		{
			int _g = 0;
			haxe.root.Array<jigsawx.math.Vec2> _g1 = jig.getPoints();
			while (( _g < _g1.length ))
			{
				jigsawx.math.Vec2 v = _g1.__get(_g);
				 ++ _g;
				this.generalPath.lineTo(((double) (v.x) ), ((double) (v.y) ));
			}
			
		}
		
		this.generalPath.closePath();
	}
	
	
	public   java.awt.TexturePaint get_texturePaint()
	{
		return this.texturePaint;
	}
	
	
	public   jigsawx.math.Vec2 getLocation()
	{
		return new jigsawx.math.Vec2(((java.lang.Object) (this.x) ), ((java.lang.Object) (this.y) ));
	}
	
	
	public   void setLocation(double x_, double y_)
	{
		this.generalPath.transform(((java.awt.geom.AffineTransform) (java.awt.geom.AffineTransform.getTranslateInstance(((double) (( x_ - this.x )) ), ((double) (( y_ - this.y )) ))) ));
		this.textureRectangle = new java.awt.Rectangle(((int) (( ( x_ - this.sx ) + 25 )) ), ((int) (( ( y_ - this.sy ) + 25 )) ), ((int) (540) ), ((int) (360) ));
		this.texturePaint = new java.awt.TexturePaint(((java.awt.image.BufferedImage) (this.image) ), ((java.awt.geom.Rectangle2D) (this.textureRectangle) ));
		this.x = x_;
		this.y = y_;
	}
	
	
	public   void render(java.awt.Graphics2D g2D)
	{
		g2D.setClip(((java.awt.Shape) (this.generalPath) ));
		haxe.root.Array<java.lang.Object> arr = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (1.) ), ((java.lang.Object) (1.) ), ((java.lang.Object) (1.) ), ((java.lang.Object) (this.get_alpha()) )});
		float[] scaleFactors = new float[((int) (4) )];
		{
			int _g1 = 0;
			int _g = arr.length;
			while (( _g1 < _g ))
			{
				int i = _g1++;
				scaleFactors[i] = ((float) (((double) (haxe.lang.Runtime.toDouble(arr.__get(i))) )) );
			}
			
		}
		
		float[] offsets = new float[((int) (4) )];
		{
			int _g1 = 0;
			int _g = arr.length;
			while (( _g1 < _g ))
			{
				int i = _g1++;
				offsets[i] = ((float) (((double) (haxe.lang.Runtime.toDouble(arr.__get(i))) )) );
			}
			
		}
		
		arr = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (0.) ), ((java.lang.Object) (0.) ), ((java.lang.Object) (0.) ), ((java.lang.Object) (0.) )});
		java.awt.image.RescaleOp rescaleOp = new java.awt.image.RescaleOp(((float[]) (scaleFactors) ), ((float[]) (offsets) ), ((java.awt.RenderingHints) (null) ));
		java.awt.image.BufferedImage alphaImage = rescaleOp.filter(((java.awt.image.BufferedImage) (this.image) ), ((java.awt.image.BufferedImage) (null) ));
		g2D.drawImage(((java.awt.Image) (alphaImage) ), ((int) (this.textureRectangle.x) ), ((int) (this.textureRectangle.y) ), ((int) (this.textureRectangle.width) ), ((int) (this.textureRectangle.height) ), ((java.awt.image.ImageObserver) (null) ));
	}
	
	
	@Override public   double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		{
			boolean __temp_executeDef137 = true;
			switch (field.hashCode())
			{
				case 92909918:
				{
					if (field.equals("alpha")) 
					{
						__temp_executeDef137 = false;
						if (handleProperties) 
						{
							this.set_alpha(value);
							return value;
						}
						 else 
						{
							this.alpha = ((double) (value) );
							return value;
						}
						
					}
					
					break;
				}
				
				
				case 120:
				{
					if (field.equals("x")) 
					{
						__temp_executeDef137 = false;
						this.x = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3686:
				{
					if (field.equals("sy")) 
					{
						__temp_executeDef137 = false;
						this.sy = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 121:
				{
					if (field.equals("y")) 
					{
						__temp_executeDef137 = false;
						this.y = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 3685:
				{
					if (field.equals("sx")) 
					{
						__temp_executeDef137 = false;
						this.sx = ((double) (value) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef137) 
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
			boolean __temp_executeDef138 = true;
			switch (field.hashCode())
			{
				case 92909918:
				{
					if (field.equals("alpha")) 
					{
						__temp_executeDef138 = false;
						if (handleProperties) 
						{
							this.set_alpha(((double) (haxe.lang.Runtime.toDouble(value)) ));
							return value;
						}
						 else 
						{
							this.alpha = ((double) (haxe.lang.Runtime.toDouble(value)) );
							return value;
						}
						
					}
					
					break;
				}
				
				
				case -1974958444:
				{
					if (field.equals("textureRectangle")) 
					{
						__temp_executeDef138 = false;
						this.textureRectangle = ((java.awt.Rectangle) (value) );
						return value;
					}
					
					break;
				}
				
				
				case -1517868029:
				{
					if (field.equals("texturePaint")) 
					{
						__temp_executeDef138 = false;
						this.texturePaint = ((java.awt.TexturePaint) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 878718253:
				{
					if (field.equals("generalPath")) 
					{
						__temp_executeDef138 = false;
						this.generalPath = ((java.awt.geom.GeneralPath) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 100313435:
				{
					if (field.equals("image")) 
					{
						__temp_executeDef138 = false;
						this.image = ((java.awt.image.BufferedImage) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 120:
				{
					if (field.equals("x")) 
					{
						__temp_executeDef138 = false;
						this.x = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 105224:
				{
					if (field.equals("jig")) 
					{
						__temp_executeDef138 = false;
						this.jig = ((jigsawx.JigsawPiece) (value) );
						return value;
					}
					
					break;
				}
				
				
				case 121:
				{
					if (field.equals("y")) 
					{
						__temp_executeDef138 = false;
						this.y = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3686:
				{
					if (field.equals("sy")) 
					{
						__temp_executeDef138 = false;
						this.sy = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
				case 3685:
				{
					if (field.equals("sx")) 
					{
						__temp_executeDef138 = false;
						this.sx = ((double) (haxe.lang.Runtime.toDouble(value)) );
						return value;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef138) 
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
			boolean __temp_executeDef139 = true;
			switch (field.hashCode())
			{
				case -934592106:
				{
					if (field.equals("render")) 
					{
						__temp_executeDef139 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("render"))) );
					}
					
					break;
				}
				
				
				case -1974958444:
				{
					if (field.equals("textureRectangle")) 
					{
						__temp_executeDef139 = false;
						return this.textureRectangle;
					}
					
					break;
				}
				
				
				case -404603337:
				{
					if (field.equals("setLocation")) 
					{
						__temp_executeDef139 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("setLocation"))) );
					}
					
					break;
				}
				
				
				case 878718253:
				{
					if (field.equals("generalPath")) 
					{
						__temp_executeDef139 = false;
						return this.generalPath;
					}
					
					break;
				}
				
				
				case -316023509:
				{
					if (field.equals("getLocation")) 
					{
						__temp_executeDef139 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("getLocation"))) );
					}
					
					break;
				}
				
				
				case 120:
				{
					if (field.equals("x")) 
					{
						__temp_executeDef139 = false;
						return this.x;
					}
					
					break;
				}
				
				
				case -1243143604:
				{
					if (field.equals("get_texturePaint")) 
					{
						__temp_executeDef139 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("get_texturePaint"))) );
					}
					
					break;
				}
				
				
				case 121:
				{
					if (field.equals("y")) 
					{
						__temp_executeDef139 = false;
						return this.y;
					}
					
					break;
				}
				
				
				case 1369086785:
				{
					if (field.equals("createPath")) 
					{
						__temp_executeDef139 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("createPath"))) );
					}
					
					break;
				}
				
				
				case 3685:
				{
					if (field.equals("sx")) 
					{
						__temp_executeDef139 = false;
						return this.sx;
					}
					
					break;
				}
				
				
				case 915242817:
				{
					if (field.equals("set_alpha")) 
					{
						__temp_executeDef139 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("set_alpha"))) );
					}
					
					break;
				}
				
				
				case 3686:
				{
					if (field.equals("sy")) 
					{
						__temp_executeDef139 = false;
						return this.sy;
					}
					
					break;
				}
				
				
				case 1129859893:
				{
					if (field.equals("get_alpha")) 
					{
						__temp_executeDef139 = false;
						return ((haxe.lang.Function) (new haxe.lang.Closure(((java.lang.Object) (this) ), haxe.lang.Runtime.toString("get_alpha"))) );
					}
					
					break;
				}
				
				
				case 105224:
				{
					if (field.equals("jig")) 
					{
						__temp_executeDef139 = false;
						return this.jig;
					}
					
					break;
				}
				
				
				case 92909918:
				{
					if (field.equals("alpha")) 
					{
						__temp_executeDef139 = false;
						if (handleProperties) 
						{
							return this.get_alpha();
						}
						 else 
						{
							return this.alpha;
						}
						
					}
					
					break;
				}
				
				
				case 100313435:
				{
					if (field.equals("image")) 
					{
						__temp_executeDef139 = false;
						return this.image;
					}
					
					break;
				}
				
				
				case -1517868029:
				{
					if (field.equals("texturePaint")) 
					{
						__temp_executeDef139 = false;
						if (handleProperties) 
						{
							return this.get_texturePaint();
						}
						 else 
						{
							return this.texturePaint;
						}
						
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef139) 
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
			boolean __temp_executeDef140 = true;
			switch (field.hashCode())
			{
				case 92909918:
				{
					if (field.equals("alpha")) 
					{
						__temp_executeDef140 = false;
						if (handleProperties) 
						{
							return this.get_alpha();
						}
						 else 
						{
							return this.alpha;
						}
						
					}
					
					break;
				}
				
				
				case 120:
				{
					if (field.equals("x")) 
					{
						__temp_executeDef140 = false;
						return this.x;
					}
					
					break;
				}
				
				
				case 3686:
				{
					if (field.equals("sy")) 
					{
						__temp_executeDef140 = false;
						return this.sy;
					}
					
					break;
				}
				
				
				case 121:
				{
					if (field.equals("y")) 
					{
						__temp_executeDef140 = false;
						return this.y;
					}
					
					break;
				}
				
				
				case 3685:
				{
					if (field.equals("sx")) 
					{
						__temp_executeDef140 = false;
						return this.sx;
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef140) 
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
			boolean __temp_executeDef141 = true;
			switch (field.hashCode())
			{
				case -934592106:
				{
					if (field.equals("render")) 
					{
						__temp_executeDef141 = false;
						this.render(((java.awt.Graphics2D) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case 1129859893:
				{
					if (field.equals("get_alpha")) 
					{
						__temp_executeDef141 = false;
						return this.get_alpha();
					}
					
					break;
				}
				
				
				case -404603337:
				{
					if (field.equals("setLocation")) 
					{
						__temp_executeDef141 = false;
						this.setLocation(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ));
					}
					
					break;
				}
				
				
				case 915242817:
				{
					if (field.equals("set_alpha")) 
					{
						__temp_executeDef141 = false;
						return this.set_alpha(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					break;
				}
				
				
				case -316023509:
				{
					if (field.equals("getLocation")) 
					{
						__temp_executeDef141 = false;
						return this.getLocation();
					}
					
					break;
				}
				
				
				case 1369086785:
				{
					if (field.equals("createPath")) 
					{
						__temp_executeDef141 = false;
						this.createPath(((jigsawx.JigsawPiece) (dynargs.__get(0)) ));
					}
					
					break;
				}
				
				
				case -1243143604:
				{
					if (field.equals("get_texturePaint")) 
					{
						__temp_executeDef141 = false;
						return this.get_texturePaint();
					}
					
					break;
				}
				
				
			}
			
			if (__temp_executeDef141) 
			{
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		return null;
	}
	
	
	@Override public   void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		baseArr.push("alpha");
		baseArr.push("texturePaint");
		baseArr.push("image");
		baseArr.push("jig");
		baseArr.push("sy");
		baseArr.push("sx");
		baseArr.push("y");
		baseArr.push("x");
		baseArr.push("generalPath");
		baseArr.push("textureRectangle");
		{
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


