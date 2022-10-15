/*======================================
	Loadout for Squad Leads (usArmySF)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "rhs_weap_m4a1_blockII_M203_wd", "rhs_weap_m4a1_blockII_M203", "rhs_weap_m4a1_blockII_M203_d" };
        grenade = "rhs_mag_M441_HE";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_su230_mrds";
        };
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_mbav_grenadier";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhsusf_falconii", "rhsusf_falconii", "rhsusf_falconii_coy" };
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
	
    headgear[] = { "rhsusf_mich_bare_norotos_arc_alt_headset", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_mich_bare_norotos_arc_alt_tan_headset" };
};