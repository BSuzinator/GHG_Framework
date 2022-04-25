/*======================================
	Loadout for Assistant Autorifleman (pmc)
======================================*/
class soldier_aar_f : soldier_f
{
    class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_blue_plaid";
    };
    
    class Vest : Vest
    {
        ACE_MapTools = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        ACE_SpareBarrel = 1;
        rhsusf_200Rnd_556x45_soft_pouch = 3;
		ACE_Canteen = 2;
    };
	headgear = "vn_b_boonie_05_03";
};