package _Int64;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class Int64_Impl_ extends haxe.lang.HxObject
{
	public    Int64_Impl_(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    Int64_Impl_()
	{
		_Int64.Int64_Impl_.__hx_ctor__Int64_Int64_Impl_(this);
	}
	
	
	public static   void __hx_ctor__Int64_Int64_Impl_(_Int64.Int64_Impl_ __temp_me2)
	{
		{
		}
		
	}
	
	
	public static   long _new(long a)
	{
		return a;
	}
	
	
	public static   long toINT64(long this1)
	{
		return this1;
	}
	
	
	public static   long fromINT64(long a)
	{
		return ((long) (a) );
	}
	
	
	public static   long fromFloat(double a)
	{
		return ((long) (((int) (a) )) );
	}
	
	
	public static   long fromInt(int a)
	{
		return ((long) (a) );
	}
	
	
	public static   long fromString(java.lang.String a)
	{
		long b = 0L;
		{
			int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(a))) );
			b = ((long) (x) );
		}
		
		java.lang.String c = ( haxe.root.Std.string(b) + "" );
		long out = ((long) (b) );
		if ( ! (haxe.lang.Runtime.valEq(c, a)) ) 
		{
			long k = ((long) (((int) (0) )) );
			boolean s = false;
			int pos = 0;
			int fpos = pos;
			while (true)
			{
				java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(a, pos);
				if (( c1 == null )) 
				{
					break;
				}
				
				if (haxe.lang.Runtime.eq(c1, 45)) 
				{
					if (( pos != fpos )) 
					{
						break;
					}
					
					s = true;
					pos++;
					continue;
				}
				
				c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
				if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
				{
					break;
				}
				
				{
					int g = ((int) (haxe.lang.Runtime.toInt(c1)) );
					long __temp_stmt39 = 0L;
					{
						long j1 = k;
						long k1 = ((long) (((int) (10) )) );
						__temp_stmt39 = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
					}
					
					long j = ((long) (__temp_stmt39) );
					long k1 = ((long) (((int) (g) )) );
					k = ((long) (( ((long) (j) ) + ((long) (k1) ) )) );
				}
				
				pos++;
			}
			
			if (s) 
			{
				k = ((long) ( ~ (((long) (k) )) ) );
			}
			
			out = k;
		}
		
		return out;
	}
	
	
	public static   long readDigits(java.lang.String buf)
	{
		long k = ((long) (((int) (0) )) );
		boolean s = false;
		int pos = 0;
		int fpos = pos;
		while (true)
		{
			java.lang.Object c = haxe.lang.StringExt.charCodeAt(buf, pos);
			if (( c == null )) 
			{
				break;
			}
			
			if (haxe.lang.Runtime.eq(c, 45)) 
			{
				if (( pos != fpos )) 
				{
					break;
				}
				
				s = true;
				pos++;
				continue;
			}
			
			c = ( ((int) (haxe.lang.Runtime.toInt(c)) ) - ((int) (48) ) );
			if (( ( haxe.lang.Runtime.compare(c, 0) < 0 ) || ( haxe.lang.Runtime.compare(c, 9) > 0 ) )) 
			{
				break;
			}
			
			{
				int g = ((int) (haxe.lang.Runtime.toInt(c)) );
				long __temp_stmt40 = 0L;
				{
					long j1 = k;
					long k1 = ((long) (((int) (10) )) );
					__temp_stmt40 = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
				}
				
				long j = ((long) (__temp_stmt40) );
				long k1 = ((long) (((int) (g) )) );
				k = ((long) (( ((long) (j) ) + ((long) (k1) ) )) );
			}
			
			pos++;
		}
		
		if (s) 
		{
			k = ((long) ( ~ (((long) (k) )) ) );
		}
		
		return k;
	}
	
	
	public static   long add(long f, long g)
	{
		long j = f;
		long k = g;
		return ((long) (( ((long) (j) ) + ((long) (k) ) )) );
	}
	
	
	public static   long sub(long f, long g)
	{
		long j = f;
		long k = g;
		return ((long) (( ((long) (j) ) - ((long) (k) ) )) );
	}
	
	
	public static   long mul(long f, long g)
	{
		long j = f;
		long k = g;
		return ((long) (( ((long) (j) ) * ((long) (k) ) )) );
	}
	
	
	public static   long div(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((long) (j) ) / ((long) (k) ) );
	}
	
	
	public static   boolean eq(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
	}
	
	
	public static   long neg(long f)
	{
		long j = f;
		return ((long) ( ~ (((long) (j) )) ) );
	}
	
	
	public static   boolean neq(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
	}
	
	
	public static   boolean ngt(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
	}
	
	
	public static   boolean nlt(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
	}
	
	
	public static   boolean nge(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
	}
	
	
	public static   boolean nle(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
	}
	
	
	public static   long add_(long f, long g)
	{
		long __temp_stmt41 = 0L;
		{
			long j = f;
			long k = g;
			__temp_stmt41 = ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt41) );
	}
	
	
	public static   long sub_(long f, long g)
	{
		long __temp_stmt42 = 0L;
		{
			long j = f;
			long k = g;
			__temp_stmt42 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt42) );
	}
	
	
	public static   long mul_(long f, long g)
	{
		long __temp_stmt43 = 0L;
		{
			long j = f;
			long k = g;
			__temp_stmt43 = ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt43) );
	}
	
	
	public static   long div_(long f, long g)
	{
		long __temp_stmt44 = 0L;
		{
			long j = f;
			long k = g;
			__temp_stmt44 = ( ((long) (j) ) / ((long) (k) ) );
		}
		
		return ((long) (__temp_stmt44) );
	}
	
	
	public static   boolean eq_(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
	}
	
	
	public static   long neg_(long f)
	{
		return ((long) ( ~ (((long) (f) )) ) );
	}
	
	
	public static   boolean neq_(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
	}
	
	
	public static   boolean ngt_(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
	}
	
	
	public static   boolean nlt_(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
	}
	
	
	public static   boolean nge_(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
	}
	
	
	public static   boolean nle_(long f, long g)
	{
		long j = f;
		long k = g;
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
	}
	
	
	public static   long add_i(long f, int g)
	{
		long __temp_stmt45 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt45 = ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt45) );
	}
	
	
	public static   long sub_i(long f, int g)
	{
		long __temp_stmt46 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt46 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt46) );
	}
	
	
	public static   long mul_i(long f, int g)
	{
		long __temp_stmt47 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt47 = ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt47) );
	}
	
	
	public static   long div_i(long f, int g)
	{
		long __temp_stmt48 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt48 = ( ((long) (j) ) / ((long) (k) ) );
		}
		
		return ((long) (__temp_stmt48) );
	}
	
	
	public static   boolean eq_i(long f, int g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
	}
	
	
	public static   boolean neq_i(long f, int g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
	}
	
	
	public static   boolean ngt_i(long f, int g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
	}
	
	
	public static   boolean nlt_i(long f, int g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
	}
	
	
	public static   boolean nge_i(long f, int g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
	}
	
	
	public static   boolean nle_i(long f, int g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
	}
	
	
	public static   long add_f(long f, double g)
	{
		long __temp_stmt49 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt49 = ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt49) );
	}
	
	
	public static   long sub_f(long f, double g)
	{
		long __temp_stmt50 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt50 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt50) );
	}
	
	
	public static   long mul_f(long f, double g)
	{
		long __temp_stmt51 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt51 = ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt51) );
	}
	
	
	public static   long div_f(long f, double g)
	{
		long __temp_stmt52 = 0L;
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			__temp_stmt52 = ( ((long) (j) ) / ((long) (k) ) );
		}
		
		return ((long) (__temp_stmt52) );
	}
	
	
	public static   boolean eq_f(long f, double g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
	}
	
	
	public static   boolean neq_f(long f, double g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
	}
	
	
	public static   boolean ngt_f(long f, double g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
	}
	
	
	public static   boolean nlt_f(long f, double g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
	}
	
	
	public static   boolean nge_f(long f, double g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
	}
	
	
	public static   boolean nle_f(long f, double g)
	{
		long j = f;
		long k = ((long) (((int) (g) )) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
	}
	
	
	public static   long add_s(long f, java.lang.String g)
	{
		long __temp_stmt53 = 0L;
		{
			long j = f;
			long k = 0L;
			{
				long b = 0L;
				{
					int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
					b = ((long) (x) );
				}
				
				java.lang.String c = ( haxe.root.Std.string(b) + "" );
				long out = ((long) (b) );
				if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
				{
					long k1 = ((long) (((int) (0) )) );
					boolean s = false;
					int pos = 0;
					int fpos = pos;
					while (true)
					{
						java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
						if (( c1 == null )) 
						{
							break;
						}
						
						if (haxe.lang.Runtime.eq(c1, 45)) 
						{
							if (( pos != fpos )) 
							{
								break;
							}
							
							s = true;
							pos++;
							continue;
						}
						
						c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
						if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
						{
							break;
						}
						
						{
							int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long __temp_stmt54 = 0L;
							{
								long j2 = k1;
								long k2 = ((long) (((int) (10) )) );
								__temp_stmt54 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
							}
							
							long j1 = ((long) (__temp_stmt54) );
							long k2 = ((long) (((int) (g1) )) );
							k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
						}
						
						pos++;
					}
					
					if (s) 
					{
						k1 = ((long) ( ~ (((long) (k1) )) ) );
					}
					
					out = k1;
				}
				
				k = out;
			}
			
			__temp_stmt53 = ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt53) );
	}
	
	
	public static   long sub_s(long f, java.lang.String g)
	{
		long __temp_stmt55 = 0L;
		{
			long j = f;
			long k = 0L;
			{
				long b = 0L;
				{
					int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
					b = ((long) (x) );
				}
				
				java.lang.String c = ( haxe.root.Std.string(b) + "" );
				long out = ((long) (b) );
				if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
				{
					long k1 = ((long) (((int) (0) )) );
					boolean s = false;
					int pos = 0;
					int fpos = pos;
					while (true)
					{
						java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
						if (( c1 == null )) 
						{
							break;
						}
						
						if (haxe.lang.Runtime.eq(c1, 45)) 
						{
							if (( pos != fpos )) 
							{
								break;
							}
							
							s = true;
							pos++;
							continue;
						}
						
						c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
						if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
						{
							break;
						}
						
						{
							int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long __temp_stmt56 = 0L;
							{
								long j2 = k1;
								long k2 = ((long) (((int) (10) )) );
								__temp_stmt56 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
							}
							
							long j1 = ((long) (__temp_stmt56) );
							long k2 = ((long) (((int) (g1) )) );
							k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
						}
						
						pos++;
					}
					
					if (s) 
					{
						k1 = ((long) ( ~ (((long) (k1) )) ) );
					}
					
					out = k1;
				}
				
				k = out;
			}
			
			__temp_stmt55 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt55) );
	}
	
	
	public static   long mul_s(long f, java.lang.String g)
	{
		long __temp_stmt57 = 0L;
		{
			long j = f;
			long k = 0L;
			{
				long b = 0L;
				{
					int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
					b = ((long) (x) );
				}
				
				java.lang.String c = ( haxe.root.Std.string(b) + "" );
				long out = ((long) (b) );
				if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
				{
					long k1 = ((long) (((int) (0) )) );
					boolean s = false;
					int pos = 0;
					int fpos = pos;
					while (true)
					{
						java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
						if (( c1 == null )) 
						{
							break;
						}
						
						if (haxe.lang.Runtime.eq(c1, 45)) 
						{
							if (( pos != fpos )) 
							{
								break;
							}
							
							s = true;
							pos++;
							continue;
						}
						
						c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
						if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
						{
							break;
						}
						
						{
							int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long __temp_stmt58 = 0L;
							{
								long j2 = k1;
								long k2 = ((long) (((int) (10) )) );
								__temp_stmt58 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
							}
							
							long j1 = ((long) (__temp_stmt58) );
							long k2 = ((long) (((int) (g1) )) );
							k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
						}
						
						pos++;
					}
					
					if (s) 
					{
						k1 = ((long) ( ~ (((long) (k1) )) ) );
					}
					
					out = k1;
				}
				
				k = out;
			}
			
			__temp_stmt57 = ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt57) );
	}
	
	
	public static   long div_s(long f, java.lang.String g)
	{
		long __temp_stmt59 = 0L;
		{
			long j = f;
			long k = 0L;
			{
				long b = 0L;
				{
					int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
					b = ((long) (x) );
				}
				
				java.lang.String c = ( haxe.root.Std.string(b) + "" );
				long out = ((long) (b) );
				if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
				{
					long k1 = ((long) (((int) (0) )) );
					boolean s = false;
					int pos = 0;
					int fpos = pos;
					while (true)
					{
						java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
						if (( c1 == null )) 
						{
							break;
						}
						
						if (haxe.lang.Runtime.eq(c1, 45)) 
						{
							if (( pos != fpos )) 
							{
								break;
							}
							
							s = true;
							pos++;
							continue;
						}
						
						c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
						if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
						{
							break;
						}
						
						{
							int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long __temp_stmt60 = 0L;
							{
								long j2 = k1;
								long k2 = ((long) (((int) (10) )) );
								__temp_stmt60 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
							}
							
							long j1 = ((long) (__temp_stmt60) );
							long k2 = ((long) (((int) (g1) )) );
							k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
						}
						
						pos++;
					}
					
					if (s) 
					{
						k1 = ((long) ( ~ (((long) (k1) )) ) );
					}
					
					out = k1;
				}
				
				k = out;
			}
			
			__temp_stmt59 = ( ((long) (j) ) / ((long) (k) ) );
		}
		
		return ((long) (__temp_stmt59) );
	}
	
	
	public static   boolean eq_s(long f, java.lang.String g)
	{
		long j = f;
		long k = 0L;
		{
			long b = 0L;
			{
				int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
				b = ((long) (x) );
			}
			
			java.lang.String c = ( haxe.root.Std.string(b) + "" );
			long out = ((long) (b) );
			if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
			{
				long k1 = ((long) (((int) (0) )) );
				boolean s = false;
				int pos = 0;
				int fpos = pos;
				while (true)
				{
					java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
					if (( c1 == null )) 
					{
						break;
					}
					
					if (haxe.lang.Runtime.eq(c1, 45)) 
					{
						if (( pos != fpos )) 
						{
							break;
						}
						
						s = true;
						pos++;
						continue;
					}
					
					c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
					if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
					{
						break;
					}
					
					{
						int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
						long __temp_stmt61 = 0L;
						{
							long j2 = k1;
							long k2 = ((long) (((int) (10) )) );
							__temp_stmt61 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
						}
						
						long j1 = ((long) (__temp_stmt61) );
						long k2 = ((long) (((int) (g1) )) );
						k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
					}
					
					pos++;
				}
				
				if (s) 
				{
					k1 = ((long) ( ~ (((long) (k1) )) ) );
				}
				
				out = k1;
			}
			
			k = out;
		}
		
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
	}
	
	
	public static   boolean neq_s(long f, java.lang.String g)
	{
		long j = f;
		long k = 0L;
		{
			long b = 0L;
			{
				int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
				b = ((long) (x) );
			}
			
			java.lang.String c = ( haxe.root.Std.string(b) + "" );
			long out = ((long) (b) );
			if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
			{
				long k1 = ((long) (((int) (0) )) );
				boolean s = false;
				int pos = 0;
				int fpos = pos;
				while (true)
				{
					java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
					if (( c1 == null )) 
					{
						break;
					}
					
					if (haxe.lang.Runtime.eq(c1, 45)) 
					{
						if (( pos != fpos )) 
						{
							break;
						}
						
						s = true;
						pos++;
						continue;
					}
					
					c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
					if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
					{
						break;
					}
					
					{
						int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
						long __temp_stmt62 = 0L;
						{
							long j2 = k1;
							long k2 = ((long) (((int) (10) )) );
							__temp_stmt62 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
						}
						
						long j1 = ((long) (__temp_stmt62) );
						long k2 = ((long) (((int) (g1) )) );
						k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
					}
					
					pos++;
				}
				
				if (s) 
				{
					k1 = ((long) ( ~ (((long) (k1) )) ) );
				}
				
				out = k1;
			}
			
			k = out;
		}
		
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
	}
	
	
	public static   boolean ngt_s(long f, java.lang.String g)
	{
		long j = f;
		long k = 0L;
		{
			long b = 0L;
			{
				int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
				b = ((long) (x) );
			}
			
			java.lang.String c = ( haxe.root.Std.string(b) + "" );
			long out = ((long) (b) );
			if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
			{
				long k1 = ((long) (((int) (0) )) );
				boolean s = false;
				int pos = 0;
				int fpos = pos;
				while (true)
				{
					java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
					if (( c1 == null )) 
					{
						break;
					}
					
					if (haxe.lang.Runtime.eq(c1, 45)) 
					{
						if (( pos != fpos )) 
						{
							break;
						}
						
						s = true;
						pos++;
						continue;
					}
					
					c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
					if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
					{
						break;
					}
					
					{
						int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
						long __temp_stmt63 = 0L;
						{
							long j2 = k1;
							long k2 = ((long) (((int) (10) )) );
							__temp_stmt63 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
						}
						
						long j1 = ((long) (__temp_stmt63) );
						long k2 = ((long) (((int) (g1) )) );
						k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
					}
					
					pos++;
				}
				
				if (s) 
				{
					k1 = ((long) ( ~ (((long) (k1) )) ) );
				}
				
				out = k1;
			}
			
			k = out;
		}
		
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
	}
	
	
	public static   boolean nlt_s(long f, java.lang.String g)
	{
		long j = f;
		long k = 0L;
		{
			long b = 0L;
			{
				int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
				b = ((long) (x) );
			}
			
			java.lang.String c = ( haxe.root.Std.string(b) + "" );
			long out = ((long) (b) );
			if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
			{
				long k1 = ((long) (((int) (0) )) );
				boolean s = false;
				int pos = 0;
				int fpos = pos;
				while (true)
				{
					java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
					if (( c1 == null )) 
					{
						break;
					}
					
					if (haxe.lang.Runtime.eq(c1, 45)) 
					{
						if (( pos != fpos )) 
						{
							break;
						}
						
						s = true;
						pos++;
						continue;
					}
					
					c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
					if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
					{
						break;
					}
					
					{
						int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
						long __temp_stmt64 = 0L;
						{
							long j2 = k1;
							long k2 = ((long) (((int) (10) )) );
							__temp_stmt64 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
						}
						
						long j1 = ((long) (__temp_stmt64) );
						long k2 = ((long) (((int) (g1) )) );
						k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
					}
					
					pos++;
				}
				
				if (s) 
				{
					k1 = ((long) ( ~ (((long) (k1) )) ) );
				}
				
				out = k1;
			}
			
			k = out;
		}
		
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
	}
	
	
	public static   boolean nge_s(long f, java.lang.String g)
	{
		long j = f;
		long k = 0L;
		{
			long b = 0L;
			{
				int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
				b = ((long) (x) );
			}
			
			java.lang.String c = ( haxe.root.Std.string(b) + "" );
			long out = ((long) (b) );
			if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
			{
				long k1 = ((long) (((int) (0) )) );
				boolean s = false;
				int pos = 0;
				int fpos = pos;
				while (true)
				{
					java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
					if (( c1 == null )) 
					{
						break;
					}
					
					if (haxe.lang.Runtime.eq(c1, 45)) 
					{
						if (( pos != fpos )) 
						{
							break;
						}
						
						s = true;
						pos++;
						continue;
					}
					
					c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
					if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
					{
						break;
					}
					
					{
						int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
						long __temp_stmt65 = 0L;
						{
							long j2 = k1;
							long k2 = ((long) (((int) (10) )) );
							__temp_stmt65 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
						}
						
						long j1 = ((long) (__temp_stmt65) );
						long k2 = ((long) (((int) (g1) )) );
						k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
					}
					
					pos++;
				}
				
				if (s) 
				{
					k1 = ((long) ( ~ (((long) (k1) )) ) );
				}
				
				out = k1;
			}
			
			k = out;
		}
		
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
	}
	
	
	public static   boolean nle_s(long f, java.lang.String g)
	{
		long j = f;
		long k = 0L;
		{
			long b = 0L;
			{
				int x = ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(g))) );
				b = ((long) (x) );
			}
			
			java.lang.String c = ( haxe.root.Std.string(b) + "" );
			long out = ((long) (b) );
			if ( ! (haxe.lang.Runtime.valEq(c, g)) ) 
			{
				long k1 = ((long) (((int) (0) )) );
				boolean s = false;
				int pos = 0;
				int fpos = pos;
				while (true)
				{
					java.lang.Object c1 = haxe.lang.StringExt.charCodeAt(g, pos);
					if (( c1 == null )) 
					{
						break;
					}
					
					if (haxe.lang.Runtime.eq(c1, 45)) 
					{
						if (( pos != fpos )) 
						{
							break;
						}
						
						s = true;
						pos++;
						continue;
					}
					
					c1 = ( ((int) (haxe.lang.Runtime.toInt(c1)) ) - ((int) (48) ) );
					if (( ( haxe.lang.Runtime.compare(c1, 0) < 0 ) || ( haxe.lang.Runtime.compare(c1, 9) > 0 ) )) 
					{
						break;
					}
					
					{
						int g1 = ((int) (haxe.lang.Runtime.toInt(c1)) );
						long __temp_stmt66 = 0L;
						{
							long j2 = k1;
							long k2 = ((long) (((int) (10) )) );
							__temp_stmt66 = ((long) (( ((long) (j2) ) * ((long) (k2) ) )) );
						}
						
						long j1 = ((long) (__temp_stmt66) );
						long k2 = ((long) (((int) (g1) )) );
						k1 = ((long) (( ((long) (j1) ) + ((long) (k2) ) )) );
					}
					
					pos++;
				}
				
				if (s) 
				{
					k1 = ((long) ( ~ (((long) (k1) )) ) );
				}
				
				out = k1;
			}
			
			k = out;
		}
		
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
	}
	
	
	public static   long add_64(long f, long g)
	{
		long __temp_stmt67 = 0L;
		{
			long j = f;
			long k = ((long) (g) );
			__temp_stmt67 = ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt67) );
	}
	
	
	public static   long sub_64(long f, long g)
	{
		long __temp_stmt68 = 0L;
		{
			long j = f;
			long k = ((long) (g) );
			__temp_stmt68 = ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt68) );
	}
	
	
	public static   long mul_64(long f, long g)
	{
		long __temp_stmt69 = 0L;
		{
			long j = f;
			long k = ((long) (g) );
			__temp_stmt69 = ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
		return ((long) (__temp_stmt69) );
	}
	
	
	public static   long div_64(long f, long g)
	{
		long __temp_stmt70 = 0L;
		{
			long j = f;
			long k = ((long) (g) );
			__temp_stmt70 = ( ((long) (j) ) / ((long) (k) ) );
		}
		
		return ((long) (__temp_stmt70) );
	}
	
	
	public static   boolean eq_64(long f, long g)
	{
		long j = f;
		long k = ((long) (g) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
	}
	
	
	public static   boolean neq_64(long f, long g)
	{
		long j = f;
		long k = ((long) (g) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
	}
	
	
	public static   boolean ngt_64(long f, long g)
	{
		long j = f;
		long k = ((long) (g) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
	}
	
	
	public static   boolean nlt_64(long f, long g)
	{
		long j = f;
		long k = ((long) (g) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
	}
	
	
	public static   boolean nge_64(long f, long g)
	{
		long j = f;
		long k = ((long) (g) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
	}
	
	
	public static   boolean nle_64(long f, long g)
	{
		long j = f;
		long k = ((long) (g) );
		return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new _Int64.Int64_Impl_(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new _Int64.Int64_Impl_();
	}
	
	
}


