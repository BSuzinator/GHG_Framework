/*======================================
	Loadout for MMG Gunner (baf)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L7A2";
        ammo = "UK3CB_BAF_762_100Rnd";
        bipod = "rhsusf_acc_saw_bipod";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_ElcanM145";
        };
    };
	
	class Vest : Vest
    {
        //classname[] = { "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy" };
        // List of items
		CUP_30Rnd_556x45_Stanag_L85 = 0;
		UK3CB_BAF_762_100Rnd = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A" };
        // List of items
        UK3CB_BAF_762_100Rnd = 3;
    };
};