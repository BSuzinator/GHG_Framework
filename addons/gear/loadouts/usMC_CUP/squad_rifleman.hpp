/*======================================
	Loadout for Rifleman (usMC)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_M16A4_Base";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_30Rnd_556x45_Stanag";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			alt_holo = "";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt = "CUP_optic_Eotech553_Black";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_USMC_FROG1_DMARPAT", "CUP_U_B_USMC_FROG1_WMARPAT" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Eagle_SPC_Patrol";
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "CUP_H_LWHv2_MARPAT_des", "CUP_H_LWHv2_MARPAT" };
	facewear[] = {"CUP_G_ESS_KHK_Scarf_Tan", "CUP_G_ESS_BLK_Scarf_Grn"};
};