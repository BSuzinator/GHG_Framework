/*======================================
	Loadout for Assistant Autorifleman (macv)
======================================*/
class soldier_aar_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
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
        classname = "vm_m19_binocs_grn";
    };
};