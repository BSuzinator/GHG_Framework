/*======================================
	Loadout for Team Leads (usArmy)
======================================*/
class soldier_tl_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m16a4_carryhandle_M203";
        grenade = "rhs_mag_M441_HE";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ucp_Squadleader", "rhsusf_iotv_ucp_Squadleader" };        
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhsusf_falconii", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc", "rhsusf_falconii_mc" };
        ACE_EntrenchingTool = 0;
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
	
    headgear[] = { "rhsusf_ach_bare_wood_headset", "rhsusf_ach_bare_wood_headset", "rhsusf_ach_bare_wood_headset", "rhsusf_ach_helmet_headset_ucp", "rhsusf_ach_helmet_headset_ucp" };
};