/*======================================
	Loadout for Recon Ammo Bearer (nato_a3)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		30Rnd_65x39_caseless_black_mag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_rgr", "B_AssaultPack_tna_F", "B_AssaultPack_wdl_F" };
        10Rnd_338_Mag = 5;
    };
	
};
