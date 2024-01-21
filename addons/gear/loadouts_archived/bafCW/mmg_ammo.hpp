/*======================================
	Loadout for MMG Ammo Bearer (bafCW)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        UK3CB_BAF_762_200Rnd = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};