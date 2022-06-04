/*======================================
	Loadout for Squad Leads (macv)
======================================*/
class squad_lead : squad_rifle
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m16_xm148";
        grenade = "vn_40mm_m381_he_mag";

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
        vn_40mm_m381_he_mag = 10;
        vn_40mm_m583_flare_w_mag = 5;
        vn_40mm_m661_flare_g_mag = 2;
        vn_40mm_m662_flare_r_mag = 2;
        vn_40mm_m682_smoke_r_mag = 2;
        vn_40mm_m715_smoke_g_mag = 2;
        vn_40mm_m680_smoke_w_mag = 4;
		ACRE_PRC77 = 1;
    };

	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };

    headgear[] = { "vn_b_helmet_m1_04_01", "vn_b_helmet_m1_04_02" };
};