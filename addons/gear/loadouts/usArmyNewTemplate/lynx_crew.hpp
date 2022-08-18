/*======================================
	Loadout for Crew (usArmy)
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
        classname[] = { "rhsusf_iotv_ocp_Repair", "rhsusf_iotv_ocp_Repair", "rhsusf_iotv_ocp_Repair", "rhsusf_iotv_ucp_Repair", "rhsusf_iotv_ucp_Repair" };
        // List of items
        rhs_mag_30Rnd_556x45_M855A1_Stanag = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "rhsusf_cvc_green_helmet", "rhsusf_cvc_green_helmet", "rhsusf_cvc_green_helmet", "rhsusf_cvc_helmet", "rhsusf_cvc_helmet" };
    facewear[] = { "rhsusf_shemagh2_gogg_grn", "rhsusf_shemagh2_gogg_od", "rhsusf_shemagh2_gogg_od", "rhsusf_shemagh2_gogg_tan", "rhsusf_shemagh2_gogg_tan" };
};