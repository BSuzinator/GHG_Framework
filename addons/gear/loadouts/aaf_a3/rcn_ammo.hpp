/*======================================
	Loadout for Recon Ammo Bearer (aaf_a3)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		30Rnd_556x45_Stanag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_dgtl";
        10Rnd_338_Mag = 5;
    };
	
};
