/*======================================
	Loadout for Squad Assistant Autorifleman (pmc)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "LOP_ISTS_Fieldpack_PKM" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhs_75Rnd_762x39mm = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};