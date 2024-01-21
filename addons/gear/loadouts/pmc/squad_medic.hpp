/*======================================
	Loadout for Squad Medics (pmc)
======================================*/
class squad_medic : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_red_plaid";
    };

    class Vest : Vest
    {
		classname = "rhsusf_plateframe_medic";
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
	headgear = "vn_b_boonie_05_04";
	facewear = "G_Headset_lxWS";
};