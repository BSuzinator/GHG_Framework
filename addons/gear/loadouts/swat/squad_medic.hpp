/*======================================
	Loadout for Squad Medics (swat)
	
	By Fawks
======================================*/
class squad_medic : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "UK3CB_CW_US_B_LATE_U_SF_CombatUniform_01_BLK";
    };

    class Vest : Vest
    {
        classname = "UK3CB_TKP_B_V_TacVest_Blk";
        // List of items
        UK3CB_AUG_30Rnd_556x45_Magazine = 3;
		rhsusf_mag_17Rnd_9x19_JHP = 3;
        SmokeShell = 2;
		ACE_M84 = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "UK3CB_TKP_O_B_ASS_MED_BLK";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};