/*======================================
	Loadout for Squad Assistant Autorifleman (baf)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "CUP_B_Bergen_BAF";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};