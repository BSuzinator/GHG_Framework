/*======================================
	Loadout for Recon Ammo Bearer (pmc)
======================================*/
class rcn_ammo : squad_rifleman
{
    
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_prp_palm";
    };
	
	class Vest : Vest
    {
		rhs_mag_20rnd_scar_762x51_m80_ball_bk = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_LegStrapBag_coyote_F";
        uk3cb_baf_338_5rnd = 10;
    };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";
    };
	
	headgear = "h_cap_oli_hs";
	facewear = "vn_b_bandana_a";
	
};
