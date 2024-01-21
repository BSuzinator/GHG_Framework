/*======================================
	Loadout for Recon Ammo Bearer (bafCW)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		UK3CB_BAF_762_20Rnd_T = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        CUP_5Rnd_86x70_L115A1 = 10;
    };
	
};
