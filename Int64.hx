/*
* Int64 abstract wrapper
* Copyright (c) 2013 Justinfront Ltd
* author: Justin L Mills
* email: JLM at Justinfront dot net
* haxe3: 7 August 2013
* <Credit to Haxe foundation for readDigits code taken from Unserializer class
* please assume that that part of the code is subject to the same style licence but via
* Haxe foundation, see haxe.org >
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
* * Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
* * Redistributions in binary form must reproduce the above copyright
* notice, this list of conditions and the following disclaimer in the
* documentation and/or other materials provided with the distribution.
* * Neither the name of the Justinfront Ltd nor the
* names of its contributors may be used to endorse or promote products
* derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY Justinfront Ltd ''AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL Justinfront Ltd BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


import haxe.Int64 in INT64;

abstract Int64( INT64 ) {
    
    public inline function new( a: INT64 ): INT64 this = a;
    
    @:to public inline function toINT64() return this;
    
    @:from static public inline function fromINT64( a: INT64 )
    {
        return new Int64( a );
    }
    
    @:from static public inline function fromFloat( a: Float )
    {
        return new Int64( INT64.ofInt( Std.int( a ) ) );
    }
    
    @:from static public inline function fromInt( a: Int )
    {
        return new Int64( INT64.ofInt( a ) );
    }
    
    @:from static public inline function fromString( a: String )
    {
        var b       = INT64.ofInt( Std.parseInt( a ) );
        var c       = INT64.toStr( b );
        var out     = new Int64( b );
        if( c != a ) out = readDigits( a ); 
        return out;
    }
    
    // taken and modified from Unserializer
    inline static function readDigits( buf: String ): Int64 
    {
        var k: Int64    = 0;
        var s           = false;
        var pos         = 0;
        var fpos        = pos;
        
        while( true )
        {
            var c = buf.charCodeAt( pos );
            if( c == null )
                break;
            if( c == 45 ) { // negative sign
                if( pos != fpos )
                    break;
                s = true;
                pos++;
                continue;
            }
            c -= 48;
            if( c < 0 || c > 9 )
                break;
            k = ( k * 10 ) + c;
            pos++;
        }
        if( s )
            k = INT64.neg( k );
        return k;
    }
    
    
    // should work for Int, String, INT64, Float, but for Op's to be picked up 
    // they need to have defined types hence these are used internally.
    // Note you can use an Op unless one of the types is an Int64 even if one is INT64 :(
    
    //arithmatic
    inline static function add( f, g )
    { 
        var j: Int64 = f;
        var k: Int64 = g;
        return new Int64( INT64.add( j, k ) );
    }
    inline static function sub( f, g )
    { 
        var j: Int64 = f;
        var k: Int64 = g;
        return new Int64( INT64.sub( j, k ) );
    }
    inline static function mul( f, g )
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return new Int64( INT64.mul( j, k ) );
    }
    inline static function div( f, g )
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return new Int64( INT64.div( j, k ) );  
    }
    //equalities 
    inline static function eq( f, g ) 
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return INT64.compare( j, k ) == 0;
    }
    inline static function neg( f )
    {
        var j: Int64 = f;
        return INT64.neg( j );
    }
    inline static function neq( f, g )
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return INT64.compare( j, k ) != 0;
    }
    inline static function ngt( f, g )
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return INT64.compare( j, k ) > 0;
    }
    inline static function nlt( f, g )
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return INT64.compare( j, k ) < 0;
    }
    inline static function nge( f: Int64, g )
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return INT64.compare( j, k ) >= 0;
    }
    inline static function nle( f: Int64, g: Int64 )
    {
        var j: Int64 = f;
        var k: Int64 = g;
        return INT64.compare( j, k ) <= 0;
    }
    
    //arithmatic
    @:op(A+B) public inline static function add_( f: Int64, g: Int64 ) 
        return add( f, g );
    @:op(A-B) public inline static function sub_( f: Int64, g: Int64 ) 
        return sub( f, g );
    @:op(A*B) public inline static function mul_( f: Int64, g: Int64 ) 
        return mul( f, g );
    @:op(A/B) public inline static function div_( f: Int64, g: Int64 )
        return div( f, g );  
    
    //equalities 
    @:op(A==B) public inline static function eq_( f: Int64, g: Int64 ) 
        return eq( f, g );
    @:op(-A) public inline static function neg_( f: Int64 )
        return INT64.neg( f );
    @:op(A!=B) public inline static function neq_( f: Int64, g: Int64 )
        return neq( f, g );
    @:op(A>B) public inline static function ngt_( f: Int64, g: Int64 )
        return ngt( f, g );
    @:op(A<B) public inline static function nlt_( f: Int64, g: Int64 )
        return nlt( f, g );
    @:op(A>=B) public inline static function nge_( f: Int64, g: Int64 )
        return nge( f, g );
    @:op(A<=B) public inline static function nle_( f: Int64, g: Int64 )
        return nle( f, g );
    
    // Integer
    
    //arithmatic
    @:op(A+B) public inline static function add_i( f: Int64, g: Int ) 
        return add( f, g );
    @:op(A-B) public inline static function sub_i( f: Int64, g: Int ) 
        return sub( f, g );
    @:op(A*B) public inline static function mul_i( f: Int64, g: Int ) 
        return mul( f, g );
    @:op(A/B) public inline static function div_i( f: Int64, g: Int )
        return div( f, g );  
    
    //equalities 
    @:op(A==B) public inline static function eq_i( f: Int64, g: Int ) 
        return eq( f, g );
    @:op(A!=B) public inline static function neq_i( f: Int64, g: Int )
        return neq( f, g );
    @:op(A>B) public inline static function ngt_i( f: Int64, g: Int )
        return ngt( f, g );
    @:op(A<B) public inline static function nlt_i( f: Int64, g: Int )
        return nlt( f, g );
    @:op(A>=B) public inline static function nge_i( f: Int64, g: Int )
        return nge( f, g );
    @:op(A<=B) public inline static function nle_i( f: Int64, g: Int )
        return nle( f, g );

    // Float
    
    //arithmatic
    @:op(A+B) public inline static function add_f( f: Int64, g: Float ) 
        return add( f, g );
    @:op(A-B) public inline static function sub_f( f: Int64, g: Float ) 
        return sub( f, g );
    @:op(A*B) public inline static function mul_f( f: Int64, g: Float ) 
        return mul( f, g );
    @:op(A/B) public inline static function div_f( f: Int64, g: Float )
        return div( f, g );  
    
    //equalities 
    @:op(A==B) public inline static function eq_f( f: Int64, g: Float ) 
        return eq( f, g );
    @:op(A!=B) public inline static function neq_f( f: Int64, g: Float )
        return neq( f, g );
    @:op(A>B) public inline static function ngt_f( f: Int64, g: Float )
        return ngt( f, g );
    @:op(A<B) public inline static function nlt_f( f: Int64, g: Float )
        return nlt( f, g );
    @:op(A>=B) public inline static function nge_f( f: Int64, g: Float )
        return nge( f, g );
    @:op(A<=B) public inline static function nle_f( f: Int64, g: Float )
        return nle( f, g );

    // String
    
    //arithmatic
    @:op(A+B) public inline static function add_s( f: Int64, g: String ) 
        return add( f, g );
    @:op(A-B) public inline static function sub_s( f: Int64, g: String ) 
        return sub( f, g );
    @:op(A*B) public inline static function mul_s( f: Int64, g: String ) 
        return mul( f, g );
    @:op(A/B) public inline static function div_s( f: Int64, g: String )
        return div( f, g );  
    
    //equalities 
    @:op(A==B) public inline static function eq_s( f: Int64, g: String ) 
        return eq( f, g );
    @:op(A!=B) public inline static function neq_s( f: Int64, g: String )
        return neq( f, g );
    @:op(A>B) public inline static function ngt_s( f: Int64, g: String )
        return ngt( f, g );
    @:op(A<B) public inline static function nlt_s( f: Int64, g: String )
        return nlt( f, g );
    @:op(A>=B) public inline static function nge_s( f: Int64, g: String )
        return nge( f, g );
    @:op(A<=B) public inline static function nle_s( f: Int64, g: String )
        return nle( f, g );
        
    // INT64
    
    //arithmatic
    @:op(A+B) public inline static function add_64( f: Int64, g: INT64 ) 
        return add( f, g );
    @:op(A-B) public inline static function sub_64( f: Int64, g: INT64 ) 
        return sub( f, g );
    @:op(A*B) public inline static function mul_64( f: Int64, g: INT64 ) 
        return mul( f, g );
    @:op(A/B) public inline static function div_64( f: Int64, g: INT64 )
        return div( f, g );  
    
    //equalities 
    @:op(A==B) public inline static function eq_64( f: Int64, g: INT64 ) 
        return eq( f, g );
    @:op(A!=B) public inline static function neq_64( f: Int64, g: INT64 )
        return neq( f, g );
    @:op(A>B) public inline static function ngt_64( f: Int64, g: INT64 )
        return ngt( f, g );
    @:op(A<B) public inline static function nlt_64( f: Int64, g: INT64 )
        return nlt( f, g );
    @:op(A>=B) public inline static function nge_64( f: Int64, g: INT64 )
        return nge( f, g );
    @:op(A<=B) public inline static function nle_64( f: Int64, g: INT64 )
        return nle( f, g );
        
}
