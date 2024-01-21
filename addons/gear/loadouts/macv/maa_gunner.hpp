/*======================================
	Loadout for MAA Gunner (macv)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_fim92";
        ammo = "CUP_Stinger_M";
		class Scopes { rhs_weap_optic_smaw = ""; };
    };
    class Backpack : Backpack
    {
        // List of items
        CUP_SMAW_HEAA_M = 0;
		CUP_Stinger_M = 2;
    };
};