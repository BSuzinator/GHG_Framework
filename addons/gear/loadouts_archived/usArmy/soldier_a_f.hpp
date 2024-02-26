/*======================================
	Loadout for MMG Ammo Bearer (usArmy)
======================================*/
class soldier_a_f : soldier_f
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};