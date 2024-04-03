/*======================================
	Loadout for Squad Marksman (placeholder)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
		bipod = "";
		
        class Scopes : Scopes
        {
            magnified = "";
        };
    };
    
	class Uniform : Uniform
	{
		classname = "";
	};
	
    class Vest : Vest
    {

    };
    
	facewear = "";
	headgear = "";
};