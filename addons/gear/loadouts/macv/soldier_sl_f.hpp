/*======================================
	Loadout for Squad Leads (macv)
======================================*/
class soldier_sl_f : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_06";
        
        ACRE_PRC77 = 1;
    };
};