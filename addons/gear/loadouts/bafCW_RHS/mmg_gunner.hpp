/*======================================
	Loadout for MMG Gunner (bafCW)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L7A2";
        ammo = "UK3CB_BAF_762_200Rnd";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "";
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW", "UK3CB_BAF_V_PLCE_Webbing_DPMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM", "UK3CB_BAF_V_PLCE_Webbing_DDPM", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_PLCE_Webbing_Winter" };
        // List of items
		rhs_mag_30Rnd_556x45_M855A1_Stanag = 0;
		UK3CB_BAF_762_200Rnd = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        // List of items
        UK3CB_BAF_762_200Rnd = 3;
    };
};