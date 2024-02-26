/*======================================
	Loadout for MMG Ammo Bearer (bokoHaram)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_AssaultPack_Coyote" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};