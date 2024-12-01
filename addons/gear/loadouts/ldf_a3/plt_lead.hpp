/*======================================
	Loadout for PLT Lead (ldf_a3)
======================================*/
class plt_lead : squad_rifleman
{

    
    class Vest : Vest
    {
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear = "H_HelmetHBK_headset_F";
};