/*======================================
	Loadout for FAC (unsc)
======================================*/
class plt_fac : squad_lead
{
    
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        grenade = "OPTRE_1Rnd_SmokeRed_Grenade_shell";
    };
	
    class Backpack : Backpack
    {
        ACRE_PRC117F = 1;
		1Rnd_HE_Grenade_shell = 0;
        OPTRE_1Rnd_Smoke_Grenade_shell = 5;
        OPTRE_1Rnd_SmokeGreen_Grenade_shell = 3;
        OPTRE_1Rnd_SmokeRed_Grenade_shell = 3;
        ACE_40mm_Flare_red = 4;
        ACE_40mm_Flare_green = 4;
        ACE_40mm_Flare_white = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "OPTRE_Smartfinder";
    };
};