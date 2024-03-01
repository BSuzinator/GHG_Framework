/*======================================
	Loadout for Rifleman(AT) (serbian)
======================================*/
class soldier_lat_f : soldier_f
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_M80";
        ammo = "CUP_M72A6_M";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};