/*======================================
	Loadout for Squad Autorifleman (gendamarieSwat)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_minimi_railed";
        ammo = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249"
        bipod = "";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        CUP_25Rnd_556x45_Famas = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 2;
		GHG_spikeStripItem = 0;
    };
};