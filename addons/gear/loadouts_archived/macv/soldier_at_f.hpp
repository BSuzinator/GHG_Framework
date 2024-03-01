/*======================================
	Loadout for MAT Gunner (macv)
======================================*/
class soldier_at_f : soldier_f
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_smaw_green";
        ammo = "rhs_mag_smaw_HEAA";
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
        rhs_mag_smaw_HEAA = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "vn_m19_binocs_grn";
    };
};