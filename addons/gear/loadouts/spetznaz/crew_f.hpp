/*======================================
	Loadout for Vehicle Crew (spetznaz)
======================================*/
class crew_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            magnified = "";
        };
    };
	
    class Uniform : Uniform
    {
        ACE_microDAGR = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "LOP_V_6B23_CrewOfficer_TAN", "rhsgref_6b23_ttsko_mountain_officer", "UK3CB_AAF_I_V_Falcon_1_DIGI_BLK", "V_RebreatherB"};
        rhs_30Rnd_762x39mm_polymer = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_rgd5 = 1;
        ACE_EntrenchingTool = 0;
    };
    
    facewear[] = { "rhsusf_shemagh2_tan", "rhsusf_shemagh2_grn", "rhsusf_shemagh_white", "G_B_Diving"};
    
    class Binoculars : Binoculars
    {
        classname = "rhsusf_bino_m24_ARD";
    };
};