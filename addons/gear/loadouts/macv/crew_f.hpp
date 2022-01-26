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
	
    class Uniform : Uniform
    {
        ACE_microDAGR = 1;
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_12";
        vn_m3a1_t_mag = 4;
        vn_m18_white_mag = 1;
		vn_m18_red_mag = 1;
		vn_m18_green_mag = 1;
        vn_m61_grenade_mag = 1;
        ACE_EntrenchingTool = 0;
    };
    
    headgear = "vn_b_helmet_t56_01_01";
    facewear = "vn_b_acc_goggles_01";
    
    class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
};