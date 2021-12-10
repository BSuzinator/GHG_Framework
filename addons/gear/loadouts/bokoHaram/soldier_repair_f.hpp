/*======================================
	Loadout for Repair Specialist (Boko Haram)
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
        classname = "B_Kitbag_rgr";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};