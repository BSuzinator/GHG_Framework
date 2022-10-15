/*======================================
	Loadout for Repair Specialist (Taliban)
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
        classname = "LOP_ISTS_Fieldpack_PKM";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};