/*======================================
	Loadout for Squad Autorifleman (Snow Tigers)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "LMG_Mk200_F";
        ammo = "200Rnd_65x39_cased_Box";
        bipod = "rhs_acc_harris_swivel";
		muzzle = "muzzle_snds_65_ti_blk_f";
		acog = "optic_arco_blk_f";
    };
	
    class Vest : Vest
    {
		classname = "IP_V_HarnessO_gryST";
        // Inherited item overrides
        30Rnd_65x39_caseless_green = 0;
        rhssaf_mag_brd_m83_white = 1;
        rhs_mag_rgn = 1;
        // List of items
        200Rnd_65x39_cased_Box = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "IP_B_AssaultPack_SnowTiger";
        // List of items
        200Rnd_65x39_cased_Box = 1;
    };

};