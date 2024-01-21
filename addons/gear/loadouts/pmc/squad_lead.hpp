/*======================================
	Loadout for Squad Leads (pmc)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_scarh_fde_cqc";

        class Scopes : Scopes
        {
            acog = "CUP_optic_ACOG_TA01B_RMR_Black";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "rhs_weap_m320";
        ammo = "CUP_1Rnd_HE_M203";
	};
	
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_orng_plaid";
    };
	
    class Vest : Vest
    {
		classname = "rhsusf_plateframe_teamleader";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
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
	
	headgear = "rhsusf_bowman_cap";
	facewear = "vn_b_bandana_a";
};