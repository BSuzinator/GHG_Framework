/*======================================
	Loadout for Demo Defusal (bokoHaram)
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
        classname[] = { "UK3CB_TKA_B_V_Carrier_Tan" };
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_desert_lxWS" };
        // List of items
    }
	
};