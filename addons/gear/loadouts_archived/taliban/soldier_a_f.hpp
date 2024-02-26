/*======================================
	Loadout for MMG Ammo Bearer (Taliban)
======================================*/
class soldier_a_f : soldier_f
{
    
    
    class Backpack : Backpack
    {
        classname = "B_FieldPack_cbr";
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