/*======================================
	Loadout for Platoon Lead (macv)
======================================*/
class officer_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            acog = "vn_o_4x_m16";
        };
    };
    
    class Vest : Vest
    {
		classname = "vn_b_vest_usarmy_09";
        // List of items
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_06";
        
        ACRE_PRC77 = 1;
    };
    
    class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
    
    headgear[] = { "vn_b_helmet_m1_09_01", "vn_b_helmet_m1_09_02" };
};