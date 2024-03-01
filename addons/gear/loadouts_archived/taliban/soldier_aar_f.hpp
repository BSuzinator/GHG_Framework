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
        classname = "B_FieldPack_cbr";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 3;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};