/*======================================
	Loadout for MAA Gunner (bokoHaram)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_igla";
        ammo = "rhs_mag_9k38_rocket";
		class Scopes {  };
    };
    class Backpack : Backpack
    {
        // List of items
		rhs_rpg7_PG7VL_mag = 0; //AT
		rhs_rpg7_OG7V_mag = 0; //HE
		rhs_rpg7_TBG7V_mag = 0; //Thermo
		rhs_mag_9k38_rocket = 2;
    };
};