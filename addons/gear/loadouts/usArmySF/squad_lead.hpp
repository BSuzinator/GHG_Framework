/*======================================
	Loadout for Squad Leads (usArmySF)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_blockII_M203_wd", "rhs_weap_m4a1_blockII_M203", "rhs_weap_m4a1_blockII_M203_d" };
        grenade = "CUP_1Rnd_HE_M203";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_su230_mrds";
        };
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_mbav_grenadier";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhsusf_falconii", "rhsusf_falconii", "rhsusf_falconii_coy" };
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
	
    headgear[] = { "rhsusf_mich_bare_norotos_arc_alt_headset", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_mich_bare_norotos_arc_alt_tan_headset" };
};