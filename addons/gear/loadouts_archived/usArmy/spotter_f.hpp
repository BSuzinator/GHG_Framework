/*======================================
	Loadout for Recon Spotter (usArmy)
======================================*/
class spotter_f : soldier_f
{
    
	
	class Vest : Vest
    {
		rhs_mag_30Rnd_556x45_M855A1_Stanag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "rhsusf_falconii", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc" };
        rhsusf_5Rnd_300winmag_xm2010 = 10;
    };
	
};
