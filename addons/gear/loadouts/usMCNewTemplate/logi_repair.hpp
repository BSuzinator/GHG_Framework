/*======================================
	Loadout for Repair Specialist (usMC)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        classname = "rhsusf_spc_patchless_radio";
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};