/*======================================
	Loadout for Recon Gunner (swat)
	
	By Fawks
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {
        classname = "rhs_weap_m24sws";
        muzzle = "rhsusf_acc_m24_silencer_black";
		bipod = "rhsusf_acc_harris_swivel";
        laser = "";
        ammo = "rhsusf_5Rnd_762x51_m118_special_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "rhsusf_acc_leupoldmk4";
			
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "rhsusf_weap_glock17g4";
		muzzle = "rhsusf_acc_omega9k";
        ammo = "rhsusf_mag_17Rnd_9x19_JHP";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "UK3CB_CW_US_B_LATE_U_SF_CombatUniform_01_BLK";
    };
    
    class Vest : Vest
    {
        classname = "UK3CB_TKP_B_V_TacVest_Blk";
        // List of items
        rhsusf_5Rnd_762x51_m118_special_Mag = 4;
		rhsusf_mag_17Rnd_9x19_JHP = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
		ACE_M84 = 3;
    };
	
	class Backpack : Backpack
    {
        classname = "";
    };
	
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};