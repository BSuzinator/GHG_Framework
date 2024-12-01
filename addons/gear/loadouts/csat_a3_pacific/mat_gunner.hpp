/*======================================
	Loadout for MAT Gunner (csat_a3_pacific)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "launch_O_Titan_short_F";
        ammo = "Titan_AT";
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_ghex_F";
        // List of items
        Titan_AT = 2;
    };
};