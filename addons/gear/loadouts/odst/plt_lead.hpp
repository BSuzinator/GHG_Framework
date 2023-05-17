/*======================================
	Loadout for PLT Lead (odst)
======================================*/
class plt_lead : squad_rifleman
{
    

    
    class Vest : Vest
    {
		classname = "OPTRE_UNSC_M52D_Armor_Scout";
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