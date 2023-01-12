/*======================================
	Loadout for Crew (swat)
	
	By Fawks
======================================*/
class lynx_crew : squad_rifleman
{
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
		rhsusf_mag_17Rnd_9x19_JHP = 5;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
    };
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};