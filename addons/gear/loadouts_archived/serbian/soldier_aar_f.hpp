/*======================================
	Loadout for Assistant Autorifleman (serbian)
======================================*/
class soldier_aar_f : soldier_f
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
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