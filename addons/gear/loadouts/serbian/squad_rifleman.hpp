/*======================================
	Loadout for Rifleman (serbian)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_g36kv";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhssaf_30rnd_556x45_EPR_G36";
		bipod = "rhsusf_acc_rvg_blk";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt = "rhsusf_acc_eotech_552";
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