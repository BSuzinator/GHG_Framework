/*======================================
	Loadout for Fixed Wing Pilots (ldf_a3)
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
            red_dot_red_dot_magnified = "";
            holo_red_dot_magnified = "";
            holo_alt_camo = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_ACPC2_F";
        laser = "";
        ammo = "9Rnd_45ACP_Mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "U_O_PilotCoveralls";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of items
        30Rnd_65x39_caseless_msbs_mag = 0;
        HandGrenade = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		9Rnd_45ACP_Mag = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "H_PilotHelmetFighter_I";
    facewear = "G_Lowprofile";
};