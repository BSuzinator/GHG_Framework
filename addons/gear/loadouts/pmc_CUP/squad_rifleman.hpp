/*======================================
	Loadout for Rifleman (pmc)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_Mk17_CQC_FG";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_20Rnd_762x51_B_SCAR";
		bipod = "";
		
		class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt = "CUP_optic_Eotech553_Black";
        };
        
    };
    
    class Uniform : Uniform
    {
        classname = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_IOTV_OEFCP_Rifleman_USArmy";
        // List of items
        CUP_20Rnd_762x51_B_SCAR = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "vn_b_bandana_01";
    facewear = "G_Headset_lxWS";
};