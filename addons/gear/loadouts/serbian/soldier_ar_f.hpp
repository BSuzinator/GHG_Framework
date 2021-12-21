/*======================================
	Loadout for Autorifleman (serbian)
======================================*/
class soldier_ar_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m249_pip_ris";
        ammo = "rhsusf_100Rnd_556x45_soft_pouch";
        bipod = "rhsusf_acc_saw_bipod";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        rhssaf_30rnd_556x45_EPR_G36 = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        rhsusf_100Rnd_556x45_soft_pouch = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items
        rhsusf_100Rnd_556x45_soft_pouch = 3;
    };
};