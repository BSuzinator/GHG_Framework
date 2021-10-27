/*======================================
	Loadout for Squad Leads (usMC)
======================================*/
class soldier_sl_f : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_squadleader";
        // List of items
        ACRE_PRC152 = 1;
    };
};