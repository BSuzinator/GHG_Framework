/*======================================
	Loadout for Autorifleman (usArmySF)
======================================*/
class soldier_ar_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m249_pip";
		muzzle = "rhsusf_acc_nt4_black";
        ammo = "rhsusf_200Rnd_556x45_soft_pouch";
        bipod = "rhsusf_acc_saw_bipod";
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_mbav_mg";
        // Inherited item overrides
        rhs_mag_30Rnd_556x45_Mk318_Stanag = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        rhsusf_200Rnd_556x45_soft_pouch = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
        rhsusf_200Rnd_556x45_soft_pouch = 4;
    };
};