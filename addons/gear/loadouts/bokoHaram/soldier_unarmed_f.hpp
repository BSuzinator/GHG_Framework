/*======================================
	Loadout for EWS Teletype (Boko Haram)
======================================*/
class soldier_unarmed_f : soldier_lite_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_rgr";
    };
};