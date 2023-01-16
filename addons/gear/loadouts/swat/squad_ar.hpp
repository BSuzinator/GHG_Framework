/*======================================
	Loadout for Squad Breacher (swat)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L128A1";
		laser = "rhsusf_acc_anpeq15side_bk";
        ammo = "UK3CB_BAF_12G_Pellets";
    };
    
	class Uniform : Uniform
    {

    };
	
    class Vest : Vest
    {
		classname = "UK3CB_TKP_B_V_TacVest_Blk";
        // Inherited item overrides
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        rhsusf_acc_anpeq15side_bk = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "B_LegStrapBag_black_F";
        // List of items
        ACE_CableTie = 10;
    };
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};