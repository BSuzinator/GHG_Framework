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
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt = "rhsusf_acc_eotech_552";
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
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "vn_b_bandana_01";
    facewear = "G_Headset_lxWS";
};