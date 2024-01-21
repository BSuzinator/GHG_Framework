/*======================================
	Loadout for Recon Ammo Bearer (baf)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		CUP_30Rnd_556x45_Stanag_L85 = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Kitbag_MTP", "UK3CB_BAF_B_Kitbag_Arctic", "UK3CB_BAF_B_Kitbag_DPMW", "UK3CB_BAF_B_Kitbag_DPMT", "UK3CB_BAF_B_Kitbag_DDPM" };
        UK3CB_BAF_338_5Rnd = 10;
    };
	
};
