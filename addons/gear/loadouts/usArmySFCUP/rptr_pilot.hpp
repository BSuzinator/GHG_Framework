/*======================================
	Loadout for Fixed Wing Pilots (usArmySF)
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
		classname = "CUP_hgun_Glock17_blk";
        muzzle = "muzzle_snds_L";
		laser = "CUP_acc_Glock17_Flashlight";
        ammo = "CUP_17Rnd_9x19_glock17";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "U_B_PilotCoveralls";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of items
        CUP_30Rnd_556x45_Stanag = 0;
        CUP_HandGrenade_M67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		CUP_17Rnd_9x19_glock17 = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "H_PilotHelmetFighter_B";
    facewear[] = { "CUP_G_ESS_RGR", "CUP_G_ESS_RGR", "CUP_G_ESS_KHK_Scarf_Tan" };
};