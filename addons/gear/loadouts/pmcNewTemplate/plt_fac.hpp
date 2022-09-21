/*======================================
	Loadout for FAC (pmc)
======================================*/
class plt_fac : squad_lead
{
    
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "rhs_GRD40_Red";
    };
	
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
		rhs_VOG25 = 0;
        rhs_VG400P_white = 5;
        rhs_VG400P_green = 3;
        rhs_VG400P_red = 3;
        rhs_GRD40_Red = 4;
        rhs_GRD40_Green = 4;
        rhs_GRD40 = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};