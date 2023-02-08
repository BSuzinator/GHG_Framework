/*======================================
	Loadout for SWAT Alpha Lead (vnSwat)
======================================*/
class ews_lead : loadout_base_vnSwat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1carbine";
        ammo = "vn_carbine_30_mag";
        
        class Scopes : Scopes { };
    };
	
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_m1911";
        ammo = "vn_m1911_mag";
        
        class Scopes : Scopes { };
    };
    
    class Uniform : Uniform
    {
        classname = "vn_b_uniform_macv_01_03";
    };
    
    class Vest : Vest
    {
        classname = "vn_o_vest_05";
        // List of items
        vn_carbine_30_mag = 6;
		vn_m1911_mag = 2;
        vn_m18_white_mag = 2;
        vn_m61_grenade_mag = 2;
        ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_prc77_01";
        
        ACRE_PRC77 = 1;
		vn_40mm_m381_he_mag = 0;
        vn_40mm_m583_flare_w_mag = 0;
        vn_40mm_m661_flare_g_mag = 0;
        vn_40mm_m662_flare_r_mag = 0;
        vn_40mm_m682_smoke_r_mag = 0;
        vn_40mm_m715_smoke_g_mag = 0;
        vn_40mm_m680_smoke_w_mag = 0;
    };
    
    headgear = "rhssaf_helmet_m97_black_nocamo";
    facewear = "G_Aviator";
};