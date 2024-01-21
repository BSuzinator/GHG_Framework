/*======================================
	Loadout for MMG Gunner (pmc)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m240B";
        ammo = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_Elcan_SpecterDR_RMR_black";
        };
    };
	
	class Uniform : Uniform
    {
        classname = "LOP_U_PMC_Fatigue_02";
    };
	
	class Vest : Vest
    {
		classname = "rhsusf_plateframe_machinegunner";
        // List of items
		rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
		CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
    };
	headgear = "vn_b_bandana_01";
	facewear = "G_Headset_lxWS";
};