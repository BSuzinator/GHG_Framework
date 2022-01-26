/*======================================
	Loadout for Rifleman(AT) (macv)
======================================*/
class soldier_lat_f : soldier_f
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "vn_m72";
        ammo = "vn_m72_mag";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};