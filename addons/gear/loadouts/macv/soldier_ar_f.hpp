/*======================================
	Loadout for Autorifleman (macv)
======================================*/
class soldier_ar_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m63a_lmg";
        ammo = "vn_m63a_100_mag";
        bipod = "";
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_06";
        // Inherited item overrides
        vn_m16_20_mag = 0;
        vn_m18_white_mag = 1;
        vn_m61_grenade_mag = 1;
        // List of items
        vn_m63a_100_mag = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_02";
        // List of items
        vn_m63a_100_mag = 3;
    };
	headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};