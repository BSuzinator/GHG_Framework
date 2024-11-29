/*======================================
	Loadout for PLT Lead (nato_a3)
======================================*/
class plt_lead : squad_rifleman
{
    
    class Vest : Vest
    {
		classname[] = { "V_PlateCarrier1_rgr", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_wdl" };
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "H_HelmetSpecB_snakeskin", "H_HelmetB_Enh_tna_F", "H_HelmetSpecB_wdl" };
};