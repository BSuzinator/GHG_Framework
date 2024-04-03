/*======================================
	Loadout for Rifleman (Wastelanders)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
		bipod = "";
		
		class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt = "";
            holo_alt_camo = "";
        };
        
    };
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
		bipod = "";
    };
    
    class Uniform : Uniform
    {
        classname = "";
		ACE_EarPlugs = 2;
        ACE_elasticBandage = 5;
        ACE_packingBandage = 5;
        ACE_morphine = 2;
        ACE_epinephrine = 2;
        ACE_tourniquet = 2;
        ACE_splint = 1;
        ACE_Flashlight_XL50 = 0;
    };
    
    class Vest : Vest
    {
        classname = "";

    };
	class Backpack : Backpack
    {
        classname = "";

    };
	class Binoculars : Binoculars
    {
        classname = "";
    };
	nvgs = "";
	watch = "vn_b_item_watch";
	headgear = "";
	facewear = "";
};