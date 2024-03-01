/*======================================
	Loadout for Assistant Autorifleman (usArmySF)
======================================*/
class soldier_aar_f : soldier_f
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};