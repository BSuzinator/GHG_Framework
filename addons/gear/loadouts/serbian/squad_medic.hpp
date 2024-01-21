/*======================================
	Loadout for Squad Medics (serbian)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        CUP_HandGrenade_M67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};