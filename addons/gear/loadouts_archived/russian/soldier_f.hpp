/*======================================
	Loadout for Rifleman (Russian)
======================================*/
class soldier_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak74m";
        laser = "rhs_acc_2dpzenit";
        ammo = "rhs_30Rnd_545x39_7N10_AK";
		muzzle = "rhs_acc_perst1ik";
        
        class Scopes : Scopes
        {
            red_dot = "rhs_acc_pkas";
			varient_red_dot = "rhs_acc_1p63";
            reflex = "rhs_acc_okp7_dovetail";
            magnified = "rhs_acc_1p78";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_flora_patchless", "rhs_uniform_emr_patchless", "rhs_uniform_emr_des_patchless" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "rhs_6b23_rifleman", "rhs_6b23_digi_rifleman", "rhs_6b23_ML_rifleman" };
        // List of items
        rhs_30Rnd_545x39_7N10_AK = 8;
        rhs_mag_rdg2_white = 2;
        rhs_mag_rgo = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "rhs_6b27m_ess", "rhs_6b28_ess", "rhs_6b27m_ml_ess" };
    facewear = "rhsusf_oakley_goggles_clr";
};