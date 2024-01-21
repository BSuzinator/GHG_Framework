/*======================================
	Loadout for Squad Leads (usArmySF)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_desert_GL" };
        grenade = "CUP_1Rnd_HE_M203";

        class Scopes : Scopes
        {
            acog = "CUP_optic_Elcan_SpecterDR_RMR_black";
        };
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Grenadier_M81";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_Kombat_Olive", "CUP_B_Kombat_Olive", "CUP_B_Kombat_Olive" };
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
	
    headgear[] = { "CUP_H_USArmy_MICH_GCOVERED_Headset_M81_headset", "CUP_H_OpsCore_Black_headset", "CUP_H_USArmy_ECH_GCOVERED_Headset_MARPAT_des" };
};