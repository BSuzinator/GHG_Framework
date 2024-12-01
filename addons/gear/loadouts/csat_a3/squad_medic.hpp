/*======================================
	Loadout for Squad Medics (csat_a3)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "V_TacVest_khk", "V_TacVest_blk" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        HandGrenade = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_ocamo", "B_Carryall_oucamo" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};