/*======================================
	Loadout for MMG Gunner (usArmySF)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m240b_elcan";
        ammo = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_Elcan_SpecterDR_RMR_black";
        };
    };
	
	class Vest : Vest
    {
        classname = "rhsusf_mbav_mg";
        // List of items
		rhs_mag_30Rnd_556x45_Mk318_Stanag = 0;
		CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
    };
};