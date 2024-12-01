/*======================================
	Loadout for Squad Autorifleman (csat_a3)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "LMG_Zafir_F";
        ammo = "150Rnd_762x54_Box";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        30Rnd_65x39_caseless_green = 0;
        SmokeShell = 1;
        HandGrenade = 1;
        // List of items
        150Rnd_762x54_Box = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_ocamo", "B_AssaultPack_blk" };
        // List of items
        150Rnd_762x54_Box = 4;
    };
};