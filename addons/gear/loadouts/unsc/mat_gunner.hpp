/*======================================
	Loadout for MAT Gunner (unsc)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "OPTRE_M41_SSR";
        ammo = "OPTRE_M41_Twin_HEAT";
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Heavy";
        // List of items
        OPTRE_M41_Twin_HEAT = 2;
        OPTRE_M41_Twin_HE = 2;
    };
};