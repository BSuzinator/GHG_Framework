/*======================================
	Loadout for Repair Specialist (usMC)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        classname = "CUP_V_B_Eagle_SPC_Patrol";
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};