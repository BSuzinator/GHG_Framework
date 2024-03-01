/*======================================
	Loadout for Assistant MAT (spetznaz)
======================================*/
class soldier_aat_f : soldier_f
{
    
	
    class Backpack : Backpack
    {
        classname[] = {"UK3CB_BAF_B_Carryall_TAN","UK3CB_BAF_B_Carryall_DPMT","UK3CB_BAF_B_Carryall_Arctic","B_Carryall_oucamo"};
        // List of items
        CUP_PG7VL_M = 2; //AT
		CUP_OG7_M = 2; //HE
		CUP_TBG7V_M = 1; //Thermo
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};