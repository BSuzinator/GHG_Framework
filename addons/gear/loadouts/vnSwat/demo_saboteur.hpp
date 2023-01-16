/*======================================
	Loadout for Demo Saboteur (vnSwat)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Vest : Vest
    {
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_trp_03_02";
        // List of items
        vn_mine_m16_mag = 2;
        vn_mine_tripwire_m16_04_mag = 1;
		vn_mine_m14_mag = 1;
		vn_mine_tripwire_arty_mag = 1;
		vn_mine_tm57_mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
};