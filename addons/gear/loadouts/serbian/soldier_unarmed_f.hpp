/*======================================
	Loadout for EWS Teletype (serbian)
======================================*/
class soldier_unarmed_f : soldier_lite_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
    };
};