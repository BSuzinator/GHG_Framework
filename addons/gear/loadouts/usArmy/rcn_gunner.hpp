/*======================================
	Loadout for Recon Gunner (usArmy)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_XM2010_wd", "rhs_weap_XM2010", "rhs_weap_XM2010", "rhs_weap_XM2010", "rhs_weap_XM2010_d" };
		muzzle = "rhsusf_acc_M2010S";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "rhsusf_5Rnd_300winmag_xm2010";
        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_Leupold_VX3";
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
        classname[] = { "rhs_uniform_bdu_erdl", "rhs_uniform_acu_ocp", "rhs_uniform_acu_oefcp", "rhs_uniform_acu_ucp", "rhs_uniform_acu_ucpd" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_Rifleman", "rhsusf_iotv_ocp_Rifleman", "rhsusf_iotv_ocp_Rifleman", "rhsusf_iotv_ucp_Rifleman", "rhsusf_iotv_ucp_Rifleman" };
        // List of items
        rhsusf_5Rnd_300winmag_xm2010 = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "rhsusf_ach_bare_wood", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ucp", "rhsusf_ach_helmet_ucp" };
    facewear = "CUP_G_ESS_BLK";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};