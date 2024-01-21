/*======================================
	Loadout for Recon Gunner (usMC)
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
        classname[] = { "rhs_uniform_FROG01_d", "rhs_uniform_FROG01_wd" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_rifleman";
        // List of items
        rhsusf_5Rnd_300winmag_xm2010 = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "rhsusf_lwh_helmet_marpatd", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "CUP_G_ESS_BLK";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};