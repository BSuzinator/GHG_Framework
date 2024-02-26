/*======================================
	Loadout for Recon Gunner (cbrn)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_DMR_02_F";
		muzzle = "muzzle_snds_338_black";
		bipod = "bipod_01_f_blk";
        laser = "ace_acc_pointer_green";
        ammo = "10Rnd_338_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "optic_ams";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_P07_blk_F";
        ammo = "16Rnd_9x21_Mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "CBRN_Expansion_Yellow", "CBRN_Expansion_Olive", "CBRN_Expansion_Gendarmerie" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "V_TacVest_blk", "V_TacVest_oli", "V_TacVest_gen_F"};
        // List of items
        10Rnd_338_Mag = 4;
		16Rnd_9x21_Mag = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "lxWS_H_PASGT_goggles_black_F", "lxWS_H_PASGT_goggles_olive_F", "lxWS_H_PASGT_goggles_black_F" };
    facewear = "M40_Gas_mask_nbc_c2_d";
	
	nvgs = "ACE_NVG_Gen1";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};