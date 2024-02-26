/*======================================
	Loadout for Squad Medics (gendamarieSwat)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "UK3CB_CW_US_B_LATE_B_RIF_04";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};