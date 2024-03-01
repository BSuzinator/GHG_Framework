/*======================================
	Loadout for Repair Specialist (usArmy)
======================================*/
class soldier_repair_f : soldier_f
{
    
	
	class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_Empty_USArmy", "CUP_V_B_IOTV_OCP_Empty_USArmy", "CUP_V_B_IOTV_OCP_Empty_USArmy", "CUP_V_B_IOTV_UCP_Empty_USArmy", "CUP_V_B_IOTV_UCP_Empty_USArmy" };
        // List of items
		ACE_microDAGR = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};