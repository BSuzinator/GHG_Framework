/*======================================
	Loadout for Recon Ammo Bearer (pmc)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_11";
    };
	
	class Vest : Vest
    {
		CUP_20Rnd_762x51_B_SCAR = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_LegStrapBag_coyote_F";
        CUP_5Rnd_86x70_L115A1 = 10;
    };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";
    };
	
	headgear = "h_cap_oli_hs";
	facewear = "vn_b_bandana_a";
	
};
