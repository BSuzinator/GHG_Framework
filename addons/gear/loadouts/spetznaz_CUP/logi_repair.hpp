/*======================================
	Loadout for Repair Specialist (russian)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_HikingPack_Civ";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};