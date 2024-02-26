/*======================================
	Loadout for Autorifleman (spetznaz)
======================================*/
class soldier_ar_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_RPK74";
        ammo = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
        bipod = "rhsusf_acc_harris_bipod";
		muzzle = "CUP_muzzle_snds_socom762rc";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        CUP_30Rnd_762x39_AK47_bakelite_M_polymer = 0;
        SmokeShell = 1;
        rhs_mag_rgd5 = 1;
        // List of items
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
        // List of items
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 5;
    };
};