/*======================================
	Loadout for SWAT Delta Spotter (vnSwat)
======================================*/
class mmg_ammo : loadout_base_vnSwat
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
		classname = "UK3CB_TKP_O_B_ASS_BLK";
		
	};
    
	class Binoculars : Binoculars
    {
        classname = "rhsusf_bino_leopold_mk4";
		vn_m40a1_mag = 10;
		vn_1911_mag = 4;
    };
	
    headgear = "rhssaf_helmet_m97_black_nocamo";
    facewear = "G_Aviator";
};