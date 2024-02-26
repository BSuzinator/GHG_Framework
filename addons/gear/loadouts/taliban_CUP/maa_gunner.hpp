/*======================================
	Loadout for MAA Gunner (taliban)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_FIM92Stinger";
        ammo = "CUP_Stinger_M";
		class Scopes { CUP_optic_PGO7V3 = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
		CUP_PG7VL_M = 0; //AT
		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		CUP_Stinger_M = 2;

    };
};