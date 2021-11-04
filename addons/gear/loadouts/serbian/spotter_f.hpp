/*======================================
	Loadout for Recon Spotter (serbian)
======================================*/
class spotter_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
		rhssaf_30rnd_556x45_EPR_G36 = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        rhsusf_5Rnd_300winmag_xm2010 = 10;
    };
	
};
