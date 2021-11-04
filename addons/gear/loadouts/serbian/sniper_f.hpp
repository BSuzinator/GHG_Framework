/*======================================
	Loadout for Recon Sniper (serbian)
======================================*/
class sniper_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_XM2010_wd" };
		muzzle = "rhsusf_acc_M2010S";
		bipod = "rhsusf_acc_harris_bipod";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhsusf_5Rnd_300winmag_xm2010";
        
        class Scopes : Scopes
        {
            sniper_optic = "rhsusf_acc_LEUPOLDMK4_2";
        };
    };
    
	class Weapon_2 : Weapon_1 
	{ 
		classname = "rhsusf_weap_m9";
        ammo = "rhsusf_mag_15Rnd_9x19_FMJ";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "rhssaf_uniform_m93_oakleaf" };
    };
    
    class Vest : Vest
    {
        classname[] = { "rhssaf_vest_md99_woodland_rifleman" };
        // List of items
        rhsusf_5Rnd_300winmag_xm2010 = 4;
		rhsusf_mag_15Rnd_9x19_FMJ = 2;
        SmokeShell = 2;
    };
    
    headgear[] = { "rhssaf_helmet_m97_veil_oakleaf" };
    facewear = "rhsusf_oakley_goggles_clr";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};