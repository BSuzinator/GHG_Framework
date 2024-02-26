/*======================================
	Loadout for Crew (bafCW)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo[] = { "", "", "", "", "" };
        };
    };
	
	class Vest : Vest
    {
        // List of items
        UK3CB_BAF_762_20Rnd_T = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "UK3CB_BAF_H_Mk6_DPMW_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DDPM_A", "UK3CB_BAF_H_Mk6_DDPM_B", "UK3CB_BAF_H_Mk7_Win_ESS_A", "UK3CB_BAF_H_Mk7_Win_ESS_A" };
    facewear[] = { "UK3CB_BAF_G_Tactical_Black", "UK3CB_BAF_G_Tactical_Grey", "UK3CB_BAF_G_Tactical_Orange", "UK3CB_BAF_G_Tactical_Yellow", "UK3CB_BAF_G_Tactical_Clear", "UK3CB_BAF_G_Tactical_Black" };
};