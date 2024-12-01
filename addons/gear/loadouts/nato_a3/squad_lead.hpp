/*======================================
	Loadout for Squad Leads (nato_a3)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "arifle_MX_GL_F", "arifle_MX_GL_khk_F", "arifle_MX_GL_Black_F" };
        grenade = "1Rnd_HE_Grenade_shell";

    };
    
    class Vest : Vest
    {
        classname[] = {"V_PlateCarrierGL_rgr", "V_PlateCarrierGL_tna_F", "V_PlateCarrierGL_wdl" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_rgr", "B_AssaultPack_tna_F", "B_AssaultPack_wdl_F" };
        // List of items
        1Rnd_HE_Grenade_shell = 10;
        1Rnd_Smoke_Grenade_shell = 5;
        1Rnd_SmokeGreen_Grenade_shell = 2;
        1Rnd_SmokeRed_Grenade_shell = 2;
        UGL_FlareRed_F = 2;
        UGL_FlareGreen_F = 2;
        UGL_FlareWhite_F = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "H_HelmetSpecB_snakeskin", "H_HelmetB_Enh_tna_F", "H_HelmetSpecB_wdl" };
};