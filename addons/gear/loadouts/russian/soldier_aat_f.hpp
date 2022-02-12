/*======================================
	Loadout for Assistant MAT (Russian)
======================================*/
class soldier_aat_f : soldier_f
{
    
	
    class Backpack : Backpack
    {
        classname[] = {"B_Carryall_oli","B_Carryall_oli","B_Carryall_cbr"};
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