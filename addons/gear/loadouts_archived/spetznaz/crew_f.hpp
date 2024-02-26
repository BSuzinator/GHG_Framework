/*======================================
	Loadout for Vehicle Crew (spetznaz)
======================================*/
class crew_f : soldier_f
{
    
	
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
        CUP_30Rnd_762x39_AK47_bakelite_M_polymer = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_rgd5 = 1;
        ACE_EntrenchingTool = 0;
		ACE_Canteen = 0;
    };
    
    facewear[] = { "rhsusf_shemagh2_tan", "CUP_G_Scarf_Face_Grn", "rhsusf_shemagh_white", "G_B_Diving"};
    
    class Binoculars : Binoculars
    {
        classname = "rhsusf_bino_m24_ARD";
    };
};