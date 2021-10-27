/*======================================
	Loadout for Team Leads (usMC)
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
        classname = "rhsusf_spc_teamleader";        
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_falconii_coy";
        // List of items
        rhs_mag_M441_HE = 10;
        rhs_mag_M585_white = 5;
        rhs_mag_m661_green = 2;
        rhs_mag_m662_red = 2;
        rhs_mag_m713_Red = 2;
        rhs_mag_m715_Green = 2;
        rhs_mag_m714_White = 4;
    };

    headgear[] = { "rhsusf_lwh_helmet_marpatd_headset", "rhsusf_lwh_helmet_marpatwd_headset" };
};