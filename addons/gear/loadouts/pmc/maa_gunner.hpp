/*======================================
	Loadout for MAA Gunner (pmc)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_fim92";
        ammo = "rhs_fim92_mag";
		class Scopes { CUP_optic_PGO7V3 = ""; };
    };
	
	class Uniform : Uniform
	{
		classname = "U_I_C_Soldier_Para_4_F";
	};
	
    class Backpack : Backpack
    {
		classname = "B_Kitbag_desert_lxWS";
        // List of items
		rhs_m136_mag = 0; //AT
		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		rhs_fim92_mag = 2;
    };
	facewear = "G_Aviator";
	headgear = "rhs_altyn_novisor";
};