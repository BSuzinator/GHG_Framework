/*======================================
	Loadout for Squad Autorifleman (baf)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L110A2RIS";
        ammo = "UK3CB_BAF_556_100Rnd";
        bipod = "";
    };
    
    class Vest : Vest
    {
        //classname[] = { "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ucp_SAW", "rhsusf_iotv_ucp_SAW" };
        // Inherited item overrides
        UK3CB_BAF_556_30Rnd = 0;
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