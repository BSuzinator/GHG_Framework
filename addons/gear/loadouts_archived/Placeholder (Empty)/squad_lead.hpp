/*======================================
	Loadout for Squad Leads (placeholder)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";

        class Scopes : Scopes
        {
            acog = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "";
        ammo = "";
	};
	
	class Uniform : Uniform
    {
        classname = "";
    };
	
    class Vest : Vest
    {
		classname = "";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "";

    };
	
	class Binoculars : Binoculars
    {
        classname = "";
    };
	
	headgear = "";
	facewear = "";
};