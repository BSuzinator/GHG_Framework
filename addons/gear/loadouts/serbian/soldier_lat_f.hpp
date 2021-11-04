/*======================================
	Loadout for Rifleman(AT) (serbian)
======================================*/
class soldier_lat_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_M80";
        ammo = "rhs_m80_mag";
    };
};