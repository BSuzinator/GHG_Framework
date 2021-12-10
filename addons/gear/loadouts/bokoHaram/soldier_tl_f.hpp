/*======================================
	Loadout for Team Leads (Boko Haram)
======================================*/
class soldier_tl_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_aks74n_gp25";
        grenade = "rhs_VOG25";

        class Scopes : Scopes
        {
            acog = "rhs_acc_perst1ik";
        };
    };
    
    class Vest : Vest
    {
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
        // List of items
        rhs_VOG25 = 10;
        rhs_VG400P_white = 5;
        rhs_VG400P_green = 2;
        rhs_VG400P_red = 2;
        rhs_GRD40_Red = 2;
        rhs_GRD40_Green = 2;
        rhs_GRD40 = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear = "lxWS_H_ssh40_green";
};