/*======================================
	Loadout for Crew (russian)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "rhs_acc_pkas";
            varient_red_dot = "rhs_acc_1p63";
            reflex = "rhs_acc_okp7_dovetail";
            magnified = "";
        };
    };
	
	class Vest : Vest
    {
        // List of items
        rhs_30Rnd_545x39_7N10_AK = 4;
        rhs_mag_rdg2_white = 1;
		rhssaf_mag_brd_m83_green = 1;
		rhssaf_mag_brd_m83_red = 1;
        rhs_mag_rgo = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "rhs_tsh4_ess";
    facewear = "rhs_scarf";
};