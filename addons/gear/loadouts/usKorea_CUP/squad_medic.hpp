/*======================================
	Loadout for Squad Medics (usKorea)
======================================*/
class squad_medic : squad_rifleman
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1a1_tommy";
        ammo = "vn_m1a1_20_mag";
        laser = "";
        
        class Scopes : Scopes {};
    };

    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_07";
        // Inherited item overrides
        vn_carbine_15_mag = 0;
        vn_m18_white_mag = 0;
        vn_m61_grenade_mag = 1;
        // List of items
        vn_m1a1_20_mag = 10;
        vn_m18_red_mag = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_07";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
    
    headgear[] = { "vn_b_helmet_m1_07_01", "vn_b_helmet_m1_07_02" };
};