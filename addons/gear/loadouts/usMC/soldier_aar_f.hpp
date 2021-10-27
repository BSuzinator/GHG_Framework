/*======================================
	Loadout for Assistant Autorifleman (usMC)
======================================*/
class soldier_arr_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Backpack
    {
        name = "rhsusf_assault_eagleaiii_coy";
        // List of items
        ACE_SpareBarrel = 1;
        rhs_mag_100Rnd_556x45_M855_cmag = 5;
    };
};