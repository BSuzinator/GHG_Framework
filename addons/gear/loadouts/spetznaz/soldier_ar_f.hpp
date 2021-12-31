/*======================================
	Loadout for Autorifleman (spetznaz)
======================================*/
class soldier_ar_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_RPK";
        ammo = "rhs_75Rnd_762x39mm";
        bipod = "rhsusf_acc_harris_bipod";
		muzzle = "rhs_acc_pbs1";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        rhs_30Rnd_762x39mm_polymer = 0;
        SmokeShell = 1;
        rhs_mag_rgd5 = 1;
        // List of items
        rhs_75Rnd_762x39mm = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
        // List of items
        rhs_75Rnd_762x39mm = 5;
    };
};