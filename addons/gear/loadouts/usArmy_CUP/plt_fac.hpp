/*======================================
	Loadout for FAC (usArmy)
======================================*/
class plt_fac : squad_lead
{
    
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "CUP_1Rnd_SmokeRed_M203";
    };
	
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
		CUP_1Rnd_HE_M203 = 0;
        CUP_1Rnd_StarCluster_White_M203 = 5;
        CUP_FlareGreen_M203 = 3;
        CUP_FlareRed_M203 = 3;
        CUP_1Rnd_SmokeRed_M203 = 4;
        CUP_1Rnd_SmokeGreen_M203 = 4;
        CUP_1Rnd_Smoke_M203 = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};