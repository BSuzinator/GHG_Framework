/*======================================
	Loadout for Squad Leads (usMC_EF)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "ef_arifle_mxar_gl_coy";
        grenade = "1Rnd_HE_Grenade_shell";

    };
    
    class Vest : Vest
    {
        classname = "EF_V_AAV_TL_Coy";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "EF_B_AssaultPack_coy";
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
	
    headgear = "EF_H_MCH_FullCamo_Coy";
};