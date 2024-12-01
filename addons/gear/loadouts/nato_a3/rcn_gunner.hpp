/*======================================
	Loadout for Recon Gunner (nato_a3)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "srifle_DMR_02_sniper_F", "srifle_DMR_02_camo_F", "srifle_DMR_02_F" };
		muzzle[] = { "muzzle_snds_338_sand", "muzzle_snds_338_green", "muzzle_snds_338_black" };
		bipod[] = { "bipod_01_F_snd", "bipod_01_F_khk", "bipod_01_F_blk" };
        laser = "acc_pointer_IR";
        ammo = "10Rnd_338_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic[] = { "optic_AMS_snd", "optic_AMS_khk", "optic_AMS" };
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_Pistol_heavy_01_F";
        ammo = "11Rnd_45ACP_Mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "U_B_CombatUniform_mcam", "U_B_T_Soldier_F", "U_B_CombatUniform_mcam_wdl_f" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "V_Chestrig_rgr", "V_Chestrig_rgr", "V_Chestrig_rgr" };
        // List of items
        10Rnd_338_Mag = 4;
		11Rnd_45ACP_Mag = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "H_Watchcap_khk", "H_Watchcap_camo", "H_Watchcap_blk" };
    facewear[] = { "G_Combat", "G_Combat_Goggles_tna_F", "G_Combat_Goggles_tna_F" };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};