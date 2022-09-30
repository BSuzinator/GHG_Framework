/*======================================
	Loadout for Recon Ammo Bearer (russian)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		rhs_30Rnd_545x39_7N10_AK = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "rhs_sidor";
        rhs_5Rnd_338lapua_t5000 = 10;
    };
	
};
