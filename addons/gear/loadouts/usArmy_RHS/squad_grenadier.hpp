/*======================================
	Loadout for Squad Grenedier (usArmy RHS)
======================================*/
class squad_grenadier : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_M203s_wd", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s", "rhs_weap_m4a1_M203s_d"};
        grenade = "rhs_mag_M441_HE";
    };

    class Vest : Vest
    {
        classname[] = { "rhsusf_mbav_grenadier", "rhsusf_mbav_grenadiern", "rhsusf_iotv_ocp_Grenadier", "rhsusf_iotv_ucp_Grenadier", "rhsusf_iotv_ucp_Grenadier" };
        // List of items
        rhs_mag_30Rnd_556x45_M855A1_Stanag = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
	class Backpack : Backpack
    {
        classname[] = { "rhsusf_falconii", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc" };
        // List of items
        rhs_mag_M441_HE = 25;
    };

};