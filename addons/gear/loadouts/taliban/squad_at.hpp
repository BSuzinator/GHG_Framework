/*======================================
	Loadout for Squad Rifleman(AT) (taliban)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_RPG7V";
        ammo = "CUP_PG7VL_M";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	class Backpack : Backpack
    {
        classname = "CUP_B_RPGPack_Khaki";
        // List of items
        CUP_PG7VL_M = 1;
    };
};