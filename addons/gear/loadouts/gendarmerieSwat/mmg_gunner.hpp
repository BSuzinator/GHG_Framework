/*======================================
	Loadout for MMG Gunner (gendamarieSwat)
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

        // List of items
		CUP_25Rnd_556x45_Famas = 0;
		CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
		GHG_spikeStripItem = 0;
    };
};