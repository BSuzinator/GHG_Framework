/*======================================
	Loadout for Rifleman(AT) (Russian)
======================================*/
class soldier_lat_f : soldier_f
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg26";
        ammo = "rhs_rpg26_mag";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};