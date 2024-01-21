/*======================================
	Loadout for MMG Gunner (serbian)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {

        classname = "rhs_weap_m240G";
        ammo = "rhsusf_100Rnd_762x51";
        bipod = "rhsusf_acc_saw_bipod";

        classname = "CUP_lmg_M240";
        ammo = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
        bipod = "";

		class Scopes : Scopes
        {
            mg_optic = "rhsusf_acc_ELCAN";
        };
    };
	
	class Vest : Vest
    {
        classname = "rhsusf_spc_mg";
        // List of items
		rhssaf_30rnd_556x45_EPR_G36 = 0;

		rhsusf_100Rnd_762x51 = 3;

		CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;

		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items

        rhsusf_100Rnd_762x51 = 3;

        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;

    };
};