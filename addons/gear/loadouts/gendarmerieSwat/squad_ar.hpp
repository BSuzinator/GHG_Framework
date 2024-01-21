/*======================================
	Loadout for Squad Autorifleman (gendamarieSwat)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {

        classname = "rhs_weap_minimi_para_railed";
        ammo = "rhsusf_100Rnd_556x45_soft_pouch";
        bipod = "rhsusf_acc_saw_bipod";

        classname = "CUP_lmg_minimi_railed";
        ammo = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"
        bipod = "";

    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        UK3CB_FAMAS_25rnd_556x45 = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items

        rhsusf_100Rnd_556x45_soft_pouch = 3;

        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 3;

    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items

        rhsusf_100Rnd_556x45_soft_pouch = 2;

        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 2;

		GHG_spikeStripItem = 0;
    };
};