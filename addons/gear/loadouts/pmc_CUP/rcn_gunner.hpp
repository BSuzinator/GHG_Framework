/*======================================
	Loadout for Recon Gunner (pmc)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {

        classname = "UK3CB_BAF_L115A3";
        muzzle = "uk3cb_baf_silencer_l115a3";
		bipod = "uk3cb_underbarrel_acc_bipod";
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "uk3cb_baf_338_5rnd";

        classname = "CUP_srifle_AWM_wdl";
        muzzle = "CUP_muzzle_snds_AWM";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_5Rnd_86x70_L115A1";

        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_LeupoldMk4_20x40_LRT";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "CUP_hgun_Colt1911";
        ammo = "CUP_7Rnd_45ACP_1911";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_13";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_PMC_CIRAS_Khaki_Veh";
        // List of items
        CUP_5Rnd_86x70_L115A1 = 4;
		CUP_7Rnd_45ACP_1911 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_LegStrapBag_coyote_F";
    };
	
	headgear = "lxWS_H_CapB_rvs_blk_ION";
    facewear = "vn_b_bandana_a";
};