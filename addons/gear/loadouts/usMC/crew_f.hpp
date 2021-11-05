/*======================================
	Loadout for Vehicle Crew (usMC)
======================================*/
class crew_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Uniform : Uniform
    {
        ACE_microDAGR = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_crewman";
        rhs_mag_30Rnd_556x45_M855_Stanag = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
    
    headgear[] = {"rhsusf_cvc_helmet", "rhsusf_cvc_green_helmet"};
    facewear[] = {"rhsusf_shemagh2_tan", "rhsusf_shemagh2_grn"};
    
    class Binoculars : Binoculars
    {
        classname = "rhsusf_bino_m24_ARD";
    };
};