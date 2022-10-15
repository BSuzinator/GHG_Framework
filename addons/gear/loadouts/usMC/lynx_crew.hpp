/*======================================
	Loadout for Crew (usMC)
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
            holo_alt = "rhsusf_acc_eotech_552";
        };
    };
	
	class Vest : Vest
    {
        classname = "rhsusf_spc_patchless_radio";
        // List of items
        rhs_mag_30Rnd_556x45_M855_Stanag = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = {"rhsusf_cvc_helmet", "rhsusf_cvc_green_helmet"};
    facewear[] = {"rhsusf_shemagh2_tan", "rhsusf_shemagh2_grn"};
};