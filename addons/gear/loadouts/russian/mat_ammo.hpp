/*======================================
	Loadout for MAT Ammo Bearer (russian)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_oli";
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