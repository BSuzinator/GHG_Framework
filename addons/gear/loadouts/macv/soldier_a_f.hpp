/*======================================
	Loadout for MMG Ammo Bearer (macv)
======================================*/
class soldier_a_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
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
};