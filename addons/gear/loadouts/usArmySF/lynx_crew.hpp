/*======================================
	Loadout for Crew (usArmySF)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo[] = { "CUP_optic_Eotech553_OD", "CUP_optic_Eotech553_Black", "CUP_optic_Eotech533" };
        };
    };
	
	class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Rifleman_M81";
        // List of items
        CUP_30Rnd_556x45_Stanag = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP" };
    facewear[] = { "CUP_G_ESS_RGR", "CUP_G_ESS_KHK_Scarf_Face_Tan", "CUP_G_ESS_KHK_Scarf_Tan" };

};