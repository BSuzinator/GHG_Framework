/*======================================
	Loadout for Squad Medics (usMC)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname = "rhsusf_spc_corpsman";
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy_medic";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};