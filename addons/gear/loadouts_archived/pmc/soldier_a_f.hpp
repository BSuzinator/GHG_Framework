/*======================================
	Loadout for MMG Ammo Bearer (pmc)
======================================*/
class soldier_a_f : soldier_f
{
    
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_grn_plaid";
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
	headgear = "vn_b_boonie_05_03";
	facewear = "G_Headset_lxWS";
};