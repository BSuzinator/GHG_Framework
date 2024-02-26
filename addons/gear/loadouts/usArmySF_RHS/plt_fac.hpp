/*======================================
	Loadout for FAC (usArmySF)
======================================*/
class plt_fac : squad_lead
{
    
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "rhs_mag_m713_Red";
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