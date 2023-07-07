/*======================================
	Loadout for Rifleman (bafCW)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "UK3CB_BAF_L1A1_Wood", "UK3CB_BAF_L1A1_Wood", "UK3CB_BAF_L1A1_Wood", "UK3CB_BAF_L1A1_Wood", "UK3CB_BAF_L1A1_Wood", "UK3CB_BAF_L1A1_Wood" };
        laser = "";
        ammo = "UK3CB_BAF_762_20Rnd_T";
		bipod = "";
        
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
			alt_holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo[] = { "", };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "UK3CB_BAF_U_Smock_DPMW", "UK3CB_BAF_U_Smock_DPMW", "UK3CB_BAF_U_Smock_DPMW", "UK3CB_BAF_U_Smock_DDPM", "UK3CB_BAF_U_Smock_Arctic",	"UK3CB_BAF_U_Smock_Arctic" };
		ACRE_PRC343 = 0;
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW", "UK3CB_BAF_V_PLCE_Webbing_DPMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_DDMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_PLCE_Webbing_Winter" };
        // List of items
        UK3CB_BAF_762_20Rnd_T = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "UK3CB_BAF_H_Mk6_DPMW_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DDMW_A", "UK3CB_BAF_H_Mk6_DDMW_B", "UK3CB_BAF_H_Mk7_Win_ESS_A",	"UK3CB_BAF_H_Mk7_Win_ESS_A" };
    facewear = "";
};