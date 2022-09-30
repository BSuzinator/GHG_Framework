/*======================================
	Loadout for MMG Ammo Bearer (russian)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname = "rhs_assault_umbts";
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