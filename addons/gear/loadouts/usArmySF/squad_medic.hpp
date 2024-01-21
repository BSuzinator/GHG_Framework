/*======================================
	Loadout for Squad Medics (usArmySF)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname = "rhsusf_mbav_medic";
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};