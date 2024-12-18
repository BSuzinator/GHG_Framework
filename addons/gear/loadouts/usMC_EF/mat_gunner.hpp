/*======================================
	Loadout for MAT Gunner (usMC_EF)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "launch_B_Titan_short_F";
        ammo = "Titan_AT";
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "EF_B_Carryall_coy";
        // List of items
        Titan_AT = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};