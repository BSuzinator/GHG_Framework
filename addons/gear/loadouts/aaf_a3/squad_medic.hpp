/*======================================
	Loadout for Squad Medics (aaf_a3)
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
        classname = "B_FieldPack_oli";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};