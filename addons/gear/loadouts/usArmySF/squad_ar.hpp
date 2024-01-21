/*======================================
	Loadout for Squad Autorifleman (usArmySF)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m249_pip";

        ammo = "rhsusf_100Rnd_556x45_soft_pouch";
        bipod = "rhsusf_acc_saw_bipod";

        ammo = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249
        bipod = "";

    };
    
    class Vest : Vest
    {
        classname = "rhsusf_mbav_mg";
        // Inherited item overrides
        rhs_mag_30Rnd_556x45_Mk318_Stanag = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items

        rhsusf_100Rnd_556x45_soft_pouch = 3;

        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 3;

    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items

        rhsusf_100Rnd_556x45_soft_pouch = 2;

        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 2;

    };
};