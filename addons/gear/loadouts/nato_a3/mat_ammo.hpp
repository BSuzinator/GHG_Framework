/*======================================
	Loadout for MAT Ammo Bearer (nato_a3)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
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