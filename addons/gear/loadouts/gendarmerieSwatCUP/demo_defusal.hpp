/*======================================
	Loadout for Demo Defusal (gendamarieSwat)
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
        classname = "V_EOD_blue_F";
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_blk";
        // List of items
		GHG_spikeStripItem = 0;
    };
	
    headgear = "lxWS_H_PASGT_goggles_white_F";
};