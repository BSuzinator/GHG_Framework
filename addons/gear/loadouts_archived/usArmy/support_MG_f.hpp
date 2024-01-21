/*======================================
	Loadout for MMG Gunner (usArmy)
======================================*/
class support_MG_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_M240_B";
        ammo = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
        bipod = "rhsusf_acc_saw_bipod";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_ElcanM145";
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy" };
        // List of items
		CUP_30Rnd_556x45_Stanag = 0;
		CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
        // List of items
        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 3;
    };
};