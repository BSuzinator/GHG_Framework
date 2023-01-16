/*======================================
	Loadout for Squad Containment Autorifleman (swat)
======================================*/
class squad_aar : squad_rifleman
{
    
    class Uniform : Uniform
    {
        classname = "UK3CB_CW_US_B_LATE_U_SF_CombatUniform_01_BLK";
    };
	
	class Vest : Vest
    {
        ACE_MapTools = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "UK3CB_TKP_O_B_ASS_BLK";
        // List of items
        ACE_SpareBarrel = 0;
        rhsusf_200Rnd_556x45_soft_pouch = 0;
		ACE_Canteen = 0;
		ACE_CableTie = 30;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Camera_lxWS";
    };
	
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};