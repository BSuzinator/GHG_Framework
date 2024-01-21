/*======================================
	Loadout for FAC (bokoHaram)
======================================*/
class plt_fac : squad_lead
{
    
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "CUP_FlareRed_GP25_M";
    };
	
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
		CUP_1Rnd_HE_GP25_M = 0;
        CUP_1Rnd_SMOKE_GP25_M = 5;
        CUP_1Rnd_SmokeGreen_GP25_M = 3;
        CUP_1Rnd_SmokeRed_GP25_M = 3;
        CUP_FlareRed_GP25_M = 4;
        CUP_FlareGreen_GP25_M = 4;
        CUP_FlareWhite_GP25_M = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};