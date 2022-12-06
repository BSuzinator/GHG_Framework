/*======================================
	Loadout for Squad Leads (swat)
	
	By Fawks
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m4a1_blockII_M203_bk";

        class Scopes : Scopes
        {
            acog = "optic_holosight_smg_blk_f";
			laser = "rhsusf_acc_anpeq15side_bk";
			ammo = "UK3CB_AUG_30Rnd_556x45_Magazine";
			bipod = "rhsusf_acc_rvg_blk";
			muzzle = "rhsusf_acc_nt4_black";
        };
    };
    
	class Weapon_2 : Weapon_2  // Pistol
	{ 
		classname = "rhsusf_weap_glock17g4";
        ammo = "rhsusf_mag_17Rnd_9x19_JHP";
		muzzle = "rhsusf_acc_omega9k";
	};
	
	class Uniform : Uniform
    {
        classname = "UK3CB_CW_US_B_LATE_U_SF_CombatUniform_01_BLK";
    };
	
    class Vest : Vest
    {
		classname = "UK3CB_TKP_B_V_TacVest_Blk";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
		rhsusf_mag_17Rnd_9x19_JHP = 6;
    };
    
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_blk";
        // List of items
		rhsusf_mag_m4009 =3;
        rhs_mag_M441_HE = 0;
        rhs_mag_m661_green = 2;
        rhs_mag_m662_red = 2;
        rhs_mag_m713_red = 2;
        rhs_mag_m715_green = 2;
        rhs_mag_m714_white = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};