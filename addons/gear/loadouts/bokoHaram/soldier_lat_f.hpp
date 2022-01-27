/*======================================
	Loadout for Rifleman(AT) (Boko Haram)
======================================*/
class soldier_lat_f : soldier_f
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg7";
        ammo = "rhs_rpg7_PG7VL_mag";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
        // List of items
        rhs_rpg7_PG7VL_mag = 1;
    };
};