/*======================================
	Loadout for Team Leads (pmc)
======================================*/
class soldier_tl_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_scarh_fde_cqc";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "rhs_weap_m320";
        ammo = "rhs_mag_M441_HE";
	};
	
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_orng_plaid";
    };
	
    class Vest : Vest
    {
        classname = "rhsusf_plateframe_teamleader";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
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

    headgear = "rhsusf_bowman_cap";
	facewear = "vn_b_bandana_a";
};