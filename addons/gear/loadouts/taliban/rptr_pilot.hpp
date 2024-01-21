/*======================================
	Loadout for Fixed Wing Pilots (taliban)
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
		classname = "CUP_hgun_Colt1911";
        laser = "";
        ammo = "CUP_7Rnd_45ACP_1911";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "LOP_U_ISTS_Fatigue_14" };
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of items
        rhs_30Rnd_762x39mm = 0;
        CUP_HandGrenade_M67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		CUP_7Rnd_45ACP_1911 = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "H_PilotHelmetFighter_O";
    facewear = "G_Combat_lxWS";
};