/*======================================
	Loadout for Assistant MAT (Boko Haram)
======================================*/
class soldier_aat_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_oli";
        // List of items
        rhs_rpg7_PG7VL_mag = 2; //AT
		rhs_rpg7_OG7V_mag = 2; //HE
		rhs_rpg7_TBG7V_mag = 1; //Thermo
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};