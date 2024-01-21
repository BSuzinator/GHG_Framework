/*======================================
	Loadout for Squad Autorifleman (russian)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_rpk74m";
        ammo = "rhs_100Rnd_545X39_7N6_RPK";
        bipod = "";
		muzzle = "rhs_acc_tgpa";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        rhs_30Rnd_545x39_7N10_AK = 0;
        rhs_mag_rdg2_white = 1;
        rhs_mag_rgo = 1;
        // List of items
        rhs_100Rnd_545X39_7N6_RPK = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "rhs_tortila_khaki", "rhs_tortila_olive", "rhs_tortila_black", "rhs_tortila_black";
        // List of items
        rhs_100Rnd_545X39_7N6_RPK = 2;
    };
};