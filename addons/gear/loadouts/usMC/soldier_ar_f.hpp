/*======================================
	Loadout for Autorifleman (usMC)
======================================*/
class soldier_ar_f : soldier_f
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        name = "rhs_weap_m27iar";
        ammo = "rhs_mag_100Rnd_556x45_M855_cmag";
        bipod = "rhsusf_acc_harris_bipod";
        
        class Scopes : Scopes {};
    };
    
    class Weapon_2 : Weapon_2 { class Scopes : Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 { class Scopes : Scopes {}; }; // Launcher
    
    class Uniform : Uniform {};
    
    class Vest : Vest
    {
        name = "rhsusf_spc_iar";
        // Inherited item overrides
        rhs_mag_30Rnd_556x45_M855_Stanag = 0;
        SmokeShell = 0;
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_100Rnd_556x45_M855_cmag = 3;
    };
    
    class Backpack : Backpack
    {
        name = "rhsusf_assault_eagleaiii_coy";
        // List of items
        rhs_mag_100Rnd_556x45_M855_cmag = 3;
    };

    class Binoculars : Binoculars { class Scopes : Scopes {}; };
};