/*======================================
	Loadout for MTR Gunner (pmc)
======================================*/
class support_mort_f : soldier_f
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_compat_rhs_usf3_m252_carry";
    };
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_20rnd_scar_762x51_m80_ball_bk = 6;
		ACE_EntrenchingTool = 0;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_Carryall_cbr";
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
};