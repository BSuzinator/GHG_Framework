/*======================================
	Loadout for Squad Assistant Autorifleman (gendamarieSwat)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 6;
		GHG_spikeStripItem = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};