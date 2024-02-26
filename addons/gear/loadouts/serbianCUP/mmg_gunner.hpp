/*======================================
	Loadout for MMG Gunner (serbian)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "CUP_lmg_M240";
        ammo = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
        bipod = "";

		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_ElcanM145";
        };
    };
	
	class Vest : Vest
    {
        classname = "CUP_V_CZ_vest12";
        // List of items
		CUP_30Rnd_556x45_G36 = 0;
		CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr" };
        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;

    };
};