/*======================================
	Loadout for MAA Gunner (nato_a3)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname[] = {"launch_B_Titan_F", "launch_B_Titan_tna_F", "launch_B_Titan_olive_F"};
        ammo = "Titan_AA";
    };
    class Backpack : Backpack
    {
        // List of items
        Titan_AT = 0;
		Titan_AA = 2;
    };
};