/*======================================
	Base loadout, used for inheritance
======================================*/
class loadout_base
{
    class Weapon_1 // Rifle
    {
        name = "";
        muzzle = "";
        bipod = "";
        laser = "";
        ammo = "";
        grenade = "";
        
        class Scopes {};
    };
    
    class Weapon_2 : Weapon_1 { class Scopes {}; }; // Pistol
    class Weapon_3 : Weapon_1 { class Scopes {}; }; // Launcher
    
    class Uniform
    {
        name = "";
        // List of items
        ACE_EarPlugs = 2;
        ACRE_PRC343 = 1;
        ACE_elasticBandage = 5;
        ACE_packingBandage = 5;
        ACE_morphine = 2;
        ACE_epinephrine = 2;
        ACE_tourniquet = 2;
        ACE_splint = 1;
        ACE_Flashlight_XL50 = 1;
        diw_armor_plates_main_plate = 1;
    };
    
    class Vest
    {
        name = "";
        // List of items
    };
    
    class Backpack
    {
        name = "";
        // List of items
    };
    
    headgear = "";
    facewear = "";
    nvgs = "ACE_NVG_Wide_Black";

    class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        name = "Binocular";

        class Scopes {};
    };
    
    map = "ItemMap";
    gps = "";
    compas = "ItemCompass";
    watch = "ACE_Altimeter";
};