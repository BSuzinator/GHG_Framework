/*======================================
	Loadout for Recon Gunner (csat_a3_pacific)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_DMR_05_blk_F";
		muzzle = "muzzle_snds_93mmg";
		bipod = "bipod_02_F_blk";
        laser = "ACE_acc_pointer_green";
        ammo = "10Rnd_93x64_DMR_05_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "optic_KHS_blk";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_Rook40_F";
        ammo = "16Rnd_9x21_Mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "U_O_T_Soldier_F" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "V_HarnessO_ghex_F" };
        // List of items
        10Rnd_93x64_DMR_05_Mag = 4;
		16Rnd_9x21_Mag = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "H_HelmetO_ghex_F" };
    facewear = "G_Combat_Goggles_tna_F";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};