/*======================================
	Loadout for Squad Autorifleman (aaf_a3)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "LMG_Mk200_F";
        ammo = "200Rnd_65x39_cased_Box";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        30Rnd_556x45_Stanag = 0;
        SmokeShell = 1;
        HandGrenade = 1;
        // List of items
        200Rnd_65x39_cased_Box = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_dgtl";
        // List of items
        200Rnd_65x39_cased_Box = 2;
    };
};