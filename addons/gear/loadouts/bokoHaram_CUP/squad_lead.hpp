/*======================================
	Loadout for Squad Leads (bokoHaram)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AKM_GL_Early";
        grenade = "CUP_1Rnd_HE_GP25_M";

    };
    
    class Vest : Vest
    {
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_AssaultPack_Coyote" };
        // List of items
        CUP_1Rnd_HE_GP25_M = 10;
        CUP_1Rnd_SMOKE_GP25_M = 5;
        CUP_1Rnd_SmokeGreen_GP25_M = 2;
        CUP_1Rnd_SmokeRed_GP25_M = 2;
        CUP_FlareRed_GP25_M = 2;
        CUP_FlareGreen_GP25_M = 2;
        CUP_FlareWhite_GP25_M = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};