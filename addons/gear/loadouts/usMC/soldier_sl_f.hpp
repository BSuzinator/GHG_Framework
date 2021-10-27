/*======================================
	Loadout for Squad Leads (usMC)
======================================*/
class soldier_sl_f : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Vest
    {
        name = "rhsusf_spc_squadleader";
        // List of items
        ACRE_PRC152 = 1;
    };
};