/*======================================
	Loadout for Fixed Wing Pilots (pmc)
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
		muzzle = "";
        laser = "";
        ammo = "CUP_7Rnd_45ACP_1911";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "U_B_PilotCoveralls";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of item overrides

        CUP_20Rnd_762x51_B_SCAR = 0;
        CUP_HandGrenade_M67 = 0;

        CUP_20Rnd_762x51_B_SCAR = 0;
        CUP_HandGrenade_M67 = 0;

        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
        // List of items
		CUP_7Rnd_45ACP_1911 = 3;
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