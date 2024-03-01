/*======================================
	Loadout for MAT Gunner (pmc)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_Mk153Mod0";
        ammo = "CUP_SMAW_HEAA_M";
    };
	
	class Uniform : Uniform
	{
		classname = "CUP_I_B_PMC_Unit_39";
	};
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_desert_lxWS";
        // List of items
        CUP_SMAW_HEAA_M = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	headgear = "H_Watchcap_cbr";
	facewear = "G_Aviator";
};