/*======================================
	Loadout for Fixed Wing Pilots (russian)
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
		classname = "CUP_hgun_Makarov";
        laser = "";
        ammo = "CUP_8Rnd_9x18_Makarov_M";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "CUP_U_B_USArmy_PilotOverall";
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_C_Police_Holster";
        // List of items
        CUP_30Rnd_545x39_AK_M = 0;
        CUP_HandGrenade_RGO = 0;
        ACE_EntrenchingTool = 0;
        vn_rdg2_mag = 0;
		CUP_8Rnd_9x18_Makarov_M = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    

    headgear = "H_PilotHelmetFighter_O";
    facewear = "CUP_G_ESS_BLK";

};