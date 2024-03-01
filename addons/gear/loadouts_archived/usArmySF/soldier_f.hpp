/*======================================
	Loadout for Rifleman (usArmySF)
======================================*/
class soldier_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_SOMMOD_Grip_green", "CUP_arifle_M4A1_SOMMOD_Grip_black", "CUP_arifle_M4A1_SOMMOD_Grip_tan" };
		muzzle = "CUP_muzzle_snds_SCAR_L";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "CUP_30Rnd_556x45_Stanag";
		bipod = "rhsusf_acc_kac_grip";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_CRYE_G3C_M81", "CUP_U_CRYE_G3C_BLK", "CUP_U_CRYE_G3C_MC_V3" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Rifleman_M81";
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
		ACE_Canteen = 1;
    };
    
    headgear[] = { "CUP_H_USArmy_MICH_GCOVERED_Headset_M81", "CUP_H_OpsCore_Black", "CUP_H_USArmy_ECH_GCOVERED_Headset_MARPAT_des" };
    facewear[] = { "CUP_G_ESS_RGR", "CUP_G_ESS_RGR", "CUP_G_ESS_KHK_Scarf_Tan" };
};