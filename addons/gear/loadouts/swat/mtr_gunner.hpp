/*======================================
	Loadout for MTR Gunner (swat)
======================================*/
class mtr_gunner : squad_rifleman
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_compat_rhs_usf3_m252_carry";
    };
	
	class Uniform : Uniform
	{
		classname = "UK3CB_TKP_I_U_CombatUniform_BLK";
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
        classname = "B_Carryall_desert_lxWS";
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
	headgear = "UK3CB_TKA_O_H_6b7_1m_bala1_TAN";
	facewear = "rhsusf_oakley_goggles_blk";
};