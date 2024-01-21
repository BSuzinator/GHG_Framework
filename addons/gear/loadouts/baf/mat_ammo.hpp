/*======================================
	Loadout for MAT Ammo Bearer (baf)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Carryall_MTP", "UK3CB_BAF_B_Carryall_Arctic", "UK3CB_BAF_B_Carryall_DPMW", "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_DDPM" };
        // List of items
        CUP_SMAW_HEAA_M = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};