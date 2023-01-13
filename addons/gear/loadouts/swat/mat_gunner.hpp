/*======================================
	Loadout for MAT Gunner (swat)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_smaw_green";
        ammo = "rhs_mag_smaw_HEAA";
    };
	
	class Uniform : Uniform
	{
		classname = "UK3CB_LNM_B_U_Shirt_Pants_14";
	};
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
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
	headgear = "H_Watchcap_cbr";
	facewear = "G_Aviator";
};