/*======================================
	Loadout for MAT Gunner (gendamarieSwat)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_smaw";
        ammo = "rhs_mag_smaw_HEAA";
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
        rhs_mag_smaw_HEAA = 2;
		rhs_mag_smaw_SR = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};