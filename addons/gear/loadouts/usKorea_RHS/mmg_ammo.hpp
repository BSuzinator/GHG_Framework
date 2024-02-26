/*======================================
	Loadout for MMG Ammo Bearer (usKorea)
======================================*/
class mmg_ammo : squad_rifleman
{
    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_06";
        ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_05";
        // List of items
        ace_compat_sog_m1919_250 = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
    headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};