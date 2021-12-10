/*======================================
	Loadout for Fixed Wing Pilots (Boko Haram)
======================================*/
class pilot_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
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
		classname = "rhsusf_weap_m1911a1";
        laser = "";
        ammo = "rhsusf_mag_7x45acp_MHP";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "U_lxWS_SFIA_pilot_O";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of items
        rhs_30Rnd_545x39_7N6_AK = 0;
        rhs_mag_m67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		rhsusf_mag_7x45acp_MHP = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "H_PilotHelmetFighter_O";
    facewear = "G_Combat_lxWS";
};