/*======================================
	Loadout for Autorifleman (usArmySF)
======================================*/
class soldier_ar_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_m249_pip1";
		muzzle = "CUP_muzzle_snds_SCAR_L";
        ammo = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
        bipod = "rhsusf_acc_saw_bipod";
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Grenadier_M81";
        // Inherited item overrides
        CUP_30Rnd_556x45_Stanag = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 3;
    };
};