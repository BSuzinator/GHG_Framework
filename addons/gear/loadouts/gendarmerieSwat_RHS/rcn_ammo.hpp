/*======================================
	Loadout for Recon Ammo Bearer (gendamarieSwat)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		UK3CB_FAMAS_25rnd_556x45 = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "UK3CB_CW_US_B_LATE_B_RIF_04";
        UK3CB_BAF_338_5Rnd = 10;
		GHG_spikeStripItem = 0;
    };
	
};
