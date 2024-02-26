/*======================================
	Loadout for MAT Ammo Bearer (pmc)
======================================*/
class mat_ammo : squad_rifleman
{
    class Uniform : Uniform
	{
		classname = "CUP_U_C_Citizen_02";
	};
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_desert_lxWS";
        // List of items
        CUP_SMAW_HEAA_M = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	headgear = "CUP_H_FR_BandanaGreen";
	facewear = "G_Aviator";
};