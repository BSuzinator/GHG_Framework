/*======================================
	Loadout for Squad Medics (russian)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = { "rhs_6b23_medic", "rhs_6b23_digi_medic", "rhs_6b23_ML_medic" };
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        rhs_mag_rgo = 1;
        // List of items
        SmokeShellRed = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "rhs_assault_umbts_medic";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};