/*======================================
	Loadout for Recon Gunner (baf)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_srifle_AWM_wdl", "CUP_srifle_AWM_blk", "CUP_srifle_AWM_blk", "CUP_srifle_AWM_blk", "CUP_srifle_AWM_des" };
		muzzle = "CUP_muzzle_snds_AWM";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_5Rnd_86x70_L115A1";

        
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
        classname[] = { "CUP_U_B_BAF_MTP_UBACSLONG_Gloves", "CUP_I_B_PMC_Unit_28", "CUP_U_B_BAF_DPM_UBACSLONG_Gloves", "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "CUP_U_B_BAF_DDPM_UBACSLONGKNEE_Gloves" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_BAF_MTP_Osprey_Mk4_Scout", "CUP_V_PMC_CIRAS_Winter_Veh", "CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman", "CUP_V_B_BAF_DPM_Osprey_Mk3_Scout", "CUP_V_B_BAF_DDPM_Osprey_Mk3_Scout" };
        // List of items
        UK3CB_BAF_338_5Rnd = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };

	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};