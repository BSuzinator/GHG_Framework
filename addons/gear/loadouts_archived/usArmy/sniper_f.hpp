/*======================================
	Loadout for Recon Sniper (usArmy)
======================================*/
class sniper_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_srifle_M2010_wdl", "CUP_srifle_M2010_blk", "CUP_srifle_M2010_blk", "CUP_srifle_M2010_blk", "CUP_srifle_M2010_dsrt" };
		muzzle = "muzzle_snds_B";
		bipod = "rhsusf_acc_harris_bipod";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "CUP_5Rnd_762x67_M2010_M";
        
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
        classname[] = { "CUP_U_B_BDUv2_gloves_ERDL_highland", "CUP_U_B_USArmy_ACU_Gloves_OCP", "CUP_U_B_USArmy_ACU_Gloves_OEFCP", "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP", "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCPd" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy" };
        // List of items
        CUP_5Rnd_762x67_M2010_M = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
    };
    
    headgear[] = { "CUP_H_HIL_HelmetACH_TTS", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP" };
    facewear = "rhsusf_oakley_goggles_clr";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};