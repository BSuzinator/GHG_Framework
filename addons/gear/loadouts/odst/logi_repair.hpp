/*======================================
	Loadout for Repair Specialist (odst)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        classname = "OPTRE_UNSC_M52D_Armor_Scout";
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Black";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};