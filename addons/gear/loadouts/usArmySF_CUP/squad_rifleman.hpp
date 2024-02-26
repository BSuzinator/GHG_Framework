/*======================================
	Loadout for Rifleman (usArmySF)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_SOMMOD_Grip_green", "CUP_arifle_M4A1_SOMMOD_Grip_black", "CUP_arifle_M4A1_SOMMOD_Grip_tan" };
		muzzle[] = {"CUP_muzzle_snds_SCAR_L","CUP_muzzle_snds_SCAR_L","CUP_muzzle_snds_M16_desert"};
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "CUP_30Rnd_556x45_Stanag";
		bipod = "";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			alt_holo = "";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt_camo[] = { "CUP_optic_Eotech553_OD", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech533" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_CRYE_G3C_M81", "CUP_U_CRYE_G3C_BLK", "CUP_U_CRYE_G3C_MC_V3" };
		ACRE_PRC343 = 1;
		ACE_CableTie = 2;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Rifleman_M81";
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
		ACE_Canteen = 1;
    };
    
    headgear[] = { "CUP_H_USArmy_MICH_GCOVERED_Headset_M81", "CUP_H_OpsCore_Black", "CUP_H_USArmy_ECH_GCOVERED_Headset_MARPAT_des" };
    facewear[] = { "CUP_G_ESS_RGR", "CUP_G_ESS_RGR", "CUP_G_ESS_KHK_Scarf_Tan" };
};