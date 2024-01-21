/*======================================
	Loadout for Squad Rifleman(AT) (vnSwat)
======================================*/
class squad_at : squad_rifleman
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