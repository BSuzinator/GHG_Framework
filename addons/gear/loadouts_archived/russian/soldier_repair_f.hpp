/*======================================
	Loadout for Repair Specialist (Russian)
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
        classname = "B_Kitbag_rgr";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};