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
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy_medic";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};