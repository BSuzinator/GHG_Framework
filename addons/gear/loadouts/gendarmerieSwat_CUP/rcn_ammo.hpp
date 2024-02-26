/*======================================
	Loadout for Recon Ammo Bearer (gendamarieSwat)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		CUP_25Rnd_556x45_Famas = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        CUP_5Rnd_86x70_L115A1 = 10;
		GHG_spikeStripItem = 0;
    };
	
};
