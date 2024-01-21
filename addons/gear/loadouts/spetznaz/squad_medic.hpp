/*======================================
	Loadout for Squad Medics (russian)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_RGO = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_SLA_Medicbag";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};