/*======================================
	Loadout for Demo Defusal (serbian)
======================================*/
class demo_defusal : squad_rifle
{
	
	class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Vest : Vest
    {
        classname[] = { "V_EOD_olive_F" };
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname[] = { "rhsusf_falconii" };
        // List of items
    };
	
    headgear = "lxWS_H_PASGT_goggles_white_F";
};