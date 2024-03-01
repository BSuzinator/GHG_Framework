/*======================================
	Loadout for MAT Gunner (Snow Tigers)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg7";
        ammo = "CUP_PG7VL_M";
		class Scopes { CUP_optic_SMAW_Scope = "rhs_acc_pgo7v3"; };
    };
	
	class Uniform : Uniform
	{
		classname = "UK3CB_LNM_B_U_Shirt_Pants_14";
	};
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "IP_B_Carryall_SnowTiger";
        // List of items
        CUP_PG7VL_M = 2; //AT
		CUP_OG7_M = 2; //HE
		CUP_TBG7V_M = 1; //Thermo
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};