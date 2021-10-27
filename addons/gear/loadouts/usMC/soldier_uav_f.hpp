/*======================================
	Loadout for FAC (usMC)
======================================*/
class soldier_uav : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Backpack
    {
        ACRE_PRC117F = 1;
    };

    class Binoculars
    {
        name = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};