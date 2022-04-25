/*======================================
	Loadout for Assistant Autorifleman (Taliban)
======================================*/
class soldier_aar_f : soldier_f
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "LOP_ISTS_Fieldpack_PKM";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhs_75Rnd_762x39mm = 3;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};