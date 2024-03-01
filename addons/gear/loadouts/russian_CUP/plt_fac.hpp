/*======================================
	Loadout for FAC (russian)
======================================*/
class plt_fac : squad_lead
{
    
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "CUP_1Rnd_SMOKE_GP25_M_Red";
    };
	
	class Vest : Vest
	{

	};
	
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
		CUP_1Rnd_HE_GP25_M = 0;
        CUP_IlumFlareWhite_GP25_M = 5;
        CUP_IlumFlareGreen_GP25_M= 3;
        CUP_IlumFlareRed_GP25_M = 3;
        CUP_1Rnd_SMOKE_GP25_M_Red = 4;
        CUP_1Rnd_SMOKE_GP25_M_Green = 4;
        CUP_1Rnd_SMOKE_GP25_M = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};