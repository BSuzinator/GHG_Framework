/*======================================
	Loadout for Assistant Autorifleman (usMC)
======================================*/
class soldier_arr_f : soldier_f
{
    class Weapon_1 : Weapon_1 { class Scopes: Scopes {}; }; // Rifle
    
    class Weapon_2 : Weapon_2 { class Scopes: Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 { class Scopes: Scopes {}; }; // Launcher
    
    class Uniform : Uniform {};
    
    class Vest : Vest {};
    
    class Backpack : Backpack
    {
        name = "rhsusf_assault_eagleaiii_coy";
        // List of items
        ACE_SpareBarrel = 1;
        rhs_mag_100Rnd_556x45_M855_cmag = 5;
    };

    class Binoculars : Binoculars { class Scopes: Scopes {}; };
};