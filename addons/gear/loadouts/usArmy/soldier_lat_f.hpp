/*======================================
	Loadout for Rifleman(AT) (usArmy)
======================================*/
class soldier_lat_f : soldier_f
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_M136";
        ammo = "rhs_m136_mag";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};