/*======================================
	Loadout for MMG Gunner (usMC)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_M240";
        ammo = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_Elcan_SpecterDR_RMR_black";
        };
    };
	
	class Vest : Vest
    {
        classname = "CUP_V_B_Eagle_SPC_MG";
        // List of items
		CUP_30Rnd_556x45_Stanag = 0;
		CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 2;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        // List of items
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
    };
};