/*======================================
	Loadout for Squad Autorifleman (baf)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_L110A1";
        ammo = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
        bipod = "";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        CUP_30Rnd_556x45_Stanag_L85 = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_Bergen_BAF";
        // List of items
        CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = 2;
    };
};