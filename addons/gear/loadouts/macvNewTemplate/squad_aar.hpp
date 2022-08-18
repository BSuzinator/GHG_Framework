/*======================================
	Loadout for Squad Assistant Autorifleman (macv)
======================================*/
class squad_aar : squad_rifleman
{
    class Vest : Vest
    {
		ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_05";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        vn_m63a_100_mag = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
    headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};