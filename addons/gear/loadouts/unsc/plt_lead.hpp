/*======================================
	Loadout for PLT Lead (unsc)
======================================*/
class plt_lead : squad_rifleman
{
    

    
    class Vest : Vest
    {
		classname [] = {"OPTRE_UNSC_M52A_Armor_TL_WDL", "OPTRE_UNSC_M52A_Armor_TL_SNO"};
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "OPTRE_Binoculars";
    };

};