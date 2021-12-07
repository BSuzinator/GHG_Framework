/*======================================
	Loadout for Assistant MTR (macv)
======================================*/
class support_amort_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_csw_carryMortarBaseplate";
    };
	
	class Vest : Vest
    {
        // List of items
        vn_m16_20_mag = 7;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_01";
        // List of items
		ACRE_SEM70 = 1;
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
	
	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
};