/*======================================
	Loadout for Squad Rifleman(AT) (csat_a3_pacific)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "launch_RPG32_ghex_F";
        ammo = "RPG32_F";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        // List of items
        RPG32_HE_F = 2;
        RPG32_F = 2;
    };
};