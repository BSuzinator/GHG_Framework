/*======================================
	Loadout for MMG Gunner (macv)
======================================*/
class support_mg_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m60";
		muzzle = "";
        ammo = "vn_m60_100_mag";
        bipod = "";
		class Scopes : Scopes { };
    };
	
	class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_06";
        // List of items
		vn_m16_20_mag = 0;
		vn_m60_100_mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_02";
        // List of items
        vn_m60_100_mag = 3;
    };
};