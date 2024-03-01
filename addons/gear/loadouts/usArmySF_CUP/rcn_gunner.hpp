/*======================================
	Loadout for Recon Gunner (usArmySF)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_srifle_M2010_wdl", "CUP_srifle_M2010_blk", "CUP_srifle_M2010_dsrt" };
		muzzle = "muzzle_snds_B";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "CUP_5Rnd_762x67_M2010_M";
        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_LeupoldMk4_20x40_LRT";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "CUP_hgun_Glock17_blk";
		muzzle = "muzzle_snds_L";
		laser = "CUP_acc_Glock17_Flashlight";
        ammo = "CUP_17Rnd_9x19_glock17";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_CRYE_G3C_M81", "CUP_U_CRYE_G3C_BLK", "CUP_U_CRYE_G3C_MC_V3" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Rifleman_M81";
        // List of items
        CUP_5Rnd_762x67_M2010_M = 4;
		CUP_17Rnd_9x19_glock17 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "CUP_H_USArmy_MICH_GCOVERED_Headset_M81", "CUP_H_OpsCore_Black", "CUP_H_USArmy_ECH_GCOVERED_Headset_MARPAT_des" };
    facewear[] = { "CUP_G_ESS_RGR", "CUP_G_ESS_RGR", "CUP_G_ESS_KHK_Scarf_Tan" };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};