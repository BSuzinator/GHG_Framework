/*======================================
	Loadout for Repair Specialist (serbian)
======================================*/
class soldier_repair_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        // List of items
		ACE_microDAGR = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};