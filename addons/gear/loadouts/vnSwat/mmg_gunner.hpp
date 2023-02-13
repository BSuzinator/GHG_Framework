/*======================================
	Loadout for SWAT Delta Sniper (vnSwat)
======================================*/
class mmg_gunner : loadout_base_vnSwat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m40a1_camo";
		acog = "vn_o_9x_m40a1";
		muzzle = "vn_s_m14";
		bipod = "vn_b_camo_m40a1";
        ammo = "vn_m40a1_mag";
        
        class Scopes : Scopes 
		{
			sniper = "vn_o_9x_m40a1";
			sniper_nvs = "vn_o_anpvs2_m40a1";
		};
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
        vn_m40a1_mag = 4;
		vn_m1911_mag = 3;
        vn_m18_white_mag = 2;
        vn_m61_grenade_mag = 2;
        ACE_EntrenchingTool = 0;
    };
    
    headgear = "rhssaf_helmet_m97_black_nocamo";
    facewear = "G_Aviator";
};