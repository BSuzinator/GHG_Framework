/*======================================
	Loadout for Recon Spotter (macv)
======================================*/
class spotter_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
    class Weapon_2 : Weapon_2 {
        classname = "vn_welrod";
        ammo = "vn_welrod_mag";
        
        class Scopes {};
    };
    
	class Vest : Vest
    {
		vn_m16_20_mag = 6;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
        vn_welrod_mag = 4;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_01";
        vn_m40a1_t_mag = 10;
    };
    
    headgear[] = { "vn_b_helmet_m1_06_01", "vn_b_helmet_m1_06_02" };
    facewear = "vn_b_aviator";
};
