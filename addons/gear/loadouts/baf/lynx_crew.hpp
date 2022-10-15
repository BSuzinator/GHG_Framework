/*======================================
	Loadout for Crew (baf)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_Osprey_Rifleman_F", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_Osprey_DPMW4", "UK3CB_BAF_V_Osprey_DPMT4", "UK3CB_BAF_V_Osprey_DDPM4" };
        // List of items
        UK3CB_BAF_556_30Rnd = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "UK3CB_BAF_H_CrewHelmet_A", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_CrewHelmet_DPMW_A", "UK3CB_BAF_H_CrewHelmet_DPMT_A", "UK3CB_BAF_H_CrewHelmet_DDPM_A" };
    facewear[] = { "rhsusf_shemagh2_gogg_od", "rhsusf_shemagh2_gogg_white", "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_tan" };
};