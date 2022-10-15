/*======================================
	Loadout for MMG Ammo Bearer (Boko Haram)
======================================*/
class soldier_a_f : soldier_f
{
    
    
    class Backpack : Backpack
    {
        classname = "B_Kitbag_rgr";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhs_100Rnd_762x54mmR = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};