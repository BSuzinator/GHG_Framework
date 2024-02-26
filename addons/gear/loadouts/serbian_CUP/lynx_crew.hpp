/*======================================
	Loadout for Crew (serbian)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "rhs_weap_g36c";
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt = "CUP_optic_Eotech553_Black";
        };
    };
	
	class Vest : Vest
    {
        classname = "rhssaf_vest_md99_woodland";
        // List of items
        CUP_30Rnd_556x45_G36 = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP" };
    facewear[] = { "CUP_G_Scarf_Face_Grn" };
};