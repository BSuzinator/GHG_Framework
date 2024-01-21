/*======================================
	Loadout for Squad Leads (Snow Tigers)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "arifle_Katiba_GL_F";
    };
    
	class Weapon_2 : Weapon_2 
	{ 

	};
	
	class Uniform : Uniform
    {

    };
	
    class Vest : Vest
    {
		ACRE_PRC152 = 1;
		ACE_MapTools = 1;
    };
    
    class Backpack : Backpack
    {
		classname = "IP_B_AssaultPack_SnowTiger";
		1Rnd_HE_Grenade_shell = 6;
		1Rnd_SmokeRed_Grenade_shell = 2;
		1Rnd_Smoke_Grenade_shell = 2;
		1Rnd_SmokeGreen_Grenade_shell = 2;
    };
	
	class Binoculars : Binoculars
    {
		classname = "Binocular";
    };

};