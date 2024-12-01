/*======================================
	Loadout for Squad Medics (csat_a3_pacific)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        HandGrenade = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};