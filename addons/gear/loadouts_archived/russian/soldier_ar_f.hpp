/*======================================
	Loadout for Autorifleman (Russian)
======================================*/
class soldier_ar_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_rpk74m";
        ammo = "rhs_100Rnd_545X39_7N6_RPK";
        bipod = "";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        rhs_30Rnd_545x39_7N10_AK = 0;
        rhs_mag_rdg2_white = 1;
        rhs_mag_rgo = 1;
        // List of items
        rhs_100Rnd_545X39_7N6_RPK = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "rhs_assault_umbts";
        // List of items
        rhs_100Rnd_545X39_7N6_RPK = 3;
    };
};