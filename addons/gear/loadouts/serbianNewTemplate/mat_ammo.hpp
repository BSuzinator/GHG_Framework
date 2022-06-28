/*======================================
	Loadout for MAT Ammo Bearer (serbian)
======================================*/
class mat_ammo : squad_rifle
{
    
	
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
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