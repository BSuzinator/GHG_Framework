/*======================================
	Loadout for Squad Medics (baf)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_Osprey_Medic_D", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_Osprey_DPMW5", "UK3CB_BAF_V_Osprey_DPMT5", "UK3CB_BAF_V_Osprey_DDPM5" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Medic_L_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A_medic" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};