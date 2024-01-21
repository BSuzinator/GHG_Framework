/*======================================
	Loadout for MAT Gunner (usArmySF)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_Mk153Mod0";
        ammo = "CUP_SMAW_HEAA_M";
        grenade = "rhs_mag_smaw_SR";
		class Scopes { rhs_weap_optic_smaw = "rhs_weap_optic_smaw"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_oli", "B_Carryall_oli", "B_Carryall_cbr" };
        // List of items
        CUP_SMAW_HEAA_M = 2;
        rhs_mag_smaw_SR = 4;
    };
};