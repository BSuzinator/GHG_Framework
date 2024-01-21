/*======================================
	Loadout for Squad Leads (usArmy)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_M203s_wd", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s_d"};
        grenade = "CUP_1Rnd_HE_M203";

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
        CUP_1Rnd_HE_M203 = 10;
        CUP_1Rnd_StarCluster_White_M203 = 5;
        CUP_FlareGreen_M203 = 2;
        CUP_FlareRed_M203 = 2;
        CUP_1Rnd_SmokeRed_M203 = 2;
        CUP_1Rnd_SmokeGreen_M203 = 2;
        CUP_1Rnd_Smoke_M203 = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "rhsusf_ach_bare_wood_headset", "rhsusf_ach_bare_wood_headset", "rhsusf_ach_bare_wood_headset", "rhsusf_ach_helmet_headset_ucp", "rhsusf_ach_helmet_headset_ucp" };
};