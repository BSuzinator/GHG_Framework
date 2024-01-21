/*======================================
	Loadout for MMG Ammo Bearer (serbian)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;

        rhsusf_100Rnd_762x51 = 5;

        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 5;

    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};