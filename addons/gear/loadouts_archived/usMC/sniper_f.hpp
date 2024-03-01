/*======================================
	Loadout for Recon Sniper (usMC)
======================================*/
class sniper_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {
        classname = "CUP_srifle_M2010_blk";
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
        classname[] = {"rhs_uniform_FROG01_d", "rhs_uniform_FROG01_wd"};
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_rifleman";
        // List of items
        CUP_5Rnd_762x67_M2010_M = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
    };
    
    headgear[] = { "rhsusf_lwh_helmet_marpatd", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "rhsusf_oakley_goggles_clr";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};