/*======================================
	Loadout for Recon Ammo Bearer (serbian)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		CUP_30Rnd_556x45_G36 = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_Kitbag_rgr";
        CUP_5Rnd_762x67_M2010_M = 10;
    };
	
};
