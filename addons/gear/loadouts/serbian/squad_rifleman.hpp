/*======================================
	Loadout for Rifleman (serbian)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_g36kv";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "rhssaf_30rnd_556x45_EPR_G36";
		bipod = "rhsusf_acc_rvg_blk";
        
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
        classname[] = { "rhssaf_uniform_m93_oakleaf" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhssaf_vest_md99_woodland_rifleman";
        // List of items
        rhssaf_30rnd_556x45_EPR_G36 = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "rhssaf_helmet_m97_oakleaf" };
    facewear = "CUP_G_ESS_BLK";
};