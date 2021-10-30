/*======================================
	Loadout for Recon Sniper (usArmySF)
======================================*/
class sniper_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_XM2010_wd", "rhs_weap_XM2010", "rhs_weap_XM2010", "rhs_weap_XM2010", "rhs_weap_XM2010_d" };
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
		classname = "rhsusf_weap_glock17g4";
		muzzle = "rhsusf_acc_omega9k";
		laser = "acc_flashlight_pistol";
        ammo = "rhsusf_mag_17Rnd_9x19_FMJ";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_g3_m81", "rhs_uniform_g3_blk", "rhs_uniform_g3_tan" };
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_mbav_Rifleman";
        // List of items
        rhsusf_5Rnd_300winmag_xm2010 = 4;
		rhsusf_mag_17Rnd_9x19_FMJ = 2;
        SmokeShell = 2;
    };
    
    headgear[] = { "rhsusf_mich_bare_norotos_arc_alt", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_bare_norotos_arc_alt_tan" };
    facewear[] = { "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_tan" };
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};