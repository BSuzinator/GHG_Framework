/*======================================
	Loadout for Rifleman (placeholder)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
		bipod = "";
		
		class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt = "";
            holo_alt_camo = "";
        };
        
    };
    
    class Uniform : Uniform
    {
        classname = "";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "";

    };
	headgear = "";
	facewear = "";
};