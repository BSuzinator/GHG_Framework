/*======================================
	Loadout for Squad Marksman (usArmySF)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m14ebrri";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhsusf_20Rnd_762x51_m80_Mag";
		bipod = "rhsusf_acc_harris_bipod";
		muzzle[] = {"rhsusf_acc_aac_m14dcqd_silencer","rhsusf_acc_aac_m14dcqd_silencer_wd","rhsusf_acc_aac_m14dcqd_silencer_d"};
        
        class Scopes : Scopes
        {
            magnified = "rhsusf_acc_acog";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_mag_30Rnd_556x45_Mk318_Stanag = 0;
        rhsusf_20Rnd_762x51_m80_Mag = 5;
    };
    
    headgear[] = { "rhsusf_mich_bare_norotos_arc_alt", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_bare_norotos_arc_alt_tan" };
    facewear[] = { "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_tan" };
};