/*======================================
	Loadout for Squad Autorifleman (bokoHaram)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_RPK74";
        ammo = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
        bipod = "";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        CUP_30Rnd_762x39_AK47_bakelite_M = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_AssaultPack_Coyote" };
        // List of items
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 3;
    };
};