/*======================================
	Loadout for Crew (gendamarieSwat)
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
            holo_alt = "CUP_optic_Eotech553_Black";
        };
    };
	
	class Vest : Vest
    {
        // List of items
        CUP_25Rnd_556x45_Famas = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear = "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP";
    facewear = "CUP_G_Scarf_Face_Grn";
};