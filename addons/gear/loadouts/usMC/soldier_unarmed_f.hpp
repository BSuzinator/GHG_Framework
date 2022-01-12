/*======================================
	Loadout for EWS Teletype (usMC)
======================================*/
class soldier_unarmed_f : soldier_lite_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	class Backpack : Backpack
    {
        classname = "rhsusf_falconii_coy";
    };
};