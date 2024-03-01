/*======================================
	Loadout for MAT Ammo Bearer (unsc)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Heavy";
        // List of items
        OPTRE_M41_Twin_HEAT = 2;
		OPTRE_M41_Twin_HE = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "OPTRE_Binoculars";
    };
};