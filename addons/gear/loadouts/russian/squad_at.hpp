/*======================================
	Loadout for Squad Rifleman(AT) (russian)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_RPG26";
        ammo = "CUP_RPG26_M";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};