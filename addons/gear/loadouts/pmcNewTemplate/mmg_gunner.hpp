/*======================================
	Loadout for MMG Gunner (pmc)
======================================*/
class mmg_gunner : squad_rifleman
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
		rhs_30Rnd_762x39mm = 0;
		rhs_100Rnd_762x54mmR = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "LOP_ISTS_Fieldpack_PKM" };
        // List of items
        rhs_100Rnd_762x54mmR = 3;
    };
};