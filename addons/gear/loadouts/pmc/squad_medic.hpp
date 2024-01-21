/*======================================
	Loadout for Squad Medics (pmc)
======================================*/
class squad_medic : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_40";
    };

    class Vest : Vest
    {
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Coyote";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
	headgear = "vn_b_boonie_05_04";
	facewear = "G_Headset_lxWS";
};