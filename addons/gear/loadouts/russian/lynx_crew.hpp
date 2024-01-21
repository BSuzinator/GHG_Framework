/*======================================
	Loadout for Crew (russian)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_1p63";
            varient_red_dot = "CUP_optic_1p63";
            reflex = "CUP_optic_OKP_7";
            magnified = "";
        };
    };
	
	class Vest : Vest
    {
        // List of items
        CUP_30Rnd_545x39_AK_M = 4;
        vn_rdg2_mag = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_RGO = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "rhs_tsh4_ess";
    facewear = "rhs_scarf";
};