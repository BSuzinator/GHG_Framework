/*======================================
	Loadout for MTR Gunner (usKorea)
======================================*/
class mtr_gunner : squad_rifleman
{
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_compat_rhs_usf3_m252_carry";
    };
	
	class Vest : Vest
    {
        // List of items
		vn_carbine_15_mag = 7;
		ACE_EntrenchingTool = 0;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_01";
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
};