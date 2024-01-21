/*======================================
	Loadout for MAA Gunner (pmc)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {

        classname = "rhs_weap_fim92";
        ammo = "CUP_Stinger_M";
		class Scopes { rhs_acc_pgo7v3 = ""; };

        classname = "CUP_launch_FIM92Stinger";
        ammo = "CUP_Stinger_M";
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
		CUP_M136_M = 0; //AT

		rhs_rpg7_OG7V_mag = 0; //HE
		rhs_rpg7_TBG7V_mag = 0; //Thermo
		CUP_Stinger_M = 2;

		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		CUP_Stinger_M = 2;

    };
	facewear = "G_Aviator";
	headgear = "CUP_H_RUS_Altyn_khaki";
};