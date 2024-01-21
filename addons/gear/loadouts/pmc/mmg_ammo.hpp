/*======================================
	Loadout for MMG Ammo Bearer (pmc)
======================================*/
class mmg_ammo : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_2";
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Coyote";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;

        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 5;

        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 5;

    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
	headgear = "vn_b_boonie_05_03";
	facewear = "G_Headset_lxWS";
};