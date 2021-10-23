/*======================================
	Loadout for FAC (usMC)
======================================*/
class soldier_uav : soldier_tl_f
{
    class Weapon_1 : Weapon_1 { class Scopes : Scopes {}; }; // Rifle

    class Weapon_2 : Weapon_2 { class Scopes : Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 { class Scopes : Scopes {}; }; // Launcher

    class Uniform : Uniform {};
    
    class Vest : Vest {};
    
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
    };

    class Binoculars : Binoculars
    {
        name = "Laserdesignator";
        ammo = "Laserbatteries";

        class Scopes : Scopes {};
    };
};