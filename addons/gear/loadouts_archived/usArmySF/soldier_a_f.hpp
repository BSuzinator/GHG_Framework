/*======================================
	Loadout for MMG Ammo Bearer (usArmySF)
======================================*/
class soldier_a_f : soldier_f
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};