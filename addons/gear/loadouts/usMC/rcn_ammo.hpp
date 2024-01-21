/*======================================
	Loadout for Recon Ammo Bearer (usMC)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		CUP_30Rnd_556x45_Stanag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        rhsusf_5Rnd_300winmag_xm2010 = 10;
    };
	
};
