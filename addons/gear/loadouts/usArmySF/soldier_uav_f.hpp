/*======================================
	Loadout for FAC (usArmySF)
======================================*/
class soldier_uav_f : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "rhs_mag_m713_Red";
    };
	
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
		rhs_mag_M441_HE = 0;
        rhs_mag_M585_white = 5;
        rhs_mag_m661_green = 3;
        rhs_mag_m662_red = 3;
        rhs_mag_m713_Red = 4;
        rhs_mag_m715_Green = 4;
        rhs_mag_m714_White = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};