/*======================================
	Loadout for Demo Defusal (usMC_EF)
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
        classname = "V_EOD_olive_F",;
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
    };
	
    headgear = "G_Combat" ;
};