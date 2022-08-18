/*======================================
	Loadout for PLT Lead (usArmy)
======================================*/
class plt_lead : squad_rifleman
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
	
    headgear[] = { "rhsusf_ach_bare_wood_headset", "rhsusf_ach_bare_wood_headset", "rhsusf_ach_bare_wood_headset", "rhsusf_ach_helmet_headset_ucp", "rhsusf_ach_helmet_headset_ucp" };
};