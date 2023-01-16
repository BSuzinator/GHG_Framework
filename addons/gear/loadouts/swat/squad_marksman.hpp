/*======================================
	Loadout for Squad Marksman (swat)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_SPAR_03_blk_F";
        laser = "rhsusf_acc_anpeq15side_bk";
		muzzle = "muzzle_snds_b";
        ammo = "20Rnd_762x51_Mag";
		bipod = "rhsusf_acc_harris_bipod";
		
        class Scopes : Scopes
        {
            acog = "roptic_mrco";
			holo = "optic_holosight_blk_f";
        };
    };
    
	class Uniform : Uniform
	{
		classname = "UK3CB_CW_US_B_LATE_U_SF_CombatUniform_01_BLK";
	};
	
    class Vest : Vest
    {
        // List of items
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
        20Rnd_762x51_slr_lxWS = 0;
		20Rnd_762x51_Mag = 5;
    };
    
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};