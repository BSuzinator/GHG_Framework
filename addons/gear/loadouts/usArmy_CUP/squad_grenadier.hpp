/*======================================
	Loadout for Squad Grenedier (usArmy CUP)
======================================*/
class squad_grenadier : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_desert_GL"};
        grenade = "CUP_1Rnd_HE_M203";
    };
	class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_Grenadier_USArmy", "CUP_V_B_IOTV_OCP_Grenadier_USArmy", "CUP_V_B_IOTV_OEFCP_Grenadier_USArmy", "CUP_V_B_IOTV_UCP_Grenadier_USArmy", "CUP_V_B_IOTV_UCP_Grenadier_USArmy" };
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
	class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_UCP", "CUP_B_US_Assault_UCP" };
        // List of items
        CUP_1Rnd_HE_M203 = 30;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};