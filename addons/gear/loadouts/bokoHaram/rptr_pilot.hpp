/*======================================
	Loadout for Fixed Wing Pilots (bokoHaram)
======================================*/
class rptr_pilot : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
        
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
			alt_holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "CUP_hgun_M17_Coyote";
        laser = "";
        ammo = "CUP_21Rnd_9x19_M17_Coyote";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_CZ_Pilot_WDL" };
    };
    
    class Vest : Vest
    {
        classname = "V_BandollierB_cbr";
        // List of items
        CUP_30Rnd_762x39_AK47_bakelite_M = 0;
        CUP_HandGrenade_M67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		CUP_21Rnd_9x19_M17_Coyote = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };

};