/*======================================
	Loadout for Crew (nato_a3)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname[] = { "arifle_MXC_F", "arifle_MXC_khk_F", "arifle_MXC_Black_F" };
		laser = "";
        class Scopes : Scopes
        {
            red_dot = "optic_Aco";
            holo[] = { "optic_Holosight", "optic_Holosight_smg_khk_F", "optic_Holosight_blk_F" };
			rco[] = { "", "", "" };
            
        };
    };
	
	class Vest : Vest
    {
        classname = "V_BandollierB_rgr";
        // List of items
        30Rnd_65x39_caseless_black_mag = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        HandGrenade = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "H_HelmetCrew_B";
    facewear = "G_Bandanna_oli";
};