/*======================================
	Loadout for Fixed Wing Pilots (macv)
======================================*/
class pilot_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
        
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
			alt_holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "vn_m10";
		muzzle = "";
        laser = "";
        ammo = "vn_m10_mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "vn_b_uniform_k2b_01_02";
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_aircrew_03";
        // List of item overrides
        vn_m16_20_mag = 0;
        vn_m61_grenade_mag = 0;
        ACE_EntrenchingTool = 0;
        vn_m18_white_mag = 0;
        // List of items
		vn_m10_mag = 3;
		vn_m18_white_magRed = 1;
		vn_m18_white_magGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "vn_b_helmet_aph6_02_02";
    facewear = "vn_b_aviator";
};