/*======================================
	Loadout for Assistant MAT (serbian)
======================================*/
class soldier_aat_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items
        rhs_rpg7_PG7VR_mag = 3;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};