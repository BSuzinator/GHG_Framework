/*======================================
	Loadout for Recon Ammo Bearer (usKorea)
======================================*/
class rcn_ammo : squad_rifleman
{
    class Weapon_2 : Weapon_2 {
        classname = "vn_welrod";
        ammo = "vn_welrod_mag";
        
        class Scopes {};
    };
    
	class Vest : Vest
    {
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
        UK3CB_M1903A1_3006_5rnd_Magazine = 10;
    };
    
    headgear[] = { "vn_b_helmet_m1_06_01", "vn_b_helmet_m1_06_02" };
    facewear = "vn_b_aviator";
};
