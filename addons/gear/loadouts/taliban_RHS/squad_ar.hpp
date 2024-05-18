/*======================================
	Loadout for Squad Autorifleman (taliban)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_rpk74m";
        ammo = "rhs_60Rnd_545X39_7N22_AK";
        bipod = "";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        rhs_30Rnd_762x39mm = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        rhs_60Rnd_545X39_7N22_AK = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "LOP_ISTS_Fieldpack_PKM" };
        // List of items
        rhs_60Rnd_545X39_7N22_AK = 3;
    };
};