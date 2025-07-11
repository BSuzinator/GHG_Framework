/*======================================
	Loadout for MAT Ammo Bearer (usMC_EF)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname = "EF_B_Carryall_coy";
        // List of items
        Titan_AT = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};