/*======================================
	Loadout for MAT Gunner (gendamarieSwat)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_smaw";
        ammo = "CUP_SMAW_HEAA_M";
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
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