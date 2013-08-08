package haxe.root;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class Fun_ba90d92e<T> extends haxe.lang.Function
{
	public    Fun_ba90d92e(haxe.root.Array<java.lang.Object> i, haxe.root.Array<haxe.root.Array> _g)
	{
		super(0, 0);
		this.i = i;
		this._g = _g;
	}
	
	
	@Override public   java.lang.Object __hx_invoke0_o()
	{
		T[] __temp_stmt36 = ((haxe.root.Array<T>) (((haxe.root.Array) (this._g.__get(0)) )) ).__a;
		int __temp_stmt37 = 0;
		{
			int __temp_arrIndex25 = 0;
			int __temp_arrVal23 = ((int) (haxe.lang.Runtime.toInt(this.i.__get(__temp_arrIndex25))) );
			int __temp_arrRet24 = __temp_arrVal23++;
			int __temp_expr38 = ((int) (haxe.lang.Runtime.toInt(this.i.__set(__temp_arrIndex25, __temp_arrVal23))) );
			__temp_stmt37 = __temp_arrRet24;
		}
		
		return __temp_stmt36[__temp_stmt37];
	}
	
	
	public  haxe.root.Array<java.lang.Object> i;
	
	public  haxe.root.Array<haxe.root.Array> _g;
	
}


