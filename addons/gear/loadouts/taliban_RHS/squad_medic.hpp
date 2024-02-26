/*======================================
	Loadout for Squad Medics (taliban)
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
        classname[] = { "LOP_ISTS_Sidor_Med" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};