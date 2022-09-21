/*======================================
	Loadout for Squad Rifleman(AT) (pmc)
======================================*/
class squad_at : squad_rifleman
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
        classname = "LOP_ISTS_RPG_Pack";
        // List of items
        rhs_rpg7_PG7VL_mag = 1;
    };
};