/*======================================
	Loadout for Crew (Boko Haram)
======================================*/
class crew_f : soldier_f
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
        rhs_30Rnd_545x39_7N6_AK = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "H_Construction_earprot_orange_F";
    facewear = "G_Combat_lxWS";
};