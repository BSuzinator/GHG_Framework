/*======================================
	Loadout for MMG Gunner (pmc)
======================================*/
class support_mg_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_M240_B";
        ammo = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_ElcanM145";
        };
    };
	
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_fatigue_02";
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