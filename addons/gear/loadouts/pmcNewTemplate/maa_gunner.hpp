/*======================================
	Loadout for MAA Gunner (pmc)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_fim92";
        ammo = "rhs_fim92_mag";
		class Scopes { rhs_acc_pgo7v3 = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
		rhs_rpg7_PG7VL_mag = 0; //AT
		rhs_rpg7_OG7V_mag = 0; //HE
		rhs_rpg7_TBG7V_mag = 0; //Thermo
		rhs_fim92_mag = 2;
    };
};