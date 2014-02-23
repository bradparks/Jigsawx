#ifndef INCLUDED_jigsawx_ds_CircleIter
#define INCLUDED_jigsawx_ds_CircleIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(jigsawx,ds,CircleIter)
HX_DECLARE_CLASS2(jigsawx,ds,Sign)
namespace jigsawx{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  CircleIter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CircleIter_obj OBJ_;
		CircleIter_obj();
		Void __construct(Float begin_,Float fin_,Float step_,Float min_,Float max_);

	public:
		static hx::ObjectPtr< CircleIter_obj > __new(Float begin_,Float fin_,Float step_,Float min_,Float max_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CircleIter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CircleIter"); }

		virtual Float next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::jigsawx::ds::CircleIter reset( );
		Dynamic reset_dyn();

		::jigsawx::ds::Sign onDirection;
		Float current;
		Float max;
		Float min;
		Float step;
		Float fin;
		Float begin;
		static ::jigsawx::ds::CircleIter pi2( Float begin_,Float fin_,Float step_);
		static Dynamic pi2_dyn();

		static ::jigsawx::ds::CircleIter pi2pi( Float begin_,Float fin_,Float step_);
		static Dynamic pi2pi_dyn();

};

} // end namespace jigsawx
} // end namespace ds

#endif /* INCLUDED_jigsawx_ds_CircleIter */ 
