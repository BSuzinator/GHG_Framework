/*======================================
	Loadout for MAA Gunner (bafCW)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "UK3CB_Blowpipe";
        ammo = "UK3CB_Blowpipe_Round";
		class Scopes { CUP_optic_SMAW_Scope = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
        CUP_SMAW_HEAA_M = 0;
		UK3CB_Blowpipe_Round = 2;
    };
};