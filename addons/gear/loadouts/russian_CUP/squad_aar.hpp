/*======================================
	Loadout for Squad Assistant Autorifleman (russian)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "CUP_B_HikingPack_Civ";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};