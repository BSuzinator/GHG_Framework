/*======================================
	Loadout for Medics (usArmy)
======================================*/
class medic_f : soldier_f
{
    

    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_Medic_USArmy", "CUP_V_B_IOTV_OCP_Medic_USArmy", "CUP_V_B_IOTV_OCP_Medic_USArmy", "CUP_V_B_IOTV_UCP_Medic_USArmy", "CUP_V_B_IOTV_UCP_Medic_USArmy" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
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