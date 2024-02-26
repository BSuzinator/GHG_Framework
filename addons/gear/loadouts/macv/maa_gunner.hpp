/*======================================
	Loadout for MAA Gunner (macv)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_FIM92Stinger";
        ammo = "CUP_Stinger_M";
		class Scopes { CUP_optic_SMAW_Scope = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
        CUP_SMAW_HEAA_M = 0;
		CUP_Stinger_M = 2;
    };
};