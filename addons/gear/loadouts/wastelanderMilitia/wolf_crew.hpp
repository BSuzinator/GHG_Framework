/*======================================
	Loadout for Farmer (Wastelanders)
======================================*/
class wolf_crew : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_SKS";
        laser = "";
        ammo = "CUP_10Rnd_762x39_SKS_M";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "CUP_U_C_Pilot_01";
		CUP_10Rnd_762x39_SKS_M = 6;
    };
	headgear = "";
};