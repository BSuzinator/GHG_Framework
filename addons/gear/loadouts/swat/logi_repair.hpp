/*======================================
	Loadout for Repair Specialist (swat)
======================================*/
class logi_repair : squad_rifleman
{
    class Uniform : Uniform
	{
		classname = "U_C_Mechanic_01_F";
	};
	
	class Vest : Vest
    {
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
	facewear = "UK3CB_G_Neck_Shemag_KLR_tan";
	headgear = "rhsusf_bowman_cap";
};