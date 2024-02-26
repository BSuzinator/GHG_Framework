/*======================================
	Loadout for Rifleman (baf)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_L85A2_G";
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "CUP_30Rnd_556x45_Stanag_L85";
		bipod = "";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			alt_holo = "";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt_camo[] = { "CUP_optic_Eotech553_OD", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech533" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_BAF_MTP_UBACSLONG_Gloves", "CUP_I_B_PMC_Unit_28", "CUP_U_B_BAF_DPM_UBACSLONG_Gloves", "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "CUP_U_B_BAF_DDPM_UBACSLONGKNEE_Gloves" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_BAF_MTP_Osprey_Mk4_Scout", "CUP_V_PMC_CIRAS_Winter_Veh", "CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman", "CUP_V_B_BAF_DPM_Osprey_Mk3_Scout", "CUP_V_B_BAF_DDPM_Osprey_Mk3_Scout" };
        // List of items
        CUP_30Rnd_556x45_Stanag_L85 = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "CUP_B_Bergen_BAF";
    facewear = "CUP_G_ESS_BLK";
};