/*======================================
	Loadout for PLT Lead (baf)
======================================*/
class plt_lead : squad_rifle
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
		classname[] = { "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ucp_Squadleader", "rhsusf_iotv_ucp_Squadleader" };
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "UK3CB_BAF_H_Mk7_Camo_A_headset", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_Mk6_DPMW_A", "rhsusf_ach_helmet_headset_ucp", "rhsusf_ach_helmet_headset_ucp" };
};