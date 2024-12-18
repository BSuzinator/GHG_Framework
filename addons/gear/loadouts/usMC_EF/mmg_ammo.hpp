/*======================================
	Loadout for MMG Ammo Bearer (usMC_EF)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname =  "EF_B_Kitbag_coy";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        130Rnd_338_Mag = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};