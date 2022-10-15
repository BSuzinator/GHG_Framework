/*======================================
	Loadout for Repair Specialist (macv)
======================================*/
class logi_repair : squad_rifleman
{
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
		ACRE_PRC77 = 1;
    };
    
    headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};