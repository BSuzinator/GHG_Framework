/*======================================
	Loadout for Squad Assistant Autorifleman (odst)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Black";
        // List of items
		ACE_Canteen = 2;
        OPTRE_200Rnd_95x40_Box_Tracer = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "OPTRE_Binoculars";
    };
};