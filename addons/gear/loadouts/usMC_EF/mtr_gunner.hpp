/*======================================
	Loadout for MTR Gunner (usMC_EF)
======================================*/
class mtr_gunner : squad_rifleman
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_csw_staticMortarCarry";
    };
	
	class Vest : Vest
    {
        // List of items
		EF_30Rnd_65x39_caseless_coy_mag = 6;
		ACE_EntrenchingTool = 0;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "EF_B_Carryall_coy";
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
};