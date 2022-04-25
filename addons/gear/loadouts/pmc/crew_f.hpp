/*======================================
	Loadout for Vehicle Crew (pmc)
======================================*/
class crew_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			holo_alt = "rhsusf_acc_eotech_552";
            red_dot_magnified = "";
            holo_magnified = "";
        };
    };
	
    class Uniform : Uniform
    {
        ACE_microDAGR = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_plateframe_light";
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        rhs_mag_m67 = 1;
        ACE_EntrenchingTool = 0;
    };
    
    headgear = "rhsusf_cvc_helmet";
    facewear = "rhsusf_shemagh2_tan";
    
    class Binoculars : Binoculars
    {
        classname = "rhsusf_bino_m24_ARD";
    };
};