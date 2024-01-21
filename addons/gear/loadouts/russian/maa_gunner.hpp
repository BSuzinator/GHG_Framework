/*======================================
	Loadout for MAA Gunner (russian)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_igla";
        ammo = "CUP_Igla_M";
		class Scopes { rhs_weap_optic_smaw = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
        CUP_PG7VL_M = 0; //AT
		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		CUP_Igla_M = 2;
    };
};