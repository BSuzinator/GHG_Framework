/*======================================
	Loadout for Squad Medics (russian)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname = "CUP_V_RUS_6B3_2";
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_RGO = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_GER_Medic_Flecktarn";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};