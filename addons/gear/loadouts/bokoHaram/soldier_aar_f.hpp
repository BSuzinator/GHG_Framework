/*======================================
	Loadout for Assistant Autorifleman (Boko Haram)
======================================*/
class soldier_aar_f : soldier_f
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhs_100Rnd_545X39_7N6_RPK = 3;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};