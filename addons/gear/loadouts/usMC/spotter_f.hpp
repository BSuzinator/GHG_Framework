/*======================================
	Loadout for Recon Spotter (usMC)
======================================*/
class spotter_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
		rhs_mag_30Rnd_556x45_M855_Stanag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        rhsusf_5Rnd_300winmag_xm2010 = 10;
    };
};
