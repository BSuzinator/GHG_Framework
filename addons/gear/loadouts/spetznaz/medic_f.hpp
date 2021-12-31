/*======================================
	Loadout for Medics (spetznaz)
======================================*/
class medic_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Vest : Vest
    {
        classname[] = { "LOP_V_6B23_Medic_TAN", "rhsgref_6b23_ttsko_mountain_medic", "UK3CB_AAF_I_V_Falcon_1_DIGI_BLK", "V_RebreatherB" };
        // Inherited item overrides
        SmokeShell = 0;
        rhs_mag_rgd5 = 0;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
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
};