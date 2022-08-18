/*======================================
	Loadout for MMG Gunner (baf)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m240b_elcan";
        ammo = "rhsusf_100Rnd_762x51";
        bipod = "rhsusf_acc_saw_bipod";
		class Scopes : Scopes
        {
            mg_optic = "rhsusf_acc_ELCAN";
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ucp_SAW", "rhsusf_iotv_ucp_SAW" };
        // List of items
		UK3CB_BAF_556_30Rnd = 0;
		rhsusf_100Rnd_762x51 = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A" };
        // List of items
        rhsusf_100Rnd_762x51 = 3;
    };
};