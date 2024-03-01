/*======================================
	Loadout for MMG Ammo Bearer (russian)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname = "CUP_B_HikingPack_Civ";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};