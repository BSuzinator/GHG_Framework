/*======================================
	Loadout for MMG Ammo Bearer (baf)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;

        CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M = 5;

        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M = 5;

    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};