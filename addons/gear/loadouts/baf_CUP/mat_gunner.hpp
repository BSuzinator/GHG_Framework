/*======================================
	Loadout for MAT Gunner (baf)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_Mk153Mod0";
        ammo = "CUP_SMAW_HEAA_M";
        grenade = "CUP_SMAW_Spotting";
		class Scopes { CUP_optic_SMAW_Scope = "CUP_optic_SMAW_Scope"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "CUP_B_Bergen_BAF";
        // List of items
        CUP_SMAW_HEAA_M = 2;
        CUP_SMAW_Spotting = 4;
    };
};