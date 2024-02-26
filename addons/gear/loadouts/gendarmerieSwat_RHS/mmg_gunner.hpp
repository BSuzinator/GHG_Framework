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
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "UK3CB_CW_US_B_LATE_B_RIF_04";
        // List of items
        rhsusf_100Rnd_762x51 = 3;
		GHG_spikeStripItem = 0;
    };
};