/*======================================
	Loadout for Fixed Wing Pilots (swat)
======================================*/
class rptr_pilot : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m4a1_blockII_bk";
        laser = "rhsusf_acc_anpeq15side_bk";
        ammo = "UK3CB_AUG_30Rnd_556x45_Magazine";
		muzzle = "rhsusf_acc_nt4_black";
		bipod = "rhsusf_acc_grip2";
        
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
		classname = "rhsusf_weap_glock17g4";
		muzzle = "rhsusf_acc_omega9k";
        laser = "acc_flashlight_pistol";
        ammo = "rhsusf_mag_17Rnd_9x19_FMJ";
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
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
        rhs_mag_m67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
        // List of items
		rhsusf_mag_17Rnd_9x19_FMJ = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};