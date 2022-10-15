/*======================================
	Loadout for Demo Defusal (pmc)
======================================*/
class demo_defusal : squad_rifleman
{
	
	class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Uniform : Uniform
    {
        classname = "LOP_U_UVF_Fatigue_COY_OSW";
    };
	
	class Vest : Vest
    {
        classname = "V_EOD_olive_F";
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname = "UK3CB_CW_US_B_LATE_B_RIF_04";
        // List of items
    };
	facewear = "vn_b_bandana_a";
    headgear = "rhs_altyn_visordown";
};