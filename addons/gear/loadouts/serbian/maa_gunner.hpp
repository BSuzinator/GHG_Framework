/*======================================
	Loadout for MAA Gunner (serbian)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_fim92";

        ammo = "CUP_Stinger_M";
		class Scopes { rhs_acc_pgo7v3 = ""; };

        ammo = "CUP_Stinger_M";
		class Scopes { CUP_optic_PGO7V3 = ""; };

    };
    class Backpack : Backpack
    {
        // List of items

		rhs_rpg7_PG7VL_mag = 0; //AT
		rhs_rpg7_OG7V_mag = 0; //HE
		rhs_rpg7_TBG7V_mag = 0; //Thermo
		CUP_Stinger_M = 2;

		CUP_PG7VL_M = 0; //AT
		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		CUP_Stinger_M = 2;

    };
};