/*======================================
	Loadout for Squad Autorifleman (ldf_a3)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "LMG_Mk200_black_F";
        ammo = "200Rnd_65x39_cased_Box_Red";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        30Rnd_65x39_caseless_msbs_mag = 0;
        SmokeShell = 1;
        HandGrenade = 1;
        // List of items
        200Rnd_65x39_cased_Box_Red = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_eaf_F";
        // List of items
        200Rnd_65x39_cased_Box_Red = 2;
    };
};