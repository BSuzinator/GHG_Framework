/*======================================
	Loadout for Recon Gunner (usKorea)
======================================*/
class rcn_gunner : loadout_base_usKorea
{
    class Weapon_1 : Weapon_1
    {
        classname = "UK3CB_M1903A1_unertl";
        ammo = "UK3CB_M1903A1_3006_5rnd_Magazine";
    };
    
    class Weapon_2 : Weapon_2 // 1911 with flashlight
	{ 
		classname = "vn_mx991_m1911";
		muzzle = "";
        laser = "";
        ammo = "vn_m1911_mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = {"vn_b_uniform_macv_04_01", "vn_b_uniform_macv_04_08"};
    };
    
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_08";
        // List of items
        UK3CB_M1903A1_3006_5rnd_Magazine = 4;
        vn_m18_white_mag = 2;
        vn_m1911_mag = 4;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "vn_b_helmet_m1_06_01", "vn_b_helmet_m1_06_02" };
    facewear = "vn_b_aviator";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "vn_m19_binocs_grn";

        class Scopes {};
    };
};