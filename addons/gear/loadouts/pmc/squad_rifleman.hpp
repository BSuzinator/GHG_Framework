/*======================================
	Loadout for Rifleman (pmc)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_scarh_fde_cqc";
        laser = "rhsusf_acc_anpeq15";
        ammo = "rhs_mag_20rnd_scar_762x51_m80_ball_bk";
		bipod = "rhsusf_acc_kac_grip";
		
		class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt = "CUP_optic_Eotech553_Black";
            //holo_alt_camo[] = { "rhsusf_acc_eotech_552_d", "rhsusf_acc_eotech_552_wd" };
        };
        
    };
    
    class Uniform : Uniform
    {
        classname = "lop_u_pmc_tacky";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_plateframe_rifleman";
        // List of items
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "vn_b_bandana_01";
    facewear = "G_Headset_lxWS";
};