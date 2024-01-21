/*======================================
	Loadout for Rifleman (usArmy)
======================================*/
class soldier_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_camo", "CUP_arifle_M4A1_black", "CUP_arifle_M4A1_black", "CUP_arifle_M4A1_black", "CUP_arifle_M4A1_black_d" };
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
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_BDUv2_gloves_ERDL_highland", "CUP_U_B_USArmy_ACU_Gloves_OCP", "CUP_U_B_USArmy_ACU_Gloves_OEFCP", "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP", "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCPd" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy" };
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "CUP_H_HIL_HelmetACH_TTS", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP" };
    facewear = "rhsusf_oakley_goggles_clr";
};