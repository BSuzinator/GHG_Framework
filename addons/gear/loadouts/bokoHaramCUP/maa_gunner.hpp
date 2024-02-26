/*======================================
	Loadout for MAA Gunner (bokoHaram)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_TBG7V_M";
        ammo = "CUP_Igla_M";
		class Scopes {  };
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