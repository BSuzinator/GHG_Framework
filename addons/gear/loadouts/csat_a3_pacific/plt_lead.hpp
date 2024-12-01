/*======================================
	Loadout for PLT Lead (csat_a3_pacific)
======================================*/
class plt_lead : squad_rifleman
{

    
    class Vest : Vest
    {
		classname = "V_TacVest_oli";
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear = "H_HelmetLeaderO_ghex_F";
};