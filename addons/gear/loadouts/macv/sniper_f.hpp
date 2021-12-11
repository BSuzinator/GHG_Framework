/*======================================
	Loadout for Recon Sniper (macv)
======================================*/
class sniper_f : loadout_base_macv
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1
    {
        classname = "vn_m40a1_sniper";
        muzzle = "vn_s_m14";
		bipod = "vn_b_camo_m40a1";
        laser = "";
        ammo = "vn_m40a1_t_mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "vn_o_9x_m40a1";
        };
    };
    
    class Weapon_2 : Weapon_2 // 1911 with flashlight
	{ 
		classname = "vn_mx991_m1911";
		muzzle = "";
        laser = "";
        ammo = "vn_m1911_mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = {"vn_b_uniform_macv_04_01", "vn_b_uniform_macv_04_08"};
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_08";
        // List of items
        vn_m40a1_t_mag = 4;
        vn_m18_white_mag = 2;
        vn_m1911_mag = 4;
    };
    
    headgear[] = { "vn_b_helmet_m1_06_01", "vn_b_helmet_m1_06_02" };
    facewear = "vn_b_aviator";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "vn_m19_binocs_grn";

        class Scopes {};
    };
};