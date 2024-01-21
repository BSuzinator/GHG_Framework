/*======================================
	Loadout for Fixed Wing Pilots (bafCW)
======================================*/
class rptr_pilot : squad_rifle
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L1A1_Wood";
        laser = "";
        ammo = "UK3CB_BAF_762_20Rnd";
        
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
		classname = "UK3CB_BAF_L9A1";
        laser = "";
        ammo = "UK3CB_BAF_9_13Rnd";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "UK3CB_BAF_U_HeliPilotCoveralls_RAF";
    };
    
    class Vest : Vest
    {
        classname = "UK3CB_BAF_V_Pilot_DPMW";
        // List of items
        UK3CB_BAF_762_20Rnd = 2;
        CUP_HandGrenade_M67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		UK3CB_BAF_9_13Rnd = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    

    headgear = "RHS_jetpilot_usaf";
    facewear = "rhsusf_oakley_goggles_clr";

    headgear = "H_PilotHelmetFighter_B";
    facewear = "CUP_G_ESS_BLK";

};