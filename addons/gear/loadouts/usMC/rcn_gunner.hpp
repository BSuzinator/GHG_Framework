/*======================================
	Loadout for Recon Gunner (usMC)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_srifle_M2010_blk" };
		muzzle = "muzzle_snds_B";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_5Rnd_762_67_M2010_M";
        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_LeupoldMk4_20x40_LRT";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "CUP_hgun_M9";
        ammo = "CUP_15Rnd_9x19_M9";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_USMC_FROG1_DMARPAT", "CUP_U_B_USMC_FROG1_WMARPAT" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Eagle_SPC_Patrol";
        // List of items
        CUP_5Rnd_762x67_M2010_M = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "CUP_H_LWHv2_MARPAT_des", "CUP_H_LWHv2_MARPAT" };
	facewear[] = {"CUP_G_ESS_KHK_Scarf_Tan", "CUP_G_ESS_BLK_Scarf_Grn"};
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};