/*======================================
	Loadout for MAT Ammo Bearer (Snow Tigers)
======================================*/
class mat_ammo : squad_rifleman
{
    class Uniform : Uniform
	{

	};
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_desert_lxWS";
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