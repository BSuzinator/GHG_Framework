/*======================================
	Loadout for Recon Spotter (Taliban)
======================================*/
class spotter_f : soldier_f
{
    
	
	class Vest : Vest
    {
		rhs_30Rnd_762x39mm = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "LOP_ISTS_Fieldpack_PKM";
        rhs_10Rnd_762x54mmR_7N1 = 10;
    };
	
};
