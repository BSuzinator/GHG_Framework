/*======================================
	Loadout for MMG Gunner (usKorea)
======================================*/
class mmg_gunner : squad_rifle
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
		muzzle = "";
        ammo = "";
        bipod = "";
    };
    
    class Weapon_2 : Weapon_2
    {
        classname = "vn_mx991_m1911";
		muzzle = "";
        laser = "";
        ammo = "vn_m1911_mag";
		class Scopes {}; 
    };
    
    class Weapon_3 : Weapon_3
    {
        classname = "ace_compat_sog_m1919a6_carry"
    };
	
	class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_06";
        // List of item overrides
        ACE_EntrenchingTool = 0;
        // List of items
        vn_m1911_mag = 5;
		vn_carbine_15_mag = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_02";
        // List of items
        ace_compat_sog_m1919_250 = 2;
    };
    headgear[] = { "vn_b_helmet_m1_08_01", "vn_b_helmet_m1_08_02" };
};