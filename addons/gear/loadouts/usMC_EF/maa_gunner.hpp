/*======================================
	Loadout for MAA Gunner (usMC_EF)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "launch_B_Titan_F";
        ammo = "Titan_AA";
    };
    class Backpack : Backpack
    {
        // List of items
        Titan_AT = 0;
		Titan_AA = 2;
    };
};