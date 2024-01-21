/*======================================
	Loadout for MAT Gunner (macv)
======================================*/
class mat_gunner : squad_rifleman
{
    class Weapon_3 : Weapon_3 // Launcher
    {

        classname = "vn_m20a1b1_01";
        ammo = "vn_m20a1b1_heat_mag";

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
        classname = "vn_b_pack_lw_01";
        // List of items

        vn_m20a1b1_heat_mag = 2;

        CUP_SMAW_HEAA_M = 2;
        CUP_SMAW_Spotting = 4;

    };
};