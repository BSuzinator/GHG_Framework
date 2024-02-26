/*======================================
	Loadout for Rifleman (usArmy)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_camo", "CUP_arifle_M4A1_black", "CUP_arifle_M4A1_black", "CUP_arifle_M4A1_black", "CUP_arifle_M4A1_desert" };
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
            holo_alt_camo[] = { "CUP_optic_Eotech553_Black" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_BDUv2_gloves_ERDL_highland", "CUP_U_B_USArmy_ACU_Gloves_OCP", "CUP_U_B_USArmy_ACU_Gloves_OEFCP", "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP", "CUP_U_B_USArmy_Base" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy" };
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "CUP_H_HIL_HelmetACH_TTS", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP" };
    facewear = "CUP_G_ESS_BLK";
};