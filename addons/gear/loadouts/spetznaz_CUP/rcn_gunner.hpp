/*======================================
	Loadout for Recon Gunner (russian)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_ksvk";
		muzzle = "";
		bipod = "";
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
        classname[] = {"CUP_V_CDF_6B3_1_DST","CUP_V_CDF_6B3_1_FST","CUP_V_PMC_CIRAS_Black_Veh"};
        // List of items
        CUP_5Rnd_127x108_KSVK_M = 4;
		CUP_8Rnd_9x18_Makarov_M = 2;
        vn_rdg2_mag = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "CUP_H_RUS_6B27_headset_goggles", "CUP_H_RUS_6B47_v2_GogglesClosed_Winter", "CUP_H_RUS_K6_3_Goggles_black" };
    facewear = "CUP_G_ESS_BLK";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};