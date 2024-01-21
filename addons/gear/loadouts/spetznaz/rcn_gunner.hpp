/*======================================
	Loadout for Recon Gunner (russian)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_ksvk";
		muzzle = "";
		bipod = "rhs_acc_harris_swivel";
        laser = "";
        ammo = "CUP_5Rnd_127x108_KSVK_M";
        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_PSO_3";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "CUP_hgun_Makarov";
        ammo = "CUP_8Rnd_9x18_Makarov_M";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = {"CUP_U_O_RUS_Flora_1","CUP_U_O_RUS_Flora_1_VDV","CUP_U_O_RUS_Flora_2_VDV"};
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = {"CUP_V_RUS_6B3_1","rhs_6b23_digi_rifleman","rhs_6b23_ML_rifleman"};
        // List of items
        CUP_5Rnd_127x108_KSVK_M = 4;
		CUP_8Rnd_9x18_Makarov_M = 2;
        vn_rdg2_mag = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "CUP_H_RUS_6B27_headset_goggles", "rhs_6b28_ess", "rhs_6b27m_ml_ess" };
    facewear = "CUP_G_ESS_BLK";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};