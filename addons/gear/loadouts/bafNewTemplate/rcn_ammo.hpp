/*======================================
	Loadout for Recon Ammo Bearer (baf)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		UK3CB_BAF_556_30Rnd = 6;
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
