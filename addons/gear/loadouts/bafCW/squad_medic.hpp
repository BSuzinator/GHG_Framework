/*======================================
	Loadout for Squad Medics (bafCW)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW", "UK3CB_BAF_V_PLCE_Webbing_DPMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_DDMW", "UK3CB_BAF_V_PLCE_Webbing_DDMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_PLCE_Webbing_Winter" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_DPMW_Rifleman_B", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_B", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};