/*======================================
	Loadout for MAT Gunner (bafCW)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_maaws";
        ammo = "rhs_mag_maaws_HEAT";
        grenade = "CUP_SMAW_Spotting";
		class Scopes { CUP_optic_SMAW_Scope = "rhs_optic_maaws"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        // List of items
        rhs_mag_maaws_HEAT = 2;
        CUP_SMAW_Spotting = 4;
    };
};