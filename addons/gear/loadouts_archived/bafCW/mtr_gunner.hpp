/*======================================
	Loadout for MTR Gunner (bafCW)
======================================*/
class mtr_gunner : squad_rifleman
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "UK3CB_BAF_M6";
    };
	
	class Vest : Vest
    {
        // List of items
		UK3CB_BAF_762_20Rnd_T = 6;
		ACE_EntrenchingTool = 0;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        // List of items
		UK3CB_BAF_1Rnd_60mm_Mo_Shells = 4;
		UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White = 1;
		UK3CB_BAF_1Rnd_60mm_Mo_Flare_White = 1;
    };
};