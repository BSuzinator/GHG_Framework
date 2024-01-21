/*======================================
	Loadout for SWAT Bravo Marksman (vnSwat)
======================================*/
class maa_gunner : loadout_base_vnSwat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m14a1";
        ammo = "vn_m14_mag";
        
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
        vn_m14_mag = 4;
		vn_m1911_mag = 3;
        vn_m18_white_mag = 2;
        vn_m61_grenade_mag = 2;
        ACE_EntrenchingTool = 0;
    };
    
    headgear = "rhssaf_helmet_m97_black_nocamo";
    facewear = "G_Aviator";
};