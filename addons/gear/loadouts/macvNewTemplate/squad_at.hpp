/*======================================
	Loadout for Squad Rifleman(AT) (macv)
======================================*/
class squad_at : squad_rifle
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