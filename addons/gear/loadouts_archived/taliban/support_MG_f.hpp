/*======================================
	Loadout for MMG Gunner (Taliban)
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
		CUP_30Rnd_762x39_AK47_bakelite_M = 0;
		rhs_100Rnd_762x54mmR = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_cbr";
        // List of items
        rhs_100Rnd_762x54mmR = 3;
    };
};