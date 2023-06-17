/*======================================
	Loadout for Recon Ammo Bearer (Snow Tigers)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	class Uniform : Uniform
    {
	
    };
	
	class Vest : Vest
    {
		30Rnd_65x39_caseless_green = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "IP_B_AssaultPack_SnowTiger";
        10Rnd_93x64_DMR_05_Mag = 10;
    };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "rhs_pdu4";
    };
	
};
