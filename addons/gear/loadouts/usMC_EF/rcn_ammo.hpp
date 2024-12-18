/*======================================
	Loadout for Recon Ammo Bearer (usMC_EF)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		EF_30Rnd_65x39_caseless_coy_mag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "EF_B_AssaultPack_coy";
        10Rnd_338_Mag = 5;
    };
	
};
