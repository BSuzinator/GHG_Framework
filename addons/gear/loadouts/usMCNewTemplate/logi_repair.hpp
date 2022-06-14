/*======================================
	Loadout for Repair Specialist (usMC)
======================================*/
class logi_repair : squad_rifle
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
        classname[] = { "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ucp", "rhsusf_assault_eagleaiii_ucp" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};