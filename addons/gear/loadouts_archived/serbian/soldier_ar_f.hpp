/*======================================
	Loadout for Autorifleman (serbian)
======================================*/
class soldier_ar_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_m249_pip4";
        ammo = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
        bipod = "rhsusf_acc_saw_bipod";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        rhssaf_30rnd_556x45_EPR_G36 = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 3;
    };
};