/*======================================
	Loadout for Recon Sniper (macv)
======================================*/
class sniper_f : loadout_base
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
    
    class Weapon_2 : Weapon_2 
	{ 
		classname = "vn_m10";
        ammo = "vn_m10_mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = {"vn_b_uniform_macv_04_01", "rhsusf_lwh_helmet_marpatwd"};
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_08";
        // List of items
        vn_m40a1_t_mag = 4;
		vn_m10_mag = 2;
        vn_m18_white_mag = 2;
    };
    
    headgear[] = { "vn_b_helmet_m1_07_01", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "vn_b_aviator";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};