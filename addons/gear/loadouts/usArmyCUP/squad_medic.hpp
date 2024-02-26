/*======================================
	Loadout for Squad Medics (usArmy)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_Medic_USArmy", "CUP_V_B_IOTV_OCP_Medic_USArmy", "CUP_V_B_IOTV_OCP_Medic_USArmy", "CUP_V_B_IOTV_UCP_Medic_USArmy", "CUP_V_B_IOTV_UCP_Medic_USArmy" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
        // List of items
		
		#include "..\medic_bag.hpp"

    };
};