/*======================================
	Loadout for MAT Ammo Bearer (gendamarieSwat)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
        CUP_SMAW_HEAA_M = 2;
		rhs_mag_smaw_SR = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};