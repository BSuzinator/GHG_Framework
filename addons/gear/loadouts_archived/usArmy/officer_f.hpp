/*======================================
	Loadout for Officer / Platoon Lead (usArmy)
======================================*/
class officer_f : soldier_f
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Vest : Vest
    {
		classname[] = { "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_UCP_TL_USArmy", "CUP_V_B_IOTV_UCP_TL_USArmy" };
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP" };
};