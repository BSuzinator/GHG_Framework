/*======================================
	Loadout for Squad Rifleman(AT) (usMC_EF)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "launch_NLAW_F";
        ammo = "";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};