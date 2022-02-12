/*======================================
	Loadout for Crew (Russian)
======================================*/
class crew_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "rhs_weap_aks74u";
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
		classname[] = { "rhs_6b23_crew" , "rhs_6b23_digi_crew" , "rhs_6b23_ML_crew" };
        // List of items
        rhs_30Rnd_545x39_7N10_AK = 4;
        rhs_mag_rdg2_white = 1;
		rhs_mag_rdg2_whiteGreen = 1;
		rhs_mag_rdg2_whiteRed = 1;
        rhs_mag_rgo = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "rhs_tsh4_ess";
    facewear = "rhs_scarf";
};