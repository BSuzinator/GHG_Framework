/*======================================
	Loadout for MAT Gunner (nato_a3)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname[] = {"launch_B_Titan_short_F", "launch_B_Titan_short_tna_F", "launch_I_Titan_short_F"};
        ammo = "Titan_AT";
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_mcamo", "B_Carryall_oli", "B_Carryall_wdl_F" };
        // List of items
        Titan_AT = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};