/*======================================
	Loadout for Fixed Wing Pilots (macv)
======================================*/
class rptr_pilot : squad_rifleman
{
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
    
	class Weapon_2 : Weapon_2  // 1911 with flashlight
	{ 
		classname = "vn_mx991_m1911";
		muzzle = "";
        laser = "";
        ammo = "vn_m1911_mag";
		class Scopes {}; 
	};
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "vn_m127";
        ammo = "vn_m128_mag";
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
		vn_m1911_mag = 5;
		vn_m18_white_magRed = 1;
		vn_m18_white_magGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "vn_b_helmet_aph6_01_01";
    facewear = "vn_b_aviator";
};