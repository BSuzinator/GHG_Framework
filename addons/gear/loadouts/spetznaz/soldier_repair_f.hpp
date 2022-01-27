/*======================================
	Loadout for Repair Specialist (spetznaz)
======================================*/
class soldier_repair_f : soldier_f
{
    
	
	class Vest : Vest
    {
        // List of items
		ACE_microDAGR = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};