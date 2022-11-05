/*======================================
	Loadout for Squad Autorifleman (cbrn)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
	classname[] = { "arifle_MX_SW_Black_F", "arifle_MX_SW_khk_F", "arifle_MX_SW_Black_F"};
        ammo[] = {"100Rnd_65x39_caseless_black_mag_tracer", "100Rnd_65x39_caseless_khaki_mag_tracer", "100Rnd_65x39_caseless_black_mag_tracer"};
        bipod = "bipod_01_f_blk";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        30Rnd_65x39_caseless_black_mag_Tracer = 0;
        SmokeShell = 1;
        HandGrenade = 1;
        // List of items
        100Rnd_65x39_caseless_black_mag_tracer = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_blk" , "B_FieldPack_oli", "Gendar_Fieldpack"};
        // List of items
        100Rnd_65x39_caseless_black_mag_tracer = 2;
    };
};