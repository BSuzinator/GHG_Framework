/*======================================
	Loadout for MMG Gunner (spetznaz)
======================================*/
class support_mg_f : soldier_f
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
		CUP_30Rnd_762x39_AK47_bakelite_M_polymer = 0;
		rhs_100Rnd_762x54mmR = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
        // List of items
        rhs_100Rnd_762x54mmR = 3;
    };
};