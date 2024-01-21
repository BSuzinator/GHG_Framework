/*======================================
	Loadout for Squad Rifleman(AT) (serbian)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_M72A6";
        ammo = "CUP_M72A6_M";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};