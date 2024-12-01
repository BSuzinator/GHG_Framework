/*======================================
	Loadout for Crew (ldf_a3)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "arifle_Mk20C_F";
        class Scopes : Scopes
        {
            mod_sight = "optic_ico_01_black_f";
            holo = "optic_Holosight_blk_F";
            red_dot_magnified = "";
        };
    };
	
	class Vest : Vest
    {
        classname = "V_BandollierB_oli";
        // List of items
        30Rnd_65x39_caseless_msbs_mag = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        HandGrenade = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "H_HelmetCrew_I" };
    facewear[] = { "G_Bandanna_oli" };
};