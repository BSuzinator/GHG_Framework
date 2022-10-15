/*======================================
	Loadout for Squad Leads (baf)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "UK3CB_BAF_L85A2_UGL", "UK3CB_BAF_L85A2_UGL", "UK3CB_BAF_L85A2_UGL", "UK3CB_BAF_L85A2_UGL", "UK3CB_BAF_L85A2_UGL"};
        grenade = "rhs_mag_M441_HE";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_Osprey_DPMW3", "UK3CB_BAF_V_Osprey_DPMT3", "UK3CB_BAF_V_Osprey_DDPM3" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Kitbag_MTP", "UK3CB_BAF_B_Kitbag_Arctic", "UK3CB_BAF_B_Kitbag_DPMW", "UK3CB_BAF_B_Kitbag_DPMT", "UK3CB_BAF_B_Kitbag_DDPM" };
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
	
    headgear[] = { "UK3CB_BAF_H_Mk7_Camo_A", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DPMT_B", "UK3CB_BAF_H_Mk6_DDPM_B" };
};