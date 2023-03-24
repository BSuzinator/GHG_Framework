/*======================================
	Loadout for Repair Specialist (unsc)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        classname [] = {"OPTRE_UNSC_M52A_Armor3_WDL", "OPTRE_UNSC_M52A_Armor3_Sno"};
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};