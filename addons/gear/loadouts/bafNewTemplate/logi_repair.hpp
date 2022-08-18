/*======================================
	Loadout for Repair Specialist (baf)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_Repair", "rhsusf_iotv_ocp_Repair", "rhsusf_iotv_ocp_Repair", "rhsusf_iotv_ucp_Repair", "rhsusf_iotv_ucp_Repair" };
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};