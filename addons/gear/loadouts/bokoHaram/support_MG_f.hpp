/*======================================
	Loadout for MMG Gunner (Boko Haram)
======================================*/
class support_MG_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_pkp";
        ammo = "rhs_100Rnd_762x54mmR";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "rhs_acc_perst1ik";
        };
    };
	
	class Vest : Vest
    {
        // List of items
		rhs_30Rnd_545x39_7N6_AK = 0;
		rhs_100Rnd_762x54mmR = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "B_Kitbag_rgr";
        // List of items
        rhs_100Rnd_762x54mmR = 3;
    };
};