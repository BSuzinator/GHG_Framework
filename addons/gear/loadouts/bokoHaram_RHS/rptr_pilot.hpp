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
		classname = "rhs_weap_pya";
        laser = "";
        ammo = "rhs_mag_9x19_17";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "UK3CB_KDF_B_U_J_Pilot_Uniform_01_VSR" };
    };
    
    class Vest : Vest
    {
        classname = "V_BandollierB_cbr";
        // List of items
        rhs_30Rnd_762x39mm = 0;
        rhs_mag_m67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		rhs_mag_9x19_17 = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };

};