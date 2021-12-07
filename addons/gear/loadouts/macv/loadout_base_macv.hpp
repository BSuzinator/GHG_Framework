/*======================================
	Loadout for macv units
======================================*/
class loadout_base_macv : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Weapon_2 : Weapon_2 // Everyone gets a flashlight instead of NVGS
	{ 
		classname = "vn_mx991";
		muzzle = "";
        laser = "";
        ammo = "";
		class Scopes {}; 
	};

    class Uniform
    {
        // Not used in vietnam
        ACE_Flashlight_XL50 = 0; // Weapon_2 is used instead of this (both the "MX991" and "M1911 with MX991" work on the map)
        diw_armor_plates_main_plate = 0;
    };

    nvgs = "";
    map = "vn_b_item_map";
    compas = "vn_b_item_compass";
    watch = "vn_b_item_watch";
};