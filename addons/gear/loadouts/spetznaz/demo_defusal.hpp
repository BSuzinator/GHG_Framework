/*======================================
	Loadout for Demo Defusal (russian)
======================================*/
class demo_defusal : squad_rifleman
{
	
	class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Vest : Vest
    {
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname = "CUP_B_Kombat_Olive";
    };
	
};