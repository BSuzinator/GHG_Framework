/*======================================
	Loadout for Squad Leads (gendamarieSwat)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_Famas_F1_Rail";

        class Scopes : Scopes
        {
            acog = "CUP_optic_ACOG_TA01B_RMR_Black";
        };
    };
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_m79_p";
        grenade = "CUP_1Rnd_HE_M203";
    };
    
    class Vest : Vest
    {
        classname = "V_TacVest_gen_F";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
        CUP_1Rnd_HE_M203 = 10;
        CUP_1Rnd_StarCluster_White_M203 = 5;
        CUP_FlareGreen_M203 = 2;
        CUP_FlareRed_M203 = 2;
        CUP_1Rnd_SmokeRed_M203 = 2;
        CUP_1Rnd_SmokeGreen_M203 = 2;
        CUP_1Rnd_Smoke_M203 = 4;
		GHG_spikeStripItem = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};