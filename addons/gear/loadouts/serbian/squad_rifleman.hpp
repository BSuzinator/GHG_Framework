/*======================================
	Loadout for Rifleman (serbian)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_G36A_RIS";
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "CUP_30Rnd_556x45_G36";
		bipod = "";
        
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
        classname[] = { "CUP_U_B_CZ_WDL_NoKneepads" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_RRV_Officer";
        // List of items
        CUP_30Rnd_556x45_G36 = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "CUP_H_CZ_Helmet04" };
    facewear = "CUP_G_ESS_BLK";
};