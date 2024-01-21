/*======================================
	Loadout for MTR Gunner (pmc)
======================================*/
class mtr_gunner : squad_rifleman
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_compat_rhs_usf3_m252_carry";
    };
	
	class Uniform : Uniform
	{
		classname = "CUP_U_O_TK_MixedCamo";
	};
	
	class Vest : Vest
    {
        // List of items
		CUP_20Rnd_762x51_B_SCAR = 6;
		ACE_EntrenchingTool = 0;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_Carryall_desert_lxWS";
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
	headgear = "CUP_H_Ger_M92_Tan_GG_CB";
	facewear = "CUP_G_ESS_KHK_Scarf_Face_Tan";
};