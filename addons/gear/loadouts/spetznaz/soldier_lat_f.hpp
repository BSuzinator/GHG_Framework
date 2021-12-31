/*======================================
	Loadout for Rifleman(AT) (spetznaz)
======================================*/
class soldier_lat_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg26";
        ammo = "rhs_rpg26_mag";
    };
};