/*======================================
	Loadout for swat units
======================================*/
class loadout_base_Police : loadout_base
{
    
	class Weapon_2 : Weapon_2 // Everyone gets a flashlight instead of NVGS
		{ 
			classname = "rhsusf_weap_glock17g4";
			ammo = "rhsusf_mag_17Rnd_9x19_JHP";
			laser = "acc_flashlight_pistol";
			class Scopes {}; 
		};
    

    class Uniform : Uniform
    {
		classname = "Police_uniform_Officer1";
		rhsusf_mag_17Rnd_9x19_JHP = 5;
		ACRE_PRC343 = 1;
        diw_armor_plates_main_plate = 1;
    };
	
	class Vest : Vest
	{
		classname = "Police_Rangemaster_Combo";
		ACE_CableTie = 2;
	};

    nvgs = "UK3CB_BAF_HMNVS";
    map = "ItemMap";
    compass = "ItemCompass";
    watch = "ACE_Altimeter";
	
	headgear = "Patrol_Cap_Badge";
	facewear = "G_Aviator";
	gps = "ItemGPS";
};