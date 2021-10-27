/*======================================
	Loadout for Rifleman(AT) (usMC)
======================================*/
class soldier_lat_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Weapon_3 // Launcher
    {
        name = "rhs_weap_M136";
        ammo = "rhs_m136_mag";
    };
};