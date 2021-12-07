/*======================================
	Loadout for Repair Specialist (macv)
======================================*/
class soldier_repair_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_03";
        // List of items
		ACE_microDAGR = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_04";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
    
    headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};