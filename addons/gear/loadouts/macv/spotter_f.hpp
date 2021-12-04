/*======================================
	Loadout for Recon Spotter (macv)
======================================*/
class spotter_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
		vn_m16_20_mag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_01";
        vn_m40a1_t_mag = 10;
    };
};
