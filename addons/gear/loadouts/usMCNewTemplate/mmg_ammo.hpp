/*======================================
	Loadout for MMG Ammo Bearer (usMC)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhsusf_100Rnd_762x51 = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};