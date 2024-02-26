/*======================================
	Loadout for Recon Ammo Bearer (taliban)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	
	class Vest : Vest
    {
		CUP_30Rnd_762x39_AK47_bakelite_M = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_cbr" };
        CUP_10Rnd_762x54_SVD_M = 10;
    };
	
};
