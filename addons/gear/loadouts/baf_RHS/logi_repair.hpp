/*======================================
	Loadout for Repair Specialist (baf)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_Osprey_Rifleman_F", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_Osprey_DPMW4", "UK3CB_BAF_V_Osprey_DPMT4", "UK3CB_BAF_V_Osprey_DDPM4" };
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A" };
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
};