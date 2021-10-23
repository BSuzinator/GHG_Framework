/*======================================
	Loadout for Rifleman(AT) (usMC)
======================================*/
class soldier_lat_f : soldier_f
{
    class Weapon_1 : Weapon_1 { class Scopes : Scopes {}; }; // Rifle
    
    class Weapon_2 : Weapon_2 { class Scopes : Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        name = "rhs_weap_M136";
        ammo = "rhs_m136_mag";
        
        class Scopes : Scopes {};
    };
    
    class Uniform : Uniform {};
    
    class Vest : Vest {};
    
    class Backpack : Backpack {};

    class Binoculars : Binoculars { class Scopes : Scopes {}; };
};