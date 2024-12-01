/*======================================
	Loadout for Crew (csat_a3_pacific)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "optic_ACO_grn";
            holo = "optic_Holosight_blk_F";
            red_dot_magnified = "";
        };
    };
	
	class Vest : Vest
    {
        classname = "V_BandollierB_ghex_F";
        // List of items
        30Rnd_580x42_Mag_F = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        HandGrenade = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "H_HelmetCrew_O_ghex_F" };
    facewear[] = { "G_Bandanna_oli" };
};