/*======================================
	Loadout for Squad Autorifleman (nato_a3)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "arifle_MX_SW_F", "arifle_MX_SW_khk_F", "arifle_MX_SW_Black_F" };
        ammo = "100Rnd_65x39_caseless_black_mag";
        bipod[] = { "bipod_01_F_snd", "bipod_01_F_khk", "bipod_01_F_blk" };
    };
    
    class Vest : Vest
    {
        classname[] = { "V_PlateCarrier2_rgr", "V_PlateCarrier2_tna_F", "V_PlateCarrier2_wdl" };
        // Inherited item overrides
        30Rnd_65x39_caseless_black_mag = 0;
        SmokeShell = 1;
        HandGrenade = 1;
        // List of items
        100Rnd_65x39_caseless_black_mag = 4;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_rgr", "B_AssaultPack_tna_F", "B_AssaultPack_wdl_F" };
        // List of items
        100Rnd_65x39_caseless_black_mag = 5;
    };
};