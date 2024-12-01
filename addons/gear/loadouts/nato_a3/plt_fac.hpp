/*======================================
	Loadout for FAC (nato_a3)
======================================*/
class plt_fac : squad_lead
{
    
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "UGL_FlareRed_F";
    };
	
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
		1Rnd_HE_Grenade_shell = 0;
        1Rnd_Smoke_Grenade_shell = 5;
        1Rnd_SmokeGreen_Grenade_shell = 3;
        1Rnd_SmokeRed_Grenade_shell = 3;
        UGL_FlareRed_F = 4;
        UGL_FlareGreen_F = 4;
        UGL_FlareWhite_F = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};