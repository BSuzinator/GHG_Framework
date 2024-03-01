/*======================================
	Loadout for MAT Gunner (spetznaz)
======================================*/
class soldier_at_f : soldier_f
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg7";
        ammo = "CUP_PG7VR_M";
		class Scopes { rhs_acc_pgo7v3 = "rhs_acc_pgo7v3"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = {"UK3CB_BAF_B_Carryall_TAN","UK3CB_BAF_B_Carryall_DPMT","UK3CB_BAF_B_Carryall_Arctic","B_Carryall_oucamo"};
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