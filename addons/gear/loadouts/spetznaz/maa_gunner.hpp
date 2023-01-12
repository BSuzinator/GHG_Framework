/*======================================
	Loadout for MAA Gunner (russian)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_igla";
        ammo = "rhs_mag_9k38_rocket";
		class Scopes { rhs_weap_optic_smaw = ""; };
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