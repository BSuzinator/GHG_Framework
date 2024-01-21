/*======================================
	Loadout for Recon Spotter (usMC)
======================================*/
class spotter_f : soldier_f
{
    
	
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
        CUP_5Rnd_762x67_M2010_M = 10;
    };
};
