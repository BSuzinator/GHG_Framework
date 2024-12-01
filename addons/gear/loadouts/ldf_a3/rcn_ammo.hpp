/*======================================
	Loadout for Recon Ammo Bearer (ldf_a3)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		30Rnd_65x39_caseless_msbs_mag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_eaf_F";
        10Rnd_338_Mag = 5;
    };
	
};
