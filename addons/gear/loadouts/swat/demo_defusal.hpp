/*======================================
	Loadout for Demo Defusal (swat)
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
        classname = "UK3CB_TKP_B_V_TacVest_Blk";
        // List of items
		ACE_DefusalKit = 1;
    };

};