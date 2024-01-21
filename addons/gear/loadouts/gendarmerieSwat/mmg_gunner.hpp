/*======================================
	Loadout for MMG Gunner (gendamarieSwat)
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

        // List of items

		UK3CB_FAMAS_25rnd_556x45 = 0;
		rhsusf_100Rnd_762x51 = 3;

		CUP_25Rnd_556x45_Famas = 0;
		CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;

		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items

        rhsusf_100Rnd_762x51 = 3;

        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 3;

		GHG_spikeStripItem = 0;
    };
};