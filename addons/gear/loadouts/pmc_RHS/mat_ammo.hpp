/*======================================
	Loadout for MAT Ammo Bearer (pmc)
======================================*/
class mat_ammo : squad_rifleman
{
    class Uniform : Uniform
	{
		classname = "UK3CB_MEI_B_U_Pants_02";
	};
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_desert_lxWS";
        // List of items
        rhs_mag_smaw_HEAA = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	headgear = "rhssaf_bandana_smb";
	facewear = "G_Aviator";
};