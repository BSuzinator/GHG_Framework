/*======================================
	Loadout for Squad Autorifleman (baf)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L110A2RIS";
        ammo = "UK3CB_BAF_556_100Rnd";
        bipod = "rhsusf_acc_saw_bipod";
    };
    
    class Vest : Vest
    {
        //classname[] = { "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy" };
        // Inherited item overrides
        CUP_30Rnd_556x45_Stanag_L85 = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        UK3CB_BAF_556_100Rnd = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A" };
        // List of items
        UK3CB_BAF_556_100Rnd = 2;
    };
};