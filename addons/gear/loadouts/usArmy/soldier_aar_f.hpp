/*======================================
	Loadout for Assistant Autorifleman (usArmy)
======================================*/
class soldier_arr_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Backpack : Backpack
    {
        classname[] = { "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ucp", "rhsusf_assault_eagleaiii_ucp" };
        // List of items
        ACE_SpareBarrel = 1;
        rhsusf_200Rnd_556x45_soft_pouch = 3;
    };
};