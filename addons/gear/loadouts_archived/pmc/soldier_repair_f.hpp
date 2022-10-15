/*======================================
	Loadout for Repair Specialist (pmc)
======================================*/
class soldier_repair_f : soldier_f
{
    
	class Uniform : Uniform
    {
        classname = "U_C_Mechanic_01_F";
    };
	
	class Vest : Vest
    {
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
	headgear = "rhsusf_bowman_cap";
	facewear = "UK3CB_G_Neck_Shemag_KLR_tan";
};