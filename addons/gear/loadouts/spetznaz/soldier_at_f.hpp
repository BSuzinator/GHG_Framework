/*======================================
	Loadout for MAT Gunner (spetznaz)
======================================*/
class soldier_at_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg7";
        ammo = "rhs_rpg7_PG7VR_mag";
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
        rhs_rpg7_PG7VL_mag = 2; //AT
		rhs_rpg7_OG7V_mag = 2; //HE
		rhs_rpg7_TBG7V_mag = 1; //Thermo
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};