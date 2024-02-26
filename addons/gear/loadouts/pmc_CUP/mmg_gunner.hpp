/*======================================
	Loadout for MMG Gunner (pmc)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {

        classname = "rhs_weap_m240B";
        ammo = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";

        classname = "CUP_lmg_M240_B";
        ammo = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";

        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_ElcanM145";
        };
    };
	
	class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_39";
    };
	
	class Vest : Vest
    {
		classname = "CUP_V_B_IOTV_OEFCP_MG_USArmy";
        // List of items

		CUP_20Rnd_762x51_B_SCAR = 0;
		CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;

		CUP_20Rnd_762x51_B_SCAR = 0;
		CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;

		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Coyote";
        // List of items

        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;

        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;

    };
	headgear = "vn_b_bandana_01";
	facewear = "G_Headset_lxWS";
};