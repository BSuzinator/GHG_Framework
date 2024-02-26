/*======================================
	Loadout for MMG Gunner (bokoHaram)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_Pecheneg";
        ammo = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_Elcan_SpecterDR_coyote";
        };
    };
	
	class Vest : Vest
    {
        // List of items
		CUP_30Rnd_762x39_AK47_bakelite_M = 0;
		CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "CUP_B_AssaultPack_Coyote" };
        // List of items
        CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M = 3;
    };
	headgear[] = { "H_turban_02_mask_snake_lxws" };
};