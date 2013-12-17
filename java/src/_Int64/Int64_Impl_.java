package _Int64;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class Int64_Impl_
{
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
					long j = 0L;
					{
						long j1 = k;
						long k1 = ((long) (((int) (10) )) );
						j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
					}
					
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
				long j = 0L;
				{
					long j1 = k;
					long k1 = ((long) (((int) (10) )) );
					j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
				}
				
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
		{
			long j = f;
			long k = g;
			return ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long sub_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long mul_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long div_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ( ((long) (j) ) / ((long) (k) ) );
		}
		
	}
	
	
	public static   boolean eq_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
		}
		
	}
	
	
	public static   long neg_(long f)
	{
		return ((long) ( ~ (((long) (f) )) ) );
	}
	
	
	public static   boolean neq_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
		}
		
	}
	
	
	public static   boolean ngt_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
		}
		
	}
	
	
	public static   boolean nlt_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
		}
		
	}
	
	
	public static   boolean nge_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
		}
		
	}
	
	
	public static   boolean nle_(long f, long g)
	{
		{
			long j = f;
			long k = g;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
		}
		
	}
	
	
	public static   long add_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long sub_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long mul_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long div_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((long) (j) ) / ((long) (k) ) );
		}
		
	}
	
	
	public static   boolean eq_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
		}
		
	}
	
	
	public static   boolean neq_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
		}
		
	}
	
	
	public static   boolean ngt_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
		}
		
	}
	
	
	public static   boolean nlt_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
		}
		
	}
	
	
	public static   boolean nge_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
		}
		
	}
	
	
	public static   boolean nle_i(long f, int g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
		}
		
	}
	
	
	public static   long add_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long sub_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long mul_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long div_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((long) (j) ) / ((long) (k) ) );
		}
		
	}
	
	
	public static   boolean eq_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
		}
		
	}
	
	
	public static   boolean neq_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
		}
		
	}
	
	
	public static   boolean ngt_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
		}
		
	}
	
	
	public static   boolean nlt_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
		}
		
	}
	
	
	public static   boolean nge_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
		}
		
	}
	
	
	public static   boolean nle_f(long f, double g)
	{
		{
			long j = f;
			long k = ((long) (((int) (g) )) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
		}
		
	}
	
	
	public static   long add_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long sub_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long mul_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long div_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ( ((long) (j) ) / ((long) (k) ) );
		}
		
	}
	
	
	public static   boolean eq_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
		}
		
	}
	
	
	public static   boolean neq_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
		}
		
	}
	
	
	public static   boolean ngt_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
		}
		
	}
	
	
	public static   boolean nlt_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
		}
		
	}
	
	
	public static   boolean nge_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
		}
		
	}
	
	
	public static   boolean nle_s(long f, java.lang.String g)
	{
		{
			long g1 = 0L;
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
					long k = ((long) (((int) (0) )) );
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
							int g2 = ((int) (haxe.lang.Runtime.toInt(c1)) );
							long j = 0L;
							{
								long j1 = k;
								long k1 = ((long) (((int) (10) )) );
								j = ((long) (( ((long) (j1) ) * ((long) (k1) ) )) );
							}
							
							long k1 = ((long) (((int) (g2) )) );
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
				
				g1 = out;
			}
			
			long j = f;
			long k = g1;
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
		}
		
	}
	
	
	public static   long add_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ((long) (( ((long) (j) ) + ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long sub_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ((long) (( ((long) (j) ) - ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long mul_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ((long) (( ((long) (j) ) * ((long) (k) ) )) );
		}
		
	}
	
	
	public static   long div_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ( ((long) (j) ) / ((long) (k) ) );
		}
		
	}
	
	
	public static   boolean eq_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) == 0 );
		}
		
	}
	
	
	public static   boolean neq_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) != 0 );
		}
		
	}
	
	
	public static   boolean ngt_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) > 0 );
		}
		
	}
	
	
	public static   boolean nlt_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) < 0 );
		}
		
	}
	
	
	public static   boolean nge_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) >= 0 );
		}
		
	}
	
	
	public static   boolean nle_64(long f, long g)
	{
		{
			long j = f;
			long k = ((long) (g) );
			return ( ((int) (( ((long) (j) ) - ((long) (k) ) )) ) <= 0 );
		}
		
	}
	
	
}


