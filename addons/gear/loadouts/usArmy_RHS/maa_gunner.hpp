/*======================================
	Loadout for MAA Gunner (usArmy)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_fim92";
        ammo = "rhs_fim92_mag";
		class Scopes { rhs_weap_optic_smaw = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
        rhs_mag_smaw_HEAA = 0;
		rhs_fim92_mag = 2;
    };
};