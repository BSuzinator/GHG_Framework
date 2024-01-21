/*======================================
	Loadout for Recon Gunner (serbian)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_XM2010_wd" };
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
        classname[] = { "rhssaf_uniform_m93_oakleaf" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "rhssaf_vest_md99_woodland_rifleman" };
        // List of items
        rhsusf_5Rnd_300winmag_xm2010 = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "rhssaf_helmet_m97_oakleaf" };
    facewear = "CUP_G_ESS_BLK";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};