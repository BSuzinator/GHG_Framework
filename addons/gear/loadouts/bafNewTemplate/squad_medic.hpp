/*======================================
	Loadout for Squad Medics (baf)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_Medic", "rhsusf_iotv_ocp_Medic", "rhsusf_iotv_ocp_Medic", "rhsusf_iotv_ucp_Medic", "rhsusf_iotv_ucp_Medic" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C_medic", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A_medic" };
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