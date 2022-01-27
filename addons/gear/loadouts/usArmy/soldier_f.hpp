/*======================================
	Loadout for Rifleman (usArmy)
======================================*/
class soldier_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_wd", "rhs_weap_m4a1", "rhs_weap_m4a1", "rhs_weap_m4a1", "rhs_weap_m4a1_d" };
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		bipod = "rhsusf_acc_kac_grip";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
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
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "rhsusf_ach_bare_wood", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ucp", "rhsusf_ach_helmet_ucp" };
    facewear = "rhsusf_oakley_goggles_clr";
};