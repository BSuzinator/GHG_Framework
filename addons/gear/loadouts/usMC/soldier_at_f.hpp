/*======================================
	Loadout for MAT Gunner (usMC)
======================================*/
class soldier_at_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_smaw_green";
        ammo = "rhs_mag_smaw_HEAA";
		class Scopes { rhs_weap_optic_smaw = "rhs_weap_optic_smaw"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "B_Carryall_cbr";
        // List of items
        rhs_mag_smaw_HEAA = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};