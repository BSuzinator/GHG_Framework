/*======================================
	Loadout for macv units
======================================*/
class loadout_base_Swat : loadout_base
{
    

    class Weapon_2 : Weapon_2 // Everyone gets a flashlight instead of NVGS
	{ 
		classname = "rhsusf_weap_glock17g4";
		muzzle = "rhsusf_acc_omega9k";
        laser = "acc_flashlight_pistol";
        ammo = "rhsusf_mag_17Rnd_9x19_JHP";
		class Scopes {}; 
	};

    class Uniform : Uniform
    {
		classname = "Police_Uniform_Long";
		rhsusf_mag_17Rnd_9x19_JHP = 5;
        diw_armor_plates_main_plate = 1;
    };
	
	class Vest : Vest
    {
		classname = "SWAT_Modular_lite";
		ACE_CableTie = 5;
    };

    nvgs = "ACE_NVG_Wide_Black";
    map = "vn_b_item_map";
    compas = "vn_b_item_compass";
    watch = "vn_b_item_watch";
	
	facewear = "G_Balaclava_TI_G_blk_F";
	headgear = "SWAT_Modular_Helmet_Peltor";
};