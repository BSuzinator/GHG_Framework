/*======================================
	Loadout for Team Leads (usMC)
======================================*/
class soldier_tl_f : soldier_f
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        name = "rhs_weap_m16a4_carryhandle_M203";
        grenade = "rhs_mag_M441_HE";

        class Scopes: Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Weapon_2 : Weapon_2 { class Scopes : Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 { class Scopes : Scopes {}; }; // Launcher

    class Uniform : Uniform {};
    
    class Vest : Vest
    {
        name = "rhsusf_spc_teamleader";
        // Inherited item overrides
        SmokeShell = 0;
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_M441_HE = 2;
        
    };
    
    class Backpack : Backpack
    {
        name = "rhsusf_falconii_coy";
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

    class Binoculars : Binoculars { class Scopes: Scopes{}; };
};