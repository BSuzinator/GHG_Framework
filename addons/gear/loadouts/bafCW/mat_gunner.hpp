/*======================================
	Loadout for MAT Gunner (bafCW)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_maaws";
        ammo = "rhs_mag_maaws_HEAT";
        grenade = "rhs_mag_smaw_SR";
		class Scopes { CUP_optic_SMAW_Scope = "rhs_optic_maaws"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        // List of items
        rhs_mag_maaws_HEAT = 2;
        rhs_mag_smaw_SR = 4;
    };
};