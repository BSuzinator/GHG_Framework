/*======================================
	Loadout for MAT Ammo Bearer (odst)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Black";
        // List of items
        OPTRE_M41_Twin_HEAT = 2;
		OPTRE_M41_Twin_HE = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "OPTRE_Binoculars";
    };
};