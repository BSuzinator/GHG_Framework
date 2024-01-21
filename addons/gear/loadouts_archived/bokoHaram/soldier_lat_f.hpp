/*======================================
	Loadout for Rifleman(AT) (Boko Haram)
======================================*/
class soldier_lat_f : soldier_f
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg7";
        ammo = "CUP_PG7VL_M";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
        // List of items
        CUP_PG7VL_M = 1;
    };
};