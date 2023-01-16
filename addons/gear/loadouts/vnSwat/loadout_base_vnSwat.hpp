/*======================================
	Loadout for macv units
======================================*/
class loadout_base_macv : loadout_base
{
    

    class Weapon_2 : Weapon_2 // Everyone gets a flashlight instead of NVGS
	{ 
		classname = "vn_m1911";
		muzzle = "vn_s_m1911";
        laser = "";
        ammo = "vn_m1911_mag";
		class Scopes {}; 
	};

    class Uniform : Uniform
    {
        // Not used in vietnam
        ACE_Flashlight_XL50 = 1; // Weapon_2 is used instead of this (both the "MX991" and "M1911 with MX991" work on the map)
        diw_armor_plates_main_plate = 0;
    };

    nvgs = "";
    map = "vn_b_item_map";
    compas = "vn_b_item_compass";
    watch = "vn_b_item_watch";
};