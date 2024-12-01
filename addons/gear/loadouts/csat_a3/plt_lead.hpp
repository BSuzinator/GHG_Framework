/*======================================
	Loadout for PLT Lead (csat_a3)
======================================*/
class plt_lead : squad_rifleman
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
    };
    
    class Vest : Vest
    {
		classname[] = { "V_TacVest_khk", "V_TacVest_blk" };
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "H_HelmetO_ocamo_headset", "H_HelmetO_oucamo_headset" };
};