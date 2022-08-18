/*======================================
	Loadout for Explosive Specialist (usKorea)
======================================*/
class demo_explosive : squad_rifleman
{
    class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_03";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_trp_03_02";
        // List of items
        vn_mine_m112_remote_mag = 4;
		vn_mine_satchel_remote_02_mag = 2;
    };
    
    headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};