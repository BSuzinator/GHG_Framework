/*======================================
	Loadout for Squad Medics (bafCW)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        rhs_mag_m67 = 1;
        // List of items
        rhs_mag_m18_red = 2;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_DPMW_Rifleman_B", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_B", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B" };
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};