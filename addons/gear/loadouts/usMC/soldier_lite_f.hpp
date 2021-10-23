/*======================================
	Loadout for EW Specialist (usMC)
======================================*/
class soldier_lite_f : soldier_f
{
    class Weapon_1 : Weapon_1 { class Scopes : Scopes {}; }; // Rifle
    
    class Weapon_2 : Weapon_2 // Pistol
    {
        name = "hgun_esd_01_F";
        muzzle = "muzzle_antenna_03_f";
        //ammo = "ESD_01_DummyMagazine_1"; // Ammo count is supposed to be 4331 (433.1MHz)
        
        class Scopes : Scopes {};
    };
    
    class Weapon_3 : Weapon_3 { class Scopes : Scopes {}; }; // Launcher
    
    class Uniform : Uniform {};
    
    class Vest : Vest {};
    
    class Backpack : Backpack {};

    class Binoculars : Binoculars { class Scopes : Scopes {}; };
};