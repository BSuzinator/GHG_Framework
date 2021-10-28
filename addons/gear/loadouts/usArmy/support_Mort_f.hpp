/*======================================
	Loadout for MTR Gunner (usArmy)
======================================*/
class support_Mort_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_compat_rhs_usf3_m252_carry";
    };
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_30Rnd_556x45_M855A1_Stanag = 6;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Carryall_oli", "B_Carryall_mcamo", "B_Carryall_mcamo", "B_Carryall_cbr", "B_Carryall_cbr" };
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
};