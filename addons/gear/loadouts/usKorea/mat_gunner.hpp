/*======================================
	Loadout for MAT Gunner (usKorea)
======================================*/
class mat_gunner : squad_rifleman
{
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_Mk153Mod0";
        ammo = "CUP_SMAW_HEAA_M";
		class Scopes { rhs_weap_optic_smaw = "rhs_weap_optic_smaw"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_01";
        // List of items
        CUP_SMAW_HEAA_M = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
};