/*======================================
	Loadout for Crew (pmc)
======================================*/
class lynx_crew : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			holo_alt = "CUP_optic_Eotech553_Black";
            red_dot_magnified = "";
            holo_magnified = "";
        };
    };
	class Uniform : Uniform
    {
        classname = "U_C_WorkerCoveralls";
    };
	class Vest : Vest
    {
        classname = "rhsusf_plateframe_light";
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "CUP_H_CVC";
    facewear = "rhsusf_shemagh2_tan";
};