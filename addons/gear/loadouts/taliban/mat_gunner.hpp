/*======================================
	Loadout for MAT Gunner (taliban)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_RPG7V";
        ammo = "rhs_rpg7_PG7VR_mag";
		class Scopes { CUP_optic_PGO7V3 = "CUP_optic_PGO7V3"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_cbr" };
        // List of items
        CUP_PG7VL_M = 2; //AT
		CUP_OG7_M = 2; //HE
		CUP_TBG7V_M = 1; //Thermo
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};