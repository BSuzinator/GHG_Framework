/*======================================
	Loadout for Repair Specialist (csat_a3_pacific)
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
        classname = "B_FieldPack_ghex_F";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};