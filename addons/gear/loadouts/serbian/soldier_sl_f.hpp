/*======================================
	Loadout for Squad Leads (serbian)
======================================*/
class soldier_sl_f : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Vest : Vest
    {
        // List of items
        ACRE_PRC152 = 1;
    };
};