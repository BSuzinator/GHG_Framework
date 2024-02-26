/*======================================
	Loadout for Squad Assistant Autorifleman (usArmy)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 6;

    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};