/*======================================
	Loadout for Squad Medics (usMC)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname = "CUP_V_B_Eagle_SPC_Corpsman";
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_USMC_MOLLE";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};