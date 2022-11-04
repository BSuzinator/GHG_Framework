/*======================================
	Loadout for Crew (cbrn)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "arifle_MXC_Black_F", "arifle_MXC_khk_F", "arifle_MXC_Black_F" };
        laser = "ace_acc_pointer_green";
        ammo = "30Rnd_65x39_caseless_black_mag_Tracer";
        
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
			alt_holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt = "";
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "V_TacVest_blk", "V_TacVest_oli", "V_TacVest_gen_F"};
        // List of items
        30Rnd_65x39_caseless_black_mag_Tracer = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        HandGrenade = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = {"lxWS_H_HelmetCrew_I", "lxWS_H_HelmetCrew_I", "lxWS_H_HelmetCrew_I" };
};