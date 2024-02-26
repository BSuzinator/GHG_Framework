/*======================================
	Loadout for Repair Specialist (bokoHaram)
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
        classname[] = { "B_Kitbag_desert_lxWS" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};