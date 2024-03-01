/*======================================
	Loadout for Squad Medics (taliban)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "LOP_ISTS_Sidor_Med" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};