/*======================================
	Loadout for Recon Spotter (Boko Haram)
======================================*/
class spotter_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
		rhs_30Rnd_545x39_7N6_AK = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
        rhs_10Rnd_762x54mmR_7N1 = 10;
    };
	
};
