/*======================================
	Loadout for MMG Ammo Bearer (gendamarieSwat)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;

        rhsusf_100Rnd_762x51 = 5;

        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 5;

		GHG_spikeStripItem = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};