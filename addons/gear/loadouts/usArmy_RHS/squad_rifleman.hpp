/*======================================
	Loadout for Rifleman (usArmy)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_wd", "rhs_weap_m4a1", "rhs_weap_m4a1", "rhs_weap_m4a1", "rhs_weap_m4a1_d" };
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		bipod = "rhsusf_acc_kac_grip";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			alt_holo = "";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech553_Black", "rhsusf_acc_eotech_552_d" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_bdu_erdl", "rhs_uniform_acu_ocp", "rhs_uniform_acu_oefcp", "rhs_uniform_acu_ucp", "rhs_uniform_acu_ucpd" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_Rifleman", "rhsusf_iotv_ocp_Rifleman", "rhsusf_iotv_ocp_Rifleman", "rhsusf_iotv_ucp_Rifleman", "rhsusf_iotv_ucp_Rifleman" };
        // List of items
        rhs_mag_30Rnd_556x45_M855A1_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "rhsusf_ach_bare_wood", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ucp", "rhsusf_ach_helmet_ucp" };
    facewear = "CUP_G_ESS_BLK";
};