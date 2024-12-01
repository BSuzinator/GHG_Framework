/*======================================
	Loadout for Squad Autorifleman (csat_a3_pacific)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_CTARS_ghex_F";
        ammo = "100Rnd_580x42_Mag_F";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        30Rnd_580x42_Mag_F = 0;
        SmokeShell = 1;
        HandGrenade = 1;
        // List of items
        100Rnd_580x42_Mag_F = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        // List of items
        100Rnd_580x42_Mag_F = 2;
    };
};