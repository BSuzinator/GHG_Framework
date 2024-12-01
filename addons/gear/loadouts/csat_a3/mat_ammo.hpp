/*======================================
	Loadout for MAT Ammo Bearer (csat_a3)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_ocamo", "B_Carryall_oucamo" };
        // List of items
        Titan_AT = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};