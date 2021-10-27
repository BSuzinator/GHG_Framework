/*======================================
	Loadout for FAC (usMC)
======================================*/
class soldier_uav : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};