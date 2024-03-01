/*======================================
	Loadout for Rifleman (usMC)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m16a4_carryhandle";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "rhs_mag_30Rnd_556x45_M855_Stanag";
        
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
        classname[] = { "rhs_uniform_FROG01_d", "rhs_uniform_FROG01_wd" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_rifleman";
        // List of items
        rhs_mag_30Rnd_556x45_M855_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "rhsusf_lwh_helmet_marpatd", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "CUP_G_ESS_BLK";
};