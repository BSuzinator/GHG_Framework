/*======================================
	Loadout for Rifleman(AT) (macv)
======================================*/
class soldier_lat_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "vn_m72";
        ammo = "vn_m72_mag";
    };
};