/*======================================
	Loadout for MAT Ammo Bearer (usArmy)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_oli", "B_Carryall_mcamo", "B_Carryall_mcamo", "B_Carryall_cbr", "B_Carryall_cbr" };
        // List of items
        CUP_SMAW_HEAA_M = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};