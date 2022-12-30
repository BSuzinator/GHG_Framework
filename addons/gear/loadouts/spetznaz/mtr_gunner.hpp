/*======================================
	Loadout for MTR Gunner (russian)
======================================*/
class mtr_gunner : squad_rifleman
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_compat_rhs_afrf3_2b14_carry";
    };
	
	class Vest : Vest
    {
        // List of items
		rhs_30Rnd_545x39_7N10_AK = 6;
		ACE_EntrenchingTool = 0;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = {"B_Carryall_oli","B_Carryall_oli","B_Carryall_cbr"};
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
};