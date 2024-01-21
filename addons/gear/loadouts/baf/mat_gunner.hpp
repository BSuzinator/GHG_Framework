/*======================================
	Loadout for MAT Gunner (baf)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_Mk153Mod0";
        ammo = "CUP_SMAW_HEAA_M";
        grenade = "rhs_mag_smaw_SR";
		class Scopes { CUP_optic_SMAW_Scope = "CUP_optic_SMAW_Scope"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Carryall_MTP", "UK3CB_BAF_B_Carryall_Arctic", "UK3CB_BAF_B_Carryall_DPMW", "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_DDPM" };
        // List of items
        CUP_SMAW_HEAA_M = 2;
        rhs_mag_smaw_SR = 4;
    };
};