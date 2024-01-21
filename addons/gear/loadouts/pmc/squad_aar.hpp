/*======================================
	Loadout for Squad Assistant Autorifleman (pmc)
======================================*/
class squad_aar : squad_rifleman
{
    
    class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_31";
    };
	
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Coyote";
        // List of items
        ACE_SpareBarrel = 1;
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 3;
		ACE_Canteen = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
	headgear = "vn_b_boonie_05_03";
	facewear = "G_Headset_lxWS";
};