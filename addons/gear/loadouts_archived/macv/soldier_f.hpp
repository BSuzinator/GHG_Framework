/*======================================
	Loadout for Rifleman (macv)
======================================*/
class soldier_f : loadout_base_macv
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m16";
        laser = "vn_b_m16";
        ammo = "vn_m16_20_mag";
        
        class Scopes : Scopes { };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "vn_b_uniform_macv_04_01", "vn_b_uniform_macv_04_08" };
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_02";
        // List of items
        vn_m16_20_mag = 10;
        vn_m18_white_mag = 2;
        vn_m61_grenade_mag = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "vn_b_helmet_m1_03_01", "vn_b_helmet_m1_03_02" };
    facewear = "vn_b_aviator";
};