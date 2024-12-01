/*======================================
	Loadout for Crew (csat_a3)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "arifle_Katiba_C_F";
        class Scopes : Scopes
        {
            red_dot = "optic_ACO_grn";
            holo = "optic_Holosight_blk_F";
            red_dot_magnified = "";
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "V_BandollierB_khk", "V_BandollierB_blk" };
        // List of items
        30Rnd_65x39_caseless_green = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        HandGrenade = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "H_HelmetCrew_O";
    facewear = "G_Bandanna_khk";
};