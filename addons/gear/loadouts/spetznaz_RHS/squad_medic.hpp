/*======================================
	Loadout for Squad Medics (russian)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
		ACE_EntrenchingTool = 0;
        rhs_mag_rgo = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "rhs_medic_bag";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};