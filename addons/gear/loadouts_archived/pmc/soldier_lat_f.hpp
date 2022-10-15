/*======================================
	Loadout for Rifleman(AT) (pmc)
======================================*/
class soldier_lat_f : soldier_f
{
    class Uniform : Uniform
    {
        classname = "lop_u_pmc_grn_plaid";
    };

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_M136";
        ammo = "rhs_m136_mag";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	headgear = "rhsusf_bowman";
	facewear = "vn_b_bandana_a";
};