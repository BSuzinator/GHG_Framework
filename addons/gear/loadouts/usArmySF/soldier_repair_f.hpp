/*======================================
	Loadout for Repair Specialist (usArmySF)
======================================*/
class soldier_repair_f : soldier_f
{
    
	
	class Vest : Vest
    {
        classname = "rhsusf_mbav_medic";
        // List of items
		ACE_microDAGR = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};