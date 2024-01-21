/*======================================
	Loadout for Crew (pmc)
======================================*/
class lynx_crew : squad_rifleman
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
        classname = "U_C_WorkerCoveralls";
    };
	class Vest : Vest
    {
        classname = "CUP_V_PMC_CIRAS_Khaki_Veh";
        CUP_20Rnd_762x51_B_SCAR = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };

	headgear = "rhsusf_cvc_helmet";
    facewear = "rhsusf_shemagh2_tan";

	headgear = "CUP_H_CVC";
    facewear = "CUP_FR_NeckScarf2";

};