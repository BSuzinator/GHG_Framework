/*======================================
	Loadout for MMG Gunner (usArmySF)
======================================*/
class support_MG_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_M240_B";
		muzzle = "muzzle_snds_h_mg_blk_f";
        ammo = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
        bipod = "rhsusf_acc_saw_bipod";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_ElcanM145";
        };
    };
	
	class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Grenadier_M81";
        // List of items
		CUP_30Rnd_556x45_Stanag = 0;
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