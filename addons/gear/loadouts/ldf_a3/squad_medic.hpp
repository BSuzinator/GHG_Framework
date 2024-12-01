/*======================================
	Loadout for Squad Medics (ldf_a3)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
		classname = "V_CarrierRigKBT_01_heavy_EAF_F";
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        HandGrenade = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "B_FieldPack_green_F";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};