/*======================================
	Loadout for Recon Sniper (usMC)
======================================*/
class sniper_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1
    {
        classname = "rhs_weap_XM2010";
        muzzle = "rhsusf_acc_M2010S";
		bipod = "rhsusf_acc_harris_bipod";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhsusf_5Rnd_300winmag_xm2010";
        
        class Scopes : Scopes
        {
            sniper_optic = "rhsusf_acc_LEUPOLDMK4_2";
        };
    };
    
    class Weapon_2 : Weapon_2 
	{ 
		classname = "rhsusf_weap_m9";
        ammo = "rhsusf_mag_15Rnd_9x19_FMJ";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = {"rhs_uniform_FROG01_d", "rhsusf_lwh_helmet_marpatwd"};
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_rifleman";
        // List of items
        rhsusf_5Rnd_300winmag_xm2010 = 4;
		rhsusf_mag_15Rnd_9x19_FMJ = 2;
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