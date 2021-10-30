/*======================================
	Loadout for Assistant MAT (usArmySF)
======================================*/
class soldier_aat_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_oli", "B_Carryall_oli", "B_Carryall_cbr" };
        // List of items
        rhs_mag_smaw_HEAA = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};