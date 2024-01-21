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
        classname[] = { "UK3CB_BAF_U_CombatUniform_MTP", "UK3CB_BAF_U_Smock_Arctic", "UK3CB_BAF_U_CombatUniform_DPMW", "UK3CB_BAF_U_CombatUniform_DPMT", "UK3CB_BAF_U_CombatUniform_DDPM" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_Osprey_Rifleman_A", "UK3CB_BAF_V_Osprey_Winter", "UK3CB_BAF_V_Osprey_DPMW2", "UK3CB_BAF_V_Osprey_DPMT2", "UK3CB_BAF_V_Osprey_DDPM2" };
        // List of items
        CUP_30Rnd_556x45_Stanag_L85 = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "UK3CB_BAF_H_Mk7_Camo_A", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DPMT_B", "UK3CB_BAF_H_Mk6_DDPM_B" };
    facewear = "CUP_G_ESS_BLK";
};