/*======================================
	Loadout for Demo Defusal (baf)
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
        classname[] = { "V_EOD_olive_F", "V_EOD_blue_F", "V_EOD_olive_F", "V_EOD_olive_F", "V_EOD_coyote_F" };
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname = "CUP_B_Bergen_BAF";
        // List of items
    };
	
    headgear[] = { "lxWS_H_PASGT_goggles_white_F", "lxWS_H_PASGT_goggles_white_F", "lxWS_H_PASGT_goggles_white_F", "lxWS_H_PASGT_goggles_white_F", "lxWS_H_PASGT_goggles_white_F" };
};