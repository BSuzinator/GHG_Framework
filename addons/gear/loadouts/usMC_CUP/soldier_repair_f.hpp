/*======================================
	Loadout for Repair Specialist (usMC_CUP)
======================================*/
class soldier_repair_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        classname = "rhsusf_spc_patchless_radio";
        // List of items
		ACE_microDAGR = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};