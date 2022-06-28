/*======================================
	Loadout for MMG Ammo Bearer (serbian)
======================================*/
class mmg_ammo : squad_rifle
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
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