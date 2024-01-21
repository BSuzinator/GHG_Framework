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
        rhs_rpg7_PG7VL_mag = 2; //AT
		rhs_rpg7_OG7V_mag = 2; //HE
		rhs_rpg7_TBG7V_mag = 1; //Thermo
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};