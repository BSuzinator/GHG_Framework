/*======================================
	Loadout for Recon Ammo Bearer (serbian)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
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
        classname = "rhssaf_kitbag_md2camo";
        rhsusf_5Rnd_300winmag_xm2010 = 10;
    };
	
};
