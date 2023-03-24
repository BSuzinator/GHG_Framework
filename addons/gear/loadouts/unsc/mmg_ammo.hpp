/*======================================
	Loadout for MMG Ammo Bearer (unsc)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Heavy";
        // List of items
		ACE_Canteen = 2;
        OPTRE_100Rnd_762x51_Box_Tracer = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "OPTRE_Binoculars";
    };
};