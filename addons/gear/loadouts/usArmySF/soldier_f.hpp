/*======================================
	Loadout for Rifleman (usArmySF)
======================================*/
class soldier_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_blockII_wd", "rhs_weap_m4a1_blockII", "rhs_weap_m4a1_blockII_d" };
		muzzle = "rhsusf_acc_nt4_black";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
		bipod = "rhsusf_acc_kac_grip";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_g3_m81", "rhs_uniform_g3_blk", "rhs_uniform_g3_tan" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_mbav_Rifleman";
        // List of items
        rhs_mag_30Rnd_556x45_Mk318_Stanag = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
		ACE_Canteen = 1;
    };
    
    headgear[] = { "rhsusf_mich_bare_norotos_arc_alt", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_bare_norotos_arc_alt_tan" };
    facewear[] = { "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_tan" };
};