/*======================================
	Loadout for Squad Rifleman(AT) (usArmySF)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_M136";
        ammo = "CUP_M136_M";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};