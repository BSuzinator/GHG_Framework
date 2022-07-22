/*======================================
	Loadout for Squad Autorifleman (usKorea)
======================================*/
class squad_ar : squad_rifle
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1918";
        ammo = "vn_m1918_mag";
        bipod = "vn_bipod_m1918";
        laser = "";
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_06";
        // Inherited item overrides
        vn_carbine_15_mag = 0;
        vn_m18_white_mag = 1;
        vn_m61_grenade_mag = 1;
        // List of items
        vn_m1918_mag = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_02";
        // List of items
        vn_m1918_mag = 8;
    };
	headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};