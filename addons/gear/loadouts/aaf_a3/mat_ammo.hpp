/*======================================
	Loadout for MAT Ammo Bearer (aaf_a3)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
	class Backpack : Backpack
    {
        classname = "B_Carryall_oli";
        // List of items
        Titan_AT = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};