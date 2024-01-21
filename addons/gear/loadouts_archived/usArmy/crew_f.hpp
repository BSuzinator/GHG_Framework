/*======================================
	Loadout for Crew (usArmy)
======================================*/
class crew_f : soldier_f
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
        classname[] = { "CUP_V_B_IOTV_OCP_Empty_USArmy", "CUP_V_B_IOTV_OCP_Empty_USArmy", "CUP_V_B_IOTV_OCP_Empty_USArmy", "CUP_V_B_IOTV_UCP_Empty_USArmy", "CUP_V_B_IOTV_UCP_Empty_USArmy" };
        // List of items
        CUP_30Rnd_556x45_Stanag = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_UCP", "CUP_H_USArmy_HelmetACH_UCP" };
    facewear[] = { "CUP_G_ESS_RGR", "CUP_G_ESS_BLK_Scarf_Grn", "CUP_G_ESS_BLK_Scarf_Grn", "CUP_G_ESS_KHK_Scarf_Tan", "CUP_G_ESS_KHK_Scarf_Tan" };
};