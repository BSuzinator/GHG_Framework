/*======================================
	Loadout for MAT Ammo Bearer (gendamarieSwat)
======================================*/
class mat_ammo : squad_rifleman
{
    
	
    class Backpack : Backpack
    {
        classname = "UK3CB_CW_US_B_LATE_B_RIF_04";
        // List of items
        rhs_mag_smaw_HEAA = 2;
		rhs_mag_smaw_SR = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};