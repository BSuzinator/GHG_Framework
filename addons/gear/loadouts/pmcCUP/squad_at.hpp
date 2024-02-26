/*======================================
	Loadout for Squad Rifleman(AT) (pmc)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_M136";
        ammo = "CUP_M136_M";
    };
	
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_grn_plaid";
    };
	
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	headgear = "rhsusf_bowman";
	facewear = "vn_b_bandana_a";
};