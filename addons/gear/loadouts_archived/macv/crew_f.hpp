/*======================================
	Loadout for Vehicle Crew (macv)
======================================*/
class crew_f : soldier_f
{
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "vn_m3a1";
        laser = "";
        ammo = "vn_m3a1_t_mag";
        
        class Scopes : Scopes { };
    };
	
    class Uniform : Uniform {};
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_12";
        // List of item overrides
        vn_m16_20_mag = 0;
        ACE_EntrenchingTool = 0;
        vn_m18_white_mag = 1;
        vn_m61_grenade_mag = 1;
        // List of items
        vn_m3a1_t_mag = 4;
		vn_m18_red_mag = 1;
		vn_m18_green_mag = 1;
    };
    
    headgear = "vn_b_helmet_t56_01_01";
    facewear = "vn_b_acc_goggles_01";
    
    class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
};