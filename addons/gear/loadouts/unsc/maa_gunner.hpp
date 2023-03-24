/*======================================
	Loadout for MAA Gunner (unsc)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "OPTRE_M41_SSR";
        ammo = "OPTRE_M41_Twin_HEAT_Thermal";
    };
    class Backpack : Backpack
    {
        // List of items
        OPTRE_M41_Twin_HEAT = 0;
		OPTRE_M41_Twin_HEAT_Thermal = 2;
    };
};