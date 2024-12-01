/*======================================
	Loadout for MAT Gunner (aaf_a3)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "launch_I_Titan_short_F";
        ammo = "Titan_AT";
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_oli";
        // List of items
        Titan_AT = 2;
    };
};