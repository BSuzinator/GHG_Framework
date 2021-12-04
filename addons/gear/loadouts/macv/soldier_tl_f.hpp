/*======================================
	Loadout for Team Leads (macv)
======================================*/
class soldier_tl_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m16_xm148";
        grenade = "vm_40mm_m381_he_mag";

        class Scopes : Scopes
        {
            acog = "vn_o_4x_m16";
        };
    };
	
    class Vest : Vest
    {
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_06";
        // List of items
        vm_40mm_m381_he_mag = 10;
        vm_40mm_m583_flare_w_mag = 5;
        vm_40mm_m661_flare_g_mag = 2;
        vm_40mm_m662_flare_r_mag = 2;
        vm_40mm_m682_smoke_r_mag = 2;
        vm_40mm_m715_smoke_g_mag = 2;
        vm_40mm_m680_smoke_w_mag = 4;
    };

	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };

    headgear[] = { "vn_b_helmet_m1_07_01_headset", "rhsusf_lwh_helmet_marpatwd_headset" };
};