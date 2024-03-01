/*======================================
	Loadout for Team Leads (usArmy)
======================================*/
class soldier_tl_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_M4A1_BUIS_desert_GL"};
        grenade = "rhs_mag_M441_HE";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_OCP_TL_USArmy", "CUP_V_B_IOTV_UCP_TL_USArmy", "CUP_V_B_IOTV_UCP_TL_USArmy" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_UCP", "CUP_B_US_Assault_UCP" };
        // List of items
        rhs_mag_M441_HE = 10;
        rhs_mag_M585_white = 5;
        rhs_mag_m661_green = 2;
        rhs_mag_m662_red = 2;
        rhs_mag_m713_Red = 2;
        rhs_mag_m715_Green = 2;
        rhs_mag_m714_White = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP" };
};