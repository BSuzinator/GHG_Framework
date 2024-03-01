/*======================================
	Loadout for Rifleman (usArmySF)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_blockII_wd", "rhs_weap_m4a1_blockII", "rhs_weap_m4a1_blockII_d" };
		muzzle[] = {"rhsusf_acc_nt4_black","rhsusf_acc_nt4_black","rhsusf_acc_nt4_tan"};
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
		bipod = "rhsusf_acc_kac_grip";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			alt_holo = "";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "CUP_optic_Eotech553_Black", "rhsusf_acc_eotech_552_d" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_g3_m81", "rhs_uniform_g3_blk", "rhs_uniform_g3_tan" };
		ACRE_PRC343 = 1;
		ACE_CableTie = 2;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_mbav_Rifleman";
        // List of items
        rhs_mag_30Rnd_556x45_Mk318_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
		ACE_Canteen = 1;
    };
    
    headgear[] = { "rhsusf_mich_bare_norotos_arc_alt", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_bare_norotos_arc_alt_tan" };
    facewear[] = { "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_tan" };
};