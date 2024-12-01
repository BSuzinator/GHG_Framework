/*======================================
	Loadout for MAA Gunner (csat_a3_pacific)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "launch_O_Titan_F";
        ammo = "Titan_AA";
    };
    class Backpack : Backpack
    {
        // List of items
        Titan_AT = 0;
		Titan_AA = 2;
    };
};