/*======================================
	Loadout for Platoon Lead (macv)
======================================*/
class officer_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
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
        ACRE_SEM52SL = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Binoculars : Binoculars
    {
        classname = "vm_m19_binocs_grn";
    };
    
    headgear[] = { "vn_b_helmet_m1_07_01_headset", "rhsusf_lwh_helmet_marpatwd_headset" };
};