/*======================================
	Loadout for Demo Defusal (unsc)
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
        classname = "OPTRE_UNSC_M52A_Armor2_URB";
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack";
        // List of items
    };
	
    headgear = "OPTRE_UNSC_CH252_Helmet2_URB";
};