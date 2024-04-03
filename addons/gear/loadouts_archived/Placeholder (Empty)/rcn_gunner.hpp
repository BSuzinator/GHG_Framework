/*======================================
	Loadout for Recon Gunner (placeholder)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {
        classname = "";
        muzzle = "";
		bipod = "";
        laser = "";
        ammo = "";
        
        class Scopes : Scopes
        {
            sniper_optic = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "";
        ammo = "";
		class Scopes {}; 
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
	
	class Backpack : Backpack
    {
        classname = "";
    };
	
	headgear = "";
    facewear = "";
};