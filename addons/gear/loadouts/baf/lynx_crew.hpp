/*======================================
	Loadout for Crew (baf)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo[] = { "CUP_optic_Eotech553_OD", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech533" };
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_Osprey_Rifleman_F", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_Osprey_DPMW4", "UK3CB_BAF_V_Osprey_DPMT4", "UK3CB_BAF_V_Osprey_DDPM4" };
        // List of items
        CUP_30Rnd_556x45_Stanag_L85 = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "UK3CB_BAF_H_CrewHelmet_A", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_CrewHelmet_DPMW_A", "UK3CB_BAF_H_CrewHelmet_DPMT_A", "UK3CB_BAF_H_CrewHelmet_DDPM_A" };
    facewear[] = { "CUP_G_ESS_KHK_Scarf_Face_Tan", "rhsusf_shemagh2_gogg_white", "CUP_G_ESS_RGR", "CUP_G_ESS_RGR", "CUP_G_ESS_KHK_Scarf_Tan" };
};