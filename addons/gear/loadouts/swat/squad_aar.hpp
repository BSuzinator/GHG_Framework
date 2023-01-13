/*======================================
	Loadout for Squad Assistant Autorifleman (swat)
======================================*/
class squad_aar : squad_rifleman
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
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};