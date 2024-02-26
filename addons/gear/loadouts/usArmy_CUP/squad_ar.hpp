/*======================================
	Loadout for Squad Autorifleman (usArmy)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_m249_pip1";
        ammo = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"
        bipod = "";

    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_OCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy", "CUP_V_B_IOTV_UCP_MG_USArmy" };
        // Inherited item overrides
        CUP_30Rnd_556x45_Stanag = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 3;

    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 2;

    };
};