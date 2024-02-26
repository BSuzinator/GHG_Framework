/*======================================
	Loadout for Recon Gunner (gendamarieSwat)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_AWM_blk";
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
		classname = "CUP_hgun_M9";
        ammo = "CUP_15Rnd_9x19_M9";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname =  "U_B_GEN_Commander_F" ;
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "V_TacVest_gen_F";
        // List of items
        CUP_5Rnd_86x70_L115A1 = 4;
		CUP_15Rnd_9x19_M9 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear = "CUP_H_RUS_6B47_SF_headset_black";
    facewear = "CUP_G_ESS_BLK";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};