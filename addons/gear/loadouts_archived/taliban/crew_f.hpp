/*======================================
	Loadout for Crew (Taliban)
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
        CUP_30Rnd_762x39_AK47_bakelite_M = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "CUP_H_TKI_Pakol_2_03";
    facewear = "G_Combat_lxWS";
};