/*======================================
	Loadout for Squad Leads (baf)
======================================*/
class squad_lead : squad_rifle
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_M203s_wd", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s_d"};
        grenade = "rhs_mag_M441_HE";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ucp_Squadleader", "rhsusf_iotv_ucp_Squadleader" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhsusf_falconii", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc" };
        // List of items
        rhs_mag_M441_HE = 10;
        rhs_mag_M585_white = 5;
        rhs_mag_m661_green = 2;
        rhs_mag_m662_red = 2;
        rhs_mag_m713_Red = 2;
        rhs_mag_m715_Green = 2;
        rhs_mag_m714_White = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "UK3CB_BAF_H_Mk7_Camo_A_headset", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_Mk6_DPMW_A", "rhsusf_ach_helmet_headset_ucp", "rhsusf_ach_helmet_headset_ucp" };
};