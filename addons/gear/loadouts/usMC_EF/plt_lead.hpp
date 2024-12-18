/*======================================
	Loadout for PLT Lead (usMC_EF)
======================================*/
class plt_lead : squad_rifleman
{
    
    class Vest : Vest
    {
		classname = "EF_V_AAV_TL_Coy";
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
};