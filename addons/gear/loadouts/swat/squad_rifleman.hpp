/*======================================
	Loadout for Rifleman (swat)
	
	By Fawks
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m4a1_blockII_bk";
        laser = "rhsusf_acc_anpeq15side_bk";
        ammo = "UK3CB_AUG_30Rnd_556x45_Magazine";
		bipod = "rhsusf_acc_rvg_blk";
		muzzle = "rhsusf_acc_nt4_black";
		
		
		class Scopes : Scopes
        {
            red_dot = "optic_r1_low_lxws";
            holo = "optic_holosight_smg_blk_f";
            holo_alt = "rhsusf_acc_eotech_552";
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
        UK3CB_AUG_30Rnd_556x45_Magazine = 3;
		rhsusf_mag_17Rnd_9x19_JHP = 3;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
		ACE_CableTie = 2;
		ACE_M84 = 3;
    };
    
    headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};