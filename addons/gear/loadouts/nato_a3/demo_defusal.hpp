/*======================================
	Loadout for Demo Defusal (nato_a3)
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
        classname[] = { "V_EOD_olive_F", "V_EOD_olive_F", "V_EOD_olive_F" };
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_rgr", "B_AssaultPack_tna_F", "B_AssaultPack_wdl_F" };
    };
	
    headgear[] = { "G_Combat", "G_Combat_Goggles_tna_F", "G_Combat_Goggles_tna_F" };
};