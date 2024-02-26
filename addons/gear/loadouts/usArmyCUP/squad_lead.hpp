/*======================================
	Loadout for Squad Leads (usArmy)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_desert_GL"};
        grenade = "CUP_1Rnd_HE_M203";

        class Scopes : Scopes
        {
            acog = "CUP_optic_ACOG_TA01B_RMR_Black";
        };
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_UCP_TL_USArmy", "CUP_V_B_IOTV_UCP_TL_USArmy" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_UCP", "CUP_B_US_Assault_UCP" };
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
	
    headgear[] = { "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP" };
};