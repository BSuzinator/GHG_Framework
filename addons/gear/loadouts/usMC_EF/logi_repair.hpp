/*======================================
	Loadout for Repair Specialist (usMC_EF)
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
        classname = "EF_B_Kitbag_coy";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};