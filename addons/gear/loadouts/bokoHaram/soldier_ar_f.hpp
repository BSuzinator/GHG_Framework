/*======================================
	Loadout for Autorifleman (Boko Haram)
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
        rhs_30Rnd_545x39_7N6_AK = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        rhs_100Rnd_545X39_7N6_RPK = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
        // List of items
        rhs_100Rnd_545X39_7N6_RPK = 3;
    };
};