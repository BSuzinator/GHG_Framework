/*======================================
	Loadout for Squad Medics (pmc)
======================================*/
class squad_medic : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_red_plaid";
    };

    class Vest : Vest
    {
		classname = "rhsusf_plateframe_medic";
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        ACE_elasticBandage = 32;
		ACE_packingBandage = 32;
		ACE_tourniquet = 8;
		ACE_bloodIV_250 = 8;
		ACE_bloodIV_500 = 4;
		ACE_bloodIV = 4;
		ACE_surgicalKit = 1;
		ACE_personalAidKit = 2;
		ACE_splint = 10;
		ACE_morphine = 12;
		ACE_epinephrine = 12;
		ACE_EarPlugs = 1;
    };
	headgear = "vn_b_boonie_05_04";
	facewear = "G_Headset_lxWS";
};