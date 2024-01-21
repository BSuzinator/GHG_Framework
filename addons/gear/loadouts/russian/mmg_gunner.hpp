/*======================================
	Loadout for MMG Gunner (russian)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_Pecheneg";
        ammo = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_PechenegScope";
        };
    };
	
	class Vest : Vest
    {
        // List of items
		CUP_30Rnd_545x39_AK_M = 0;
		CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_HikingPack_Civ";
        // List of items
        CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M = 3;
    };
};