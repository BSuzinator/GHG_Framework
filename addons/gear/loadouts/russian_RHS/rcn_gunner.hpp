/*======================================
	Loadout for Recon Gunner (russian)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_t5000";
		muzzle = "";
		bipod = "rhs_acc_harris_swivel";
        laser = "";
        ammo = "rhs_5Rnd_338lapua_t5000";
        
        class Scopes : Scopes
        {
            sniper_optic = "rhs_acc_dh520x56";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "rhs_weap_makarov_pm";
        ammo = "rhs_mag_9x18_8_57N181S";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = {"rhs_uniform_flora_patchless","rhs_uniform_emr_patchless","rhs_uniform_emr_des_patchless"};
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = {"rhs_6b23_rifleman","rhs_6b23_digi_rifleman","rhs_6b23_ML_rifleman"};
        // List of items
        rhs_5Rnd_338lapua_t5000 = 4;
		rhs_mag_9x18_8_57N181S = 2;
        rhs_mag_rdg2_white = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "rhs_6b27m_ess", "rhs_6b28_ess", "rhs_6b27m_ml_ess" };
    facewear = "rhsusf_oakley_goggles_clr";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};