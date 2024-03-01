/*======================================
	Loadout for SWAT Bravo Grenadier (vnSwat)
======================================*/
class maa_ammo : loadout_base_vnSwat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1carbine_gl";
        ammo = "vn_carbine_30_mag";
		grenade = "rhs_mag_m4009";
        
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
		rhs_mag_m4009 = 8;
		vn_22mm_m22_smoke_mag = 4;
		vn_m1911_mag = 2;
        vn_m18_white_mag = 2;
        vn_m61_grenade_mag = 2;
        ACE_EntrenchingTool = 0;
    };
    
    headgear = "rhssaf_helmet_m97_black_nocamo";
    facewear = "G_Aviator";
};