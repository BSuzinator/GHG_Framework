/*======================================
	Loadout for Squad Autorifleman (usMC)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_M249";
        ammo = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249"
        bipod = "";
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Eagle_SPC_AR";
        // Inherited item overrides
        CUP_30Rnd_556x45_Stanag = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        // List of items
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 3;
    };
};