/*======================================
	Loadout for MMG Ammo Bearer (swat)
======================================*/
class mmg_ammo : squad_rifleman
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
        rhsusf_100Rnd_762x51 = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
	headgear = "vn_b_boonie_05_03";
	facewear = "G_Headset_lxWS";
};