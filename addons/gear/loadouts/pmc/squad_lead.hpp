/*======================================
	Loadout for Squad Leads (pmc)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_Mk17_CQC_FG";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 

		classname = "rhs_weap_m320";
        ammo = "CUP_1Rnd_HE_M203";

		classname = "vn_m79_p";
        ammo = "CUP_1Rnd_HE_M203";

	};
	
	class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_43";
    };
	
    class Vest : Vest
    {
		classname = "CUP_V_B_IOTV_OEFCP_SL_USArmy";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Coyote";
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
	
	headgear = "CUP_H_PMC_Cap_Back_PRR_Tan";
	facewear = "vn_b_bandana_a";
};