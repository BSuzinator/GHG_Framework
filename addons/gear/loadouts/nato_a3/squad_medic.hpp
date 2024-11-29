/*======================================
	Loadout for Squad Medics (nato_a3)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierSpec_wdl" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        HandGrenade = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_mcamo", "B_Kitbag_sgg", "B_Kitbag_rgr" };
        // List of items
		
		#include "..\medic_bag.hpp"
		
		/*
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
		*/
    };
};