/*======================================
	Loadout for Rifleman (usKorea)
======================================*/
class squad_rifle : loadout_base_usKorea
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m2carbine";
        laser = "vn_b_carbine";
        ammo = "vn_carbine_15_mag";
        
        class Scopes : Scopes {};
    };
    
    class Uniform : Uniform
    {
        classname[] = { "vn_b_uniform_macv_04_01", "vn_b_uniform_macv_04_08" };
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_02";
        // List of items
        vn_carbine_15_mag = 10;
        vn_m18_white_mag = 2;
        vn_m61_grenade_mag = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "vn_b_helmet_m1_03_01", "vn_b_helmet_m1_03_02" };
    facewear = "vn_b_aviator";
};