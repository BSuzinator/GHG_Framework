/*======================================
	Loadout for Squad Medics (gendamarieSwat)
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
        classname = "CUP_B_USPack_Black";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};