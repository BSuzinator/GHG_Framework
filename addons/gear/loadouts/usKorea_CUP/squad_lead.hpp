/*======================================
	Loadout for Squad Leads (usKorea)
======================================*/
class squad_lead : squad_marksman
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1_garand_gl";
        grenade = "vn_22mm_m17_frag_mag";
        laser = "";
        bipod = "";

        class Scopes {};
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
        vn_22mm_m17_frag_mag = 10;
        vn_22mm_lume_mag = 10;
        vn_22mm_m22_smoke_mag = 10;
		ACRE_PRC77 = 1;
    };

	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };

    headgear[] = { "vn_b_helmet_m1_04_01", "vn_b_helmet_m1_04_02" };
};