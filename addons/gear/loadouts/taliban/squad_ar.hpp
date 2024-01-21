/*======================================
	Loadout for Squad Autorifleman (taliban)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_RPK";
        ammo = "rhs_75Rnd_762x39mm";
        bipod = "";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        rhs_30Rnd_762x39mm = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        rhs_75Rnd_762x39mm = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "LOP_ISTS_Fieldpack_PKM" };
        // List of items
        rhs_75Rnd_762x39mm = 3;
    };
};