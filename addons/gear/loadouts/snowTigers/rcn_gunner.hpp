/*======================================
	Loadout for Recon Gunner (Snow Tigers)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {
        classname = "IP_srifle_DMR_05_SnowHex_F";
        muzzle = "muzzle_snds_93mmg";
		bipod = "rhs_acc_harris_swivel";
        laser = "rhs_acc_perst3";
        ammo = "10Rnd_93x64_DMR_05_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "rhs_acc_dh520x56";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_Rook40_F";
        ammo = "16Rnd_9x21_Mag";
		muzzle = "muzzle_snds_l";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "IP_U_O_CombatUniform_SnowTiger";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "IP_V_TacVest_SnowTiger";
        // List of items
        10Rnd_93x64_DMR_05_Mag = 4;
		16Rnd_9x21_Mag = 2;
		rhs_mag_rgn = 2;
        rhssaf_mag_brd_m83_white = 2;
		ACE_RangeCard = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "IP_B_FieldPack_SnowTiger";
    };
	
	headgear = "IP_H_Booniehat_SnowTiger";
    facewear = "rhsusf_shemagh2_gogg_white";
};