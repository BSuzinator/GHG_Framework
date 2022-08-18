/*======================================
	Loadout for MMG Gunner (macv)
======================================*/
class mmg_gunner : squad_rifleman
{
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
    headgear[] = { "vn_b_helmet_m1_08_01", "vn_b_helmet_m1_08_02" };
};