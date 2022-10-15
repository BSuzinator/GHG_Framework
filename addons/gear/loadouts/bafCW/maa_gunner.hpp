/*======================================
	Loadout for MAA Gunner (bafCW)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "UK3CB_Blowpipe";
        ammo = "UK3CB_Blowpipe_Round";
		class Scopes { rhs_weap_optic_smaw = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
        rhs_mag_smaw_HEAA = 0;
		UK3CB_Blowpipe_Round = 2;
    };
};