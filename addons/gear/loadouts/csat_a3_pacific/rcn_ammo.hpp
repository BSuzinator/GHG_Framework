/*======================================
	Loadout for Recon Ammo Bearer (csat_a3_pacific)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		30Rnd_580x42_Mag_F = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        10Rnd_93x64_DMR_05_Mag = 10;
    };
	
};
