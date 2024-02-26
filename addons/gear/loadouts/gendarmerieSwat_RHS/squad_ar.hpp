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
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        UK3CB_FAMAS_25rnd_556x45 = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        rhsusf_100Rnd_556x45_soft_pouch = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "UK3CB_CW_US_B_LATE_B_RIF_04";
        // List of items
        rhsusf_100Rnd_556x45_soft_pouch = 2;
		GHG_spikeStripItem = 0;
    };
};