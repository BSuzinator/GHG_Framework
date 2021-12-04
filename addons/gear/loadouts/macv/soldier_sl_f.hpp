/*======================================
	Loadout for Squad Leads (macv)
======================================*/
class soldier_sl_f : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Uniform : Uniform
    {
        ACRE_SEM52SL = 1;
    };
};