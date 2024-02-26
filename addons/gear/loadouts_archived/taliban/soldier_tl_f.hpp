/*======================================
	Loadout for Team Leads (Taliban)
======================================*/
class soldier_tl_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AKM_Early_gp25";
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
        classname = "B_FieldPack_cbr";
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
	
};