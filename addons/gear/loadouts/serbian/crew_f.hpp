/*======================================
	Loadout for Crew (serbian)
======================================*/
class crew_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "rhs_weap_g36c";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhssaf_30rnd_556x45_EPR_G36";
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552" };
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "rhssaf_vest_md99_woodland" };
        // List of items
        rhssaf_30rnd_556x45_EPR_G36 = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "rhsusf_cvc_green_helmet" };
    facewear[] = { "rhsusf_shemagh2_gogg_grn" };
};