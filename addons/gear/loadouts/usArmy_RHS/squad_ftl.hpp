/*======================================
	Loadout for Squad Fireteam Leads (usArmy)
======================================*/
class squad_ftlead : squad_grenadier
{

    class Vest : Vest
    {
		classname[] = { "rhsusf_iotv_ocp_Teamleader", "rhsusf_iotv_ocp_Teamleader", "rhsusf_iotv_ocp_Teamleader", "rhsusf_iotv_ucp_Teamleader", "rhsusf_iotv_ucp_Teamleader" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };

	class Backpack : Backpack
    {
        // List of items
        rhs_mag_M441_HE = 6;
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