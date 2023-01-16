/*======================================
	Loadout for MMG Ammo Bearer (vnSwat)
======================================*/
class mmg_ammo : squad_rifleman
{
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_06";
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_05";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        vn_m60_100_mag = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
    headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};