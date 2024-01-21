/*======================================
	Loadout for Squad Autorifleman (usArmySF)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m249_pip";
        ammo = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249
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
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 2;
    };
};