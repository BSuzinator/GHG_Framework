/*======================================
	Loadout for Fixed Wing Pilots (Wastelanders)
======================================*/
class rptr_pilot : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
        
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
			alt_holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "";
		muzzle = "";
        laser = "";
        ammo = "";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "";
    };
    
    class Vest : Vest
    {
        classname = "";

    };
    
    headgear = "";
    facewear = "";
};