/*======================================
	Loadout for Assistant Autorifleman (usArmySF)
======================================*/
class soldier_aar_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
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
        rhsusf_100Rnd_556x45_soft_pouch = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};