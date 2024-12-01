/*======================================
	Loadout for Squad Leads (csat_a3_pacific)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_CTAR_GL_ghex_F";
        grenade = "1Rnd_HE_Grenade_shell";
    };
    
    class Vest : Vest
    {
        classname = "V_TacVest_oli";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
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

};