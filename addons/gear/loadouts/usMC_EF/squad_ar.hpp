/*======================================
	Loadout for Squad Autorifleman (usMC_EF)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname =  "ef_arifle_mx_coy";
        ammo = "EF_100Rnd_65x39_caseless_coy_mag";
        bipod[] = { "bipod_01_F_snd", "bipod_01_F_khk", "bipod_01_F_blk" };
    };
    
    class Vest : Vest
    {
        classname =  "EF_V_AAV_Support_Coy";
        // Inherited item overrides
        EF_30Rnd_65x39_caseless_coy_mag = 0;
        SmokeShell = 1;
        HandGrenade = 1;
        // List of items
        EF_100Rnd_65x39_caseless_coy_mag = 4;
    };
    
    class Backpack : Backpack
    {
        classname = "EF_B_AssaultPack_coy";
        // List of items
        EF_100Rnd_65x39_caseless_coy_mag = 5;
    };
};