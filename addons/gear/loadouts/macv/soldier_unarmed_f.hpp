/*======================================
	Loadout for EWS Teletype (macv)
======================================*/
class soldier_unarmed_f : soldier_lite_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_06";
    };
};