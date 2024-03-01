/*======================================
	Loadout for Recon Gunner (pmc)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {
        classname = "UK3CB_BAF_L115A3";
        muzzle = "CUP_muzzle_snds_AWM";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "uk3cb_baf_338_5rnd";
        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_Leupold_VX3";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "rhsusf_weap_m1911a1";
        ammo = "rhsusf_mag_7x45acp_MHP";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_blue_hi";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_plateframe_light";
        // List of items
        uk3cb_baf_338_5rnd = 4;
		rhsusf_mag_7x45acp_MHP = 2;
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