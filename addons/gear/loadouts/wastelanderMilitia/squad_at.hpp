/*======================================
	Loadout for Squad Rifleman(AT) (Wastelanders)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "";
        ammo = "";
    };
	
	class Uniform : Uniform
    {
        classname = "";
    };
	
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	headgear = "";
	facewear = "";
};