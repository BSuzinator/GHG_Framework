/*======================================
	Loadout for Squad Medics (usArmy)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_Medic", "rhsusf_iotv_ocp_Medic", "rhsusf_iotv_ocp_Medic", "rhsusf_iotv_ucp_Medic", "rhsusf_iotv_ucp_Medic" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhsusf_assault_eagleaiii_ocp_medic", "rhsusf_assault_eagleaiii_ocp_medic", "rhsusf_assault_eagleaiii_ocp_medic", "rhsusf_assault_eagleaiii_ucp_medic", "rhsusf_assault_eagleaiii_ucp_medic" };
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