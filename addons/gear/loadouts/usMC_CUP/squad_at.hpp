/*======================================
	Loadout for Squad Rifleman(AT) (usMC)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_M136";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};